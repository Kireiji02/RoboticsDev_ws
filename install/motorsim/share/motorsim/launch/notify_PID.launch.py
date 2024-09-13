from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    
    motor = ['Teety', 'Mart', 'Time', 'Beam']
    
    launch_description = LaunchDescription()
    
    random_node = Node(
        package='motorsim',
        namespace='',
        executable='random.py',
        name='random_generator'
    )
    launch_description.add_action(random_node)
    
    for i  in range(len(motor)):
        dc_motor_node = Node(
            package='motorsim',
            namespace=motor[i],
            executable='dc_motor_node.py',
            name='dc_motor_node'
        )
        launch_description.add_action(dc_motor_node)
        
        encoder_node = Node(
            package='motorsim',
            namespace=motor[i],
            executable='encoder_node.py',
            name='encoder_node'
        )
        launch_description.add_action(encoder_node)
        
        controller_node = Node(
            package='motorsim',
            namespace=motor[i],
            executable='controller_node.py',
            name='controller_node'
        )
        launch_description.add_action(controller_node)
        
        scheduler_node = Node(
            package='motorsim',
            namespace=motor[i],
            executable='scheduler_node.py',
            name='scheduler_node'
        )
        launch_description.add_action(scheduler_node)
    
    
    return launch_description
