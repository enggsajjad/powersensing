// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msg1:msg/LogTf.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG1__MSG__DETAIL__LOG_TF__TRAITS_HPP_
#define CUSTOM_MSG1__MSG__DETAIL__LOG_TF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msg1/msg/detail/log_tf__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msg1
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

  // member: sensor1
  {
    out << "sensor1: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor1, out);
    out << ", ";
  }

  // member: volt
  {
    out << "volt: ";
    rosidl_generator_traits::value_to_yaml(msg.volt, out);
    out << ", ";
  }

  // member: sensor2
  {
    out << "sensor2: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor2, out);
    out << ", ";
  }

  // member: amp
  {
    out << "amp: ";
    rosidl_generator_traits::value_to_yaml(msg.amp, out);
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

  // member: sensor1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor1: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor1, out);
    out << "\n";
  }

  // member: volt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "volt: ";
    rosidl_generator_traits::value_to_yaml(msg.volt, out);
    out << "\n";
  }

  // member: sensor2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor2: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor2, out);
    out << "\n";
  }

  // member: amp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "amp: ";
    rosidl_generator_traits::value_to_yaml(msg.amp, out);
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

}  // namespace custom_msg1

namespace rosidl_generator_traits
{

[[deprecated("use custom_msg1::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msg1::msg::LogTf & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msg1::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msg1::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msg1::msg::LogTf & msg)
{
  return custom_msg1::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msg1::msg::LogTf>()
{
  return "custom_msg1::msg::LogTf";
}

template<>
inline const char * name<custom_msg1::msg::LogTf>()
{
  return "custom_msg1/msg/LogTf";
}

template<>
struct has_fixed_size<custom_msg1::msg::LogTf>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msg1::msg::LogTf>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msg1::msg::LogTf>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSG1__MSG__DETAIL__LOG_TF__TRAITS_HPP_
