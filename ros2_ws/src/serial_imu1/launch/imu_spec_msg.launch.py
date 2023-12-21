##launch file
from launch import LaunchDescription
import launch_ros.actions 

def generate_launch_description():
    return LaunchDescription([
        launch_ros.actions.Node(
            package='serial_imu1',
            executable='talker1',
            output='screen'
            ),
        launch_ros.actions.Node(
            package='serial_imu1',
            executable='listener1',
            output='screen'
            ),
        ])

