import time
import rclpy
import sys
from rclpy.node import Node
from rclpy.action import ActionClient

from rp2_inter.srv import Multy
from rp2_inter.msg import Uid
from rp2_inter.action import AddDigit

class MinSubCliAction(Node):

    def __init__(self):
        super().__init__('min_subcli_action') # 노드 이름 초기화
        
        # message subscription 생성
        self.subscription = self.create_subscription(Uid,'uid',self.listener_callback,10)
        
        # Service client 초기화
        self.client = self.create_client(Multy, 'multiply')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Multy.Request()
        
        # Action client 초기화
        self._action_client = ActionClient(self, AddDigit, 'add_digit')
        
        # Parameter
        self.declare_parameter('sooj_id', '2022741001')

    def listener_callback(self, msg):
        self.get_logger().info('Recieved: "%s"' % msg.uid)

    # 서비스 요청 전송 함수
    def send_request(self, a, b):
        self.req.a = a
        self.req.b = b
        self.future = self.client.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)

        return self.future.result()
    
    # action goal 전송 함수
    def send_goal(self):

        # Set parameters
        sooj_param = self.get_parameter('sooj_id').get_parameter_value().string_value
        
        new_sooj_param = rclpy.parameter.Parameter(
            'sooj_id',
            rclpy.Parameter.Type.STRING,
            '2022741001'
        )
        all_new_parameters = [new_sooj_param]
        self.set_parameters(all_new_parameters)

        # Set action goals
        goal_msg = AddDigit.Goal()
        goal_msg.uid = sooj_param

        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return
        
        self.get_logger().info('Goal accepted :)')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result : %d' % result.result_uid[0])
    
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: [First element is partial sum] {0}'.format(feedback.intermediate_uid))
           


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber_client_action = MinSubCliAction()
    # service request 실행
    response = minimal_subscriber_client_action.send_request(int(sys.argv[1]), int(sys.argv[2]))
    minimal_subscriber_client_action.get_logger().info(
        'Result of multipy: %d * %d = %d' %
        (int(sys.argv[1]), int(sys.argv[2]), response.product))
    
    # action goal 실행
    minimal_subscriber_client_action.send_goal()

    rclpy.spin(minimal_subscriber_client_action) # node 실행
    
    # 노드 종료 및 ROS 2 shutdown 처리
    minimal_subscriber_client_action.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
