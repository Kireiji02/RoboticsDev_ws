from launch import LaunchDescription
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_path

def generate_launch_description():
    
    rviz_config_path = os.path.join(get_package_share_path('turtle_bringup')
                                    ,'rviz', 'fun2.rviz')
    
    return LaunchDescription([
        Node(
            package='turtlesim_plus',
            namespace='',
            executable='turtlesim_plus_node.py',
            name='turtlesim'
        ),
        Node(
            package='turtle_bringup',
            namespace='',
            executable='controller.py',
            name='controller_node'
        ),
        Node(
            package='turtle_bringup',
            namespace='',
            executable='odom_publisher.py',
            name='odom_node'
        ),
        Node(
            package='rviz2',
            namespace='',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config_path]
        ),
        Node(
            package='turtle_bringup',
            namespace='',
            executable='crazy_pizza.py',
            name='crazy_pizza_node'
        ),
        Node(
            package='turtle_bringup',
            namespace='',
            executable='crazy_turtle.py',
            name='crazy_turtle_node'
        ),
        # Node(
        #     package='turtlesim',
        #     executable='mimic',
        #     name='mimic',
        #     remappings=[
        #         ('/input/pose', '/turtlesim1/turtle1/pose'),
        #         ('/output/cmd_vel', '/turtlesim2/turtle1/cmd_vel'),
        #     ]
        # )
    ])