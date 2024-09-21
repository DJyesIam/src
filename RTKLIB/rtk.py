import subprocess

command = "sh /home/dj/ros2_ws/src/RTKLIB/start_ntrip.sh"
result = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
print(result)
