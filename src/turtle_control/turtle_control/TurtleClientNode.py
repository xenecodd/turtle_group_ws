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
        self.cli = self.create_client(              #Created client for /turtle_follow service
            TurtleCreate, "turtle_create")
        while not self.cli.wait_for_service(timeout_sec=1.1):          # Wait for service to answer the request
            self.get_logger().info("service is not available, waiting...")
        self.req = TurtleCreate.Request()            #Create req object for send request to server-side 
         
        
    def send_create_turtlebot(self, count):          #Callback that sends the number of turtles to be created to the server
        self.req.num = count
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)  
        return self.future.result()
        
        
    
def main():
    rclpy.init()
    cli = TurtleClientNode()
    response = cli.send_create_turtlebot(int(sys.argv[1]))  #Sends the argument inputted by user to server
    cli.get_logger().info("%s" % response.status)           #Prints server response
    cli.destroy_node()                                      #Destroys node
    

if __name__ == '__main__':
    main()    