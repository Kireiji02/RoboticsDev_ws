#!/usr/bin/python3

from lab1.dummy_module import dummy_function, dummy_var
import sys
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
from geometry_msgs.msg import Twist


class VelocityMuxNode(Node):
    def __init__(self):
        super().__init__('velocity_mux')
        
        #---------------------Topic---------------------#
        
        self.linear_vel_sub = self.create_subscription(Float64, '/linear/noise', self.callback_linear_vel_sub, 10)
        self.angular_vel_sub = self.create_subscription(Float64, '/angular/noise', self.callback_angular_vel_sub, 10)
        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        
        #---------------------Set Publisher Rate---------------------#
        
        self.declare_parameter('rate', 5.0)
        self.rate = self.get_parameter('rate').get_parameter_value().double_value
        
        # print(len(sys.argv))
        # if len(sys.argv) > 1:
        #     self.rate = float(sys.argv[1])
        # else:
        #     self.rate = 5.0
            
        #---------------------Additional attibutes---------------------#
        
        self.cmd_vel = Twist()
        
        #---------------------Timer---------------------#
        
        self.create_timer(1/self.rate, self.timer_callback)
        self.get_logger().info(f'Starting {self.get_name()}')

    def callback_linear_vel_sub(self, msg:Float64):
        self.cmd_vel.linear.x = msg.data
    
    def callback_angular_vel_sub(self, msg:Float64):
        self.cmd_vel.angular.z = msg.data
    
    def timer_callback(self):
        self.cmd_pub.publish(self.cmd_vel)
        
    
def main(args=None):
    rclpy.init(args=args)
    node = VelocityMuxNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
