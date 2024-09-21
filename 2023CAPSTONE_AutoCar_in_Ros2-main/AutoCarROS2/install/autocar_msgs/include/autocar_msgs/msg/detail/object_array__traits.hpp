// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autocar_msgs:msg/ObjectArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__OBJECT_ARRAY__TRAITS_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__OBJECT_ARRAY__TRAITS_HPP_

#include "autocar_msgs/msg/detail/object_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autocar_msgs::msg::ObjectArray>()
{
  return "autocar_msgs::msg::ObjectArray";
}

template<>
inline const char * name<autocar_msgs::msg::ObjectArray>()
{
  return "autocar_msgs/msg/ObjectArray";
}

template<>
struct has_fixed_size<autocar_msgs::msg::ObjectArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autocar_msgs::msg::ObjectArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autocar_msgs::msg::ObjectArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOCAR_MSGS__MSG__DETAIL__OBJECT_ARRAY__TRAITS_HPP_
