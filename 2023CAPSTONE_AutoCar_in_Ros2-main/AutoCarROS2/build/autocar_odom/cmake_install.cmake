# Install script for directory: /home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/install/autocar_odom")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom" TYPE DIRECTORY FILES "")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/autocar_odom" TYPE PROGRAM FILES
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/src/gps_save.py"
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/src/dead_reckoning.py"
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/src/odom_pub.py"
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/src/odom_viz.py"
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/src/get_encoder.py"
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/src/encoder_vel.py"
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/src/tf_pub.py"
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/src/move_position.py"
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/src/get_yaw_init.py"
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/src/lidar_extract_channel.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom/" TYPE DIRECTORY FILES
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/rviz"
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/config"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/autocar_odom")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/autocar_odom")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom/environment" TYPE FILE FILES "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom/environment" TYPE FILE FILES "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom" TYPE FILE FILES "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom" TYPE FILE FILES "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom" TYPE FILE FILES "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom" TYPE FILE FILES "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom" TYPE FILE FILES "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/ament_cmake_index/share/ament_index/resource_index/packages/autocar_odom")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom/cmake" TYPE FILE FILES
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/ament_cmake_core/autocar_odomConfig.cmake"
    "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/ament_cmake_core/autocar_odomConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autocar_odom" TYPE FILE FILES "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/autocar_odom/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/dj/ros2_ws/src/2023CAPSTONE_AutoCar_in_Ros2-main/AutoCarROS2/build/autocar_odom/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
