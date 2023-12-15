# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drobo_interfaces:msg/MdLibMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MdLibMsg(type):
    """Metaclass of message 'MdLibMsg'."""

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
                'drobo_interfaces.msg.MdLibMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__md_lib_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__md_lib_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__md_lib_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__md_lib_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__md_lib_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MdLibMsg(metaclass=Metaclass_MdLibMsg):
    """Message class 'MdLibMsg'."""

    __slots__ = [
        '_address',
        '_use_semi',
        '_semi_id',
        '_mode',
        '_phase',
        '_power',
        '_port',
        '_angle',
        '_timeout',
    ]

    _fields_and_field_types = {
        'address': 'uint8',
        'use_semi': 'boolean',
        'semi_id': 'uint8',
        'mode': 'uint8',
        'phase': 'boolean',
        'power': 'uint16',
        'port': 'boolean',
        'angle': 'int32',
        'timeout': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.address = kwargs.get('address', int())
        self.use_semi = kwargs.get('use_semi', bool())
        self.semi_id = kwargs.get('semi_id', int())
        self.mode = kwargs.get('mode', int())
        self.phase = kwargs.get('phase', bool())
        self.power = kwargs.get('power', int())
        self.port = kwargs.get('port', bool())
        self.angle = kwargs.get('angle', int())
        self.timeout = kwargs.get('timeout', int())

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
        if self.use_semi != other.use_semi:
            return False
        if self.semi_id != other.semi_id:
            return False
        if self.mode != other.mode:
            return False
        if self.phase != other.phase:
            return False
        if self.power != other.power:
            return False
        if self.port != other.port:
            return False
        if self.angle != other.angle:
            return False
        if self.timeout != other.timeout:
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
    def use_semi(self):
        """Message field 'use_semi'."""
        return self._use_semi

    @use_semi.setter
    def use_semi(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_semi' field must be of type 'bool'"
        self._use_semi = value

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
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def phase(self):
        """Message field 'phase'."""
        return self._phase

    @phase.setter
    def phase(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'phase' field must be of type 'bool'"
        self._phase = value

    @builtins.property
    def power(self):
        """Message field 'power'."""
        return self._power

    @power.setter
    def power(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'power' field must be an unsigned integer in [0, 65535]"
        self._power = value

    @builtins.property
    def port(self):
        """Message field 'port'."""
        return self._port

    @port.setter
    def port(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port' field must be of type 'bool'"
        self._port = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'angle' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'angle' field must be an integer in [-2147483648, 2147483647]"
        self._angle = value

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeout' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'timeout' field must be an unsigned integer in [0, 65535]"
        self._timeout = value
