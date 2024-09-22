alias foxy='source /opt/ros/foxy/setup.bash'

alias inst='source ~/ros2_ws/install/setup.bash'

alias rtk='python3 /home/dj/ros2_ws/src/RTKLIB/rtk.py'

alias gps='foxy && cd ~/ros2_ws && inst && ros2 run nmea_navsat_driver nmea_serial_driver'

alias imu='foxy && cd ~/ros2_ws && inst && ros2 launch witmotion_ros wt901_launch.py'

alias nav='foxy && cd ~/ros2_ws && inst && ros2 launch robot_localization dual_ekf_navsat_example.launch.py'

alias odom='foxy && cd ~/ros2_ws && inst && ros2 launch launches odom_launch.py'

alias path='foxy && cd ~/ros2_ws && inst && ros2 launch launches path_launch.py'

아직은 아래의 6개를 각 터미널에서 실행해줘야 함. (나중에 좀 편하게 합칠 예정)
그리고 실행 경로 자기 PC에 맞게 수정해야함.
