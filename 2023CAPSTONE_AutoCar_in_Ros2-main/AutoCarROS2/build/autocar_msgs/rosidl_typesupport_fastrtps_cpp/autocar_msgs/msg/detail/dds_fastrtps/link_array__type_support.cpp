// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autocar_msgs:msg/LinkArray.idl
// generated code does not contain a copyright notice
#include "autocar_msgs/msg/detail/link_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autocar_msgs/msg/detail/link_array__struct.hpp"

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
  const autocar_msgs::msg::LinkArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: link_num
  cdr << ros_message.link_num;
  // Member: closest_wp
  cdr << ros_message.closest_wp;
  // Member: mode
  cdr << ros_message.mode;
  // Member: traffic_stop_wp
  cdr << ros_message.traffic_stop_wp;
  // Member: parking_stop_wp
  cdr << ros_message.parking_stop_wp;
  // Member: direction
  cdr << ros_message.direction;
  // Member: next_path
  cdr << ros_message.next_path;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autocar_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autocar_msgs::msg::LinkArray & ros_message)
{
  // Member: link_num
  cdr >> ros_message.link_num;

  // Member: closest_wp
  cdr >> ros_message.closest_wp;

  // Member: mode
  cdr >> ros_message.mode;

  // Member: traffic_stop_wp
  cdr >> ros_message.traffic_stop_wp;

  // Member: parking_stop_wp
  cdr >> ros_message.parking_stop_wp;

  // Member: direction
  cdr >> ros_message.direction;

  // Member: next_path
  cdr >> ros_message.next_path;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autocar_msgs
get_serialized_size(
  const autocar_msgs::msg::LinkArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: link_num
  {
    size_t item_size = sizeof(ros_message.link_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: closest_wp
  {
    size_t item_size = sizeof(ros_message.closest_wp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mode.size() + 1);
  // Member: traffic_stop_wp
  {
    size_t item_size = sizeof(ros_message.traffic_stop_wp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: parking_stop_wp
  {
    size_t item_size = sizeof(ros_message.parking_stop_wp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.direction.size() + 1);
  // Member: next_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.next_path.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autocar_msgs
max_serialized_size_LinkArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: link_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: closest_wp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: traffic_stop_wp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: parking_stop_wp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: direction
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: next_path
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LinkArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autocar_msgs::msg::LinkArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LinkArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autocar_msgs::msg::LinkArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LinkArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autocar_msgs::msg::LinkArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LinkArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LinkArray(full_bounded, 0);
}

static message_type_support_callbacks_t _LinkArray__callbacks = {
  "autocar_msgs::msg",
  "LinkArray",
  _LinkArray__cdr_serialize,
  _LinkArray__cdr_deserialize,
  _LinkArray__get_serialized_size,
  _LinkArray__max_serialized_size
};

static rosidl_message_type_support_t _LinkArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LinkArray__callbacks,
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
get_message_type_support_handle<autocar_msgs::msg::LinkArray>()
{
  return &autocar_msgs::msg::typesupport_fastrtps_cpp::_LinkArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autocar_msgs, msg, LinkArray)() {
  return &autocar_msgs::msg::typesupport_fastrtps_cpp::_LinkArray__handle;
}

#ifdef __cplusplus
}
#endif
