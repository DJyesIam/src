// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocar_msgs:msg/VisionSteer.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__VISION_STEER__BUILDER_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__VISION_STEER__BUILDER_HPP_

#include "autocar_msgs/msg/detail/vision_steer__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autocar_msgs
{

namespace msg
{

namespace builder
{

class Init_VisionSteer_steer
{
public:
  explicit Init_VisionSteer_steer(::autocar_msgs::msg::VisionSteer & msg)
  : msg_(msg)
  {}
  ::autocar_msgs::msg::VisionSteer steer(::autocar_msgs::msg::VisionSteer::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocar_msgs::msg::VisionSteer msg_;
};

class Init_VisionSteer_detected
{
public:
  Init_VisionSteer_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionSteer_steer detected(::autocar_msgs::msg::VisionSteer::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_VisionSteer_steer(msg_);
  }

private:
  ::autocar_msgs::msg::VisionSteer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocar_msgs::msg::VisionSteer>()
{
  return autocar_msgs::msg::builder::Init_VisionSteer_detected();
}

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__VISION_STEER__BUILDER_HPP_
