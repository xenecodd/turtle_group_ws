// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/StringArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__STRING_ARRAY__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__STRING_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StringArray in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__StringArray
{
  rosidl_runtime_c__String__Sequence data;
} turtle_interfaces__msg__StringArray;

// Struct for a sequence of turtle_interfaces__msg__StringArray.
typedef struct turtle_interfaces__msg__StringArray__Sequence
{
  turtle_interfaces__msg__StringArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__StringArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__STRING_ARRAY__STRUCT_H_
