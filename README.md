alias foxy='source /opt/ros/foxy/setup.bash'  
alias inst='source ~/ros2_ws/install/setup.bash'  

alias rtk='python3 /home/dj/ros2_ws/src/RTKLIB/rtk.py'  
alias gps='foxy && cd ~/ros2_ws && inst && ros2 run nmea_navsat_driver nmea_serial_driver'  
alias imu='foxy && cd ~/ros2_ws && inst && ros2 launch witmotion_ros wt901_launch.py'  
alias nav='foxy && cd ~/ros2_ws && inst && ros2 launch robot_localization dual_ekf_navsat_example.launch.py'  
alias odom='foxy && cd ~/ros2_ws && inst && ros2 launch launches odom_launch.py'  
alias path='foxy && cd ~/ros2_ws && inst && ros2 launch launches path_launch.py'  
alias all='foxy && cd ~/ros2_ws && inst && ros2 launch combined_package combined_launch.py'  
  
1. rtk 실행  
2. all 실행 (gps, imu, nav, odom, path를 한 번에 실행하게 됨)  
