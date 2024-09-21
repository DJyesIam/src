// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autocar_msgs:msg/PolygonArray.idl
// generated code does not contain a copyright notice
#include "autocar_msgs/msg/detail/polygon_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autocar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autocar_msgs/msg/detail/polygon_array__struct.h"
#include "autocar_msgs/msg/detail/polygon_array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "autocar_msgs/msg/detail/polygon__functions.h"  // polygon_list

// forward declare type support functions
size_t get_serialized_size_autocar_msgs__msg__Polygon(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autocar_msgs__msg__Polygon(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocar_msgs, msg, Polygon)();


using _PolygonArray__ros_msg_type = autocar_msgs__msg__PolygonArray;

static bool _PolygonArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PolygonArray__ros_msg_type * ros_message = static_cast<const _PolygonArray__ros_msg_type *>(untyped_ros_message);
  // Field name: polygon_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autocar_msgs, msg, Polygon
      )()->data);
    size_t size = ros_message->polygon_list.size;
    auto array_ptr = ros_message->polygon_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _PolygonArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PolygonArray__ros_msg_type * ros_message = static_cast<_PolygonArray__ros_msg_type *>(untyped_ros_message);
  // Field name: polygon_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autocar_msgs, msg, Polygon
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->polygon_list.data) {
      autocar_msgs__msg__Polygon__Sequence__fini(&ros_message->polygon_list);
    }
    if (!autocar_msgs__msg__Polygon__Sequence__init(&ros_message->polygon_list, size)) {
      return "failed to create array for field 'polygon_list'";
    }
    auto array_ptr = ros_message->polygon_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocar_msgs
size_t get_serialized_size_autocar_msgs__msg__PolygonArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PolygonArray__ros_msg_type * ros_message = static_cast<const _PolygonArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name polygon_list
  {
    size_t array_size = ros_message->polygon_list.size;
    auto array_ptr = ros_message->polygon_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_autocar_msgs__msg__Polygon(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PolygonArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autocar_msgs__msg__PolygonArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocar_msgs
size_t max_serialized_size_autocar_msgs__msg__PolygonArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: polygon_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autocar_msgs__msg__Polygon(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PolygonArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autocar_msgs__msg__PolygonArray(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PolygonArray = {
  "autocar_msgs::msg",
  "PolygonArray",
  _PolygonArray__cdr_serialize,
  _PolygonArray__cdr_deserialize,
  _PolygonArray__get_serialized_size,
  _PolygonArray__max_serialized_size
};

static rosidl_message_type_support_t _PolygonArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PolygonArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocar_msgs, msg, PolygonArray)() {
  return &_PolygonArray__type_support;
}

#if defined(__cplusplus)
}
#endif
