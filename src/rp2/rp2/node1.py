import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer

from rp2_inter.srv import Multy # # 서비스 타입
from rp2_inter.msg import Uid # # 메시지 타입
from rp2_inter.action import AddDigit # # 액션 타입

class MinPubSerAction(Node):
    def __init__(self):
        super().__init__('min_pubser_action') # 노드 이름 초기화

        # publisher, service, action server 생성 및 초기화
        self.publisher = self.create_publisher(Uid, 'uid', 10)
        self.srv = self.create_service(Multy, 'multiply', self.multiply_callback)
        self.action_server = ActionServer(self, AddDigit, 'add_digit', self.execute_callback)
        self.declare_parameter('sooj_id', '2022741001') # parameter 선언
        
        # timer 설정, 0.5초 간격으로 timer_callback 함수 호출
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0 # 반복 횟수 카운터 초기화

    def timer_callback(self):

        # 현재 parameter 값 가져오기
        sooj_param = self.get_parameter('sooj_id').get_parameter_value().string_value     
        
        # parameter 재설정
        new_param = rclpy.parameter.Parameter(
            'sooj_id', rclpy.Parameter.Type.STRING, '2022741001'
        )
        all_new_parameter = [new_param]
        self.set_parameters(all_new_parameter)
        
        # Uid message 생성 및 설정
        msg = Uid()
        msg.uid = sooj_param + ': %d' % self.i
        self.publisher.publish(msg) # message 발행
        self.get_logger().info('Publishing: "%s"' % msg.uid)
        self.i += 1

    def multiply_callback(self, request, response):
        response.product = request.a * request.b # 요청 받은 두 수의 곱셈 결과 설정
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))

        return response# 응답 반환
    
    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        
        # feedback message 설정
        feedback_msg = AddDigit.Feedback()
        uid = goal_handle.request.uid
        feedback_msg.intermediate_uid = [int(digit) for digit in uid]

        sum = 0

        for digit in feedback_msg.intermediate_uid:
            sum += digit
            feedback_msg.intermediate_uid[0] = sum # 중간 합계를 첫 번째 요소에 저장
            self.get_logger().info('Feedback: [First element is partial sum] {0}'.format(feedback_msg.intermediate_uid))
            goal_handle.publish_feedback(feedback_msg) # feedback 발행
            time.sleep(1) # 1초 대기

        goal_handle.succeed() # 목표 성공 처리

        result = AddDigit.Result()
        result.result_uid = feedback_msg.intermediate_uid
        return result # 결과 반환

def main(args=None):
    rclpy.init(args=args) # ROS 2 초기화

    min_pubser_action = MinPubSerAction() 

    rclpy.spin(min_pubser_action) # 노드 실행

    min_pubser_action.destroy_node()
    
    # 노드 종료 및 ROS 2 shutdown 처리
    rclpy.shutdown()

if __name__ == '__main__':
    main() 
