// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autocar_msgs:msg/PolygonArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autocar_msgs/msg/detail/polygon_array__rosidl_typesupport_introspection_c.h"
#include "autocar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autocar_msgs/msg/detail/polygon_array__functions.h"
#include "autocar_msgs/msg/detail/polygon_array__struct.h"


// Include directives for member types
// Member `polygon_list`
#include "autocar_msgs/msg/polygon.h"
// Member `polygon_list`
#include "autocar_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocar_msgs__msg__PolygonArray__init(message_memory);
}

void PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_fini_function(void * message_memory)
{
  autocar_msgs__msg__PolygonArray__fini(message_memory);
}

size_t PolygonArray__rosidl_typesupport_introspection_c__size_function__Polygon__polygon_list(
  const void * untyped_member)
{
  const autocar_msgs__msg__Polygon__Sequence * member =
    (const autocar_msgs__msg__Polygon__Sequence *)(untyped_member);
  return member->size;
}

const void * PolygonArray__rosidl_typesupport_introspection_c__get_const_function__Polygon__polygon_list(
  const void * untyped_member, size_t index)
{
  const autocar_msgs__msg__Polygon__Sequence * member =
    (const autocar_msgs__msg__Polygon__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PolygonArray__rosidl_typesupport_introspection_c__get_function__Polygon__polygon_list(
  void * untyped_member, size_t index)
{
  autocar_msgs__msg__Polygon__Sequence * member =
    (autocar_msgs__msg__Polygon__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PolygonArray__rosidl_typesupport_introspection_c__resize_function__Polygon__polygon_list(
  void * untyped_member, size_t size)
{
  autocar_msgs__msg__Polygon__Sequence * member =
    (autocar_msgs__msg__Polygon__Sequence *)(untyped_member);
  autocar_msgs__msg__Polygon__Sequence__fini(member);
  return autocar_msgs__msg__Polygon__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_message_member_array[1] = {
  {
    "polygon_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__PolygonArray, polygon_list),  // bytes offset in struct
    NULL,  // default value
    PolygonArray__rosidl_typesupport_introspection_c__size_function__Polygon__polygon_list,  // size() function pointer
    PolygonArray__rosidl_typesupport_introspection_c__get_const_function__Polygon__polygon_list,  // get_const(index) function pointer
    PolygonArray__rosidl_typesupport_introspection_c__get_function__Polygon__polygon_list,  // get(index) function pointer
    PolygonArray__rosidl_typesupport_introspection_c__resize_function__Polygon__polygon_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_message_members = {
  "autocar_msgs__msg",  // message namespace
  "PolygonArray",  // message name
  1,  // number of fields
  sizeof(autocar_msgs__msg__PolygonArray),
  PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_message_member_array,  // message members
  PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_init_function,  // function to initialize message memory (memory has to be allocated)
  PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_message_type_support_handle = {
  0,
  &PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocar_msgs, msg, PolygonArray)() {
  PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocar_msgs, msg, Polygon)();
  if (!PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_message_type_support_handle.typesupport_identifier) {
    PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PolygonArray__rosidl_typesupport_introspection_c__PolygonArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
