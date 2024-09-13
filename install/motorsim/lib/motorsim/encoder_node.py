#!/usr/bin/python3

from motorsim.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from motorsim.dc_motor_model import DCMotorModel
from geometry_msgs.msg import Twist
from std_msgs.msg import Int64 , Float64


class EncoderNode(Node):
    def __init__(self):
        super().__init__('encoder_node')
        self.freq = 100

        self.create_subscription(Twist, "motor_speed",self.fb_callback, 10)
        self.fb_pos_pub_ = self.create_publisher(Float64,'motor_position',10)
        self.timer_ = self.create_timer(1.0/self.freq,self.timer_callback)

        self.fb_position = 0.0

    def fb_callback(self, msg: Twist):
        self.fb_position += msg.angular.z * (1.0/self.freq)

    def timer_callback(self):
        msg = Float64()
        msg.data = self.fb_position
        self.fb_pos_pub_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = EncoderNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
