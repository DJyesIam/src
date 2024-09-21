// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocar_msgs:msg/LinkArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__LINK_ARRAY__STRUCT_H_
#define AUTOCAR_MSGS__MSG__DETAIL__LINK_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
// Member 'direction'
// Member 'next_path'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/LinkArray in the package autocar_msgs.
typedef struct autocar_msgs__msg__LinkArray
{
  int32_t link_num;
  int32_t closest_wp;
  rosidl_runtime_c__String mode;
  int32_t traffic_stop_wp;
  int32_t parking_stop_wp;
  rosidl_runtime_c__String direction;
  rosidl_runtime_c__String next_path;
} autocar_msgs__msg__LinkArray;

// Struct for a sequence of autocar_msgs__msg__LinkArray.
typedef struct autocar_msgs__msg__LinkArray__Sequence
{
  autocar_msgs__msg__LinkArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocar_msgs__msg__LinkArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCAR_MSGS__MSG__DETAIL__LINK_ARRAY__STRUCT_H_
