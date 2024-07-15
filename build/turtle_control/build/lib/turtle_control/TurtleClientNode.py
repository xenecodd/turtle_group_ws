import sys
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from turtlesim.srv import Spawn
from geometry_msgs.msg import Twist

from turtle_interfaces.srv import TurtleCreate

class TurtleClientNode(Node):
    def __init__(self):
        super().__init__("TurtleClientNode")
        self.cli = self.create_client(
            TurtleCreate, "turtle_create")
        while not self.cli.wait_for_service(timeout_sec=1.1):
            self.get_logger().info("service is not available, waiting...")
        self.req = TurtleCreate.Request()     
         
        
    def send_create_turtlebot(self, count):
        self.req.num = count
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
        
        
    
def main():
    rclpy.init()
    cli = TurtleClientNode()
    response = cli.send_create_turtlebot(int(sys.argv[1]))
    cli.get_logger().info("%s" % response.status)
    cli.destroy_node()
    

if __name__ == '__main__':
    main()    