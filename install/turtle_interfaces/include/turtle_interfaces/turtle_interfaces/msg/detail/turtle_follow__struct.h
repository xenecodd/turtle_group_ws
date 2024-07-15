// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/TurtleFollow.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__TURTLE_FOLLOW__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__TURTLE_FOLLOW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TurtleFollow in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__TurtleFollow
{
  uint8_t structure_needs_at_least_one_member;
} turtle_interfaces__msg__TurtleFollow;

// Struct for a sequence of turtle_interfaces__msg__TurtleFollow.
typedef struct turtle_interfaces__msg__TurtleFollow__Sequence
{
  turtle_interfaces__msg__TurtleFollow * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__TurtleFollow__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__TURTLE_FOLLOW__STRUCT_H_
