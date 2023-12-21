// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_msg:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSG__MSG__DETAIL__MY_MSG__STRUCT_HPP_
#define ROS2_MSG__MSG__DETAIL__MY_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_msg__msg__MyMsg __attribute__((deprecated))
#else
# define DEPRECATED__ros2_msg__msg__MyMsg __declspec(deprecated)
#endif

namespace ros2_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyMsg_
{
  using Type = MyMsg_<ContainerAllocator>;

  explicit MyMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->day = 0l;
      this->month = "";
      this->year = 0l;
    }
  }

  explicit MyMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : month(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->day = 0l;
      this->month = "";
      this->year = 0l;
    }
  }

  // field types and members
  using _day_type =
    int32_t;
  _day_type day;
  using _month_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _month_type month;
  using _year_type =
    int32_t;
  _year_type year;

  // setters for named parameter idiom
  Type & set__day(
    const int32_t & _arg)
  {
    this->day = _arg;
    return *this;
  }
  Type & set__month(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->month = _arg;
    return *this;
  }
  Type & set__year(
    const int32_t & _arg)
  {
    this->year = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_msg::msg::MyMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_msg::msg::MyMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_msg::msg::MyMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_msg::msg::MyMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_msg::msg::MyMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_msg::msg::MyMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_msg::msg::MyMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_msg::msg::MyMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_msg::msg::MyMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_msg::msg::MyMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_msg__msg__MyMsg
    std::shared_ptr<ros2_msg::msg::MyMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_msg__msg__MyMsg
    std::shared_ptr<ros2_msg::msg::MyMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyMsg_ & other) const
  {
    if (this->day != other.day) {
      return false;
    }
    if (this->month != other.month) {
      return false;
    }
    if (this->year != other.year) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyMsg_

// alias to use template instance with default allocator
using MyMsg =
  ros2_msg::msg::MyMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_msg

#endif  // ROS2_MSG__MSG__DETAIL__MY_MSG__STRUCT_HPP_
