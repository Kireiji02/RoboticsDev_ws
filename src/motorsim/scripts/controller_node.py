#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import SetParametersResult
from std_msgs.msg import Float64, Bool
from geometry_msgs.msg import Twist
from motorsim.pid_controller import PIDController
from motorsim_interfaces.srv import Notify

class ControllerNode(Node):
    def __init__(self):
        super().__init__('controller_node')
        # Declare parameters with default values
        self.declare_parameter('Kp', 0.0)
        self.declare_parameter('Ki', 0.0)
        self.declare_parameter('Kd', 0.0)
        self.declare_parameter('U_max', 1000000.0)

        self.freq = 100.0

        

        self.call_notify_client = self.create_client(Notify, 'notify')

        self.create_subscription(Bool, 'flag_seq',self.flag_callback,10)
        self.create_subscription(Float64, "target", self.target_callback, 10)
        # self.create_subscription(Twist, "motor_speed", self.fb_callback, 10)
        self.create_subscription(Float64, "motor_position", self.pos_fb_callback, 10)
        self.signal_publisher = self.create_publisher(Float64, "control_signal", 10)
        self.create_timer(1.0 / self.freq, self.timer_callback)

        self.Kp = self.get_parameter('Kp').value
        self.Ki = self.get_parameter('Ki').value
        self.Kd = self.get_parameter('Kd').value
        self.U_max = self.get_parameter('U_max').value

        self.pid = PIDController(self.Kp, self.Ki, self.Kd, self.U_max)
    
        # self.feedback = 0.0
        self.pos_feedback = 0.0
        self.pos_target = 0.0

        self.send_notification = True
      
        # Add callback for parameter changes
        self.add_on_set_parameters_callback(self.set_param_callback)

    def set_param_callback(self, params):
        for param in params:
            if param.name == 'Kp':
                self.get_logger().info(f'Updated Kp: {param.value}')
                self.Kp = param.value
            elif param.name == 'Ki':
                self.get_logger().info(f'Updated Ki: {param.value}')
                self.Ki = param.value
            elif param.name == 'Kd':
                self.get_logger().info(f'Updated Kd: {param.value}')
                self.Kd = param.value
            elif param.name == 'U_max':
                self.get_logger().info(f'Updated U_max: {param.value}')
                self.U_max = param.value
            else:
                self.get_logger().warn(f'Unknown parameter: {param.name}')
                # Return failure result for unknown parameters
                return SetParametersResult(successful=False, reason=f'Unknown parameter: {param.name}')
        self.pid.set_param(self.Kp, self.Ki, self.Kd, self.U_max)
        # If all parameters are known, return success
        return SetParametersResult(successful=True)
    
    def flag_callback(self,msg):
        self.send_notification = msg.data

    def call_notify_server(self,trig):
        while not self.call_notify_client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server Starting . . .")
        
        send_noti = Notify.Request()
        send_noti.trig = trig
        self.call_notify_client.call_async(send_noti)


    def pos_fb_callback(self, msg:Float64):
        self.pos_feedback = msg.data

    def target_callback(self, msg: Float64):
        self.pos_target = msg.data

    # def fb_callback(self, msg: Twist):
    #     self.feedback = msg.angular.z

    def timer_callback(self):
        error = self.pos_target - self.pos_feedback
        msg = Float64()
        # msg.data = self.pid.compute(error)
        msg.data = error
        self.signal_publisher.publish(msg)
        self.get_logger().info(f'Pos: {self.pos_feedback} rad \n {error} {self.pos_target}')
        
        if error <= 0.01:
            self.call_notify_server(self.send_notification)

def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
