// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocar_msgs:msg/PolygonArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOCAR_MSGS__MSG__DETAIL__POLYGON_ARRAY__STRUCT_H_
#define AUTOCAR_MSGS__MSG__DETAIL__POLYGON_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'polygon_list'
#include "autocar_msgs/msg/detail/polygon__struct.h"

// Struct defined in msg/PolygonArray in the package autocar_msgs.
typedef struct autocar_msgs__msg__PolygonArray
{
  autocar_msgs__msg__Polygon__Sequence polygon_list;
} autocar_msgs__msg__PolygonArray;

// Struct for a sequence of autocar_msgs__msg__PolygonArray.
typedef struct autocar_msgs__msg__PolygonArray__Sequence
{
  autocar_msgs__msg__PolygonArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocar_msgs__msg__PolygonArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCAR_MSGS__MSG__DETAIL__POLYGON_ARRAY__STRUCT_H_
