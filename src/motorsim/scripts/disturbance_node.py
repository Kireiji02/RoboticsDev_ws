#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import sys
import termios
import tty
import numpy as np
from std_msgs.msg import Float32

msg = """
Control the disturbance using the arrow keys:
---------------------------
Arrow Up: Increase mean
Arrow Down: Decrease mean
Arrow Left: Decrease variance
Arrow Right: Increase variance
CTRL-C to quit
"""

# Move bindings: control both mean and variance
move_bindings = {
    '\x1b[A': (1, 0),   # Arrow Up: increase mean
    '\x1b[B': (-1, 0),  # Arrow Down: decrease mean
    '\x1b[D': (0, -1),  # Arrow Left: decrease variance
    '\x1b[C': (0, 1),   # Arrow Right: increase variance
}

def get_key():
    tty.setraw(sys.stdin.fileno())
    key = sys.stdin.read(3)  # For arrow keys, 3 characters are returned
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    return key

class DisturbanceControlNode(Node):
    def __init__(self):
        super().__init__('disturbance_control_node')
        self.mean = 0.0  # Initial mean
        self.variance = 1.0  # Initial variance
        self.disturbance = 0.0
        self.publisher_ = self.create_publisher(Float32, 'target', 10)  # Publisher for the disturbance
        self.get_logger().info(msg)
        self.run()

    def update_disturbance(self, mean_dir, var_dir):
        """Update mean and variance based on input and apply limits."""
        # Adjust mean
        self.mean = np.clip(self.mean + mean_dir * 0.01, -0.1, 0.1)  # mean range [-0.1, 0.1]
        
        # Adjust variance and ensure it's always positive
        self.variance = np.clip(self.variance + var_dir * 0.01, 0.01, 0.1)  # variance range [0.01, 0.1]

        # Recalculate disturbance as a normal distribution sample
        self.disturbance = np.random.normal(self.mean, np.sqrt(self.variance))

        # Log the updated values
        self.get_logger().info(f"Updated mean: {self.mean:.3f}, variance: {self.variance:.3f}")
        self.get_logger().info(f"Calculated disturbance: {self.disturbance:.3f}")

        # Publish disturbance to the 'target' topic
        msg = Float32()
        msg.data = self.disturbance
        self.publisher_.publish(msg)

    def run(self):
        global settings
        settings = termios.tcgetattr(sys.stdin)

        try:
            while rclpy.ok():
                key = get_key()
                if key in move_bindings:
                    mean_dir, var_dir = move_bindings[key]
                    self.update_disturbance(mean_dir, var_dir)
                elif key == '\x03':  # CTRL-C to exit
                    break
        except Exception as e:
            self.get_logger().error(f"Error: {e}")
        finally:
            termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)


def main(args=None):
    rclpy.init(args=args)
    node = DisturbanceControlNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
