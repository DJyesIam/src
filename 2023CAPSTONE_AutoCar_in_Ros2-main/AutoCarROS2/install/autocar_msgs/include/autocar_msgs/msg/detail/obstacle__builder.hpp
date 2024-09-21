// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocar_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include "autocar_msgs/msg/detail/obstacle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autocar_msgs
{

namespace msg
{

namespace builder
{

class Init_Obstacle_distance
{
public:
  explicit Init_Obstacle_distance(::autocar_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::autocar_msgs::msg::Obstacle distance(::autocar_msgs::msg::Obstacle::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocar_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_obstacle
{
public:
  explicit Init_Obstacle_obstacle(::autocar_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_distance obstacle(::autocar_msgs::msg::Obstacle::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_Obstacle_distance(msg_);
  }

private:
  ::autocar_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_detected
{
public:
  Init_Obstacle_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_obstacle detected(::autocar_msgs::msg::Obstacle::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_Obstacle_obstacle(msg_);
  }

private:
  ::autocar_msgs::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocar_msgs::msg::Obstacle>()
{
  return autocar_msgs::msg::builder::Init_Obstacle_detected();
}

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
