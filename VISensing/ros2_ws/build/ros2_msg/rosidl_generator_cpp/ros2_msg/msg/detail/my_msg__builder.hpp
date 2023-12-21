// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_msg:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSG__MSG__DETAIL__MY_MSG__BUILDER_HPP_
#define ROS2_MSG__MSG__DETAIL__MY_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_msg/msg/detail/my_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_msg
{

namespace msg
{

namespace builder
{

class Init_MyMsg_year
{
public:
  explicit Init_MyMsg_year(::ros2_msg::msg::MyMsg & msg)
  : msg_(msg)
  {}
  ::ros2_msg::msg::MyMsg year(::ros2_msg::msg::MyMsg::_year_type arg)
  {
    msg_.year = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_msg::msg::MyMsg msg_;
};

class Init_MyMsg_month
{
public:
  explicit Init_MyMsg_month(::ros2_msg::msg::MyMsg & msg)
  : msg_(msg)
  {}
  Init_MyMsg_year month(::ros2_msg::msg::MyMsg::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_MyMsg_year(msg_);
  }

private:
  ::ros2_msg::msg::MyMsg msg_;
};

class Init_MyMsg_day
{
public:
  Init_MyMsg_day()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyMsg_month day(::ros2_msg::msg::MyMsg::_day_type arg)
  {
    msg_.day = std::move(arg);
    return Init_MyMsg_month(msg_);
  }

private:
  ::ros2_msg::msg::MyMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_msg::msg::MyMsg>()
{
  return ros2_msg::msg::builder::Init_MyMsg_day();
}

}  // namespace ros2_msg

#endif  // ROS2_MSG__MSG__DETAIL__MY_MSG__BUILDER_HPP_
