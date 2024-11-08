// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autocar_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autocar_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"
#include "autocar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autocar_msgs/msg/detail/polygon__functions.h"
#include "autocar_msgs/msg/detail/polygon__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Polygon__rosidl_typesupport_introspection_c__Polygon_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocar_msgs__msg__Polygon__init(message_memory);
}

void Polygon__rosidl_typesupport_introspection_c__Polygon_fini_function(void * message_memory)
{
  autocar_msgs__msg__Polygon__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Polygon__rosidl_typesupport_introspection_c__Polygon_message_member_array[3] = {
  {
    "n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__Polygon, n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__Polygon, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__Polygon, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Polygon__rosidl_typesupport_introspection_c__Polygon_message_members = {
  "autocar_msgs__msg",  // message namespace
  "Polygon",  // message name
  3,  // number of fields
  sizeof(autocar_msgs__msg__Polygon),
  Polygon__rosidl_typesupport_introspection_c__Polygon_message_member_array,  // message members
  Polygon__rosidl_typesupport_introspection_c__Polygon_init_function,  // function to initialize message memory (memory has to be allocated)
  Polygon__rosidl_typesupport_introspection_c__Polygon_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Polygon__rosidl_typesupport_introspection_c__Polygon_message_type_support_handle = {
  0,
  &Polygon__rosidl_typesupport_introspection_c__Polygon_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocar_msgs, msg, Polygon)() {
  if (!Polygon__rosidl_typesupport_introspection_c__Polygon_message_type_support_handle.typesupport_identifier) {
    Polygon__rosidl_typesupport_introspection_c__Polygon_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Polygon__rosidl_typesupport_introspection_c__Polygon_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
