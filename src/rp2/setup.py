import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'rp2' # 패키지 이름 설정

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*_launch.py')),
    ],
    install_requires=['setuptools'], # 필요한 설치 의존성
    zip_safe=True,
    maintainer='kiki',
    maintainer_email='kiki@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'], # 테스트에 필요한 의존성
    entry_points={
        'console_scripts': [ 
            'node1 = rp2.node1:main', # 실행 가능한 명령어와 해당 함수 매핑
            'node2 = rp2.node2:main',
        ],
    },
)
