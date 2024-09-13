// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lecture3_interfaces:msg/ExampleMsg.idl
// generated code does not contain a copyright notice
#include "lecture3_interfaces/msg/detail/example_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

bool
lecture3_interfaces__msg__ExampleMsg__init(lecture3_interfaces__msg__ExampleMsg * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  // id
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    lecture3_interfaces__msg__ExampleMsg__fini(msg);
    return false;
  }
  return true;
}

void
lecture3_interfaces__msg__ExampleMsg__fini(lecture3_interfaces__msg__ExampleMsg * msg)
{
  if (!msg) {
    return;
  }
  // temperature
  // id
  // description
  rosidl_runtime_c__String__fini(&msg->description);
}

bool
lecture3_interfaces__msg__ExampleMsg__are_equal(const lecture3_interfaces__msg__ExampleMsg * lhs, const lecture3_interfaces__msg__ExampleMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  return true;
}

bool
lecture3_interfaces__msg__ExampleMsg__copy(
  const lecture3_interfaces__msg__ExampleMsg * input,
  lecture3_interfaces__msg__ExampleMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  // id
  output->id = input->id;
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  return true;
}

lecture3_interfaces__msg__ExampleMsg *
lecture3_interfaces__msg__ExampleMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lecture3_interfaces__msg__ExampleMsg * msg = (lecture3_interfaces__msg__ExampleMsg *)allocator.allocate(sizeof(lecture3_interfaces__msg__ExampleMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lecture3_interfaces__msg__ExampleMsg));
  bool success = lecture3_interfaces__msg__ExampleMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lecture3_interfaces__msg__ExampleMsg__destroy(lecture3_interfaces__msg__ExampleMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lecture3_interfaces__msg__ExampleMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lecture3_interfaces__msg__ExampleMsg__Sequence__init(lecture3_interfaces__msg__ExampleMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lecture3_interfaces__msg__ExampleMsg * data = NULL;

  if (size) {
    data = (lecture3_interfaces__msg__ExampleMsg *)allocator.zero_allocate(size, sizeof(lecture3_interfaces__msg__ExampleMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lecture3_interfaces__msg__ExampleMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lecture3_interfaces__msg__ExampleMsg__fini(&data[i - 1]);
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
lecture3_interfaces__msg__ExampleMsg__Sequence__fini(lecture3_interfaces__msg__ExampleMsg__Sequence * array)
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
      lecture3_interfaces__msg__ExampleMsg__fini(&array->data[i]);
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

lecture3_interfaces__msg__ExampleMsg__Sequence *
lecture3_interfaces__msg__ExampleMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lecture3_interfaces__msg__ExampleMsg__Sequence * array = (lecture3_interfaces__msg__ExampleMsg__Sequence *)allocator.allocate(sizeof(lecture3_interfaces__msg__ExampleMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lecture3_interfaces__msg__ExampleMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lecture3_interfaces__msg__ExampleMsg__Sequence__destroy(lecture3_interfaces__msg__ExampleMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lecture3_interfaces__msg__ExampleMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lecture3_interfaces__msg__ExampleMsg__Sequence__are_equal(const lecture3_interfaces__msg__ExampleMsg__Sequence * lhs, const lecture3_interfaces__msg__ExampleMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lecture3_interfaces__msg__ExampleMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lecture3_interfaces__msg__ExampleMsg__Sequence__copy(
  const lecture3_interfaces__msg__ExampleMsg__Sequence * input,
  lecture3_interfaces__msg__ExampleMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lecture3_interfaces__msg__ExampleMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lecture3_interfaces__msg__ExampleMsg * data =
      (lecture3_interfaces__msg__ExampleMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lecture3_interfaces__msg__ExampleMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lecture3_interfaces__msg__ExampleMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lecture3_interfaces__msg__ExampleMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
