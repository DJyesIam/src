# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autocar_msgs:msg/Polygon.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'x'
# Member 'y'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Polygon(type):
    """Metaclass of message 'Polygon'."""

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
            module = import_type_support('autocar_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autocar_msgs.msg.Polygon')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__polygon
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__polygon
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__polygon
            cls._TYPE_SUPPORT = module.type_support_msg__msg__polygon
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__polygon

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Polygon(metaclass=Metaclass_Polygon):
    """Message class 'Polygon'."""

    __slots__ = [
        '_n',
        '_x',
        '_y',
    ]

    _fields_and_field_types = {
        'n': 'int32',
        'x': 'sequence<float>',
        'y': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.n = kwargs.get('n', int())
        self.x = array.array('f', kwargs.get('x', []))
        self.y = array.array('f', kwargs.get('y', []))

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
        if self.n != other.n:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def n(self):
        """Message field 'n'."""
        return self._n

    @n.setter
    def n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'n' field must be an integer in [-2147483648, 2147483647]"
        self._n = value

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'x' array.array() must have the type code of 'f'"
            self._x = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'x' field must be a set or sequence and each value of type 'float'"
        self._x = array.array('f', value)

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'y' array.array() must have the type code of 'f'"
            self._y = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'y' field must be a set or sequence and each value of type 'float'"
        self._y = array.array('f', value)