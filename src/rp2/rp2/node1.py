import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer

from rp2_inter.srv import Multy
from rp2_inter.msg import Uid
from rp2_inter.action import AddDigit

class MinPubSerAction(Node):
    def __init__(self):
        super().__init__('min_pubser_action')

        self.publisher = self.create_publisher(Uid, 'uid', 10)
        self.srv = self.create_service(Multy, 'multiply', self.multiply_callback)
        self.action_server = ActionServer(self, AddDigit, 'add_digit', self.execute_callback)
        self.declare_parameter('sooj_id', '2022741001')
        
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):

        # Set parameters
        sooj_param = self.get_parameter('sooj_id').get_parameter_value().string_value     
        
        new_param = rclpy.parameter.Parameter(
            'sooj_id', rclpy.Parameter.Type.STRING, '2022741001'
        )
        all_new_parameter = [new_param]
        self.set_parameters(all_new_parameter)

        msg = Uid()
        msg.uid = sooj_param + ': %d' % self.i
        self.publisher.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.uid)
        self.i += 1

    def multiply_callback(self, request, response):
        response.product = request.a * request.b
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))

        return response
    
    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        feedback_msg = AddDigit.Feedback()
        uid = goal_handle.request.uid
        feedback_msg.intermediate_uid = [int(digit) for digit in uid]

        sum = 0

        for digit in feedback_msg.intermediate_uid:
            sum += digit
            feedback_msg.intermediate_uid[0] = sum 
            self.get_logger().info('Feedback: [First element is partial sum] {0}'.format(feedback_msg.intermediate_uid))
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)

        goal_handle.succeed()

        result = AddDigit.Result()
        result.result_uid = feedback_msg.intermediate_uid
        return result

def main(args=None):
    rclpy.init(args=args)

    min_pubser_action = MinPubSerAction()

    rclpy.spin(min_pubser_action)

    min_pubser_action.destroy_node()
    
    rclpy.shutdown()

if __name__ == '__main__':
    main()