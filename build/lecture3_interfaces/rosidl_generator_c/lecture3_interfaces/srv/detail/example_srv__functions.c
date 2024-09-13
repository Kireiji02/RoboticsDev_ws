// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lecture3_interfaces:srv/ExampleSrv.idl
// generated code does not contain a copyright notice
#include "lecture3_interfaces/srv/detail/example_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `a`
// Member `b`
#include "std_msgs/msg/detail/int32__functions.h"

bool
lecture3_interfaces__srv__ExampleSrv_Request__init(lecture3_interfaces__srv__ExampleSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  if (!std_msgs__msg__Int32__init(&msg->a)) {
    lecture3_interfaces__srv__ExampleSrv_Request__fini(msg);
    return false;
  }
  // b
  if (!std_msgs__msg__Int32__init(&msg->b)) {
    lecture3_interfaces__srv__ExampleSrv_Request__fini(msg);
    return false;
  }
  return true;
}

void
lecture3_interfaces__srv__ExampleSrv_Request__fini(lecture3_interfaces__srv__ExampleSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  std_msgs__msg__Int32__fini(&msg->a);
  // b
  std_msgs__msg__Int32__fini(&msg->b);
}

bool
lecture3_interfaces__srv__ExampleSrv_Request__are_equal(const lecture3_interfaces__srv__ExampleSrv_Request * lhs, const lecture3_interfaces__srv__ExampleSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->a), &(rhs->a)))
  {
    return false;
  }
  // b
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->b), &(rhs->b)))
  {
    return false;
  }
  return true;
}

bool
lecture3_interfaces__srv__ExampleSrv_Request__copy(
  const lecture3_interfaces__srv__ExampleSrv_Request * input,
  lecture3_interfaces__srv__ExampleSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  if (!std_msgs__msg__Int32__copy(
      &(input->a), &(output->a)))
  {
    return false;
  }
  // b
  if (!std_msgs__msg__Int32__copy(
      &(input->b), &(output->b)))
  {
    return false;
  }
  return true;
}

lecture3_interfaces__srv__ExampleSrv_Request *
lecture3_interfaces__srv__ExampleSrv_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lecture3_interfaces__srv__ExampleSrv_Request * msg = (lecture3_interfaces__srv__ExampleSrv_Request *)allocator.allocate(sizeof(lecture3_interfaces__srv__ExampleSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lecture3_interfaces__srv__ExampleSrv_Request));
  bool success = lecture3_interfaces__srv__ExampleSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lecture3_interfaces__srv__ExampleSrv_Request__destroy(lecture3_interfaces__srv__ExampleSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lecture3_interfaces__srv__ExampleSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lecture3_interfaces__srv__ExampleSrv_Request__Sequence__init(lecture3_interfaces__srv__ExampleSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lecture3_interfaces__srv__ExampleSrv_Request * data = NULL;

  if (size) {
    data = (lecture3_interfaces__srv__ExampleSrv_Request *)allocator.zero_allocate(size, sizeof(lecture3_interfaces__srv__ExampleSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lecture3_interfaces__srv__ExampleSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lecture3_interfaces__srv__ExampleSrv_Request__fini(&data[i - 1]);
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
lecture3_interfaces__srv__ExampleSrv_Request__Sequence__fini(lecture3_interfaces__srv__ExampleSrv_Request__Sequence * array)
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
      lecture3_interfaces__srv__ExampleSrv_Request__fini(&array->data[i]);
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

lecture3_interfaces__srv__ExampleSrv_Request__Sequence *
lecture3_interfaces__srv__ExampleSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lecture3_interfaces__srv__ExampleSrv_Request__Sequence * array = (lecture3_interfaces__srv__ExampleSrv_Request__Sequence *)allocator.allocate(sizeof(lecture3_interfaces__srv__ExampleSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lecture3_interfaces__srv__ExampleSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lecture3_interfaces__srv__ExampleSrv_Request__Sequence__destroy(lecture3_interfaces__srv__ExampleSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lecture3_interfaces__srv__ExampleSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lecture3_interfaces__srv__ExampleSrv_Request__Sequence__are_equal(const lecture3_interfaces__srv__ExampleSrv_Request__Sequence * lhs, const lecture3_interfaces__srv__ExampleSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lecture3_interfaces__srv__ExampleSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lecture3_interfaces__srv__ExampleSrv_Request__Sequence__copy(
  const lecture3_interfaces__srv__ExampleSrv_Request__Sequence * input,
  lecture3_interfaces__srv__ExampleSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lecture3_interfaces__srv__ExampleSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lecture3_interfaces__srv__ExampleSrv_Request * data =
      (lecture3_interfaces__srv__ExampleSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lecture3_interfaces__srv__ExampleSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lecture3_interfaces__srv__ExampleSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lecture3_interfaces__srv__ExampleSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `sum`
// already included above
// #include "std_msgs/msg/detail/int32__functions.h"

bool
lecture3_interfaces__srv__ExampleSrv_Response__init(lecture3_interfaces__srv__ExampleSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  if (!std_msgs__msg__Int32__init(&msg->sum)) {
    lecture3_interfaces__srv__ExampleSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
lecture3_interfaces__srv__ExampleSrv_Response__fini(lecture3_interfaces__srv__ExampleSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
  std_msgs__msg__Int32__fini(&msg->sum);
}

bool
lecture3_interfaces__srv__ExampleSrv_Response__are_equal(const lecture3_interfaces__srv__ExampleSrv_Response * lhs, const lecture3_interfaces__srv__ExampleSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (!std_msgs__msg__Int32__are_equal(
      &(lhs->sum), &(rhs->sum)))
  {
    return false;
  }
  return true;
}

bool
lecture3_interfaces__srv__ExampleSrv_Response__copy(
  const lecture3_interfaces__srv__ExampleSrv_Response * input,
  lecture3_interfaces__srv__ExampleSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  if (!std_msgs__msg__Int32__copy(
      &(input->sum), &(output->sum)))
  {
    return false;
  }
  return true;
}

lecture3_interfaces__srv__ExampleSrv_Response *
lecture3_interfaces__srv__ExampleSrv_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lecture3_interfaces__srv__ExampleSrv_Response * msg = (lecture3_interfaces__srv__ExampleSrv_Response *)allocator.allocate(sizeof(lecture3_interfaces__srv__ExampleSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lecture3_interfaces__srv__ExampleSrv_Response));
  bool success = lecture3_interfaces__srv__ExampleSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lecture3_interfaces__srv__ExampleSrv_Response__destroy(lecture3_interfaces__srv__ExampleSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lecture3_interfaces__srv__ExampleSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lecture3_interfaces__srv__ExampleSrv_Response__Sequence__init(lecture3_interfaces__srv__ExampleSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lecture3_interfaces__srv__ExampleSrv_Response * data = NULL;

  if (size) {
    data = (lecture3_interfaces__srv__ExampleSrv_Response *)allocator.zero_allocate(size, sizeof(lecture3_interfaces__srv__ExampleSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lecture3_interfaces__srv__ExampleSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lecture3_interfaces__srv__ExampleSrv_Response__fini(&data[i - 1]);
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
lecture3_interfaces__srv__ExampleSrv_Response__Sequence__fini(lecture3_interfaces__srv__ExampleSrv_Response__Sequence * array)
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
      lecture3_interfaces__srv__ExampleSrv_Response__fini(&array->data[i]);
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

lecture3_interfaces__srv__ExampleSrv_Response__Sequence *
lecture3_interfaces__srv__ExampleSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lecture3_interfaces__srv__ExampleSrv_Response__Sequence * array = (lecture3_interfaces__srv__ExampleSrv_Response__Sequence *)allocator.allocate(sizeof(lecture3_interfaces__srv__ExampleSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lecture3_interfaces__srv__ExampleSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lecture3_interfaces__srv__ExampleSrv_Response__Sequence__destroy(lecture3_interfaces__srv__ExampleSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lecture3_interfaces__srv__ExampleSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lecture3_interfaces__srv__ExampleSrv_Response__Sequence__are_equal(const lecture3_interfaces__srv__ExampleSrv_Response__Sequence * lhs, const lecture3_interfaces__srv__ExampleSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lecture3_interfaces__srv__ExampleSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lecture3_interfaces__srv__ExampleSrv_Response__Sequence__copy(
  const lecture3_interfaces__srv__ExampleSrv_Response__Sequence * input,
  lecture3_interfaces__srv__ExampleSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lecture3_interfaces__srv__ExampleSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lecture3_interfaces__srv__ExampleSrv_Response * data =
      (lecture3_interfaces__srv__ExampleSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lecture3_interfaces__srv__ExampleSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lecture3_interfaces__srv__ExampleSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lecture3_interfaces__srv__ExampleSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
