#!/usr/bin/python3

from lecture3.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from lecture3_interfaces.srv import ExampleSrv


class ClientNode(Node):
    def __init__(self):
        super().__init__('client_node')
        
        self.client = self.create_client(ExampleSrv, 'AddTwoInts')
        self.request(5, 10)
        self.request(1, 10)
        self.request(3, 10)
        
    def request(self, a, b):
        while not self.client.wait_for_service(1.0):
            self.get_logger().warn('Waiting for Server...')
        AddTwoInt_request = ExampleSrv.Request()
        AddTwoInt_request.a.data = a
        AddTwoInt_request.b.data = b
        self.future = self.client.call_async(AddTwoInt_request)
        self.future.add_done_callback(self.response_callback)
        
    def response_callback(self, future):
        try:
            response = future.result()
            self.get_logger().info(f'Result: {response.sum}')
        except Exception as e:
            self.get_logger().error(f'Service call failed: {e}')

def main(args=None):
    rclpy.init(args=args)
    node = ClientNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
