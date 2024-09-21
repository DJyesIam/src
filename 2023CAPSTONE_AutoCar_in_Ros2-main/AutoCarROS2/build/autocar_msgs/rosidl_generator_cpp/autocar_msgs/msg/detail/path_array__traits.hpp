// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autocar_msgs:msg/PathArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__PATH_ARRAY__TRAITS_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__PATH_ARRAY__TRAITS_HPP_

#include "autocar_msgs/msg/detail/path_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'yaw'
#include "std_msgs/msg/detail/float64_multi_array__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autocar_msgs::msg::PathArray>()
{
  return "autocar_msgs::msg::PathArray";
}

template<>
inline const char * name<autocar_msgs::msg::PathArray>()
{
  return "autocar_msgs/msg/PathArray";
}

template<>
struct has_fixed_size<autocar_msgs::msg::PathArray>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64MultiArray>::value> {};

template<>
struct has_bounded_size<autocar_msgs::msg::PathArray>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64MultiArray>::value> {};

template<>
struct is_message<autocar_msgs::msg::PathArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOCAR_MSGS__MSG__DETAIL__PATH_ARRAY__TRAITS_HPP_
