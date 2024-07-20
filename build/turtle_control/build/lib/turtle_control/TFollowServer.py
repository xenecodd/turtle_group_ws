from functools import partial
from math import atan2, sqrt
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
        self.serv = self.create_service(TurtleFollow, "turtle_follow", self.handle_follow_turtle)  # Create a service to handle turtle follow requests
        self.goal_pose = Pose()
        self.current_leader_topic = None  # To store the current leader topic subscription
        self.received_turtle_names = []
        self.name_sub = self.create_subscription(StringArray, "turtle_names", self.name_callback, QoSProfile(depth=10))  # Subscribe to the turtle names topic
        self.leader_name = None  # To store the name of the leader turtle
        self.goal_publisher = self.create_publisher(Pose, "/goal_pose", QoSProfile(depth=10))  # Publisher for goal poses
        self.goal_sub = self.create_subscription(Pose, "/goal_pose", self.goal_pose_callback, QoSProfile(depth=10))  # Subscriber for goal poses
        self.cmd_vel_publishers = {}  # Dictionary to store publishers for velocity commands

    def goal_pose_callback(self, goal):  # Update the goal_pose with the new goal
        self.goal_pose = goal

    def create_publishers(self):  # Create publishers for each turtle to send velocity commands
        for name in self.received_turtle_names:
            topic_name = f'/{name}/cmd_vel'
            self.cmd_vel_publishers[name] = self.create_publisher(Twist, topic_name, QoSProfile(depth=10))
            self.get_logger().info(f'Created publisher for {topic_name}')

    def create_subscriptions(self):  # Create subscriptions for each turtle to receive pose updates
        for name in self.received_turtle_names:
            topic_name = f'/{name}/pose'
            self.create_subscription(Pose, topic_name, partial(self.follow_leader, name=name), QoSProfile(depth=10))
            self.get_logger().info(f'Created subscription for {topic_name}')

    def follow_leader(self, pose, name):  # Generate Twist messages based on the goal pose and current pose of the turtle
        if not self.leader_name or name == self.leader_name:
            return

        vel_msg = Twist()
        vel_msg.linear.x = self.linear_vel(self.goal_pose, pose)
        vel_msg.angular.z = self.angular_vel(self.goal_pose, pose)
        if self.euclidean_distance(self.goal_pose, pose) > 3:  # Only move if the turtle is more than 3 units away from the goal
            self.cmd_vel_publishers[name].publish(vel_msg)

    def handle_follow_turtle(self, req, response):  # Handle the turtle follow request
        self.get_logger().info("handle_follow_turtle called")
        self.leader_name = req.leader
        if self.leader_name in self.received_turtle_names:
            response.status = "ok"
            topic_name = f'/{self.leader_name}/pose'
            self.get_logger().info(f"Subscribing to leader's topic: {topic_name}")

            if self.current_leader_topic != topic_name:  # Check if already subscribed to a different topic
                if self.current_leader_topic:  # If there was a previous subscription, destroy it
                    self.get_logger().info(f"Unsubscribing from previous leader's topic: {self.current_leader_topic}")
                    self.destroy_subscription(self.pose_subscriber)

                self.pose_subscriber = self.create_subscription(Pose, topic_name, self.pose_callback, QoSProfile(depth=10))  # Subscribe to the new leader's pose topic
                self.current_leader_topic = topic_name
        else:
            response.status = f"This turtle doesn't exist. Choose one on the list: {self.received_turtle_names}"
        return response

    def pose_callback(self, req):  # Update and publish the goal_pose
        self.goal_pose = req
        self.goal_pose.x = round(self.goal_pose.x, 2)
        self.goal_pose.y = round(self.goal_pose.y, 2)
        self.goal_publisher.publish(self.goal_pose)

    def name_callback(self, msg):  # Update the list with received turtle names
        self.received_turtle_names = msg.data
        self.get_logger().info(f'Received turtle names: {self.received_turtle_names}')
        self.create_publishers()
        self.create_subscriptions()

    def euclidean_distance(self, goal_pose, pose):  # Calculate the Euclidean distance between the goal pose and the current pose
        return sqrt(pow((goal_pose.x - pose.x), 2) + pow((goal_pose.y - pose.y), 2))

    def linear_vel(self, goal_pose, pose, constant=0.5):  # Calculate the linear velocity needed to reach the goal pose
        return constant * self.euclidean_distance(goal_pose, pose)

    def steering_angle(self, goal_pose, pose):  # Calculate the steering angle needed to reach the goal pose
        return atan2(goal_pose.y - pose.y, goal_pose.x - pose.x)

    def angular_vel(self, goal_pose, pose, constant=3):  # Calculate the angular velocity needed to reach the goal pose
        return constant * (self.steering_angle(goal_pose, pose) - pose.theta)

def main():
    rclpy.init()
    service = TFollowServer()
    rclpy.spin(service)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
