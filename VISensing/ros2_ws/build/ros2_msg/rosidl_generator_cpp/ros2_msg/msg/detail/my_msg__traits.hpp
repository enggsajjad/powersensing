// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_msg:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSG__MSG__DETAIL__MY_MSG__TRAITS_HPP_
#define ROS2_MSG__MSG__DETAIL__MY_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_msg/msg/detail/my_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: day
  {
    out << "day: ";
    rosidl_generator_traits::value_to_yaml(msg.day, out);
    out << ", ";
  }

  // member: month
  {
    out << "month: ";
    rosidl_generator_traits::value_to_yaml(msg.month, out);
    out << ", ";
  }

  // member: year
  {
    out << "year: ";
    rosidl_generator_traits::value_to_yaml(msg.year, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "day: ";
    rosidl_generator_traits::value_to_yaml(msg.day, out);
    out << "\n";
  }

  // member: month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "month: ";
    rosidl_generator_traits::value_to_yaml(msg.month, out);
    out << "\n";
  }

  // member: year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "year: ";
    rosidl_generator_traits::value_to_yaml(msg.year, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyMsg & msg, bool use_flow_style = false)
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

}  // namespace ros2_msg

namespace rosidl_generator_traits
{

[[deprecated("use ros2_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_msg::msg::MyMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_msg::msg::MyMsg & msg)
{
  return ros2_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_msg::msg::MyMsg>()
{
  return "ros2_msg::msg::MyMsg";
}

template<>
inline const char * name<ros2_msg::msg::MyMsg>()
{
  return "ros2_msg/msg/MyMsg";
}

template<>
struct has_fixed_size<ros2_msg::msg::MyMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_msg::msg::MyMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_msg::msg::MyMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_MSG__MSG__DETAIL__MY_MSG__TRAITS_HPP_
