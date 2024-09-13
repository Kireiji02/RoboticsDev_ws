from launch import LaunchDescription
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_path
from launch.actions import ExecuteProcess, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    
    launch_description = LaunchDescription()
    
    # turtle_name = ['humble_49','foxy_49']
    turtle_name = ['Alexander_Nevsky', 'Vladimir_Monomakh']
    angle = ['0.0', '3.14']
    
    # Launch turtle sim
    turtle_sim = Node(
        package='turtlesim_plus',
        namespace='',
        executable='turtlesim_plus_node.py',
        name='turtlesim'
    )
    launch_description.add_action(turtle_sim)
    
    # # Get the path to the RViz config file
    # rviz_config_path = os.path.join(
    #     get_package_share_path('turtle_bringup'),
    #     'rviz', 'fun2.rviz'
    # )
    
    kill_turtle = ExecuteProcess(
        cmd = ["ros2 service call /remove_turtle turtlesim/srv/Kill \"name: 'turtle1'\""],
        shell = True
    )
    launch_description.add_action(kill_turtle)
    
    for i in range(len(angle)):
        spawn_turtle = ExecuteProcess(
            cmd = [
                f"ros2 service call /spawn_turtle turtlesim/srv/Spawn \"{{x: 0.0, y: 0.0, theta: {angle[i]}, name: '{turtle_name[i]}'}}\""
            ],
            shell = True
        )
        launch_description.add_action(spawn_turtle)
    
    # # Launch RViz with the specified config file
    # rviz = ExecuteProcess(
    #     cmd=['rviz2', '-d', rviz_config_path],
    #     output='screen'
    # )
    # launch_description.add_action(rviz)
    
    # odom_node = Node(
    #     package='turtle_bringup',
    #     namespace='',
    #     executable='odom_publisher.py',
    #     name='odom_node',
    #     parameters=[
    #         {'name1':turtle_name[0], 'name2':turtle_name[1]}
    #     ]
    # )
    # launch_description.add_action(odom_node)
    
    controller_node = Node(
            package='turtle_bringup',
            namespace=turtle_name[0],
            executable='controller.py',
            name='controller_node_' + turtle_name[0],
            parameters=[
                {'frequency':100.0}
            ]
        )
    launch_description.add_action(controller_node)
    
    crazy_pizza_node = Node(
            package='turtle_bringup',
            namespace='',
            executable='crazy_pizza.py',
            name='crazy_pizza_node'
        )
    launch_description.add_action(crazy_pizza_node)
    
    crazy_turtle_node = Node(
            package='turtle_bringup',
            namespace=turtle_name[1],
            executable='crazy_turtle.py',
            name='crazy_turtle_node_' + turtle_name[1],
            parameters=[
                {'frequency':100.0}
            ]
        )
    launch_description.add_action(crazy_turtle_node)
    
    # rqt_graph = ExecuteProcess(
    #     cmd = ['rqt_graph']
    # )
    # launch_description.add_action(rqt_graph)
    
    return launch_description
