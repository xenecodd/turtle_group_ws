// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:srv/TurtleFollow.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__TURTLE_FOLLOW__BUILDER_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__TURTLE_FOLLOW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_interfaces/srv/detail/turtle_follow__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleFollow_Request_leader
{
public:
  Init_TurtleFollow_Request_leader()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::TurtleFollow_Request leader(::turtle_interfaces::srv::TurtleFollow_Request::_leader_type arg)
  {
    msg_.leader = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::TurtleFollow_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::TurtleFollow_Request>()
{
  return turtle_interfaces::srv::builder::Init_TurtleFollow_Request_leader();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleFollow_Response_status
{
public:
  Init_TurtleFollow_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::TurtleFollow_Response status(::turtle_interfaces::srv::TurtleFollow_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::TurtleFollow_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::TurtleFollow_Response>()
{
  return turtle_interfaces::srv::builder::Init_TurtleFollow_Response_status();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__SRV__DETAIL__TURTLE_FOLLOW__BUILDER_HPP_
