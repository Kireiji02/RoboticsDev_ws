from launch import LaunchDescription
from launch_ros.actions import Node

#For using python power
from launch.actions import ExecuteProcess, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    
    launch_description = LaunchDescription()
    
    interface_type = 'lab1_interfaces/srv/SetNoise '
    noise_property = [
        ('linear', 1.0, 0.1),
        ('angular', 0.0, 3.0)
    ]
    
    for ns,mean,var in noise_property:
        set_noise = ExecuteProcess(
            cmd = [[
                'ros2 service call ',
                str(ns),
                '/set_noise ',
                interface_type,
                f'"{{mean: {{data: {mean}}},variance: {{data: {var}}}}}"'
            ]],
            shell = True
        )
        launch_description.add_action(set_noise)
    
    return launch_description