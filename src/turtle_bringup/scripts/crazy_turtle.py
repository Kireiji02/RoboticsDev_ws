#!/usr/bin/python3

from turtle_bringup.dummy_module import dummy_function, dummy_var
import rclpy
import math
import time
import numpy as np
#from tf2_ros import TransformBroadcaster
#from tf_transformations import quaternion_from_euler
from rclpy.node import Node
from turtlesim.msg import Pose
from std_srvs.srv import Empty
# from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist, Point, TransformStamped, PoseStamped
from turtlesim_plus_interfaces.srv import GivePosition
from controller_interfaces.srv import SetParam
# from turtlesim.srv import Spawn


class CrazyTurtleNode(Node):
    def __init__(self):
        super().__init__('crazy_turtle_node')
        
        self.declare_parameter('frequency', 10.0)
        self.frequency = self.get_parameter('frequency').get_parameter_value().double_value
        
        self.create_timer(1/self.frequency, self.timer_callback)
        #self.tf_braodcaster = TransformBroadcaster(self)
        
        #--------------------Variables--------------------#
        
        self.robot_pose = np.array([[0.0, 0.0, 0.0]])
        self.mouse_pose = np.array([[0.0, 0.0, 0.0]])
        self.pizza_queue = np.array([[0.0, 0.0, 0.0]])
        self.kp_d = 3.0
        self.kp_theta = 25
        
        self.isMoving = False
        
        self.declare_parameter('name', '')
        self.name = self.get_parameter('name').get_parameter_value().string_value
        
        #---------------------Topics---------------------#
        
        #self.odom_pub = self.create_publisher(Odometry, '/odom2', 10)
        self.cmd_vel_pub = self.create_publisher(Twist, 'cmd_vel', 10)
        self.cmd_vel_sub = self.create_subscription(Pose, 'pose', self.callback_pose, 10)
        self.create_subscription(Pose, '/crazy_pizza', self.callback_mouse_pose, 10)
        
        #--------------------Services--------------------#
        self.spawn_pizza_client = self.create_client(GivePosition, '/spawn_pizza')
        self.eat_client = self.create_client(Empty, 'eat') 
        self.set_param_server = self.create_service(SetParam, 'cli_set_param_crazy', self.callback_set_param)
        
    #     self.spawn_turtle_client = self.create_client(Spawn, '/spawn_turtle') 
    #     self.spawn_turtle(5.5,5.5,3.14,f'/{self.name}')
        
    # def spawn_turtle (self,x,y,theta,name):
    #     while not self.spawn_turtle_client.wait_for_service(1.0):
    #         self.get_logger().warn('Waiting for Server...')
    #     spawn_request = Spawn.Request()
    #     spawn_request.x = x
    #     spawn_request.y = y
    #     spawn_request.theta = theta
    #     spawn_request.name = name
    #     self.spawn_turtle_client.call_async(spawn_request)
        
    #----------------------Service----------------------#
    
    def callback_set_param(self, request:SetParam.Request , response:SetParam.Response):
        self.kp_d = request.kp_linear.data
        self.kp_theta = request.kp_angular.data
        return response
    
    def spawn_pizza(self, x, y):
        while not self.spawn_pizza_client.wait_for_service(1.0):
            self.get_logger().warn('Waiting for Server...')
        position_request = GivePosition.Request()
        position_request.x = x
        position_request.y = y
        if self.isMoving == False:
            self.spawn_pizza_client.call_async(position_request)
            self.pizza_queue = np.append(self.pizza_queue, self.mouse_pose, axis=0)
        
    def eat_pizza(self):
        while not self.eat_client.wait_for_service(1.0):
            self.get_logger().warn('Waiting for Server...')
        eat_request = Empty.Request()
        self.eat_client.call_async(eat_request)
        
        if Empty.Request():
            self.isMoving = False
    
    #---------------------Control---------------------#

    def cmdvel(self, v, w):
        msg = Twist()
        msg.linear.x = v
        msg.angular.z = w
        self.cmd_vel_pub.publish(msg)
    
    #---------------------Callback---------------------#

    def callback_mouse_pose(self, msg):
        self.mouse_pose[0][0] = msg.x
        self.mouse_pose[0][1] = msg.y
        self.spawn_pizza(self.mouse_pose[0][0], self.mouse_pose[0][1])
        
    def callback_pose(self,msg):
        self.robot_pose[0][0] = msg.x
        self.robot_pose[0][1] = msg.y
        self.robot_pose[0][2] = msg.theta
        
        # odom_msg = Odometry()
        # odom_msg.header.stamp = self.get_clock().now().to_msg()
        # odom_msg.header.frame_id = "odom"
        # odom_msg.child_frame_id = "robot2"
        
        # odom_msg.pose.pose.position.x = self.robot_pose[0][0]
        # odom_msg.pose.pose.position.y = self.robot_pose[0][1]
        
        # q = quaternion_from_euler(0, 0, self.robot_pose[0][2])
        # odom_msg.pose.pose.orientation.x = q[0]
        # odom_msg.pose.pose.orientation.y = q[1]
        # odom_msg.pose.pose.orientation.z = q[2]
        # odom_msg.pose.pose.orientation.w = q[3]
        
        # self.odom_pub.publish(odom_msg)
        
        # t = TransformStamped()
        # t.header.stamp = self.get_clock().now().to_msg()
        # t.header.frame_id = "odom"
        # t.child_frame_id = "robot2"
        
        # t.transform.translation.x = self.robot_pose[0][0]
        # t.transform.translation.y = self.robot_pose[0][1]
        # t.transform.rotation.x = q[0]
        # t.transform.rotation.y = q[1]
        # t.transform.rotation.z = q[2]
        # t.transform.rotation.w = q[3]
        
        # self.tf_braodcaster.sendTransform(t)
        #print(self.robot_pose)
    
    def timer_callback(self):
        #print(self.pizza_queue)
        if self.pizza_queue.size > 3:
            
            delta_x = self.pizza_queue[1][0]-self.robot_pose[0][0]
            delta_y = self.pizza_queue[1][1]-self.robot_pose[0][1]
            dist = math.sqrt(pow(delta_x,2)+pow(delta_y,2))
            alpha = math.atan2(delta_y,delta_x)
            e_theta = alpha-self.robot_pose[0][2]
            
            if GivePosition.Request():
                self.isMoving = True
                
            if dist > 1.0:
                if e_theta > math.pi:
                    e_theta -= 2*math.pi
                elif e_theta < -math.pi:
                    e_theta += 2*math.pi
                    
                vx = self.kp_d*dist
                w = self.kp_theta*e_theta
                    
            elif dist < 0.95:
                vx = 20.0
                w = 0.0
                time.sleep(0.05)
                
            else:
                vx = 0.0
                w = 0.0
                self.eat_pizza()
                self.pizza_queue = np.append(self.pizza_queue[:1],self.pizza_queue[2:],axis=0)
                
            self.cmdvel(vx, w)

def main(args=None):
    rclpy.init(args=args)
    node = CrazyTurtleNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
