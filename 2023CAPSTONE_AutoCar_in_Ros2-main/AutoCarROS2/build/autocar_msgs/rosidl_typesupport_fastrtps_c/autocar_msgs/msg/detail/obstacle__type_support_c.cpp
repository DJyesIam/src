// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autocar_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice
#include "autocar_msgs/msg/detail/obstacle__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autocar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autocar_msgs/msg/detail/obstacle__struct.h"
#include "autocar_msgs/msg/detail/obstacle__functions.h"
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

#include "rosidl_runtime_c/string.h"  // obstacle
#include "rosidl_runtime_c/string_functions.h"  // obstacle

// forward declare type support functions


using _Obstacle__ros_msg_type = autocar_msgs__msg__Obstacle;

static bool _Obstacle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Obstacle__ros_msg_type * ros_message = static_cast<const _Obstacle__ros_msg_type *>(untyped_ros_message);
  // Field name: detected
  {
    cdr << (ros_message->detected ? true : false);
  }

  // Field name: obstacle
  {
    const rosidl_runtime_c__String * str = &ros_message->obstacle;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  return true;
}

static bool _Obstacle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Obstacle__ros_msg_type * ros_message = static_cast<_Obstacle__ros_msg_type *>(untyped_ros_message);
  // Field name: detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->detected = tmp ? true : false;
  }

  // Field name: obstacle
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->obstacle.data) {
      rosidl_runtime_c__String__init(&ros_message->obstacle);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->obstacle,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'obstacle'\n");
      return false;
    }
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocar_msgs
size_t get_serialized_size_autocar_msgs__msg__Obstacle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Obstacle__ros_msg_type * ros_message = static_cast<const _Obstacle__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name detected
  {
    size_t item_size = sizeof(ros_message->detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->obstacle.size + 1);
  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Obstacle__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autocar_msgs__msg__Obstacle(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocar_msgs
size_t max_serialized_size_autocar_msgs__msg__Obstacle(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: detected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obstacle
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Obstacle__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autocar_msgs__msg__Obstacle(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Obstacle = {
  "autocar_msgs::msg",
  "Obstacle",
  _Obstacle__cdr_serialize,
  _Obstacle__cdr_deserialize,
  _Obstacle__get_serialized_size,
  _Obstacle__max_serialized_size
};

static rosidl_message_type_support_t _Obstacle__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Obstacle,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocar_msgs, msg, Obstacle)() {
  return &_Obstacle__type_support;
}

#if defined(__cplusplus)
}
#endif
