// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocar_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_

#include "autocar_msgs/msg/detail/control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autocar_msgs
{

namespace msg
{

namespace builder
{

class Init_Control_delta
{
public:
  explicit Init_Control_delta(::autocar_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  ::autocar_msgs::msg::Control delta(::autocar_msgs::msg::Control::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocar_msgs::msg::Control msg_;
};

class Init_Control_kappa
{
public:
  explicit Init_Control_kappa(::autocar_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_delta kappa(::autocar_msgs::msg::Control::_kappa_type arg)
  {
    msg_.kappa = std::move(arg);
    return Init_Control_delta(msg_);
  }

private:
  ::autocar_msgs::msg::Control msg_;
};

class Init_Control_accel
{
public:
  explicit Init_Control_accel(::autocar_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_kappa accel(::autocar_msgs::msg::Control::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_Control_kappa(msg_);
  }

private:
  ::autocar_msgs::msg::Control msg_;
};

class Init_Control_header
{
public:
  Init_Control_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_accel header(::autocar_msgs::msg::Control::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Control_accel(msg_);
  }

private:
  ::autocar_msgs::msg::Control msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocar_msgs::msg::Control>()
{
  return autocar_msgs::msg::builder::Init_Control_header();
}

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
