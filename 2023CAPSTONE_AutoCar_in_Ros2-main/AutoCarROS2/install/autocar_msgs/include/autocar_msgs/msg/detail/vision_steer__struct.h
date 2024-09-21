// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocar_msgs:msg/VisionSteer.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__VISION_STEER__STRUCT_H_
#define AUTOCAR_MSGS__MSG__DETAIL__VISION_STEER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VisionSteer in the package autocar_msgs.
typedef struct autocar_msgs__msg__VisionSteer
{
  bool detected;
  float steer;
} autocar_msgs__msg__VisionSteer;

// Struct for a sequence of autocar_msgs__msg__VisionSteer.
typedef struct autocar_msgs__msg__VisionSteer__Sequence
{
  autocar_msgs__msg__VisionSteer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocar_msgs__msg__VisionSteer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCAR_MSGS__MSG__DETAIL__VISION_STEER__STRUCT_H_
