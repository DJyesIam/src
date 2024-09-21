// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocar_msgs:msg/ObjectArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__OBJECT_ARRAY__BUILDER_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__OBJECT_ARRAY__BUILDER_HPP_

#include "autocar_msgs/msg/detail/object_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autocar_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectArray_object_list
{
public:
  explicit Init_ObjectArray_object_list(::autocar_msgs::msg::ObjectArray & msg)
  : msg_(msg)
  {}
  ::autocar_msgs::msg::ObjectArray object_list(::autocar_msgs::msg::ObjectArray::_object_list_type arg)
  {
    msg_.object_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocar_msgs::msg::ObjectArray msg_;
};

class Init_ObjectArray_header
{
public:
  Init_ObjectArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectArray_object_list header(::autocar_msgs::msg::ObjectArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectArray_object_list(msg_);
  }

private:
  ::autocar_msgs::msg::ObjectArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocar_msgs::msg::ObjectArray>()
{
  return autocar_msgs::msg::builder::Init_ObjectArray_header();
}

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__OBJECT_ARRAY__BUILDER_HPP_
