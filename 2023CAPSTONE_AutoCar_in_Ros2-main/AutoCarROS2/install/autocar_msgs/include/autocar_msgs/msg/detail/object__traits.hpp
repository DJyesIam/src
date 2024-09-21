// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autocar_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include "autocar_msgs/msg/detail/object__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autocar_msgs::msg::Object>()
{
  return "autocar_msgs::msg::Object";
}

template<>
inline const char * name<autocar_msgs::msg::Object>()
{
  return "autocar_msgs/msg/Object";
}

template<>
struct has_fixed_size<autocar_msgs::msg::Object>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autocar_msgs::msg::Object>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autocar_msgs::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOCAR_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
