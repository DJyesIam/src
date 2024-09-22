alias foxy='source /opt/ros/foxy/setup.bash'  
alias inst='source ~/ros2_ws/install/setup.bash'  

alias rtk='python3 /home/dj/ros2_ws/src/RTKLIB/rtk.py'  
alias gps='foxy && cd ~/ros2_ws && inst && ros2 run nmea_navsat_driver nmea_serial_driver'  
alias imu='foxy && cd ~/ros2_ws && inst && ros2 launch witmotion_ros wt901_launch.py'  
alias nav='foxy && cd ~/ros2_ws && inst && ros2 launch robot_localization dual_ekf_navsat_example.launch.py'  
alias odom='foxy && cd ~/ros2_ws && inst && ros2 launch launches odom_launch.py'  
alias path='foxy && cd ~/ros2_ws && inst && ros2 launch launches path_launch.py'  
alias all='foxy && cd ~/ros2_ws && inst && ros2 launch combined_package combined_launch.py'  

위의 alias들은 절대 경로를 이용하므로 dj나 ros2_ws를 자기 PC 환경에 맞게 바꾸어주어야 한다.  
1. rtk 실행 (rtk.py랑 start_ntrip.sh 코드 내부에 경로 있는 거 바꿔줘야 함)  
2. all 실행 (gps, imu, nav, odom, path를 한 번에 실행하게 됨)  
