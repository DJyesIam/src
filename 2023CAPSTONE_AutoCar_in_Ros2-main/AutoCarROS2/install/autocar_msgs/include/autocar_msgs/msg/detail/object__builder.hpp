// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocar_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include "autocar_msgs/msg/detail/object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autocar_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_width
{
public:
  explicit Init_Object_width(::autocar_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::autocar_msgs::msg::Object width(::autocar_msgs::msg::Object::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocar_msgs::msg::Object msg_;
};

class Init_Object_length
{
public:
  explicit Init_Object_length(::autocar_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_width length(::autocar_msgs::msg::Object::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_Object_width(msg_);
  }

private:
  ::autocar_msgs::msg::Object msg_;
};

class Init_Object_delta
{
public:
  explicit Init_Object_delta(::autocar_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_length delta(::autocar_msgs::msg::Object::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return Init_Object_length(msg_);
  }

private:
  ::autocar_msgs::msg::Object msg_;
};

class Init_Object_a
{
public:
  explicit Init_Object_a(::autocar_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_delta a(::autocar_msgs::msg::Object::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Object_delta(msg_);
  }

private:
  ::autocar_msgs::msg::Object msg_;
};

class Init_Object_yawrate
{
public:
  explicit Init_Object_yawrate(::autocar_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_a yawrate(::autocar_msgs::msg::Object::_yawrate_type arg)
  {
    msg_.yawrate = std::move(arg);
    return Init_Object_a(msg_);
  }

private:
  ::autocar_msgs::msg::Object msg_;
};

class Init_Object_v
{
public:
  explicit Init_Object_v(::autocar_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_yawrate v(::autocar_msgs::msg::Object::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_Object_yawrate(msg_);
  }

private:
  ::autocar_msgs::msg::Object msg_;
};

class Init_Object_yaw
{
public:
  explicit Init_Object_yaw(::autocar_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_v yaw(::autocar_msgs::msg::Object::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Object_v(msg_);
  }

private:
  ::autocar_msgs::msg::Object msg_;
};

class Init_Object_y
{
public:
  explicit Init_Object_y(::autocar_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_yaw y(::autocar_msgs::msg::Object::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Object_yaw(msg_);
  }

private:
  ::autocar_msgs::msg::Object msg_;
};

class Init_Object_x
{
public:
  explicit Init_Object_x(::autocar_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_y x(::autocar_msgs::msg::Object::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Object_y(msg_);
  }

private:
  ::autocar_msgs::msg::Object msg_;
};

class Init_Object_classification
{
public:
  explicit Init_Object_classification(::autocar_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_x classification(::autocar_msgs::msg::Object::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_Object_x(msg_);
  }

private:
  ::autocar_msgs::msg::Object msg_;
};

class Init_Object_id
{
public:
  explicit Init_Object_id(::autocar_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_classification id(::autocar_msgs::msg::Object::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object_classification(msg_);
  }

private:
  ::autocar_msgs::msg::Object msg_;
};

class Init_Object_header
{
public:
  Init_Object_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_id header(::autocar_msgs::msg::Object::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Object_id(msg_);
  }

private:
  ::autocar_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocar_msgs::msg::Object>()
{
  return autocar_msgs::msg::builder::Init_Object_header();
}

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
