// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/StringArray.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/string_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
turtle_interfaces__msg__StringArray__init(turtle_interfaces__msg__StringArray * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__Sequence__init(&msg->data, 0)) {
    turtle_interfaces__msg__StringArray__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__msg__StringArray__fini(turtle_interfaces__msg__StringArray * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__Sequence__fini(&msg->data);
}

bool
turtle_interfaces__msg__StringArray__are_equal(const turtle_interfaces__msg__StringArray * lhs, const turtle_interfaces__msg__StringArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__StringArray__copy(
  const turtle_interfaces__msg__StringArray * input,
  turtle_interfaces__msg__StringArray * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

turtle_interfaces__msg__StringArray *
turtle_interfaces__msg__StringArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__msg__StringArray * msg = (turtle_interfaces__msg__StringArray *)allocator.allocate(sizeof(turtle_interfaces__msg__StringArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__StringArray));
  bool success = turtle_interfaces__msg__StringArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__StringArray__destroy(turtle_interfaces__msg__StringArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_interfaces__msg__StringArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_interfaces__msg__StringArray__Sequence__init(turtle_interfaces__msg__StringArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__msg__StringArray * data = NULL;

  if (size) {
    data = (turtle_interfaces__msg__StringArray *)allocator.zero_allocate(size, sizeof(turtle_interfaces__msg__StringArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__StringArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__StringArray__fini(&data[i - 1]);
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
turtle_interfaces__msg__StringArray__Sequence__fini(turtle_interfaces__msg__StringArray__Sequence * array)
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
      turtle_interfaces__msg__StringArray__fini(&array->data[i]);
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

turtle_interfaces__msg__StringArray__Sequence *
turtle_interfaces__msg__StringArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__msg__StringArray__Sequence * array = (turtle_interfaces__msg__StringArray__Sequence *)allocator.allocate(sizeof(turtle_interfaces__msg__StringArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__StringArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__StringArray__Sequence__destroy(turtle_interfaces__msg__StringArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_interfaces__msg__StringArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_interfaces__msg__StringArray__Sequence__are_equal(const turtle_interfaces__msg__StringArray__Sequence * lhs, const turtle_interfaces__msg__StringArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__StringArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__StringArray__Sequence__copy(
  const turtle_interfaces__msg__StringArray__Sequence * input,
  turtle_interfaces__msg__StringArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__StringArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_interfaces__msg__StringArray * data =
      (turtle_interfaces__msg__StringArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__StringArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__StringArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_interfaces__msg__StringArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
