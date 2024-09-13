#!/usr/bin/python3

from lab1.dummy_module import dummy_function, dummy_var
import sys
import rclpy
import numpy as np
from rclpy.node import Node
from std_msgs.msg import Float64
from lab1_interfaces.srv import SetNoise

class NoiseGeneratorNode(Node):
    def __init__(self):
        super().__init__('noise_generator')
        
        #---------------------Topic---------------------#
        
        self.noise_pub = self.create_publisher(Float64, 'noise', 10)
        
        #---------------------Set Publisher Rate---------------------#
        
        self.declare_parameter('rate', 5.0)
        self.rate = self.get_parameter('rate').get_parameter_value().double_value
        
        # print(len(sys.argv))
        # if len(sys.argv) > 1:
        #     self.rate = float(sys.argv[1])
        # else:
        #     self.rate = 5.0
 
        #---------------------Additional attibutes---------------------#
        
        self.mean = 0.0
        self.variance = 1.0
        
        #---------------------Services---------------------#
        
        self.set_noise_server = self.create_service(SetNoise, 'set_noise', self.callback_set_noise)
        
        #---------------------Timer---------------------#
        
        self.create_timer(1/self.rate, self.timer_callback)
        self.get_logger().info(f'Starting {self.get_namespace()} / {self.get_name()} with the default parameter, hz: {self.rate} mean: {self.mean}, variance: {self.variance}')
        
    def callback_set_noise(self, request:SetNoise.Request , response:SetNoise.Response):
        self.mean = request.mean.data
        self.variance = request.variance.data
        return response
    
    def timer_callback(self):
        msg = Float64()
        msg.data = np.random.normal(self.mean, np.sqrt(self.variance))
        self.noise_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = NoiseGeneratorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
