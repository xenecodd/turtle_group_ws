from functools import partial
from math import atan2, sqrt
import random
import sys
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile
from turtle_interfaces.srv import TurtleFollow
from turtle_interfaces.msg import StringArray

class TFollowServer(Node):
    def __init__(self):
        super().__init__("TFollowServer")
        self.serv = self.create_service(TurtleFollow, "turtle_follow", self.handle_follow_turtle)
        self.goal_pose = Pose()
        self.current_leader_topic = None  # To store the current leader topic subscription
        self.received_turtle_names = []
        self.name_sub = self.create_subscription(StringArray, "turtle_names",self.name_callback, QoSProfile(depth=10))
        self.rate = self.create_rate(10)  # 10 Hz
        self.leader_name= None
        self.goal_publisher = self.create_publisher(Pose, "/goal_pose", QoSProfile(depth=10))
        self.goal_sub = self.create_subscription(Pose,"/goal_pose",self.goal_pose_callback,QoSProfile(depth=10))
        self.cmd_vel_publishers = []
        self.pose_subscribers = []

    def goal_pose_callback(self,goal):
        self.goal_pose = goal
    
    def create_publishers(self):
        for i in self.received_turtle_names:
            topic_name = f'/{i}/cmd_vel'
            publisher = self.create_publisher(Twist, topic_name, QoSProfile(depth=10))
            self.cmd_vel_publishers.append(publisher)
            self.get_logger().info(f'Created publisher for {topic_name}')
            
            
    def create_subscriptions(self):
        for i, turtle_name in enumerate(self.received_turtle_names):
            topic_name = f'/{turtle_name}/pose'
            subscription = self.create_subscription(Pose, topic_name, partial(self.follow_leader, turtle=i), QoSProfile(depth=10))
            self.pose_subscribers.append(subscription)
            self.get_logger().info(f'Created subscription for {topic_name}')
            
    def follow_leader(self,pose,turtle):
        
        vel_msg = Twist()
        vel_msg.linear.x = self.linear_vel(self.goal_pose,pose)
        vel_msg.linear.y = float(0)
        vel_msg.linear.z = float(0)
        
        vel_msg.angular.x = float(0)
        vel_msg.angular.y = float(0)
        vel_msg.angular.z = self.angular_vel(self.goal_pose,pose)
        publisher = self.cmd_vel_publishers[turtle]
        if self.received_turtle_names[turtle] != self.leader_name:
            publisher.publish(vel_msg)

        
        
    def handle_follow_turtle(self, req, response):
        self.get_logger().info("handle_follow_turtle called")
        self.leader_name = req.leader
        response.status = "ok"
        topic_name = f'/{self.leader_name}/pose'
        self.get_logger().info(f"Subscribing to leader's topic: {topic_name}")

        # Check if already subscribed to a different topic
        if self.current_leader_topic != topic_name:
            # If there was a previous subscription, destroy it
            if self.current_leader_topic is not None:
                self.get_logger().info(f"Unsubscribing from previous leader's topic: {self.current_leader_topic}")
                self.destroy_subscription(self.pose_subscriber)

            # Subscribe to the new leader's pose topic
            self.pose_subscriber = self.create_subscription(Pose, topic_name, self.pose_callback, QoSProfile(depth=10))
            self.current_leader_topic = topic_name

        return response

    def pose_callback(self, req):
        self.goal_pose = req
        self.goal_pose.x = round(self.goal_pose.x, 2)
        self.goal_pose.y = round(self.goal_pose.y, 2)
        self.goal_publisher.publish(self.goal_pose)

    def name_callback(self, msg):
        for message in msg.data:
            self.received_turtle_names.append(message)# Update the list with received turtle names
        self.get_logger().info(f'Received turtle names: {self.received_turtle_names}')
        self.create_publishers()
        self.create_subscriptions()    

    def euclidean_distance(self, goal_pose,pose):
        return sqrt(pow((goal_pose.x - pose.x), 2) + pow((goal_pose.y - pose.y), 2))

    def linear_vel(self, goal_pose,pose, constant=0.5):
        return constant * self.euclidean_distance(goal_pose,pose)

    def steering_angle(self, goal_pose,pose):
        return atan2(goal_pose.y - pose.y, goal_pose.x - pose.x)

    def angular_vel(self, goal_pose,pose, constant=6):
        return constant * (self.steering_angle(goal_pose,pose) - pose.theta)
    
    
    

def main():
    rclpy.init()
    service = TFollowServer()
    rclpy.spin(service)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
