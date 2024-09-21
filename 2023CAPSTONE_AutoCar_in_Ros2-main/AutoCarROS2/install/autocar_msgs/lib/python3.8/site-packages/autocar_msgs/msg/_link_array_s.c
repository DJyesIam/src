// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autocar_msgs:msg/LinkArray.idl
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
#include "autocar_msgs/msg/detail/link_array__struct.h"
#include "autocar_msgs/msg/detail/link_array__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool autocar_msgs__msg__link_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("autocar_msgs.msg._link_array.LinkArray", full_classname_dest, 38) == 0);
  }
  autocar_msgs__msg__LinkArray * ros_message = _ros_message;
  {  // link_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->link_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // closest_wp
    PyObject * field = PyObject_GetAttrString(_pymsg, "closest_wp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->closest_wp = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mode, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // traffic_stop_wp
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_stop_wp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->traffic_stop_wp = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // parking_stop_wp
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_stop_wp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parking_stop_wp = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->direction, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // next_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_path");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->next_path, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autocar_msgs__msg__link_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LinkArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autocar_msgs.msg._link_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LinkArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autocar_msgs__msg__LinkArray * ros_message = (autocar_msgs__msg__LinkArray *)raw_ros_message;
  {  // link_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->link_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // closest_wp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->closest_wp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "closest_wp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mode.data,
      strlen(ros_message->mode.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_stop_wp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->traffic_stop_wp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_stop_wp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parking_stop_wp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->parking_stop_wp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking_stop_wp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->direction.data,
      strlen(ros_message->direction.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_path
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->next_path.data,
      strlen(ros_message->next_path.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
