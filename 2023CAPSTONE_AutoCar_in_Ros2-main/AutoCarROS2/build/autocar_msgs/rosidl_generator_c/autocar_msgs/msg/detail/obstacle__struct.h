// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocar_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
#define AUTOCAR_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obstacle'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Obstacle in the package autocar_msgs.
typedef struct autocar_msgs__msg__Obstacle
{
  bool detected;
  rosidl_runtime_c__String obstacle;
  float distance;
} autocar_msgs__msg__Obstacle;

// Struct for a sequence of autocar_msgs__msg__Obstacle.
typedef struct autocar_msgs__msg__Obstacle__Sequence
{
  autocar_msgs__msg__Obstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocar_msgs__msg__Obstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCAR_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
