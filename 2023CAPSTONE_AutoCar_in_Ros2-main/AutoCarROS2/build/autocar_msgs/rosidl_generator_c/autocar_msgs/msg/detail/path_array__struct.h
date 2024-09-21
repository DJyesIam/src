// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocar_msgs:msg/PathArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__PATH_ARRAY__STRUCT_H_
#define AUTOCAR_MSGS__MSG__DETAIL__PATH_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'yaw'
#include "std_msgs/msg/detail/float64_multi_array__struct.h"

// Struct defined in msg/PathArray in the package autocar_msgs.
typedef struct autocar_msgs__msg__PathArray
{
  std_msgs__msg__Float64MultiArray x;
  std_msgs__msg__Float64MultiArray y;
  std_msgs__msg__Float64MultiArray yaw;
} autocar_msgs__msg__PathArray;

// Struct for a sequence of autocar_msgs__msg__PathArray.
typedef struct autocar_msgs__msg__PathArray__Sequence
{
  autocar_msgs__msg__PathArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocar_msgs__msg__PathArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCAR_MSGS__MSG__DETAIL__PATH_ARRAY__STRUCT_H_
