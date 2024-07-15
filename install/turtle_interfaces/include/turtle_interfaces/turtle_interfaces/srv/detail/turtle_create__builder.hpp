// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:srv/TurtleCreate.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__TURTLE_CREATE__BUILDER_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__TURTLE_CREATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_interfaces/srv/detail/turtle_create__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleCreate_Request_num
{
public:
  Init_TurtleCreate_Request_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::TurtleCreate_Request num(::turtle_interfaces::srv::TurtleCreate_Request::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::TurtleCreate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::TurtleCreate_Request>()
{
  return turtle_interfaces::srv::builder::Init_TurtleCreate_Request_num();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleCreate_Response_status
{
public:
  Init_TurtleCreate_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::TurtleCreate_Response status(::turtle_interfaces::srv::TurtleCreate_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::TurtleCreate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::TurtleCreate_Response>()
{
  return turtle_interfaces::srv::builder::Init_TurtleCreate_Response_status();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__SRV__DETAIL__TURTLE_CREATE__BUILDER_HPP_
