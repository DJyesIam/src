// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autocar_msgs:msg/PathArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autocar_msgs/msg/detail/path_array__rosidl_typesupport_introspection_c.h"
#include "autocar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autocar_msgs/msg/detail/path_array__functions.h"
#include "autocar_msgs/msg/detail/path_array__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `yaw`
#include "std_msgs/msg/float64_multi_array.h"
// Member `x`
// Member `y`
// Member `yaw`
#include "std_msgs/msg/detail/float64_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PathArray__rosidl_typesupport_introspection_c__PathArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocar_msgs__msg__PathArray__init(message_memory);
}

void PathArray__rosidl_typesupport_introspection_c__PathArray_fini_function(void * message_memory)
{
  autocar_msgs__msg__PathArray__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PathArray__rosidl_typesupport_introspection_c__PathArray_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__PathArray, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__PathArray, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__PathArray, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathArray__rosidl_typesupport_introspection_c__PathArray_message_members = {
  "autocar_msgs__msg",  // message namespace
  "PathArray",  // message name
  3,  // number of fields
  sizeof(autocar_msgs__msg__PathArray),
  PathArray__rosidl_typesupport_introspection_c__PathArray_message_member_array,  // message members
  PathArray__rosidl_typesupport_introspection_c__PathArray_init_function,  // function to initialize message memory (memory has to be allocated)
  PathArray__rosidl_typesupport_introspection_c__PathArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathArray__rosidl_typesupport_introspection_c__PathArray_message_type_support_handle = {
  0,
  &PathArray__rosidl_typesupport_introspection_c__PathArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocar_msgs, msg, PathArray)() {
  PathArray__rosidl_typesupport_introspection_c__PathArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64MultiArray)();
  PathArray__rosidl_typesupport_introspection_c__PathArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64MultiArray)();
  PathArray__rosidl_typesupport_introspection_c__PathArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64MultiArray)();
  if (!PathArray__rosidl_typesupport_introspection_c__PathArray_message_type_support_handle.typesupport_identifier) {
    PathArray__rosidl_typesupport_introspection_c__PathArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathArray__rosidl_typesupport_introspection_c__PathArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
