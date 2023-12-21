# pub_sub_launch.py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='pub_sub_custom_msg1', # Package Name
            executable='publisher1', # Executable file
            output='screen',
            emulate_tty=True),
    
        Node(
        package='pub_sub_custom_msg1', # Package Name
        executable='subscriber1', # Executable file
        output='screen',
        emulate_tty=True),
    ])
