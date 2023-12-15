// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drobo_interfaces:msg/MdLibMsg.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__MSG__DETAIL__MD_LIB_MSG__BUILDER_HPP_
#define DROBO_INTERFACES__MSG__DETAIL__MD_LIB_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drobo_interfaces/msg/detail/md_lib_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drobo_interfaces
{

namespace msg
{

namespace builder
{

class Init_MdLibMsg_timeout
{
public:
  explicit Init_MdLibMsg_timeout(::drobo_interfaces::msg::MdLibMsg & msg)
  : msg_(msg)
  {}
  ::drobo_interfaces::msg::MdLibMsg timeout(::drobo_interfaces::msg::MdLibMsg::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drobo_interfaces::msg::MdLibMsg msg_;
};

class Init_MdLibMsg_angle
{
public:
  explicit Init_MdLibMsg_angle(::drobo_interfaces::msg::MdLibMsg & msg)
  : msg_(msg)
  {}
  Init_MdLibMsg_timeout angle(::drobo_interfaces::msg::MdLibMsg::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_MdLibMsg_timeout(msg_);
  }

private:
  ::drobo_interfaces::msg::MdLibMsg msg_;
};

class Init_MdLibMsg_port
{
public:
  explicit Init_MdLibMsg_port(::drobo_interfaces::msg::MdLibMsg & msg)
  : msg_(msg)
  {}
  Init_MdLibMsg_angle port(::drobo_interfaces::msg::MdLibMsg::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_MdLibMsg_angle(msg_);
  }

private:
  ::drobo_interfaces::msg::MdLibMsg msg_;
};

class Init_MdLibMsg_power
{
public:
  explicit Init_MdLibMsg_power(::drobo_interfaces::msg::MdLibMsg & msg)
  : msg_(msg)
  {}
  Init_MdLibMsg_port power(::drobo_interfaces::msg::MdLibMsg::_power_type arg)
  {
    msg_.power = std::move(arg);
    return Init_MdLibMsg_port(msg_);
  }

private:
  ::drobo_interfaces::msg::MdLibMsg msg_;
};

class Init_MdLibMsg_phase
{
public:
  explicit Init_MdLibMsg_phase(::drobo_interfaces::msg::MdLibMsg & msg)
  : msg_(msg)
  {}
  Init_MdLibMsg_power phase(::drobo_interfaces::msg::MdLibMsg::_phase_type arg)
  {
    msg_.phase = std::move(arg);
    return Init_MdLibMsg_power(msg_);
  }

private:
  ::drobo_interfaces::msg::MdLibMsg msg_;
};

class Init_MdLibMsg_mode
{
public:
  explicit Init_MdLibMsg_mode(::drobo_interfaces::msg::MdLibMsg & msg)
  : msg_(msg)
  {}
  Init_MdLibMsg_phase mode(::drobo_interfaces::msg::MdLibMsg::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MdLibMsg_phase(msg_);
  }

private:
  ::drobo_interfaces::msg::MdLibMsg msg_;
};

class Init_MdLibMsg_semi_id
{
public:
  explicit Init_MdLibMsg_semi_id(::drobo_interfaces::msg::MdLibMsg & msg)
  : msg_(msg)
  {}
  Init_MdLibMsg_mode semi_id(::drobo_interfaces::msg::MdLibMsg::_semi_id_type arg)
  {
    msg_.semi_id = std::move(arg);
    return Init_MdLibMsg_mode(msg_);
  }

private:
  ::drobo_interfaces::msg::MdLibMsg msg_;
};

class Init_MdLibMsg_use_semi
{
public:
  explicit Init_MdLibMsg_use_semi(::drobo_interfaces::msg::MdLibMsg & msg)
  : msg_(msg)
  {}
  Init_MdLibMsg_semi_id use_semi(::drobo_interfaces::msg::MdLibMsg::_use_semi_type arg)
  {
    msg_.use_semi = std::move(arg);
    return Init_MdLibMsg_semi_id(msg_);
  }

private:
  ::drobo_interfaces::msg::MdLibMsg msg_;
};

class Init_MdLibMsg_address
{
public:
  Init_MdLibMsg_address()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MdLibMsg_use_semi address(::drobo_interfaces::msg::MdLibMsg::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_MdLibMsg_use_semi(msg_);
  }

private:
  ::drobo_interfaces::msg::MdLibMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drobo_interfaces::msg::MdLibMsg>()
{
  return drobo_interfaces::msg::builder::Init_MdLibMsg_address();
}

}  // namespace drobo_interfaces

#endif  // DROBO_INTERFACES__MSG__DETAIL__MD_LIB_MSG__BUILDER_HPP_
