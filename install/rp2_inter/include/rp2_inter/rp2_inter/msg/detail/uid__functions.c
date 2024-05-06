// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rp2_inter:msg/Uid.idl
// generated code does not contain a copyright notice
#include "rp2_inter/msg/detail/uid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `uid`
#include "rosidl_runtime_c/string_functions.h"

bool
rp2_inter__msg__Uid__init(rp2_inter__msg__Uid * msg)
{
  if (!msg) {
    return false;
  }
  // uid
  if (!rosidl_runtime_c__String__init(&msg->uid)) {
    rp2_inter__msg__Uid__fini(msg);
    return false;
  }
  return true;
}

void
rp2_inter__msg__Uid__fini(rp2_inter__msg__Uid * msg)
{
  if (!msg) {
    return;
  }
  // uid
  rosidl_runtime_c__String__fini(&msg->uid);
}

bool
rp2_inter__msg__Uid__are_equal(const rp2_inter__msg__Uid * lhs, const rp2_inter__msg__Uid * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uid), &(rhs->uid)))
  {
    return false;
  }
  return true;
}

bool
rp2_inter__msg__Uid__copy(
  const rp2_inter__msg__Uid * input,
  rp2_inter__msg__Uid * output)
{
  if (!input || !output) {
    return false;
  }
  // uid
  if (!rosidl_runtime_c__String__copy(
      &(input->uid), &(output->uid)))
  {
    return false;
  }
  return true;
}

rp2_inter__msg__Uid *
rp2_inter__msg__Uid__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rp2_inter__msg__Uid * msg = (rp2_inter__msg__Uid *)allocator.allocate(sizeof(rp2_inter__msg__Uid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rp2_inter__msg__Uid));
  bool success = rp2_inter__msg__Uid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rp2_inter__msg__Uid__destroy(rp2_inter__msg__Uid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rp2_inter__msg__Uid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rp2_inter__msg__Uid__Sequence__init(rp2_inter__msg__Uid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rp2_inter__msg__Uid * data = NULL;

  if (size) {
    data = (rp2_inter__msg__Uid *)allocator.zero_allocate(size, sizeof(rp2_inter__msg__Uid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rp2_inter__msg__Uid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rp2_inter__msg__Uid__fini(&data[i - 1]);
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
rp2_inter__msg__Uid__Sequence__fini(rp2_inter__msg__Uid__Sequence * array)
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
      rp2_inter__msg__Uid__fini(&array->data[i]);
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

rp2_inter__msg__Uid__Sequence *
rp2_inter__msg__Uid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rp2_inter__msg__Uid__Sequence * array = (rp2_inter__msg__Uid__Sequence *)allocator.allocate(sizeof(rp2_inter__msg__Uid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rp2_inter__msg__Uid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rp2_inter__msg__Uid__Sequence__destroy(rp2_inter__msg__Uid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rp2_inter__msg__Uid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rp2_inter__msg__Uid__Sequence__are_equal(const rp2_inter__msg__Uid__Sequence * lhs, const rp2_inter__msg__Uid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rp2_inter__msg__Uid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rp2_inter__msg__Uid__Sequence__copy(
  const rp2_inter__msg__Uid__Sequence * input,
  rp2_inter__msg__Uid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rp2_inter__msg__Uid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rp2_inter__msg__Uid * data =
      (rp2_inter__msg__Uid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rp2_inter__msg__Uid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rp2_inter__msg__Uid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rp2_inter__msg__Uid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
