// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autocar_msgs:msg/LinkArray.idl
// generated code does not contain a copyright notice
#include "autocar_msgs/msg/detail/link_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mode`
// Member `direction`
// Member `next_path`
#include "rosidl_runtime_c/string_functions.h"

bool
autocar_msgs__msg__LinkArray__init(autocar_msgs__msg__LinkArray * msg)
{
  if (!msg) {
    return false;
  }
  // link_num
  // closest_wp
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    autocar_msgs__msg__LinkArray__fini(msg);
    return false;
  }
  // traffic_stop_wp
  // parking_stop_wp
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    autocar_msgs__msg__LinkArray__fini(msg);
    return false;
  }
  // next_path
  if (!rosidl_runtime_c__String__init(&msg->next_path)) {
    autocar_msgs__msg__LinkArray__fini(msg);
    return false;
  }
  return true;
}

void
autocar_msgs__msg__LinkArray__fini(autocar_msgs__msg__LinkArray * msg)
{
  if (!msg) {
    return;
  }
  // link_num
  // closest_wp
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // traffic_stop_wp
  // parking_stop_wp
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
  // next_path
  rosidl_runtime_c__String__fini(&msg->next_path);
}

bool
autocar_msgs__msg__LinkArray__are_equal(const autocar_msgs__msg__LinkArray * lhs, const autocar_msgs__msg__LinkArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // link_num
  if (lhs->link_num != rhs->link_num) {
    return false;
  }
  // closest_wp
  if (lhs->closest_wp != rhs->closest_wp) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // traffic_stop_wp
  if (lhs->traffic_stop_wp != rhs->traffic_stop_wp) {
    return false;
  }
  // parking_stop_wp
  if (lhs->parking_stop_wp != rhs->parking_stop_wp) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // next_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->next_path), &(rhs->next_path)))
  {
    return false;
  }
  return true;
}

bool
autocar_msgs__msg__LinkArray__copy(
  const autocar_msgs__msg__LinkArray * input,
  autocar_msgs__msg__LinkArray * output)
{
  if (!input || !output) {
    return false;
  }
  // link_num
  output->link_num = input->link_num;
  // closest_wp
  output->closest_wp = input->closest_wp;
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // traffic_stop_wp
  output->traffic_stop_wp = input->traffic_stop_wp;
  // parking_stop_wp
  output->parking_stop_wp = input->parking_stop_wp;
  // direction
  if (!rosidl_runtime_c__String__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // next_path
  if (!rosidl_runtime_c__String__copy(
      &(input->next_path), &(output->next_path)))
  {
    return false;
  }
  return true;
}

autocar_msgs__msg__LinkArray *
autocar_msgs__msg__LinkArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocar_msgs__msg__LinkArray * msg = (autocar_msgs__msg__LinkArray *)allocator.allocate(sizeof(autocar_msgs__msg__LinkArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autocar_msgs__msg__LinkArray));
  bool success = autocar_msgs__msg__LinkArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autocar_msgs__msg__LinkArray__destroy(autocar_msgs__msg__LinkArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autocar_msgs__msg__LinkArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autocar_msgs__msg__LinkArray__Sequence__init(autocar_msgs__msg__LinkArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocar_msgs__msg__LinkArray * data = NULL;

  if (size) {
    data = (autocar_msgs__msg__LinkArray *)allocator.zero_allocate(size, sizeof(autocar_msgs__msg__LinkArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autocar_msgs__msg__LinkArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autocar_msgs__msg__LinkArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
autocar_msgs__msg__LinkArray__Sequence__fini(autocar_msgs__msg__LinkArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autocar_msgs__msg__LinkArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

autocar_msgs__msg__LinkArray__Sequence *
autocar_msgs__msg__LinkArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocar_msgs__msg__LinkArray__Sequence * array = (autocar_msgs__msg__LinkArray__Sequence *)allocator.allocate(sizeof(autocar_msgs__msg__LinkArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autocar_msgs__msg__LinkArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autocar_msgs__msg__LinkArray__Sequence__destroy(autocar_msgs__msg__LinkArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autocar_msgs__msg__LinkArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autocar_msgs__msg__LinkArray__Sequence__are_equal(const autocar_msgs__msg__LinkArray__Sequence * lhs, const autocar_msgs__msg__LinkArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autocar_msgs__msg__LinkArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autocar_msgs__msg__LinkArray__Sequence__copy(
  const autocar_msgs__msg__LinkArray__Sequence * input,
  autocar_msgs__msg__LinkArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autocar_msgs__msg__LinkArray);
    autocar_msgs__msg__LinkArray * data =
      (autocar_msgs__msg__LinkArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autocar_msgs__msg__LinkArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autocar_msgs__msg__LinkArray__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autocar_msgs__msg__LinkArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
