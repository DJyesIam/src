// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autocar_msgs:msg/PathArray.idl
// generated code does not contain a copyright notice
#include "autocar_msgs/msg/detail/path_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `yaw`
#include "std_msgs/msg/detail/float64_multi_array__functions.h"

bool
autocar_msgs__msg__PathArray__init(autocar_msgs__msg__PathArray * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!std_msgs__msg__Float64MultiArray__init(&msg->x)) {
    autocar_msgs__msg__PathArray__fini(msg);
    return false;
  }
  // y
  if (!std_msgs__msg__Float64MultiArray__init(&msg->y)) {
    autocar_msgs__msg__PathArray__fini(msg);
    return false;
  }
  // yaw
  if (!std_msgs__msg__Float64MultiArray__init(&msg->yaw)) {
    autocar_msgs__msg__PathArray__fini(msg);
    return false;
  }
  return true;
}

void
autocar_msgs__msg__PathArray__fini(autocar_msgs__msg__PathArray * msg)
{
  if (!msg) {
    return;
  }
  // x
  std_msgs__msg__Float64MultiArray__fini(&msg->x);
  // y
  std_msgs__msg__Float64MultiArray__fini(&msg->y);
  // yaw
  std_msgs__msg__Float64MultiArray__fini(&msg->yaw);
}

bool
autocar_msgs__msg__PathArray__are_equal(const autocar_msgs__msg__PathArray * lhs, const autocar_msgs__msg__PathArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!std_msgs__msg__Float64MultiArray__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!std_msgs__msg__Float64MultiArray__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // yaw
  if (!std_msgs__msg__Float64MultiArray__are_equal(
      &(lhs->yaw), &(rhs->yaw)))
  {
    return false;
  }
  return true;
}

bool
autocar_msgs__msg__PathArray__copy(
  const autocar_msgs__msg__PathArray * input,
  autocar_msgs__msg__PathArray * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!std_msgs__msg__Float64MultiArray__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!std_msgs__msg__Float64MultiArray__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // yaw
  if (!std_msgs__msg__Float64MultiArray__copy(
      &(input->yaw), &(output->yaw)))
  {
    return false;
  }
  return true;
}

autocar_msgs__msg__PathArray *
autocar_msgs__msg__PathArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocar_msgs__msg__PathArray * msg = (autocar_msgs__msg__PathArray *)allocator.allocate(sizeof(autocar_msgs__msg__PathArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autocar_msgs__msg__PathArray));
  bool success = autocar_msgs__msg__PathArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autocar_msgs__msg__PathArray__destroy(autocar_msgs__msg__PathArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autocar_msgs__msg__PathArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autocar_msgs__msg__PathArray__Sequence__init(autocar_msgs__msg__PathArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocar_msgs__msg__PathArray * data = NULL;

  if (size) {
    data = (autocar_msgs__msg__PathArray *)allocator.zero_allocate(size, sizeof(autocar_msgs__msg__PathArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autocar_msgs__msg__PathArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autocar_msgs__msg__PathArray__fini(&data[i - 1]);
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
autocar_msgs__msg__PathArray__Sequence__fini(autocar_msgs__msg__PathArray__Sequence * array)
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
      autocar_msgs__msg__PathArray__fini(&array->data[i]);
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

autocar_msgs__msg__PathArray__Sequence *
autocar_msgs__msg__PathArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocar_msgs__msg__PathArray__Sequence * array = (autocar_msgs__msg__PathArray__Sequence *)allocator.allocate(sizeof(autocar_msgs__msg__PathArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autocar_msgs__msg__PathArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autocar_msgs__msg__PathArray__Sequence__destroy(autocar_msgs__msg__PathArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autocar_msgs__msg__PathArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autocar_msgs__msg__PathArray__Sequence__are_equal(const autocar_msgs__msg__PathArray__Sequence * lhs, const autocar_msgs__msg__PathArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autocar_msgs__msg__PathArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autocar_msgs__msg__PathArray__Sequence__copy(
  const autocar_msgs__msg__PathArray__Sequence * input,
  autocar_msgs__msg__PathArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autocar_msgs__msg__PathArray);
    autocar_msgs__msg__PathArray * data =
      (autocar_msgs__msg__PathArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autocar_msgs__msg__PathArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autocar_msgs__msg__PathArray__fini(&data[i]);
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
    if (!autocar_msgs__msg__PathArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
