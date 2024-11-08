// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autocar_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
#define AUTOCAR_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_

#include "autocar_msgs/msg/detail/obstacle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autocar_msgs::msg::Obstacle>()
{
  return "autocar_msgs::msg::Obstacle";
}

template<>
inline const char * name<autocar_msgs::msg::Obstacle>()
{
  return "autocar_msgs/msg/Obstacle";
}

template<>
struct has_fixed_size<autocar_msgs::msg::Obstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autocar_msgs::msg::Obstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autocar_msgs::msg::Obstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOCAR_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
