// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_interfaces:msg/StringArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_interfaces/msg/detail/string_array__rosidl_typesupport_introspection_c.h"
#include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_interfaces/msg/detail/string_array__functions.h"
#include "turtle_interfaces/msg/detail/string_array__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__StringArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__msg__StringArray__init(message_memory);
}

void turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__StringArray_fini_function(void * message_memory)
{
  turtle_interfaces__msg__StringArray__fini(message_memory);
}

size_t turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__size_function__StringArray__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__get_const_function__StringArray__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__get_function__StringArray__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__fetch_function__StringArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__get_const_function__StringArray__data(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__assign_function__StringArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__get_function__StringArray__data(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__resize_function__StringArray__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__StringArray_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__StringArray, data),  // bytes offset in struct
    NULL,  // default value
    turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__size_function__StringArray__data,  // size() function pointer
    turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__get_const_function__StringArray__data,  // get_const(index) function pointer
    turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__get_function__StringArray__data,  // get(index) function pointer
    turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__fetch_function__StringArray__data,  // fetch(index, &value) function pointer
    turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__assign_function__StringArray__data,  // assign(index, value) function pointer
    turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__resize_function__StringArray__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__StringArray_message_members = {
  "turtle_interfaces__msg",  // message namespace
  "StringArray",  // message name
  1,  // number of fields
  sizeof(turtle_interfaces__msg__StringArray),
  turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__StringArray_message_member_array,  // message members
  turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__StringArray_init_function,  // function to initialize message memory (memory has to be allocated)
  turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__StringArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__StringArray_message_type_support_handle = {
  0,
  &turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__StringArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, msg, StringArray)() {
  if (!turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__StringArray_message_type_support_handle.typesupport_identifier) {
    turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__StringArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtle_interfaces__msg__StringArray__rosidl_typesupport_introspection_c__StringArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
