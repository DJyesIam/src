// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autocar_msgs:msg/VisionSteer.idl
// generated code does not contain a copyright notice
#include "autocar_msgs/msg/detail/vision_steer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autocar_msgs__msg__VisionSteer__init(autocar_msgs__msg__VisionSteer * msg)
{
  if (!msg) {
    return false;
  }
  // detected
  // steer
  return true;
}

void
autocar_msgs__msg__VisionSteer__fini(autocar_msgs__msg__VisionSteer * msg)
{
  if (!msg) {
    return;
  }
  // detected
  // steer
}

bool
autocar_msgs__msg__VisionSteer__are_equal(const autocar_msgs__msg__VisionSteer * lhs, const autocar_msgs__msg__VisionSteer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detected
  if (lhs->detected != rhs->detected) {
    return false;
  }
  // steer
  if (lhs->steer != rhs->steer) {
    return false;
  }
  return true;
}

bool
autocar_msgs__msg__VisionSteer__copy(
  const autocar_msgs__msg__VisionSteer * input,
  autocar_msgs__msg__VisionSteer * output)
{
  if (!input || !output) {
    return false;
  }
  // detected
  output->detected = input->detected;
  // steer
  output->steer = input->steer;
  return true;
}

autocar_msgs__msg__VisionSteer *
autocar_msgs__msg__VisionSteer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocar_msgs__msg__VisionSteer * msg = (autocar_msgs__msg__VisionSteer *)allocator.allocate(sizeof(autocar_msgs__msg__VisionSteer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autocar_msgs__msg__VisionSteer));
  bool success = autocar_msgs__msg__VisionSteer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autocar_msgs__msg__VisionSteer__destroy(autocar_msgs__msg__VisionSteer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autocar_msgs__msg__VisionSteer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autocar_msgs__msg__VisionSteer__Sequence__init(autocar_msgs__msg__VisionSteer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocar_msgs__msg__VisionSteer * data = NULL;

  if (size) {
    data = (autocar_msgs__msg__VisionSteer *)allocator.zero_allocate(size, sizeof(autocar_msgs__msg__VisionSteer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autocar_msgs__msg__VisionSteer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autocar_msgs__msg__VisionSteer__fini(&data[i - 1]);
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
autocar_msgs__msg__VisionSteer__Sequence__fini(autocar_msgs__msg__VisionSteer__Sequence * array)
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
      autocar_msgs__msg__VisionSteer__fini(&array->data[i]);
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

autocar_msgs__msg__VisionSteer__Sequence *
autocar_msgs__msg__VisionSteer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autocar_msgs__msg__VisionSteer__Sequence * array = (autocar_msgs__msg__VisionSteer__Sequence *)allocator.allocate(sizeof(autocar_msgs__msg__VisionSteer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autocar_msgs__msg__VisionSteer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autocar_msgs__msg__VisionSteer__Sequence__destroy(autocar_msgs__msg__VisionSteer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autocar_msgs__msg__VisionSteer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autocar_msgs__msg__VisionSteer__Sequence__are_equal(const autocar_msgs__msg__VisionSteer__Sequence * lhs, const autocar_msgs__msg__VisionSteer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autocar_msgs__msg__VisionSteer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autocar_msgs__msg__VisionSteer__Sequence__copy(
  const autocar_msgs__msg__VisionSteer__Sequence * input,
  autocar_msgs__msg__VisionSteer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autocar_msgs__msg__VisionSteer);
    autocar_msgs__msg__VisionSteer * data =
      (autocar_msgs__msg__VisionSteer *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autocar_msgs__msg__VisionSteer__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autocar_msgs__msg__VisionSteer__fini(&data[i]);
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
    if (!autocar_msgs__msg__VisionSteer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
