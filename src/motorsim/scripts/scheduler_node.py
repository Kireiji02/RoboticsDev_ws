#!/usr/bin/python3

from motorsim.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from motorsim.dc_motor_model import DCMotorModel
from motorsim_interfaces.srv import Notify
from std_msgs.msg import Float64, Bool

class SchedulerNode(Node):
    def __init__(self):
        super().__init__('scheduler_node')

        self.freq = 100.0
        
        self.declare_parameter('target_pos',1000.0) # Array 
        self.target_pos = self.get_parameter('target_pos').value


        self.flag_pub_ = self.create_publisher(Bool, 'flag_seq',10)
        self.target_pub_ = self.create_publisher(Float64,'target',10)
        self.notify_server = self.create_service(Notify,'notify',self.callback_notify_server)

        self.timer_ = self.create_timer(1.0/self.freq,self.timer_callback)

        self.recieve_notification = None
    
    def callback_notify_server(self,request, respond):
        self.recieve_notification = request.trig

        if self.recieve_notification == True:
            self.target_pos += 1000.0 # Need Changes
            self.recieve_notification = False

            send_to_controller = Bool()
            send_to_controller.data = False
            self.flag_pub_.publish(send_to_controller)
        
        return respond

    
    def timer_callback(self):
        pass

def main(args=None):
    rclpy.init(args=args)
    node = SchedulerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
