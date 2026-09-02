import rclpy 
from rclpy.node import Node
from force_sum_interface.srv import ForceSum


class ForceSumServer(Node):
    def __init__(self):
        super().__init__('force_sum_server')
        self.srv = self.create_service(ForceSum,'force_sum',self.force_sum_callback)
    def force_sum_callback(self,request,response):
        self.get_logger().info(f'Incoming request: f1={list(request.f1)}, f2={list(request.f2)}')
        for i in range(len(request.f1)):
            response.f_sum[i] = request.f1[i] + request.f2[i]
        self.get_logger().info(f'Sending response: f_sum={list(response.f_sum)}')
        return response

def main(args=None):
    rclpy.init(args=args)
    force_sum_server = ForceSumServer()
    print("Force Sum Server is running...")
    rclpy.spin(force_sum_server)
    force_sum_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()