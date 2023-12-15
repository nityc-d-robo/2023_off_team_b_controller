// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drobo_interfaces:srv/SolenoidStateSrv.idl
// generated code does not contain a copyright notice
#include "drobo_interfaces/srv/detail/solenoid_state_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
drobo_interfaces__srv__SolenoidStateSrv_Request__init(drobo_interfaces__srv__SolenoidStateSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // axle_position
  // state
  return true;
}

void
drobo_interfaces__srv__SolenoidStateSrv_Request__fini(drobo_interfaces__srv__SolenoidStateSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // axle_position
  // state
}

bool
drobo_interfaces__srv__SolenoidStateSrv_Request__are_equal(const drobo_interfaces__srv__SolenoidStateSrv_Request * lhs, const drobo_interfaces__srv__SolenoidStateSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // axle_position
  if (lhs->axle_position != rhs->axle_position) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
drobo_interfaces__srv__SolenoidStateSrv_Request__copy(
  const drobo_interfaces__srv__SolenoidStateSrv_Request * input,
  drobo_interfaces__srv__SolenoidStateSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // axle_position
  output->axle_position = input->axle_position;
  // state
  output->state = input->state;
  return true;
}

drobo_interfaces__srv__SolenoidStateSrv_Request *
drobo_interfaces__srv__SolenoidStateSrv_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drobo_interfaces__srv__SolenoidStateSrv_Request * msg = (drobo_interfaces__srv__SolenoidStateSrv_Request *)allocator.allocate(sizeof(drobo_interfaces__srv__SolenoidStateSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drobo_interfaces__srv__SolenoidStateSrv_Request));
  bool success = drobo_interfaces__srv__SolenoidStateSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drobo_interfaces__srv__SolenoidStateSrv_Request__destroy(drobo_interfaces__srv__SolenoidStateSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drobo_interfaces__srv__SolenoidStateSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__init(drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drobo_interfaces__srv__SolenoidStateSrv_Request * data = NULL;

  if (size) {
    data = (drobo_interfaces__srv__SolenoidStateSrv_Request *)allocator.zero_allocate(size, sizeof(drobo_interfaces__srv__SolenoidStateSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drobo_interfaces__srv__SolenoidStateSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drobo_interfaces__srv__SolenoidStateSrv_Request__fini(&data[i - 1]);
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
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__fini(drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * array)
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
      drobo_interfaces__srv__SolenoidStateSrv_Request__fini(&array->data[i]);
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

drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence *
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * array = (drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence *)allocator.allocate(sizeof(drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__destroy(drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__are_equal(const drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * lhs, const drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drobo_interfaces__srv__SolenoidStateSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence__copy(
  const drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * input,
  drobo_interfaces__srv__SolenoidStateSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drobo_interfaces__srv__SolenoidStateSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drobo_interfaces__srv__SolenoidStateSrv_Request * data =
      (drobo_interfaces__srv__SolenoidStateSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drobo_interfaces__srv__SolenoidStateSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drobo_interfaces__srv__SolenoidStateSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drobo_interfaces__srv__SolenoidStateSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
drobo_interfaces__srv__SolenoidStateSrv_Response__init(drobo_interfaces__srv__SolenoidStateSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // state
  return true;
}

void
drobo_interfaces__srv__SolenoidStateSrv_Response__fini(drobo_interfaces__srv__SolenoidStateSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  // state
}

bool
drobo_interfaces__srv__SolenoidStateSrv_Response__are_equal(const drobo_interfaces__srv__SolenoidStateSrv_Response * lhs, const drobo_interfaces__srv__SolenoidStateSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // state
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->state[i] != rhs->state[i]) {
      return false;
    }
  }
  return true;
}

bool
drobo_interfaces__srv__SolenoidStateSrv_Response__copy(
  const drobo_interfaces__srv__SolenoidStateSrv_Response * input,
  drobo_interfaces__srv__SolenoidStateSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  // state
  for (size_t i = 0; i < 3; ++i) {
    output->state[i] = input->state[i];
  }
  return true;
}

drobo_interfaces__srv__SolenoidStateSrv_Response *
drobo_interfaces__srv__SolenoidStateSrv_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drobo_interfaces__srv__SolenoidStateSrv_Response * msg = (drobo_interfaces__srv__SolenoidStateSrv_Response *)allocator.allocate(sizeof(drobo_interfaces__srv__SolenoidStateSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drobo_interfaces__srv__SolenoidStateSrv_Response));
  bool success = drobo_interfaces__srv__SolenoidStateSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drobo_interfaces__srv__SolenoidStateSrv_Response__destroy(drobo_interfaces__srv__SolenoidStateSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drobo_interfaces__srv__SolenoidStateSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__init(drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drobo_interfaces__srv__SolenoidStateSrv_Response * data = NULL;

  if (size) {
    data = (drobo_interfaces__srv__SolenoidStateSrv_Response *)allocator.zero_allocate(size, sizeof(drobo_interfaces__srv__SolenoidStateSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drobo_interfaces__srv__SolenoidStateSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drobo_interfaces__srv__SolenoidStateSrv_Response__fini(&data[i - 1]);
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
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__fini(drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * array)
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
      drobo_interfaces__srv__SolenoidStateSrv_Response__fini(&array->data[i]);
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

drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence *
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * array = (drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence *)allocator.allocate(sizeof(drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__destroy(drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__are_equal(const drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * lhs, const drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drobo_interfaces__srv__SolenoidStateSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence__copy(
  const drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * input,
  drobo_interfaces__srv__SolenoidStateSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drobo_interfaces__srv__SolenoidStateSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drobo_interfaces__srv__SolenoidStateSrv_Response * data =
      (drobo_interfaces__srv__SolenoidStateSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drobo_interfaces__srv__SolenoidStateSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drobo_interfaces__srv__SolenoidStateSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drobo_interfaces__srv__SolenoidStateSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
