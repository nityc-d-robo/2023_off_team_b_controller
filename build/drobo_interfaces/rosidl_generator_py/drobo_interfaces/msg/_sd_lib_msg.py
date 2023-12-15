# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drobo_interfaces:msg/SdLibMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SdLibMsg(type):
    """Metaclass of message 'SdLibMsg'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('drobo_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drobo_interfaces.msg.SdLibMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sd_lib_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sd_lib_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sd_lib_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sd_lib_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sd_lib_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SdLibMsg(metaclass=Metaclass_SdLibMsg):
    """Message class 'SdLibMsg'."""

    __slots__ = [
        '_address',
        '_semi_id',
        '_port',
        '_power1',
        '_power2',
    ]

    _fields_and_field_types = {
        'address': 'uint8',
        'semi_id': 'uint8',
        'port': 'uint8',
        'power1': 'uint16',
        'power2': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.address = kwargs.get('address', int())
        self.semi_id = kwargs.get('semi_id', int())
        self.port = kwargs.get('port', int())
        self.power1 = kwargs.get('power1', int())
        self.power2 = kwargs.get('power2', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.address != other.address:
            return False
        if self.semi_id != other.semi_id:
            return False
        if self.port != other.port:
            return False
        if self.power1 != other.power1:
            return False
        if self.power2 != other.power2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def address(self):
        """Message field 'address'."""
        return self._address

    @address.setter
    def address(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'address' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'address' field must be an unsigned integer in [0, 255]"
        self._address = value

    @builtins.property
    def semi_id(self):
        """Message field 'semi_id'."""
        return self._semi_id

    @semi_id.setter
    def semi_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'semi_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'semi_id' field must be an unsigned integer in [0, 255]"
        self._semi_id = value

    @builtins.property
    def port(self):
        """Message field 'port'."""
        return self._port

    @port.setter
    def port(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'port' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'port' field must be an unsigned integer in [0, 255]"
        self._port = value

    @builtins.property
    def power1(self):
        """Message field 'power1'."""
        return self._power1

    @power1.setter
    def power1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'power1' field must be an unsigned integer in [0, 65535]"
        self._power1 = value

    @builtins.property
    def power2(self):
        """Message field 'power2'."""
        return self._power2

    @power2.setter
    def power2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'power2' field must be an unsigned integer in [0, 65535]"
        self._power2 = value
