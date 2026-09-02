import rclpy
from rclpy.node import Node
from force_sum_interface.srv import ForceSum


class ForceSumClient(Node):
    def __init__(self, f1, f2):
        super().__init__('force_sum_client')
        self.cli = self.create_client(ForceSum, 'force_sum')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = ForceSum.Request()
        self.req.f1 = f1
        self.req.f2 = f2
        print(f"Requesting force sum of {f1} and {f2}")
        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)
    force_sum_client = ForceSumClient([2.4, 1.5, 3.0], [4.6, 5.2, 6.0])  # example hardcoded vectors
    rclpy.spin_until_future_complete(force_sum_client, force_sum_client.future)
    response = force_sum_client.future.result()
    print(f'Result: f_sum={response.f_sum}')
    force_sum_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
