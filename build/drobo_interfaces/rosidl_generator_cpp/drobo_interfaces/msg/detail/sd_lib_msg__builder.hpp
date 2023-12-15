// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drobo_interfaces:msg/SdLibMsg.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__MSG__DETAIL__SD_LIB_MSG__BUILDER_HPP_
#define DROBO_INTERFACES__MSG__DETAIL__SD_LIB_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drobo_interfaces/msg/detail/sd_lib_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drobo_interfaces
{

namespace msg
{

namespace builder
{

class Init_SdLibMsg_power2
{
public:
  explicit Init_SdLibMsg_power2(::drobo_interfaces::msg::SdLibMsg & msg)
  : msg_(msg)
  {}
  ::drobo_interfaces::msg::SdLibMsg power2(::drobo_interfaces::msg::SdLibMsg::_power2_type arg)
  {
    msg_.power2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drobo_interfaces::msg::SdLibMsg msg_;
};

class Init_SdLibMsg_power1
{
public:
  explicit Init_SdLibMsg_power1(::drobo_interfaces::msg::SdLibMsg & msg)
  : msg_(msg)
  {}
  Init_SdLibMsg_power2 power1(::drobo_interfaces::msg::SdLibMsg::_power1_type arg)
  {
    msg_.power1 = std::move(arg);
    return Init_SdLibMsg_power2(msg_);
  }

private:
  ::drobo_interfaces::msg::SdLibMsg msg_;
};

class Init_SdLibMsg_port
{
public:
  explicit Init_SdLibMsg_port(::drobo_interfaces::msg::SdLibMsg & msg)
  : msg_(msg)
  {}
  Init_SdLibMsg_power1 port(::drobo_interfaces::msg::SdLibMsg::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_SdLibMsg_power1(msg_);
  }

private:
  ::drobo_interfaces::msg::SdLibMsg msg_;
};

class Init_SdLibMsg_semi_id
{
public:
  explicit Init_SdLibMsg_semi_id(::drobo_interfaces::msg::SdLibMsg & msg)
  : msg_(msg)
  {}
  Init_SdLibMsg_port semi_id(::drobo_interfaces::msg::SdLibMsg::_semi_id_type arg)
  {
    msg_.semi_id = std::move(arg);
    return Init_SdLibMsg_port(msg_);
  }

private:
  ::drobo_interfaces::msg::SdLibMsg msg_;
};

class Init_SdLibMsg_address
{
public:
  Init_SdLibMsg_address()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdLibMsg_semi_id address(::drobo_interfaces::msg::SdLibMsg::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_SdLibMsg_semi_id(msg_);
  }

private:
  ::drobo_interfaces::msg::SdLibMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drobo_interfaces::msg::SdLibMsg>()
{
  return drobo_interfaces::msg::builder::Init_SdLibMsg_address();
}

}  // namespace drobo_interfaces

#endif  // DROBO_INTERFACES__MSG__DETAIL__SD_LIB_MSG__BUILDER_HPP_
