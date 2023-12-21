// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msg1:msg/LogTf.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG1__MSG__DETAIL__LOG_TF__STRUCT_HPP_
#define CUSTOM_MSG1__MSG__DETAIL__LOG_TF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msg1__msg__LogTf __attribute__((deprecated))
#else
# define DEPRECATED__custom_msg1__msg__LogTf __declspec(deprecated)
#endif

namespace custom_msg1
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LogTf_
{
  using Type = LogTf_<ContainerAllocator>;

  explicit LogTf_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_frame = "";
      this->sensor1 = "";
      this->volt = 0ll;
      this->sensor2 = "";
      this->amp = 0ll;
    }
  }

  explicit LogTf_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_frame(_alloc),
    sensor1(_alloc),
    sensor2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_frame = "";
      this->sensor1 = "";
      this->volt = 0ll;
      this->sensor2 = "";
      this->amp = 0ll;
    }
  }

  // field types and members
  using _time_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _time_frame_type time_frame;
  using _sensor1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor1_type sensor1;
  using _volt_type =
    int64_t;
  _volt_type volt;
  using _sensor2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor2_type sensor2;
  using _amp_type =
    int64_t;
  _amp_type amp;

  // setters for named parameter idiom
  Type & set__time_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->time_frame = _arg;
    return *this;
  }
  Type & set__sensor1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor1 = _arg;
    return *this;
  }
  Type & set__volt(
    const int64_t & _arg)
  {
    this->volt = _arg;
    return *this;
  }
  Type & set__sensor2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor2 = _arg;
    return *this;
  }
  Type & set__amp(
    const int64_t & _arg)
  {
    this->amp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msg1::msg::LogTf_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msg1::msg::LogTf_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msg1::msg::LogTf_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msg1::msg::LogTf_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msg1::msg::LogTf_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msg1::msg::LogTf_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msg1::msg::LogTf_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msg1::msg::LogTf_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msg1::msg::LogTf_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msg1::msg::LogTf_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msg1__msg__LogTf
    std::shared_ptr<custom_msg1::msg::LogTf_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msg1__msg__LogTf
    std::shared_ptr<custom_msg1::msg::LogTf_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogTf_ & other) const
  {
    if (this->time_frame != other.time_frame) {
      return false;
    }
    if (this->sensor1 != other.sensor1) {
      return false;
    }
    if (this->volt != other.volt) {
      return false;
    }
    if (this->sensor2 != other.sensor2) {
      return false;
    }
    if (this->amp != other.amp) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogTf_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogTf_

// alias to use template instance with default allocator
using LogTf =
  custom_msg1::msg::LogTf_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msg1

#endif  // CUSTOM_MSG1__MSG__DETAIL__LOG_TF__STRUCT_HPP_
