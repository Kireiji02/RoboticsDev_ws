#!/usr/bin/python3

from turtle_bringup.dummy_module import dummy_function, dummy_var
import rclpy
import numpy as np
from rclpy.node import Node
from nav_msgs.msg import Odometry
from turtlesim.msg import Pose
from tf2_ros import TransformBroadcaster
from tf_transformations import quaternion_from_euler
from geometry_msgs.msg import TransformStamped

class OdomNode(Node):
    def __init__(self):
        super().__init__('odom_publisher')
        
        self.tf_braodcaster = TransformBroadcaster(self)
        
        self.robot_pose1 = np.array([[0.0, 0.0, 0.0]])
        self.robot_pose2 = np.array([[0.0, 0.0, 0.0]])
        
        self.declare_parameter('name1', '')
        self.name1 = self.get_parameter('name1').get_parameter_value().string_value
        
        self.declare_parameter('name2', '')
        self.name2 = self.get_parameter('name2').get_parameter_value().string_value
        
        #---------------------Topics---------------------#
        
        self.odom_pub1 = self.create_publisher(Odometry, '/odom1', 10)
        self.odom_pub2 = self.create_publisher(Odometry, '/odom2', 10)
        self.cmd_vel_sub = self.create_subscription(Pose, f'/{self.name1}/pose', self.callback_odom1, 10)
        self.cmd_vel_sub1 = self.create_subscription(Pose, f'/{self.name2}/pose', self.callback_odom2, 10)
        
    def callback_odom1(self, msg):
        
        self.robot_pose1[0][0] = msg.x
        self.robot_pose1[0][1] = msg.y
        self.robot_pose1[0][2] = msg.theta
        
        odom_msg = Odometry()
        odom_msg.header.stamp = self.get_clock().now().to_msg()
        odom_msg.header.frame_id = "odom"
        odom_msg.child_frame_id = f'{self.name1}'
        
        odom_msg.pose.pose.position.x = self.robot_pose1[0][0]
        odom_msg.pose.pose.position.y = self.robot_pose1[0][1]
        
        q = quaternion_from_euler(0, 0, self.robot_pose1[0][2])
        odom_msg.pose.pose.orientation.x = q[0]
        odom_msg.pose.pose.orientation.y = q[1]
        odom_msg.pose.pose.orientation.z = q[2]
        odom_msg.pose.pose.orientation.w = q[3]
        
        self.odom_pub1.publish(odom_msg)
        
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = "odom"
        t.child_frame_id = f'{self.name1}'
        
        t.transform.translation.x = self.robot_pose1[0][0]
        t.transform.translation.y = self.robot_pose1[0][1]
        t.transform.rotation.x = q[0]
        t.transform.rotation.y = q[1]
        t.transform.rotation.z = q[2]
        t.transform.rotation.w = q[3]
        
        self.tf_braodcaster.sendTransform(t)

    def callback_odom2(self, msg):
        
        self.robot_pose2[0][0] = msg.x
        self.robot_pose2[0][1] = msg.y
        self.robot_pose2[0][2] = msg.theta
        
        odom_msg = Odometry()
        odom_msg.header.stamp = self.get_clock().now().to_msg()
        odom_msg.header.frame_id = "odom"
        odom_msg.child_frame_id = f'{self.name2}'
        
        odom_msg.pose.pose.position.x = self.robot_pose2[0][0]
        odom_msg.pose.pose.position.y = self.robot_pose2[0][1]
        
        q = quaternion_from_euler(0, 0, self.robot_pose2[0][2])
        odom_msg.pose.pose.orientation.x = q[0]
        odom_msg.pose.pose.orientation.y = q[1]
        odom_msg.pose.pose.orientation.z = q[2]
        odom_msg.pose.pose.orientation.w = q[3]
        
        self.odom_pub2.publish(odom_msg)
        
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = "odom"
        t.child_frame_id = f'{self.name2}'
        
        t.transform.translation.x = self.robot_pose2[0][0]
        t.transform.translation.y = self.robot_pose2[0][1]
        t.transform.rotation.x = q[0]
        t.transform.rotation.y = q[1]
        t.transform.rotation.z = q[2]
        t.transform.rotation.w = q[3]
        
        self.tf_braodcaster.sendTransform(t)

def main(args=None):
    rclpy.init(args=args)
    node = OdomNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()