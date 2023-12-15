// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drobo_interfaces:msg/SdLibMsg.idl
// generated code does not contain a copyright notice

#ifndef DROBO_INTERFACES__MSG__DETAIL__SD_LIB_MSG__TRAITS_HPP_
#define DROBO_INTERFACES__MSG__DETAIL__SD_LIB_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drobo_interfaces/msg/detail/sd_lib_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drobo_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SdLibMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: address
  {
    out << "address: ";
    rosidl_generator_traits::value_to_yaml(msg.address, out);
    out << ", ";
  }

  // member: semi_id
  {
    out << "semi_id: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_id, out);
    out << ", ";
  }

  // member: port
  {
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << ", ";
  }

  // member: power1
  {
    out << "power1: ";
    rosidl_generator_traits::value_to_yaml(msg.power1, out);
    out << ", ";
  }

  // member: power2
  {
    out << "power2: ";
    rosidl_generator_traits::value_to_yaml(msg.power2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SdLibMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "address: ";
    rosidl_generator_traits::value_to_yaml(msg.address, out);
    out << "\n";
  }

  // member: semi_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semi_id: ";
    rosidl_generator_traits::value_to_yaml(msg.semi_id, out);
    out << "\n";
  }

  // member: port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << "\n";
  }

  // member: power1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power1: ";
    rosidl_generator_traits::value_to_yaml(msg.power1, out);
    out << "\n";
  }

  // member: power2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power2: ";
    rosidl_generator_traits::value_to_yaml(msg.power2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SdLibMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace drobo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drobo_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drobo_interfaces::msg::SdLibMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  drobo_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drobo_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const drobo_interfaces::msg::SdLibMsg & msg)
{
  return drobo_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drobo_interfaces::msg::SdLibMsg>()
{
  return "drobo_interfaces::msg::SdLibMsg";
}

template<>
inline const char * name<drobo_interfaces::msg::SdLibMsg>()
{
  return "drobo_interfaces/msg/SdLibMsg";
}

template<>
struct has_fixed_size<drobo_interfaces::msg::SdLibMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<drobo_interfaces::msg::SdLibMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<drobo_interfaces::msg::SdLibMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DROBO_INTERFACES__MSG__DETAIL__SD_LIB_MSG__TRAITS_HPP_
