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
            TurtleCreate, "turtle_create", self.handle_create_turtle)         # Creates server for turtle_create service
        self.spawn_client = self.create_client(Spawn, "spawn")                # Creates spawn client to send spawn request
        self.name_pub = self.create_publisher(StringArray, "turtle_names", QoSProfile(depth=10))    # reates publisher to send turtle_names to TFollowServer
        
        self.turtle_names = StringArray()                   # Creates an object that has atype of StringArray custom interface
        self.turtle_names.data = ["turtle1"]                # Assigns turtle_names.data as ["turtle1"], so TFollowServer can also proccesses all turtles including turtle1
        self.sent_turtles = ["turtle1"]                            # Stores already sent turtles names though it prevents that same proccesses to be applied again to same turtles
        self.name_pub.publish(self.turtle_names)            # Publishes turtle_names to TFollowServer
        
    def handle_create_turtle(self, req, response):          # Callback that handles creating turtles
        response.status = "ok"                              
        self.get_logger().info("Server called!")
        for i in range(req.num):                            # Creates turtles by the given number as requested
            request = Spawn.Request()                       # Creates an object named "request" and has a type of Spawn
            request.x = random.uniform(1, 10)
            request.y = random.uniform(1, 10)
            request.theta = random.uniform(0, 6.28)
            request.name = f'turtle{int(len(self.sent_turtles))+1}'  # Names the turtles sequentially from turtle1 to turtle{n+1}
            self.turtle_names.data.append(request.name)  # Adds the turtle's name to the list of turtle names
            self.sent_turtles.append(request.name)  # Keeps track of the sent turtles by appending their names
            self.spawn_client.call_async(request)  # Calls the spawn client asynchronously with the request              
            self.get_logger().info(f'Spawning turtle: {request.name}')
        self.publish_turtle_names()
        return response
    
    def publish_turtle_names(self):
        self.name_pub.publish(self.turtle_names)  # Publishes the current list of turtle names
        self.turtle_names.data = []  # Resets the turtle names list after publishing

def main():
    rclpy.init()
    service = TurtleServerNode()
    rclpy.spin(service)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
