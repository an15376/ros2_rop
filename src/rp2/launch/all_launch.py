from launch import LaunchDescription    # 런치 설명 객체를 위한 모듈
from launch_ros.actions import Node     # ROS 노드 실행을 위한 액션

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='rp2',              # 노드가 포함된 패키지 이름
            executable='node1',         # 실행할 노드의 실행 파일 이름
            name='node1'                # 노드의 ROS 내에서의 이름
        ),
        Node(
            package='rp2',
            executable='node2',
            name='node2',
            arguments=['5', '10']       # node2에 전달될 인자
        )
    ]) 
