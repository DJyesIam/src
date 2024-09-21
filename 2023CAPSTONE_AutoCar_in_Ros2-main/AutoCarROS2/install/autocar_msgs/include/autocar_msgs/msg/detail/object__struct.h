// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocar_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
#define AUTOCAR_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CLASSIFICATION_UNKNOWN'.
enum
{
  autocar_msgs__msg__Object__CLASSIFICATION_UNKNOWN = 0
};

/// Constant 'CLASSIFICATION_CAR'.
enum
{
  autocar_msgs__msg__Object__CLASSIFICATION_CAR = 1
};

/// Constant 'CLASSIFICATION_PEDESTRIAN'.
enum
{
  autocar_msgs__msg__Object__CLASSIFICATION_PEDESTRIAN = 2
};

/// Constant 'CLASSIFICATION_CYCLIST'.
enum
{
  autocar_msgs__msg__Object__CLASSIFICATION_CYCLIST = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/Object in the package autocar_msgs.
typedef struct autocar_msgs__msg__Object
{
  std_msgs__msg__Header header;
  uint32_t id;
  uint8_t classification;
  float x;
  float y;
  float yaw;
  float v;
  float yawrate;
  float a;
  float delta;
  float length;
  float width;
} autocar_msgs__msg__Object;

// Struct for a sequence of autocar_msgs__msg__Object.
typedef struct autocar_msgs__msg__Object__Sequence
{
  autocar_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocar_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCAR_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
