import random
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from turtlesim.srv import Spawn
from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile

from turtle_interfaces.srv import TurtleCreate
from turtle_interfaces.msg import StringArray

class TurtleServerNode(Node):
    def __init__(self):
        super().__init__("TurtleServerNode")
        self.serv = self.create_service(
            TurtleCreate, "turtle_create", self.handle_create_turtle)
        self.spawn_client = self.create_client(Spawn, "spawn")
        self.name_pub = self.create_publisher(StringArray, "turtle_names", QoSProfile(depth=10))
        
        self.turtle_names = StringArray()
        self.turtle_names.data = ["turtle1"]
        self.name_pub.publish(self.turtle_names)
        
    def handle_create_turtle(self, req, response):
        response.status = "ok"
        self.get_logger().info("Server called!")
        for i in range(req.num):
            request = Spawn.Request()
            request.x = random.uniform(1, 10)
            request.y = random.uniform(1, 10)
            request.theta = random.uniform(0, 6.28)
            request.name = f'turtle{int(self.turtle_names.data[-1][-1])+1}'
            self.turtle_names.data.append(request.name)
            future = self.spawn_client.call_async(request)
            self.get_logger().info(f'Spawning turtle: {request.name}')
        self.publish_turtle_names()
        return response
    
    def publish_turtle_names(self):
        self.name_pub.publish(self.turtle_names)

def main():
    rclpy.init()
    service = TurtleServerNode()
    rclpy.spin(service)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
