# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autocar_msgs:msg/LinkArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LinkArray(type):
    """Metaclass of message 'LinkArray'."""

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
                'autocar_msgs.msg.LinkArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__link_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__link_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__link_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__link_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__link_array

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinkArray(metaclass=Metaclass_LinkArray):
    """Message class 'LinkArray'."""

    __slots__ = [
        '_link_num',
        '_closest_wp',
        '_mode',
        '_traffic_stop_wp',
        '_parking_stop_wp',
        '_direction',
        '_next_path',
    ]

    _fields_and_field_types = {
        'link_num': 'int32',
        'closest_wp': 'int32',
        'mode': 'string',
        'traffic_stop_wp': 'int32',
        'parking_stop_wp': 'int32',
        'direction': 'string',
        'next_path': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.link_num = kwargs.get('link_num', int())
        self.closest_wp = kwargs.get('closest_wp', int())
        self.mode = kwargs.get('mode', str())
        self.traffic_stop_wp = kwargs.get('traffic_stop_wp', int())
        self.parking_stop_wp = kwargs.get('parking_stop_wp', int())
        self.direction = kwargs.get('direction', str())
        self.next_path = kwargs.get('next_path', str())

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
        if self.link_num != other.link_num:
            return False
        if self.closest_wp != other.closest_wp:
            return False
        if self.mode != other.mode:
            return False
        if self.traffic_stop_wp != other.traffic_stop_wp:
            return False
        if self.parking_stop_wp != other.parking_stop_wp:
            return False
        if self.direction != other.direction:
            return False
        if self.next_path != other.next_path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def link_num(self):
        """Message field 'link_num'."""
        return self._link_num

    @link_num.setter
    def link_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'link_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'link_num' field must be an integer in [-2147483648, 2147483647]"
        self._link_num = value

    @property
    def closest_wp(self):
        """Message field 'closest_wp'."""
        return self._closest_wp

    @closest_wp.setter
    def closest_wp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'closest_wp' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'closest_wp' field must be an integer in [-2147483648, 2147483647]"
        self._closest_wp = value

    @property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

    @property
    def traffic_stop_wp(self):
        """Message field 'traffic_stop_wp'."""
        return self._traffic_stop_wp

    @traffic_stop_wp.setter
    def traffic_stop_wp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'traffic_stop_wp' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'traffic_stop_wp' field must be an integer in [-2147483648, 2147483647]"
        self._traffic_stop_wp = value

    @property
    def parking_stop_wp(self):
        """Message field 'parking_stop_wp'."""
        return self._parking_stop_wp

    @parking_stop_wp.setter
    def parking_stop_wp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parking_stop_wp' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'parking_stop_wp' field must be an integer in [-2147483648, 2147483647]"
        self._parking_stop_wp = value

    @property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'direction' field must be of type 'str'"
        self._direction = value

    @property
    def next_path(self):
        """Message field 'next_path'."""
        return self._next_path

    @next_path.setter
    def next_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'next_path' field must be of type 'str'"
        self._next_path = value
