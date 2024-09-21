// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocar_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__POLYGON__STRUCT_H_
#define AUTOCAR_MSGS__MSG__DETAIL__POLYGON__STRUCT_H_

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
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Polygon in the package autocar_msgs.
typedef struct autocar_msgs__msg__Polygon
{
  int32_t n;
  rosidl_runtime_c__float__Sequence x;
  rosidl_runtime_c__float__Sequence y;
} autocar_msgs__msg__Polygon;

// Struct for a sequence of autocar_msgs__msg__Polygon.
typedef struct autocar_msgs__msg__Polygon__Sequence
{
  autocar_msgs__msg__Polygon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocar_msgs__msg__Polygon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCAR_MSGS__MSG__DETAIL__POLYGON__STRUCT_H_
