// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autocar_msgs:msg/ObjectArray.idl
// generated code does not contain a copyright notice
#include "autocar_msgs/msg/detail/object_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `object_list`
#include "autocar_msgs/msg/detail/object__functions.h"

bool
autocar_msgs__msg__ObjectArray__init(autocar_msgs__msg__ObjectArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autocar_msgs__msg__ObjectArray__fini(msg);
    return false;
  }
  // object_list
  if (!autocar_msgs__msg__Object__Sequence__init(&msg->object_list, 0)) {
    autocar_msgs__msg__ObjectArray__fini(msg);
    return false;
  }
  return true;
}

void
autocar_msgs__msg__ObjectArray__fini(autocar_msgs__msg__ObjectArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // object_list
  autocar_msgs__msg__Object__Sequence__fini(&msg->object_list);
}

bool
autocar_msgs__msg__ObjectArray__are_equal(const autocar_msgs__msg__ObjectArray * lhs, const autocar_msgs__msg__ObjectArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // object_list
  if (!autocar_msgs__msg__Object__Sequence__are_equal(
      &(lhs->object_list), &(rhs->object_list)))
  {
    return false;
  }
  return true;
}

bool
autocar_msgs__msg__ObjectArray__copy(
  const autocar_msgs__msg__ObjectArray * input,
  autocar_msgs__msg__ObjectArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // object_list
  if (!autocar_msgs__msg__Object__Sequence__copy(
      &(input->object_list), &(output->object_list)))
  {
    return false;
  }
  return true;
}

autocar_msgs__msg__ObjectArray *
autocar_msgs__msg__ObjectArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocar_msgs__msg__ObjectArray * msg = (autocar_msgs__msg__ObjectArray *)allocator.allocate(sizeof(autocar_msgs__msg__ObjectArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autocar_msgs__msg__ObjectArray));
  bool success = autocar_msgs__msg__ObjectArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autocar_msgs__msg__ObjectArray__destroy(autocar_msgs__msg__ObjectArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autocar_msgs__msg__ObjectArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autocar_msgs__msg__ObjectArray__Sequence__init(autocar_msgs__msg__ObjectArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocar_msgs__msg__ObjectArray * data = NULL;

  if (size) {
    data = (autocar_msgs__msg__ObjectArray *)allocator.zero_allocate(size, sizeof(autocar_msgs__msg__ObjectArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autocar_msgs__msg__ObjectArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autocar_msgs__msg__ObjectArray__fini(&data[i - 1]);
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
autocar_msgs__msg__ObjectArray__Sequence__fini(autocar_msgs__msg__ObjectArray__Sequence * array)
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
      autocar_msgs__msg__ObjectArray__fini(&array->data[i]);
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

autocar_msgs__msg__ObjectArray__Sequence *
autocar_msgs__msg__ObjectArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocar_msgs__msg__ObjectArray__Sequence * array = (autocar_msgs__msg__ObjectArray__Sequence *)allocator.allocate(sizeof(autocar_msgs__msg__ObjectArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autocar_msgs__msg__ObjectArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autocar_msgs__msg__ObjectArray__Sequence__destroy(autocar_msgs__msg__ObjectArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autocar_msgs__msg__ObjectArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autocar_msgs__msg__ObjectArray__Sequence__are_equal(const autocar_msgs__msg__ObjectArray__Sequence * lhs, const autocar_msgs__msg__ObjectArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autocar_msgs__msg__ObjectArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autocar_msgs__msg__ObjectArray__Sequence__copy(
  const autocar_msgs__msg__ObjectArray__Sequence * input,
  autocar_msgs__msg__ObjectArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autocar_msgs__msg__ObjectArray);
    autocar_msgs__msg__ObjectArray * data =
      (autocar_msgs__msg__ObjectArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autocar_msgs__msg__ObjectArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autocar_msgs__msg__ObjectArray__fini(&data[i]);
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
    if (!autocar_msgs__msg__ObjectArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
