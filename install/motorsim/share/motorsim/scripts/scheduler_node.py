#!/usr/bin/python3

from motorsim.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from motorsim.dc_motor_model import DCMotorModel


class SchedulerNode(Node):
    def __init__(self):
        super().__init__('scheduler_node')

def main(args=None):
    rclpy.init(args=args)
    node = SchedulerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
