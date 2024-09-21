// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocar_msgs:msg/PolygonArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__POLYGON_ARRAY__BUILDER_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__POLYGON_ARRAY__BUILDER_HPP_

#include "autocar_msgs/msg/detail/polygon_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autocar_msgs
{

namespace msg
{

namespace builder
{

class Init_PolygonArray_polygon_list
{
public:
  Init_PolygonArray_polygon_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autocar_msgs::msg::PolygonArray polygon_list(::autocar_msgs::msg::PolygonArray::_polygon_list_type arg)
  {
    msg_.polygon_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocar_msgs::msg::PolygonArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocar_msgs::msg::PolygonArray>()
{
  return autocar_msgs::msg::builder::Init_PolygonArray_polygon_list();
}

}  // namespace autocar_msgs

#endif  // AUTOCAR_MSGS__MSG__DETAIL__POLYGON_ARRAY__BUILDER_HPP_
