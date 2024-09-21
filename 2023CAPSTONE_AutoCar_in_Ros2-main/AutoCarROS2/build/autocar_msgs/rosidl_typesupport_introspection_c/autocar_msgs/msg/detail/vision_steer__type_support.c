// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autocar_msgs:msg/VisionSteer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autocar_msgs/msg/detail/vision_steer__rosidl_typesupport_introspection_c.h"
#include "autocar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autocar_msgs/msg/detail/vision_steer__functions.h"
#include "autocar_msgs/msg/detail/vision_steer__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void VisionSteer__rosidl_typesupport_introspection_c__VisionSteer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocar_msgs__msg__VisionSteer__init(message_memory);
}

void VisionSteer__rosidl_typesupport_introspection_c__VisionSteer_fini_function(void * message_memory)
{
  autocar_msgs__msg__VisionSteer__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VisionSteer__rosidl_typesupport_introspection_c__VisionSteer_message_member_array[2] = {
  {
    "detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__VisionSteer, detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__VisionSteer, steer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VisionSteer__rosidl_typesupport_introspection_c__VisionSteer_message_members = {
  "autocar_msgs__msg",  // message namespace
  "VisionSteer",  // message name
  2,  // number of fields
  sizeof(autocar_msgs__msg__VisionSteer),
  VisionSteer__rosidl_typesupport_introspection_c__VisionSteer_message_member_array,  // message members
  VisionSteer__rosidl_typesupport_introspection_c__VisionSteer_init_function,  // function to initialize message memory (memory has to be allocated)
  VisionSteer__rosidl_typesupport_introspection_c__VisionSteer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VisionSteer__rosidl_typesupport_introspection_c__VisionSteer_message_type_support_handle = {
  0,
  &VisionSteer__rosidl_typesupport_introspection_c__VisionSteer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocar_msgs, msg, VisionSteer)() {
  if (!VisionSteer__rosidl_typesupport_introspection_c__VisionSteer_message_type_support_handle.typesupport_identifier) {
    VisionSteer__rosidl_typesupport_introspection_c__VisionSteer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VisionSteer__rosidl_typesupport_introspection_c__VisionSteer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
