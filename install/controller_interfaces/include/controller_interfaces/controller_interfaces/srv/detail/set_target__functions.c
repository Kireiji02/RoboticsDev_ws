// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_interfaces:srv/SetTarget.idl
// generated code does not contain a copyright notice
#include "controller_interfaces/srv/detail/set_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
controller_interfaces__srv__SetTarget_Request__init(controller_interfaces__srv__SetTarget_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Point__init(&msg->target)) {
    controller_interfaces__srv__SetTarget_Request__fini(msg);
    return false;
  }
  return true;
}

void
controller_interfaces__srv__SetTarget_Request__fini(controller_interfaces__srv__SetTarget_Request * msg)
{
  if (!msg) {
    return;
  }
  // target
  geometry_msgs__msg__Point__fini(&msg->target);
}

bool
controller_interfaces__srv__SetTarget_Request__are_equal(const controller_interfaces__srv__SetTarget_Request * lhs, const controller_interfaces__srv__SetTarget_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  return true;
}

bool
controller_interfaces__srv__SetTarget_Request__copy(
  const controller_interfaces__srv__SetTarget_Request * input,
  controller_interfaces__srv__SetTarget_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Point__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  return true;
}

controller_interfaces__srv__SetTarget_Request *
controller_interfaces__srv__SetTarget_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interfaces__srv__SetTarget_Request * msg = (controller_interfaces__srv__SetTarget_Request *)allocator.allocate(sizeof(controller_interfaces__srv__SetTarget_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interfaces__srv__SetTarget_Request));
  bool success = controller_interfaces__srv__SetTarget_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controller_interfaces__srv__SetTarget_Request__destroy(controller_interfaces__srv__SetTarget_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controller_interfaces__srv__SetTarget_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controller_interfaces__srv__SetTarget_Request__Sequence__init(controller_interfaces__srv__SetTarget_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interfaces__srv__SetTarget_Request * data = NULL;

  if (size) {
    data = (controller_interfaces__srv__SetTarget_Request *)allocator.zero_allocate(size, sizeof(controller_interfaces__srv__SetTarget_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interfaces__srv__SetTarget_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interfaces__srv__SetTarget_Request__fini(&data[i - 1]);
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
controller_interfaces__srv__SetTarget_Request__Sequence__fini(controller_interfaces__srv__SetTarget_Request__Sequence * array)
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
      controller_interfaces__srv__SetTarget_Request__fini(&array->data[i]);
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

controller_interfaces__srv__SetTarget_Request__Sequence *
controller_interfaces__srv__SetTarget_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interfaces__srv__SetTarget_Request__Sequence * array = (controller_interfaces__srv__SetTarget_Request__Sequence *)allocator.allocate(sizeof(controller_interfaces__srv__SetTarget_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controller_interfaces__srv__SetTarget_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controller_interfaces__srv__SetTarget_Request__Sequence__destroy(controller_interfaces__srv__SetTarget_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controller_interfaces__srv__SetTarget_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controller_interfaces__srv__SetTarget_Request__Sequence__are_equal(const controller_interfaces__srv__SetTarget_Request__Sequence * lhs, const controller_interfaces__srv__SetTarget_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interfaces__srv__SetTarget_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interfaces__srv__SetTarget_Request__Sequence__copy(
  const controller_interfaces__srv__SetTarget_Request__Sequence * input,
  controller_interfaces__srv__SetTarget_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interfaces__srv__SetTarget_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controller_interfaces__srv__SetTarget_Request * data =
      (controller_interfaces__srv__SetTarget_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interfaces__srv__SetTarget_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controller_interfaces__srv__SetTarget_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interfaces__srv__SetTarget_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
controller_interfaces__srv__SetTarget_Response__init(controller_interfaces__srv__SetTarget_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
controller_interfaces__srv__SetTarget_Response__fini(controller_interfaces__srv__SetTarget_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
controller_interfaces__srv__SetTarget_Response__are_equal(const controller_interfaces__srv__SetTarget_Response * lhs, const controller_interfaces__srv__SetTarget_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
controller_interfaces__srv__SetTarget_Response__copy(
  const controller_interfaces__srv__SetTarget_Response * input,
  controller_interfaces__srv__SetTarget_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

controller_interfaces__srv__SetTarget_Response *
controller_interfaces__srv__SetTarget_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interfaces__srv__SetTarget_Response * msg = (controller_interfaces__srv__SetTarget_Response *)allocator.allocate(sizeof(controller_interfaces__srv__SetTarget_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interfaces__srv__SetTarget_Response));
  bool success = controller_interfaces__srv__SetTarget_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controller_interfaces__srv__SetTarget_Response__destroy(controller_interfaces__srv__SetTarget_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controller_interfaces__srv__SetTarget_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controller_interfaces__srv__SetTarget_Response__Sequence__init(controller_interfaces__srv__SetTarget_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interfaces__srv__SetTarget_Response * data = NULL;

  if (size) {
    data = (controller_interfaces__srv__SetTarget_Response *)allocator.zero_allocate(size, sizeof(controller_interfaces__srv__SetTarget_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interfaces__srv__SetTarget_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interfaces__srv__SetTarget_Response__fini(&data[i - 1]);
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
controller_interfaces__srv__SetTarget_Response__Sequence__fini(controller_interfaces__srv__SetTarget_Response__Sequence * array)
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
      controller_interfaces__srv__SetTarget_Response__fini(&array->data[i]);
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

controller_interfaces__srv__SetTarget_Response__Sequence *
controller_interfaces__srv__SetTarget_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_interfaces__srv__SetTarget_Response__Sequence * array = (controller_interfaces__srv__SetTarget_Response__Sequence *)allocator.allocate(sizeof(controller_interfaces__srv__SetTarget_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controller_interfaces__srv__SetTarget_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controller_interfaces__srv__SetTarget_Response__Sequence__destroy(controller_interfaces__srv__SetTarget_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controller_interfaces__srv__SetTarget_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controller_interfaces__srv__SetTarget_Response__Sequence__are_equal(const controller_interfaces__srv__SetTarget_Response__Sequence * lhs, const controller_interfaces__srv__SetTarget_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interfaces__srv__SetTarget_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interfaces__srv__SetTarget_Response__Sequence__copy(
  const controller_interfaces__srv__SetTarget_Response__Sequence * input,
  controller_interfaces__srv__SetTarget_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interfaces__srv__SetTarget_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controller_interfaces__srv__SetTarget_Response * data =
      (controller_interfaces__srv__SetTarget_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interfaces__srv__SetTarget_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controller_interfaces__srv__SetTarget_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interfaces__srv__SetTarget_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
