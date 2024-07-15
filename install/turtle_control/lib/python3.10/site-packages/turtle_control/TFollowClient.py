import sys
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

from turtle_interfaces.srv import TurtleFollow

class TFollowClient(Node):
    def __init__(self):
        super().__init__("TFollowClient")
        self.cli = self.create_client(
            TurtleFollow, "turtle_follow")
        while not self.cli.wait_for_service(timeout_sec=1.1):
            self.get_logger().info("service is not available, waiting...")
        self.req = TurtleFollow.Request()     
         
        
    def select_leader_turtlebot(self):
        self.req.leader = input("Leader turtlebot name: ")
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
        
        
    
def main():
    rclpy.init()
    cli = TFollowClient()
    response = cli.select_leader_turtlebot()
    cli.get_logger().info("%s" % response.status)
    cli.destroy_node()
    

if __name__ == '__main__':
    main()    