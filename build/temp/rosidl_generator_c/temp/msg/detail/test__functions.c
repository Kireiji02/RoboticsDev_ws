// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from temp:msg/Test.idl
// generated code does not contain a copyright notice
#include "temp/msg/detail/test__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
temp__msg__Test__init(temp__msg__Test * msg)
{
  if (!msg) {
    return false;
  }
  // num
  return true;
}

void
temp__msg__Test__fini(temp__msg__Test * msg)
{
  if (!msg) {
    return;
  }
  // num
}

bool
temp__msg__Test__are_equal(const temp__msg__Test * lhs, const temp__msg__Test * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num
  if (lhs->num != rhs->num) {
    return false;
  }
  return true;
}

bool
temp__msg__Test__copy(
  const temp__msg__Test * input,
  temp__msg__Test * output)
{
  if (!input || !output) {
    return false;
  }
  // num
  output->num = input->num;
  return true;
}

temp__msg__Test *
temp__msg__Test__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp__msg__Test * msg = (temp__msg__Test *)allocator.allocate(sizeof(temp__msg__Test), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(temp__msg__Test));
  bool success = temp__msg__Test__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
temp__msg__Test__destroy(temp__msg__Test * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    temp__msg__Test__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
temp__msg__Test__Sequence__init(temp__msg__Test__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp__msg__Test * data = NULL;

  if (size) {
    data = (temp__msg__Test *)allocator.zero_allocate(size, sizeof(temp__msg__Test), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = temp__msg__Test__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        temp__msg__Test__fini(&data[i - 1]);
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
temp__msg__Test__Sequence__fini(temp__msg__Test__Sequence * array)
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
      temp__msg__Test__fini(&array->data[i]);
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

temp__msg__Test__Sequence *
temp__msg__Test__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp__msg__Test__Sequence * array = (temp__msg__Test__Sequence *)allocator.allocate(sizeof(temp__msg__Test__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = temp__msg__Test__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
temp__msg__Test__Sequence__destroy(temp__msg__Test__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    temp__msg__Test__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
temp__msg__Test__Sequence__are_equal(const temp__msg__Test__Sequence * lhs, const temp__msg__Test__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!temp__msg__Test__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
temp__msg__Test__Sequence__copy(
  const temp__msg__Test__Sequence * input,
  temp__msg__Test__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(temp__msg__Test);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    temp__msg__Test * data =
      (temp__msg__Test *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!temp__msg__Test__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          temp__msg__Test__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!temp__msg__Test__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
