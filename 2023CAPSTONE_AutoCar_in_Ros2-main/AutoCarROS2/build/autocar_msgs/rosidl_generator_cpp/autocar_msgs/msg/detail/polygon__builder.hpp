// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocar_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__POLYGON__BUILDER_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__POLYGON__BUILDER_HPP_

#include "autocar_msgs/msg/detail/polygon__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autocar_msgs
{

namespace msg
{

namespace builder
{

class Init_Polygon_y
{
public:
  explicit Init_Polygon_y(::autocar_msgs::msg::Polygon & msg)
  : msg_(msg)
  {}
  ::autocar_msgs::msg::Polygon y(::autocar_msgs::msg::Polygon::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocar_msgs::msg::Polygon msg_;
};

class Init_Polygon_x
{
public:
  explicit Init_Polygon_x(::autocar_msgs::msg::Polygon & msg)
  : msg_(msg)
  {}
  Init_Polygon_y x(::autocar_msgs::msg::Polygon::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Polygon_y(msg_);
  }

private:
  ::autocar_msgs::msg::Polygon msg_;
};

class Init_Polygon_n
{
public:
  Init_Polygon_n()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Polygon_x n(::autocar_msgs::msg::Polygon::_n_type arg)
  {
    msg_.n = std::move(arg);
    return Init_Polygon_x(msg_);
  }

private:
  ::autocar_msgs::msg::Polygon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocar_msgs::msg::Polygon>()
{
  return autocar_msgs::msg::builder::Init_Polygon_n();
}

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__POLYGON__BUILDER_HPP_
