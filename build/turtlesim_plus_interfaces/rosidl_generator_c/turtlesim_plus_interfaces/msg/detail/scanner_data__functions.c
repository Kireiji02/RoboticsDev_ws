// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim_plus_interfaces:msg/ScannerData.idl
// generated code does not contain a copyright notice
#include "turtlesim_plus_interfaces/msg/detail/scanner_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

bool
turtlesim_plus_interfaces__msg__ScannerData__init(turtlesim_plus_interfaces__msg__ScannerData * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    turtlesim_plus_interfaces__msg__ScannerData__fini(msg);
    return false;
  }
  // angle
  // distance
  return true;
}

void
turtlesim_plus_interfaces__msg__ScannerData__fini(turtlesim_plus_interfaces__msg__ScannerData * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // angle
  // distance
}

bool
turtlesim_plus_interfaces__msg__ScannerData__are_equal(const turtlesim_plus_interfaces__msg__ScannerData * lhs, const turtlesim_plus_interfaces__msg__ScannerData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
turtlesim_plus_interfaces__msg__ScannerData__copy(
  const turtlesim_plus_interfaces__msg__ScannerData * input,
  turtlesim_plus_interfaces__msg__ScannerData * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // angle
  output->angle = input->angle;
  // distance
  output->distance = input->distance;
  return true;
}

turtlesim_plus_interfaces__msg__ScannerData *
turtlesim_plus_interfaces__msg__ScannerData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_plus_interfaces__msg__ScannerData * msg = (turtlesim_plus_interfaces__msg__ScannerData *)allocator.allocate(sizeof(turtlesim_plus_interfaces__msg__ScannerData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_plus_interfaces__msg__ScannerData));
  bool success = turtlesim_plus_interfaces__msg__ScannerData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_plus_interfaces__msg__ScannerData__destroy(turtlesim_plus_interfaces__msg__ScannerData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_plus_interfaces__msg__ScannerData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_plus_interfaces__msg__ScannerData__Sequence__init(turtlesim_plus_interfaces__msg__ScannerData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_plus_interfaces__msg__ScannerData * data = NULL;

  if (size) {
    data = (turtlesim_plus_interfaces__msg__ScannerData *)allocator.zero_allocate(size, sizeof(turtlesim_plus_interfaces__msg__ScannerData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_plus_interfaces__msg__ScannerData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_plus_interfaces__msg__ScannerData__fini(&data[i - 1]);
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
turtlesim_plus_interfaces__msg__ScannerData__Sequence__fini(turtlesim_plus_interfaces__msg__ScannerData__Sequence * array)
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
      turtlesim_plus_interfaces__msg__ScannerData__fini(&array->data[i]);
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

turtlesim_plus_interfaces__msg__ScannerData__Sequence *
turtlesim_plus_interfaces__msg__ScannerData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_plus_interfaces__msg__ScannerData__Sequence * array = (turtlesim_plus_interfaces__msg__ScannerData__Sequence *)allocator.allocate(sizeof(turtlesim_plus_interfaces__msg__ScannerData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_plus_interfaces__msg__ScannerData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_plus_interfaces__msg__ScannerData__Sequence__destroy(turtlesim_plus_interfaces__msg__ScannerData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_plus_interfaces__msg__ScannerData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_plus_interfaces__msg__ScannerData__Sequence__are_equal(const turtlesim_plus_interfaces__msg__ScannerData__Sequence * lhs, const turtlesim_plus_interfaces__msg__ScannerData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_plus_interfaces__msg__ScannerData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_plus_interfaces__msg__ScannerData__Sequence__copy(
  const turtlesim_plus_interfaces__msg__ScannerData__Sequence * input,
  turtlesim_plus_interfaces__msg__ScannerData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_plus_interfaces__msg__ScannerData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_plus_interfaces__msg__ScannerData * data =
      (turtlesim_plus_interfaces__msg__ScannerData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_plus_interfaces__msg__ScannerData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_plus_interfaces__msg__ScannerData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_plus_interfaces__msg__ScannerData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
