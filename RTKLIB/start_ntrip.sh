#!/bin/bash
/usr/local/bin/str2str -in ntrip://eownd1112@seoultech.ac.kr:gnss@www.gnssdata.or.kr:2101/YONS-RTCM32 -out serial://ttyGPS:115200 > /home/dj/ros2_ws/src/RTKLIB/ntrip_log.txt 2>&1