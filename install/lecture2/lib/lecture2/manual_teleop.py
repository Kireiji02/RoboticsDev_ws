#!/usr/bin/python3

from lecture2.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, Point, TransformStamped
from turtlesim.msg import Pose
from turtlesim_plus_interfaces.srv import GivePosition
from tf2_ros import TransformBroadcaster
from nav_msgs.msg import Odometry
from std_srvs.srv import Empty
import numpy as np
from tf_transformations import quaternion_from_euler


class DummyNode(Node):
    def __init__(self):
        super().__init__('dummy_node')
        
        self.odom_publisher = self.create_publisher(Odometry, '/odom', 10)
        self.cmd_vel_pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.tf_broadcaster = TransformBroadcaster(self)
        self.cmd_vel_sub = self.create_subscription(Pose, '/turtle1/pose', self.callback_pose, 10)
        self.create_subscription(Point, '/mouse_position', self.callback_mouse_pose, 10)
        self.create_timer(0.01, self.timer_callback)
        self.spawn_pizza_client = self.create_client(GivePosition, '/spawn_pizza')
        self.eat_client = self.create_client(Empty, '/turtle1/eat') 
        self.robot_pose = np.array([0.0, 0.0, 0.0])
        self.mouse_pose = np.array([0.0, 0.0, 0.0])    
        
    #----------------------Service----------------------#
    def spawn_pizza(self, x, y):
        position_request = GivePosition.Request()
        position_request.x = x
        position_request.y = y
        self.spawn_pizza_client.call_async(position_request)
        
    def eat_pizza(self):
        eat_request = Empty.Request()
        self.eat_client.call_async(eat_request)
    #----------------------Topic----------------------#
        
    def callback_mouse_pose(self, msg):
        self.mouse_pose[0] = msg.x
        self.mouse_pose[1] = msg.y
        self.mouse_pose[2] = msg.z
        self.spawn_pizza(self.mouse_pose[0], self.mouse_pose[1])
    
    def callback_pose(self,msg):
        #self.get_logger().info(str(msg))
        self.robot_pose[0] = msg.x
        self.robot_pose[1] = msg.y
        self.robot_pose[2] = msg.theta
        
        
        odom_msg = Odometry()
        odom_msg.header.stamp = self.get_clock().now().to_msg()
        odom_msg.header.frame_id = "odom"
        odom_msg.child_frame_id = "robot"
        
        odom_msg.pose.pose.position.x = self.robot_pose[0]
        odom_msg.pose.pose.position.y = self.robot_pose[1]
        
        q = quaternion_from_euler(0, 0, self.robot_pose[2])
        odom_msg.pose.pose.orientation.x = q[0]
        odom_msg.pose.pose.orientation.y = q[1]
        odom_msg.pose.pose.orientation.z = q[2]
        odom_msg.pose.pose.orientation.w = q[3]
        
        self.odom_publisher.publish(odom_msg)
        
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'odom'
        t.child_frame_id = "robot"
        
        t.transform.translation.x = self.robot_pose[0]
        t.transform.translation.y = self.robot_pose[1]
        t.transform.rotation.x = q[0]
        t.transform.rotation.y = q[1]
        t.transform.rotation.z = q[2]
        t.transform.rotation.w = q[3]
        
        self.tf_broadcaster.sendTransform(t)
        
    def cmdvel(self, v, w):
        msg = Twist()
        msg.linear.x = v
        msg.angular.z = w
        self.cmd_vel_pub.publish(msg)
    
    def timer_callback(self):
        # self.cmdvel(0.1, 0.5)
        self.eat_pizza()
        
        

def main(args=None):
    rclpy.init(args=args)
    node = DummyNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
