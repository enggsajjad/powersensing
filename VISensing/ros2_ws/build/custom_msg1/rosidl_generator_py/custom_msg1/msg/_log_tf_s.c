// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msg1:msg/LogTf.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msg1/msg/detail/log_tf__struct.h"
#include "custom_msg1/msg/detail/log_tf__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msg1__msg__log_tf__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[30];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("custom_msg1.msg._log_tf.LogTf", full_classname_dest, 29) == 0);
  }
  custom_msg1__msg__LogTf * ros_message = _ros_message;
  {  // time_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_frame");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->time_frame, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sensor1
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor1");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sensor1, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "volt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->volt = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // sensor2
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor2");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sensor2, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // amp
    PyObject * field = PyObject_GetAttrString(_pymsg, "amp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->amp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msg1__msg__log_tf__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LogTf */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msg1.msg._log_tf");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LogTf");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msg1__msg__LogTf * ros_message = (custom_msg1__msg__LogTf *)raw_ros_message;
  {  // time_frame
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->time_frame.data,
      strlen(ros_message->time_frame.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor1
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sensor1.data,
      strlen(ros_message->sensor1.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // volt
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->volt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor2
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sensor2.data,
      strlen(ros_message->sensor2.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // amp
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->amp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "amp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
