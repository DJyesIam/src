// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autocar_msgs:msg/VisionSteer.idl
// generated code does not contain a copyright notice
#include "autocar_msgs/msg/detail/vision_steer__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autocar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autocar_msgs/msg/detail/vision_steer__struct.h"
#include "autocar_msgs/msg/detail/vision_steer__functions.h"
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


// forward declare type support functions


using _VisionSteer__ros_msg_type = autocar_msgs__msg__VisionSteer;

static bool _VisionSteer__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VisionSteer__ros_msg_type * ros_message = static_cast<const _VisionSteer__ros_msg_type *>(untyped_ros_message);
  // Field name: detected
  {
    cdr << (ros_message->detected ? true : false);
  }

  // Field name: steer
  {
    cdr << ros_message->steer;
  }

  return true;
}

static bool _VisionSteer__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VisionSteer__ros_msg_type * ros_message = static_cast<_VisionSteer__ros_msg_type *>(untyped_ros_message);
  // Field name: detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->detected = tmp ? true : false;
  }

  // Field name: steer
  {
    cdr >> ros_message->steer;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocar_msgs
size_t get_serialized_size_autocar_msgs__msg__VisionSteer(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VisionSteer__ros_msg_type * ros_message = static_cast<const _VisionSteer__ros_msg_type *>(untyped_ros_message);
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
  // field.name steer
  {
    size_t item_size = sizeof(ros_message->steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VisionSteer__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autocar_msgs__msg__VisionSteer(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocar_msgs
size_t max_serialized_size_autocar_msgs__msg__VisionSteer(
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
  // member: steer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _VisionSteer__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autocar_msgs__msg__VisionSteer(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VisionSteer = {
  "autocar_msgs::msg",
  "VisionSteer",
  _VisionSteer__cdr_serialize,
  _VisionSteer__cdr_deserialize,
  _VisionSteer__get_serialized_size,
  _VisionSteer__max_serialized_size
};

static rosidl_message_type_support_t _VisionSteer__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VisionSteer,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocar_msgs, msg, VisionSteer)() {
  return &_VisionSteer__type_support;
}

#if defined(__cplusplus)
}
#endif
