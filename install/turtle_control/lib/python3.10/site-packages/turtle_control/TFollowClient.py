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
            TurtleFollow, "turtle_follow")      #Created client for /turtle_follow service
        while not self.cli.wait_for_service(timeout_sec=1.1):       # Wait for service to answer the request if it doesn't print "service is not available, waiting..."
            self.get_logger().info("service is not available, waiting...")
        self.req = TurtleFollow.Request()     #Create req object for send request to server-side
         
        
    def select_leader_turtlebot(self):        #Callback that sends leader name to server
        self.req.leader = input("Leader turtlebot name: ")     
        self.future = self.cli.call_async(self.req)         #Makes an asynchronous service call using the client (self.cli).
        rclpy.spin_until_future_complete(self, self.future) #Spins the ROS node until the asynchronous call is completed. Essentially waits for the service response.
        return self.future.result()
        
        
    
def main():
    rclpy.init()
    cli = TFollowClient()                          # Create an instance of the TFollowClient
    response = cli.select_leader_turtlebot()       # Call the select_leader_turtlebot method and store the response
    cli.get_logger().info("%s" % response.status)  # Log the status of the respons
    cli.destroy_node()
    

if __name__ == '__main__':
    main()    