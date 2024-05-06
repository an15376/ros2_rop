// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rp2_inter:srv/Multy.idl
// generated code does not contain a copyright notice
#include "rp2_inter/srv/detail/multy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rp2_inter__srv__Multy_Request__init(rp2_inter__srv__Multy_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
rp2_inter__srv__Multy_Request__fini(rp2_inter__srv__Multy_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
rp2_inter__srv__Multy_Request__are_equal(const rp2_inter__srv__Multy_Request * lhs, const rp2_inter__srv__Multy_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
rp2_inter__srv__Multy_Request__copy(
  const rp2_inter__srv__Multy_Request * input,
  rp2_inter__srv__Multy_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

rp2_inter__srv__Multy_Request *
rp2_inter__srv__Multy_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rp2_inter__srv__Multy_Request * msg = (rp2_inter__srv__Multy_Request *)allocator.allocate(sizeof(rp2_inter__srv__Multy_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rp2_inter__srv__Multy_Request));
  bool success = rp2_inter__srv__Multy_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rp2_inter__srv__Multy_Request__destroy(rp2_inter__srv__Multy_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rp2_inter__srv__Multy_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rp2_inter__srv__Multy_Request__Sequence__init(rp2_inter__srv__Multy_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rp2_inter__srv__Multy_Request * data = NULL;

  if (size) {
    data = (rp2_inter__srv__Multy_Request *)allocator.zero_allocate(size, sizeof(rp2_inter__srv__Multy_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rp2_inter__srv__Multy_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rp2_inter__srv__Multy_Request__fini(&data[i - 1]);
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
rp2_inter__srv__Multy_Request__Sequence__fini(rp2_inter__srv__Multy_Request__Sequence * array)
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
      rp2_inter__srv__Multy_Request__fini(&array->data[i]);
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

rp2_inter__srv__Multy_Request__Sequence *
rp2_inter__srv__Multy_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rp2_inter__srv__Multy_Request__Sequence * array = (rp2_inter__srv__Multy_Request__Sequence *)allocator.allocate(sizeof(rp2_inter__srv__Multy_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rp2_inter__srv__Multy_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rp2_inter__srv__Multy_Request__Sequence__destroy(rp2_inter__srv__Multy_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rp2_inter__srv__Multy_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rp2_inter__srv__Multy_Request__Sequence__are_equal(const rp2_inter__srv__Multy_Request__Sequence * lhs, const rp2_inter__srv__Multy_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rp2_inter__srv__Multy_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rp2_inter__srv__Multy_Request__Sequence__copy(
  const rp2_inter__srv__Multy_Request__Sequence * input,
  rp2_inter__srv__Multy_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rp2_inter__srv__Multy_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rp2_inter__srv__Multy_Request * data =
      (rp2_inter__srv__Multy_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rp2_inter__srv__Multy_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rp2_inter__srv__Multy_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rp2_inter__srv__Multy_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rp2_inter__srv__Multy_Response__init(rp2_inter__srv__Multy_Response * msg)
{
  if (!msg) {
    return false;
  }
  // product
  return true;
}

void
rp2_inter__srv__Multy_Response__fini(rp2_inter__srv__Multy_Response * msg)
{
  if (!msg) {
    return;
  }
  // product
}

bool
rp2_inter__srv__Multy_Response__are_equal(const rp2_inter__srv__Multy_Response * lhs, const rp2_inter__srv__Multy_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // product
  if (lhs->product != rhs->product) {
    return false;
  }
  return true;
}

bool
rp2_inter__srv__Multy_Response__copy(
  const rp2_inter__srv__Multy_Response * input,
  rp2_inter__srv__Multy_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // product
  output->product = input->product;
  return true;
}

rp2_inter__srv__Multy_Response *
rp2_inter__srv__Multy_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rp2_inter__srv__Multy_Response * msg = (rp2_inter__srv__Multy_Response *)allocator.allocate(sizeof(rp2_inter__srv__Multy_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rp2_inter__srv__Multy_Response));
  bool success = rp2_inter__srv__Multy_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rp2_inter__srv__Multy_Response__destroy(rp2_inter__srv__Multy_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rp2_inter__srv__Multy_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rp2_inter__srv__Multy_Response__Sequence__init(rp2_inter__srv__Multy_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rp2_inter__srv__Multy_Response * data = NULL;

  if (size) {
    data = (rp2_inter__srv__Multy_Response *)allocator.zero_allocate(size, sizeof(rp2_inter__srv__Multy_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rp2_inter__srv__Multy_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rp2_inter__srv__Multy_Response__fini(&data[i - 1]);
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
rp2_inter__srv__Multy_Response__Sequence__fini(rp2_inter__srv__Multy_Response__Sequence * array)
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
      rp2_inter__srv__Multy_Response__fini(&array->data[i]);
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

rp2_inter__srv__Multy_Response__Sequence *
rp2_inter__srv__Multy_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rp2_inter__srv__Multy_Response__Sequence * array = (rp2_inter__srv__Multy_Response__Sequence *)allocator.allocate(sizeof(rp2_inter__srv__Multy_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rp2_inter__srv__Multy_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rp2_inter__srv__Multy_Response__Sequence__destroy(rp2_inter__srv__Multy_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rp2_inter__srv__Multy_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rp2_inter__srv__Multy_Response__Sequence__are_equal(const rp2_inter__srv__Multy_Response__Sequence * lhs, const rp2_inter__srv__Multy_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rp2_inter__srv__Multy_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rp2_inter__srv__Multy_Response__Sequence__copy(
  const rp2_inter__srv__Multy_Response__Sequence * input,
  rp2_inter__srv__Multy_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rp2_inter__srv__Multy_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rp2_inter__srv__Multy_Response * data =
      (rp2_inter__srv__Multy_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rp2_inter__srv__Multy_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rp2_inter__srv__Multy_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rp2_inter__srv__Multy_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
