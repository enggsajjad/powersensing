// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msg:msg/LogTf.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__LOG_TF__TRAITS_HPP_
#define CUSTOM_MSG__MSG__DETAIL__LOG_TF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msg/msg/detail/log_tf__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const LogTf & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_frame
  {
    out << "time_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.time_frame, out);
    out << ", ";
  }

  // member: log_msg
  {
    out << "log_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.log_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LogTf & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.time_frame, out);
    out << "\n";
  }

  // member: log_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "log_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.log_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LogTf & msg, bool use_flow_style = false)
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

}  // namespace custom_msg

namespace rosidl_generator_traits
{

[[deprecated("use custom_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msg::msg::LogTf & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msg::msg::LogTf & msg)
{
  return custom_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msg::msg::LogTf>()
{
  return "custom_msg::msg::LogTf";
}

template<>
inline const char * name<custom_msg::msg::LogTf>()
{
  return "custom_msg/msg/LogTf";
}

template<>
struct has_fixed_size<custom_msg::msg::LogTf>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msg::msg::LogTf>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msg::msg::LogTf>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSG__MSG__DETAIL__LOG_TF__TRAITS_HPP_
