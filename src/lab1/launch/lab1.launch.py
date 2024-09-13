from launch import LaunchDescription
from launch_ros.actions import Node

#For using python power
from launch.actions import ExecuteProcess, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    
    launch_description = LaunchDescription()
    
    rate_mux = LaunchConfiguration('rate')
    rate_launch_arg = DeclareLaunchArgument(
        'rate',
        default_value= '30.0'
    )
    launch_description.add_action(rate_launch_arg)
    
    turtle_sim = Node(
            package='turtlesim_plus',
            namespace='',
            executable='turtlesim_plus_node.py',
            name='turtlesim'
        )
    launch_description.add_action(turtle_sim)
    
    #--------------------lab1--------------------#
    
    package_name = 'lab1'
    executable_name = 'noise_generator.py'
    rate = [10.0, 20.0]
    namespace = ['linear','angular']
    for i in range(len(namespace)):
        pass
        noise_gen = Node(
            package=package_name,
            namespace=namespace[i],
            executable=executable_name,
            name=namespace[i] + '_noise',
            parameters=[
                {'rate':rate[i]}
            ]
        )
        launch_description.add_action(noise_gen)
    
    velo_mux = Node(
            package=package_name,
            namespace='',
            executable='velocity_mux.py',
            name='mux',
            remappings = [
                ('/cmd_vel', 'turtle1/cmd_vel')
            ],
            parameters=[
                {'rate':rate_mux}
            ]
        )
    launch_description.add_action(velo_mux)
    
    
    return launch_description