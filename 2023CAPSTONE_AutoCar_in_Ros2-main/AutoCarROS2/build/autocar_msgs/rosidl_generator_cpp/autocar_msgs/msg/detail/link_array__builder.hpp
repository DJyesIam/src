// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocar_msgs:msg/LinkArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__LINK_ARRAY__BUILDER_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__LINK_ARRAY__BUILDER_HPP_

#include "autocar_msgs/msg/detail/link_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autocar_msgs
{

namespace msg
{

namespace builder
{

class Init_LinkArray_next_path
{
public:
  explicit Init_LinkArray_next_path(::autocar_msgs::msg::LinkArray & msg)
  : msg_(msg)
  {}
  ::autocar_msgs::msg::LinkArray next_path(::autocar_msgs::msg::LinkArray::_next_path_type arg)
  {
    msg_.next_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocar_msgs::msg::LinkArray msg_;
};

class Init_LinkArray_direction
{
public:
  explicit Init_LinkArray_direction(::autocar_msgs::msg::LinkArray & msg)
  : msg_(msg)
  {}
  Init_LinkArray_next_path direction(::autocar_msgs::msg::LinkArray::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_LinkArray_next_path(msg_);
  }

private:
  ::autocar_msgs::msg::LinkArray msg_;
};

class Init_LinkArray_parking_stop_wp
{
public:
  explicit Init_LinkArray_parking_stop_wp(::autocar_msgs::msg::LinkArray & msg)
  : msg_(msg)
  {}
  Init_LinkArray_direction parking_stop_wp(::autocar_msgs::msg::LinkArray::_parking_stop_wp_type arg)
  {
    msg_.parking_stop_wp = std::move(arg);
    return Init_LinkArray_direction(msg_);
  }

private:
  ::autocar_msgs::msg::LinkArray msg_;
};

class Init_LinkArray_traffic_stop_wp
{
public:
  explicit Init_LinkArray_traffic_stop_wp(::autocar_msgs::msg::LinkArray & msg)
  : msg_(msg)
  {}
  Init_LinkArray_parking_stop_wp traffic_stop_wp(::autocar_msgs::msg::LinkArray::_traffic_stop_wp_type arg)
  {
    msg_.traffic_stop_wp = std::move(arg);
    return Init_LinkArray_parking_stop_wp(msg_);
  }

private:
  ::autocar_msgs::msg::LinkArray msg_;
};

class Init_LinkArray_mode
{
public:
  explicit Init_LinkArray_mode(::autocar_msgs::msg::LinkArray & msg)
  : msg_(msg)
  {}
  Init_LinkArray_traffic_stop_wp mode(::autocar_msgs::msg::LinkArray::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_LinkArray_traffic_stop_wp(msg_);
  }

private:
  ::autocar_msgs::msg::LinkArray msg_;
};

class Init_LinkArray_closest_wp
{
public:
  explicit Init_LinkArray_closest_wp(::autocar_msgs::msg::LinkArray & msg)
  : msg_(msg)
  {}
  Init_LinkArray_mode closest_wp(::autocar_msgs::msg::LinkArray::_closest_wp_type arg)
  {
    msg_.closest_wp = std::move(arg);
    return Init_LinkArray_mode(msg_);
  }

private:
  ::autocar_msgs::msg::LinkArray msg_;
};

class Init_LinkArray_link_num
{
public:
  Init_LinkArray_link_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinkArray_closest_wp link_num(::autocar_msgs::msg::LinkArray::_link_num_type arg)
  {
    msg_.link_num = std::move(arg);
    return Init_LinkArray_closest_wp(msg_);
  }

private:
  ::autocar_msgs::msg::LinkArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocar_msgs::msg::LinkArray>()
{
  return autocar_msgs::msg::builder::Init_LinkArray_link_num();
}

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__LINK_ARRAY__BUILDER_HPP_
