// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msg1:msg/LogTf.idl
// generated code does not contain a copyright notice
#include "custom_msg1/msg/detail/log_tf__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msg1/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msg1/msg/detail/log_tf__struct.h"
#include "custom_msg1/msg/detail/log_tf__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // sensor1, sensor2, time_frame
#include "rosidl_runtime_c/string_functions.h"  // sensor1, sensor2, time_frame

// forward declare type support functions


using _LogTf__ros_msg_type = custom_msg1__msg__LogTf;

static bool _LogTf__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LogTf__ros_msg_type * ros_message = static_cast<const _LogTf__ros_msg_type *>(untyped_ros_message);
  // Field name: time_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->time_frame;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sensor1
  {
    const rosidl_runtime_c__String * str = &ros_message->sensor1;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: volt
  {
    cdr << ros_message->volt;
  }

  // Field name: sensor2
  {
    const rosidl_runtime_c__String * str = &ros_message->sensor2;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: amp
  {
    cdr << ros_message->amp;
  }

  return true;
}

static bool _LogTf__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LogTf__ros_msg_type * ros_message = static_cast<_LogTf__ros_msg_type *>(untyped_ros_message);
  // Field name: time_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->time_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->time_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->time_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'time_frame'\n");
      return false;
    }
  }

  // Field name: sensor1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sensor1.data) {
      rosidl_runtime_c__String__init(&ros_message->sensor1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sensor1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sensor1'\n");
      return false;
    }
  }

  // Field name: volt
  {
    cdr >> ros_message->volt;
  }

  // Field name: sensor2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sensor2.data) {
      rosidl_runtime_c__String__init(&ros_message->sensor2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sensor2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sensor2'\n");
      return false;
    }
  }

  // Field name: amp
  {
    cdr >> ros_message->amp;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msg1
size_t get_serialized_size_custom_msg1__msg__LogTf(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LogTf__ros_msg_type * ros_message = static_cast<const _LogTf__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->time_frame.size + 1);
  // field.name sensor1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sensor1.size + 1);
  // field.name volt
  {
    size_t item_size = sizeof(ros_message->volt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensor2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sensor2.size + 1);
  // field.name amp
  {
    size_t item_size = sizeof(ros_message->amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LogTf__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msg1__msg__LogTf(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msg1
size_t max_serialized_size_custom_msg1__msg__LogTf(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: time_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sensor1
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: volt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sensor2
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: amp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LogTf__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_msg1__msg__LogTf(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LogTf = {
  "custom_msg1::msg",
  "LogTf",
  _LogTf__cdr_serialize,
  _LogTf__cdr_deserialize,
  _LogTf__get_serialized_size,
  _LogTf__max_serialized_size
};

static rosidl_message_type_support_t _LogTf__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LogTf,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msg1, msg, LogTf)() {
  return &_LogTf__type_support;
}

#if defined(__cplusplus)
}
#endif
