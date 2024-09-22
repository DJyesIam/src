# alias 모음
아래의 alias들은 절대 경로를 이용하므로 'dj'나 'ros2_ws'를 자기 PC 환경에 맞게 바꾸어주어야 한다.  
```
alias foxy='source /opt/ros/foxy/setup.bash'
alias inst='source ~/ros2_ws/install/setup.bash'

alias rtk='python3 /home/dj/ros2_ws/src/RTKLIB/rtk.py'
alias gps='foxy && cd ~/ros2_ws && inst && ros2 run nmea_navsat_driver nmea_serial_driver'
alias imu='foxy && cd ~/ros2_ws && inst && ros2 launch witmotion_ros wt901_launch.py'
alias nav='foxy && cd ~/ros2_ws && inst && ros2 launch robot_localization dual_ekf_navsat_example.launch.py'
alias odom='foxy && cd ~/ros2_ws && inst && ros2 launch launches odom_launch.py'
alias path='foxy && cd ~/ros2_ws && inst && ros2 launch launches path_launch.py'
alias all='foxy && cd ~/ros2_ws && inst && ros2 launch combined_package combined_launch.py'
```
  
# RTKLIB 관련 설정하기
RTKLIB은 다른 패키지와 달리 ROS와는 별개의 패키지이고, 추가로 설정해주어야 하는 게 조금 있다.  
아래의 코드를 터미널에서 한 줄씩 실행한다. 실패하면 경로를 확인하라.  
```
cd RTKLIB/app/str2str/gcc
make
sudo cp str2str /usr/local/bin
chmod +x start_ntrip.sh
```
그리고 'rtk.py'와 'start_ntrip.sh' 코드를 보면 절대 경로가 있는데, 이것도 자기 PC 환경에 맞게 수정한다.  
  
# 최종 실행 방법  
rtk 설정이 끝나고 빌드도 잘 되었다면 'rtk', 'all' 두 개의 alias만 입력하면 된다.
