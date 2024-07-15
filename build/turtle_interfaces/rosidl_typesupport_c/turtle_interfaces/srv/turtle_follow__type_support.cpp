// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:srv/TurtleFollow.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtle_interfaces/srv/detail/turtle_follow__struct.h"
#include "turtle_interfaces/srv/detail/turtle_follow__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtle_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TurtleFollow_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurtleFollow_Request_type_support_ids_t;

static const _TurtleFollow_Request_type_support_ids_t _TurtleFollow_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TurtleFollow_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurtleFollow_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurtleFollow_Request_type_support_symbol_names_t _TurtleFollow_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, srv, TurtleFollow_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, TurtleFollow_Request)),
  }
};

typedef struct _TurtleFollow_Request_type_support_data_t
{
  void * data[2];
} _TurtleFollow_Request_type_support_data_t;

static _TurtleFollow_Request_type_support_data_t _TurtleFollow_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurtleFollow_Request_message_typesupport_map = {
  2,
  "turtle_interfaces",
  &_TurtleFollow_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TurtleFollow_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TurtleFollow_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurtleFollow_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurtleFollow_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtle_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtle_interfaces, srv, TurtleFollow_Request)() {
  return &::turtle_interfaces::srv::rosidl_typesupport_c::TurtleFollow_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtle_interfaces/srv/detail/turtle_follow__struct.h"
// already included above
// #include "turtle_interfaces/srv/detail/turtle_follow__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtle_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TurtleFollow_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurtleFollow_Response_type_support_ids_t;

static const _TurtleFollow_Response_type_support_ids_t _TurtleFollow_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TurtleFollow_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurtleFollow_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurtleFollow_Response_type_support_symbol_names_t _TurtleFollow_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, srv, TurtleFollow_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, TurtleFollow_Response)),
  }
};

typedef struct _TurtleFollow_Response_type_support_data_t
{
  void * data[2];
} _TurtleFollow_Response_type_support_data_t;

static _TurtleFollow_Response_type_support_data_t _TurtleFollow_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurtleFollow_Response_message_typesupport_map = {
  2,
  "turtle_interfaces",
  &_TurtleFollow_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TurtleFollow_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TurtleFollow_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TurtleFollow_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurtleFollow_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtle_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtle_interfaces, srv, TurtleFollow_Response)() {
  return &::turtle_interfaces::srv::rosidl_typesupport_c::TurtleFollow_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtle_interfaces/srv/detail/turtle_follow__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtle_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TurtleFollow_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TurtleFollow_type_support_ids_t;

static const _TurtleFollow_type_support_ids_t _TurtleFollow_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TurtleFollow_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TurtleFollow_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TurtleFollow_type_support_symbol_names_t _TurtleFollow_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, srv, TurtleFollow)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, TurtleFollow)),
  }
};

typedef struct _TurtleFollow_type_support_data_t
{
  void * data[2];
} _TurtleFollow_type_support_data_t;

static _TurtleFollow_type_support_data_t _TurtleFollow_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TurtleFollow_service_typesupport_map = {
  2,
  "turtle_interfaces",
  &_TurtleFollow_service_typesupport_ids.typesupport_identifier[0],
  &_TurtleFollow_service_typesupport_symbol_names.symbol_name[0],
  &_TurtleFollow_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TurtleFollow_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TurtleFollow_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtle_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, turtle_interfaces, srv, TurtleFollow)() {
  return &::turtle_interfaces::srv::rosidl_typesupport_c::TurtleFollow_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
