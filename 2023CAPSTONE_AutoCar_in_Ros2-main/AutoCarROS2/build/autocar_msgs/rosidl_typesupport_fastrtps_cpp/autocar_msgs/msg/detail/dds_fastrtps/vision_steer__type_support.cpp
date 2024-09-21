// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autocar_msgs:msg/VisionSteer.idl
// generated code does not contain a copyright notice
#include "autocar_msgs/msg/detail/vision_steer__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autocar_msgs/msg/detail/vision_steer__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace autocar_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autocar_msgs
cdr_serialize(
  const autocar_msgs::msg::VisionSteer & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: detected
  cdr << (ros_message.detected ? true : false);
  // Member: steer
  cdr << ros_message.steer;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autocar_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autocar_msgs::msg::VisionSteer & ros_message)
{
  // Member: detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.detected = tmp ? true : false;
  }

  // Member: steer
  cdr >> ros_message.steer;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autocar_msgs
get_serialized_size(
  const autocar_msgs::msg::VisionSteer & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: detected
  {
    size_t item_size = sizeof(ros_message.detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer
  {
    size_t item_size = sizeof(ros_message.steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autocar_msgs
max_serialized_size_VisionSteer(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: detected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _VisionSteer__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autocar_msgs::msg::VisionSteer *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VisionSteer__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autocar_msgs::msg::VisionSteer *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VisionSteer__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autocar_msgs::msg::VisionSteer *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VisionSteer__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VisionSteer(full_bounded, 0);
}

static message_type_support_callbacks_t _VisionSteer__callbacks = {
  "autocar_msgs::msg",
  "VisionSteer",
  _VisionSteer__cdr_serialize,
  _VisionSteer__cdr_deserialize,
  _VisionSteer__get_serialized_size,
  _VisionSteer__max_serialized_size
};

static rosidl_message_type_support_t _VisionSteer__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VisionSteer__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autocar_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autocar_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autocar_msgs::msg::VisionSteer>()
{
  return &autocar_msgs::msg::typesupport_fastrtps_cpp::_VisionSteer__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocar_msgs, msg, VisionSteer)() {
  return &autocar_msgs::msg::typesupport_fastrtps_cpp::_VisionSteer__handle;
}

#ifdef __cplusplus
}
#endif
