// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autocar_msgs:msg/ObjectArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autocar_msgs/msg/detail/object_array__rosidl_typesupport_introspection_c.h"
#include "autocar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autocar_msgs/msg/detail/object_array__functions.h"
#include "autocar_msgs/msg/detail/object_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `object_list`
#include "autocar_msgs/msg/object.h"
// Member `object_list`
#include "autocar_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocar_msgs__msg__ObjectArray__init(message_memory);
}

void ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_fini_function(void * message_memory)
{
  autocar_msgs__msg__ObjectArray__fini(message_memory);
}

size_t ObjectArray__rosidl_typesupport_introspection_c__size_function__Object__object_list(
  const void * untyped_member)
{
  const autocar_msgs__msg__Object__Sequence * member =
    (const autocar_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * ObjectArray__rosidl_typesupport_introspection_c__get_const_function__Object__object_list(
  const void * untyped_member, size_t index)
{
  const autocar_msgs__msg__Object__Sequence * member =
    (const autocar_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ObjectArray__rosidl_typesupport_introspection_c__get_function__Object__object_list(
  void * untyped_member, size_t index)
{
  autocar_msgs__msg__Object__Sequence * member =
    (autocar_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ObjectArray__rosidl_typesupport_introspection_c__resize_function__Object__object_list(
  void * untyped_member, size_t size)
{
  autocar_msgs__msg__Object__Sequence * member =
    (autocar_msgs__msg__Object__Sequence *)(untyped_member);
  autocar_msgs__msg__Object__Sequence__fini(member);
  return autocar_msgs__msg__Object__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__ObjectArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocar_msgs__msg__ObjectArray, object_list),  // bytes offset in struct
    NULL,  // default value
    ObjectArray__rosidl_typesupport_introspection_c__size_function__Object__object_list,  // size() function pointer
    ObjectArray__rosidl_typesupport_introspection_c__get_const_function__Object__object_list,  // get_const(index) function pointer
    ObjectArray__rosidl_typesupport_introspection_c__get_function__Object__object_list,  // get(index) function pointer
    ObjectArray__rosidl_typesupport_introspection_c__resize_function__Object__object_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_members = {
  "autocar_msgs__msg",  // message namespace
  "ObjectArray",  // message name
  2,  // number of fields
  sizeof(autocar_msgs__msg__ObjectArray),
  ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_member_array,  // message members
  ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_type_support_handle = {
  0,
  &ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocar_msgs, msg, ObjectArray)() {
  ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocar_msgs, msg, Object)();
  if (!ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_type_support_handle.typesupport_identifier) {
    ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
