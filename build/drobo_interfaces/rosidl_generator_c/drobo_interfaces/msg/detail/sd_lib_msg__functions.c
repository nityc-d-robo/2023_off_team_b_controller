// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drobo_interfaces:msg/SdLibMsg.idl
// generated code does not contain a copyright notice
#include "drobo_interfaces/msg/detail/sd_lib_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
drobo_interfaces__msg__SdLibMsg__init(drobo_interfaces__msg__SdLibMsg * msg)
{
  if (!msg) {
    return false;
  }
  // address
  // semi_id
  // port
  // power1
  // power2
  return true;
}

void
drobo_interfaces__msg__SdLibMsg__fini(drobo_interfaces__msg__SdLibMsg * msg)
{
  if (!msg) {
    return;
  }
  // address
  // semi_id
  // port
  // power1
  // power2
}

bool
drobo_interfaces__msg__SdLibMsg__are_equal(const drobo_interfaces__msg__SdLibMsg * lhs, const drobo_interfaces__msg__SdLibMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // address
  if (lhs->address != rhs->address) {
    return false;
  }
  // semi_id
  if (lhs->semi_id != rhs->semi_id) {
    return false;
  }
  // port
  if (lhs->port != rhs->port) {
    return false;
  }
  // power1
  if (lhs->power1 != rhs->power1) {
    return false;
  }
  // power2
  if (lhs->power2 != rhs->power2) {
    return false;
  }
  return true;
}

bool
drobo_interfaces__msg__SdLibMsg__copy(
  const drobo_interfaces__msg__SdLibMsg * input,
  drobo_interfaces__msg__SdLibMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // address
  output->address = input->address;
  // semi_id
  output->semi_id = input->semi_id;
  // port
  output->port = input->port;
  // power1
  output->power1 = input->power1;
  // power2
  output->power2 = input->power2;
  return true;
}

drobo_interfaces__msg__SdLibMsg *
drobo_interfaces__msg__SdLibMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drobo_interfaces__msg__SdLibMsg * msg = (drobo_interfaces__msg__SdLibMsg *)allocator.allocate(sizeof(drobo_interfaces__msg__SdLibMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drobo_interfaces__msg__SdLibMsg));
  bool success = drobo_interfaces__msg__SdLibMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drobo_interfaces__msg__SdLibMsg__destroy(drobo_interfaces__msg__SdLibMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drobo_interfaces__msg__SdLibMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drobo_interfaces__msg__SdLibMsg__Sequence__init(drobo_interfaces__msg__SdLibMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drobo_interfaces__msg__SdLibMsg * data = NULL;

  if (size) {
    data = (drobo_interfaces__msg__SdLibMsg *)allocator.zero_allocate(size, sizeof(drobo_interfaces__msg__SdLibMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drobo_interfaces__msg__SdLibMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drobo_interfaces__msg__SdLibMsg__fini(&data[i - 1]);
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
drobo_interfaces__msg__SdLibMsg__Sequence__fini(drobo_interfaces__msg__SdLibMsg__Sequence * array)
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
      drobo_interfaces__msg__SdLibMsg__fini(&array->data[i]);
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

drobo_interfaces__msg__SdLibMsg__Sequence *
drobo_interfaces__msg__SdLibMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drobo_interfaces__msg__SdLibMsg__Sequence * array = (drobo_interfaces__msg__SdLibMsg__Sequence *)allocator.allocate(sizeof(drobo_interfaces__msg__SdLibMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drobo_interfaces__msg__SdLibMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drobo_interfaces__msg__SdLibMsg__Sequence__destroy(drobo_interfaces__msg__SdLibMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drobo_interfaces__msg__SdLibMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drobo_interfaces__msg__SdLibMsg__Sequence__are_equal(const drobo_interfaces__msg__SdLibMsg__Sequence * lhs, const drobo_interfaces__msg__SdLibMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drobo_interfaces__msg__SdLibMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drobo_interfaces__msg__SdLibMsg__Sequence__copy(
  const drobo_interfaces__msg__SdLibMsg__Sequence * input,
  drobo_interfaces__msg__SdLibMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drobo_interfaces__msg__SdLibMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drobo_interfaces__msg__SdLibMsg * data =
      (drobo_interfaces__msg__SdLibMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drobo_interfaces__msg__SdLibMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drobo_interfaces__msg__SdLibMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drobo_interfaces__msg__SdLibMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
