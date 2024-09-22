import os

from launch import LaunchDescription
from launch_ros.actions import Node

from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
	gps_config_file = os.path.join(get_package_share_directory("nmea_navsat_driver"), "config", "nmea_serial_driver.yaml")
	imu_config_file = os.path.join(get_package_share_directory('witmotion_ros'), 'config', 'wt901.yml')
	localization_config_file = os.path.join(get_package_share_directory('robot_localization'), 'params', 'dual_ekf_navsat_example.yaml')
	navconfig = os.path.join(get_package_share_directory('autocar_nav'), 'config', 'navigation_params.yaml')
	
	return LaunchDescription([
		Node(
			package='nmea_navsat_driver',
			executable='nmea_serial_driver',
			output='screen',
			parameters=[gps_config_file]
		),
		Node(
			package = 'witmotion_ros',
			executable = 'witmotion_ros_node',
			output='screen',
			parameters = [imu_config_file]
		),
		Node(
			package='robot_localization', 
			executable='ekf_node', 
			name='ekf_filter_node_odom',
			output='screen',
			parameters=[localization_config_file],
			remappings=[('odometry/filtered', 'odometry/local')]           
		),
		Node(
			package='robot_localization', 
			executable='ekf_node', 
			name='ekf_filter_node_map',
			output='screen',
			parameters=[localization_config_file],
			remappings=[('odometry/filtered', 'odometry/global')]
		),           
		Node(
			package='robot_localization', 
			executable='navsat_transform_node', 
			name='navsat_transform',
			output='screen',
			parameters=[localization_config_file],
			remappings=[('imu/data', 'imu/data'),
				('gps/fix', 'gps/fix'), 
				('gps/filtered', 'gps/filtered'),
				('odometry/gps', 'odometry/gps'),
				('odometry/filtered', 'odometry/global')]           
		),
		Node(
            		package = 'autocar_odom',
            		name = 'odom_pub',
            		executable = 'odom_pub.py'
        	),
        	Node(
            		package = 'autocar_nav',
            		name = 'localization',
            		executable = 'localization.py',
            		parameters = [navconfig]
        	),
        	Node(
			package = 'autocar_nav',
			name = 'global_planner',
			executable = 'globalplanner.py',
			parameters = [navconfig]
		),

			Node(
			package = 'autocar_map',
			name = 'parking_map',
			executable = 'parking_map.py'
		),

			Node(
			package = 'autocar_nav',
			name = 'local_planner',
			executable = 'localplanner.py',
			parameters = [navconfig]
		),

			Node(
			package = 'autocar_nav',
			name = 'path_tracker',
			executable = 'tracker.py',
			parameters = [navconfig]
		),

			Node(
			package = 'autocar_nav',
			name = 'Core',
			executable = 'core.py'
		)
	])
