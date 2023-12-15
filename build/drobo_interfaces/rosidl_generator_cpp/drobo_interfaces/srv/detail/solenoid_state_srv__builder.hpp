// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drobo_interfaces:srv/SolenoidStateSrv.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__BUILDER_HPP_
#define DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drobo_interfaces/srv/detail/solenoid_state_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drobo_interfaces
{

namespace srv
{

namespace builder
{

class Init_SolenoidStateSrv_Request_state
{
public:
  explicit Init_SolenoidStateSrv_Request_state(::drobo_interfaces::srv::SolenoidStateSrv_Request & msg)
  : msg_(msg)
  {}
  ::drobo_interfaces::srv::SolenoidStateSrv_Request state(::drobo_interfaces::srv::SolenoidStateSrv_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drobo_interfaces::srv::SolenoidStateSrv_Request msg_;
};

class Init_SolenoidStateSrv_Request_axle_position
{
public:
  Init_SolenoidStateSrv_Request_axle_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolenoidStateSrv_Request_state axle_position(::drobo_interfaces::srv::SolenoidStateSrv_Request::_axle_position_type arg)
  {
    msg_.axle_position = std::move(arg);
    return Init_SolenoidStateSrv_Request_state(msg_);
  }

private:
  ::drobo_interfaces::srv::SolenoidStateSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::drobo_interfaces::srv::SolenoidStateSrv_Request>()
{
  return drobo_interfaces::srv::builder::Init_SolenoidStateSrv_Request_axle_position();
}

}  // namespace drobo_interfaces


namespace drobo_interfaces
{

namespace srv
{

namespace builder
{

class Init_SolenoidStateSrv_Response_state
{
public:
  explicit Init_SolenoidStateSrv_Response_state(::drobo_interfaces::srv::SolenoidStateSrv_Response & msg)
  : msg_(msg)
  {}
  ::drobo_interfaces::srv::SolenoidStateSrv_Response state(::drobo_interfaces::srv::SolenoidStateSrv_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drobo_interfaces::srv::SolenoidStateSrv_Response msg_;
};

class Init_SolenoidStateSrv_Response_result
{
public:
  Init_SolenoidStateSrv_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolenoidStateSrv_Response_state result(::drobo_interfaces::srv::SolenoidStateSrv_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_SolenoidStateSrv_Response_state(msg_);
  }

private:
  ::drobo_interfaces::srv::SolenoidStateSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::drobo_interfaces::srv::SolenoidStateSrv_Response>()
{
  return drobo_interfaces::srv::builder::Init_SolenoidStateSrv_Response_result();
}

}  // namespace drobo_interfaces

#endif  // DROBO_INTERFACES__SRV__DETAIL__SOLENOID_STATE_SRV__BUILDER_HPP_
