// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from drobo_interfaces:msg/SdLibMsg.idl
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
#include "drobo_interfaces/msg/detail/sd_lib_msg__struct.h"
#include "drobo_interfaces/msg/detail/sd_lib_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool drobo_interfaces__msg__sd_lib_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("drobo_interfaces.msg._sd_lib_msg.SdLibMsg", full_classname_dest, 41) == 0);
  }
  drobo_interfaces__msg__SdLibMsg * ros_message = _ros_message;
  {  // address
    PyObject * field = PyObject_GetAttrString(_pymsg, "address");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->address = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // semi_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "semi_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->semi_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // port
    PyObject * field = PyObject_GetAttrString(_pymsg, "port");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->port = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // power1
    PyObject * field = PyObject_GetAttrString(_pymsg, "power1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // power2
    PyObject * field = PyObject_GetAttrString(_pymsg, "power2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * drobo_interfaces__msg__sd_lib_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SdLibMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("drobo_interfaces.msg._sd_lib_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SdLibMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  drobo_interfaces__msg__SdLibMsg * ros_message = (drobo_interfaces__msg__SdLibMsg *)raw_ros_message;
  {  // address
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->address);
    {
      int rc = PyObject_SetAttrString(_pymessage, "address", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // semi_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->semi_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "semi_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->port);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->power1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->power2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
