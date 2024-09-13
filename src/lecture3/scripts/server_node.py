#!/usr/bin/python3

from lecture3.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from lecture3_interfaces.srv import ExampleSrv


class ServerNode(Node):
    def __init__(self):
        super().__init__('server_node')
        
        self.add_two_ints_server = self.create_service(ExampleSrv, 'AddTwoInts', self.callback_add_two_ints)

    def callback_add_two_ints(self, request:ExampleSrv.Request , response:ExampleSrv.Response):
       
        response.sum.data = request.a.data + request.b.data
        return response
    
def main(args=None):
    rclpy.init(args=args)
    node = ServerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
