// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:srv/TurtleCreate.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__TURTLE_CREATE__TRAITS_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__TURTLE_CREATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_interfaces/srv/detail/turtle_create__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurtleCreate_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleCreate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleCreate_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::srv::TurtleCreate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::srv::TurtleCreate_Request & msg)
{
  return turtle_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::srv::TurtleCreate_Request>()
{
  return "turtle_interfaces::srv::TurtleCreate_Request";
}

template<>
inline const char * name<turtle_interfaces::srv::TurtleCreate_Request>()
{
  return "turtle_interfaces/srv/TurtleCreate_Request";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::TurtleCreate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::TurtleCreate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::srv::TurtleCreate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtle_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurtleCreate_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleCreate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleCreate_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::srv::TurtleCreate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::srv::TurtleCreate_Response & msg)
{
  return turtle_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::srv::TurtleCreate_Response>()
{
  return "turtle_interfaces::srv::TurtleCreate_Response";
}

template<>
inline const char * name<turtle_interfaces::srv::TurtleCreate_Response>()
{
  return "turtle_interfaces/srv/TurtleCreate_Response";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::TurtleCreate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::TurtleCreate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_interfaces::srv::TurtleCreate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::TurtleCreate>()
{
  return "turtle_interfaces::srv::TurtleCreate";
}

template<>
inline const char * name<turtle_interfaces::srv::TurtleCreate>()
{
  return "turtle_interfaces/srv/TurtleCreate";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::TurtleCreate>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_interfaces::srv::TurtleCreate_Request>::value &&
    has_fixed_size<turtle_interfaces::srv::TurtleCreate_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_interfaces::srv::TurtleCreate>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_interfaces::srv::TurtleCreate_Request>::value &&
    has_bounded_size<turtle_interfaces::srv::TurtleCreate_Response>::value
  >
{
};

template<>
struct is_service<turtle_interfaces::srv::TurtleCreate>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_interfaces::srv::TurtleCreate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_interfaces::srv::TurtleCreate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__SRV__DETAIL__TURTLE_CREATE__TRAITS_HPP_
