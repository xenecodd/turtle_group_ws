from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
  return LaunchDescription([

      Node(
          package='turtlesim',
          executable='turtlesim_node',
          name='sim'
      ),
      Node(
          package='turtle_control',
          executable='server',
          name='turtle_create_server'
      ),
      Node(
          package='turtle_control',
          executable='followServer',
          name='turtle_follow_server'
      )
  ])
  