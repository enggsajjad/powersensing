// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_msg:msg/MyMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS2_MSG__MSG__DETAIL__MY_MSG__STRUCT_H_
#define ROS2_MSG__MSG__DETAIL__MY_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'month'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MyMsg in the package ros2_msg.
typedef struct ros2_msg__msg__MyMsg
{
  int32_t day;
  rosidl_runtime_c__String month;
  int32_t year;
} ros2_msg__msg__MyMsg;

// Struct for a sequence of ros2_msg__msg__MyMsg.
typedef struct ros2_msg__msg__MyMsg__Sequence
{
  ros2_msg__msg__MyMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_msg__msg__MyMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_MSG__MSG__DETAIL__MY_MSG__STRUCT_H_
