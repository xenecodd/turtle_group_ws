import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from turtlesim.srv import Spawn
from geometry_msgs.msg import Twist

from turtle_interfaces.srv import TurtleCreate

class TurtleClientNode(Node):
    def __init__(self):
        super().__init__('client_node')
        self.turtleCreateClient = self.create_client(
            TurtleCreate, "turtle_create", self.send_create_turtlebot
        )
        
    async def send_create_turtlebot(self, count):
        self.request.num = count
        self.future = self.componentStatusClient.call_async(self.request)
        result = await self.future
        self.get_logger().info(f"Service response is:{result.status}")