// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msg1:msg/LogTf.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG1__MSG__DETAIL__LOG_TF__BUILDER_HPP_
#define CUSTOM_MSG1__MSG__DETAIL__LOG_TF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msg1/msg/detail/log_tf__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msg1
{

namespace msg
{

namespace builder
{

class Init_LogTf_amp
{
public:
  explicit Init_LogTf_amp(::custom_msg1::msg::LogTf & msg)
  : msg_(msg)
  {}
  ::custom_msg1::msg::LogTf amp(::custom_msg1::msg::LogTf::_amp_type arg)
  {
    msg_.amp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg1::msg::LogTf msg_;
};

class Init_LogTf_sensor2
{
public:
  explicit Init_LogTf_sensor2(::custom_msg1::msg::LogTf & msg)
  : msg_(msg)
  {}
  Init_LogTf_amp sensor2(::custom_msg1::msg::LogTf::_sensor2_type arg)
  {
    msg_.sensor2 = std::move(arg);
    return Init_LogTf_amp(msg_);
  }

private:
  ::custom_msg1::msg::LogTf msg_;
};

class Init_LogTf_volt
{
public:
  explicit Init_LogTf_volt(::custom_msg1::msg::LogTf & msg)
  : msg_(msg)
  {}
  Init_LogTf_sensor2 volt(::custom_msg1::msg::LogTf::_volt_type arg)
  {
    msg_.volt = std::move(arg);
    return Init_LogTf_sensor2(msg_);
  }

private:
  ::custom_msg1::msg::LogTf msg_;
};

class Init_LogTf_sensor1
{
public:
  explicit Init_LogTf_sensor1(::custom_msg1::msg::LogTf & msg)
  : msg_(msg)
  {}
  Init_LogTf_volt sensor1(::custom_msg1::msg::LogTf::_sensor1_type arg)
  {
    msg_.sensor1 = std::move(arg);
    return Init_LogTf_volt(msg_);
  }

private:
  ::custom_msg1::msg::LogTf msg_;
};

class Init_LogTf_time_frame
{
public:
  Init_LogTf_time_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogTf_sensor1 time_frame(::custom_msg1::msg::LogTf::_time_frame_type arg)
  {
    msg_.time_frame = std::move(arg);
    return Init_LogTf_sensor1(msg_);
  }

private:
  ::custom_msg1::msg::LogTf msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg1::msg::LogTf>()
{
  return custom_msg1::msg::builder::Init_LogTf_time_frame();
}

}  // namespace custom_msg1

#endif  // CUSTOM_MSG1__MSG__DETAIL__LOG_TF__BUILDER_HPP_
