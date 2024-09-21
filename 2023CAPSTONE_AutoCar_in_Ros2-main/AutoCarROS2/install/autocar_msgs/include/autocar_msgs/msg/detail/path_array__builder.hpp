// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocar_msgs:msg/PathArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__PATH_ARRAY__BUILDER_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__PATH_ARRAY__BUILDER_HPP_

#include "autocar_msgs/msg/detail/path_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autocar_msgs
{

namespace msg
{

namespace builder
{

class Init_PathArray_yaw
{
public:
  explicit Init_PathArray_yaw(::autocar_msgs::msg::PathArray & msg)
  : msg_(msg)
  {}
  ::autocar_msgs::msg::PathArray yaw(::autocar_msgs::msg::PathArray::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocar_msgs::msg::PathArray msg_;
};

class Init_PathArray_y
{
public:
  explicit Init_PathArray_y(::autocar_msgs::msg::PathArray & msg)
  : msg_(msg)
  {}
  Init_PathArray_yaw y(::autocar_msgs::msg::PathArray::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PathArray_yaw(msg_);
  }

private:
  ::autocar_msgs::msg::PathArray msg_;
};

class Init_PathArray_x
{
public:
  Init_PathArray_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathArray_y x(::autocar_msgs::msg::PathArray::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PathArray_y(msg_);
  }

private:
  ::autocar_msgs::msg::PathArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocar_msgs::msg::PathArray>()
{
  return autocar_msgs::msg::builder::Init_PathArray_x();
}

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__PATH_ARRAY__BUILDER_HPP_
