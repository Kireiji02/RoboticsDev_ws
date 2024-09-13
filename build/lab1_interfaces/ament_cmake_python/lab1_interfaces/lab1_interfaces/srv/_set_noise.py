# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lab1_interfaces:srv/SetNoise.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetNoise_Request(type):
    """Metaclass of message 'SetNoise_Request'."""

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
            module = import_type_support('lab1_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lab1_interfaces.srv.SetNoise_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_noise__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_noise__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_noise__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_noise__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_noise__request

            from std_msgs.msg import Float64
            if Float64.__class__._TYPE_SUPPORT is None:
                Float64.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetNoise_Request(metaclass=Metaclass_SetNoise_Request):
    """Message class 'SetNoise_Request'."""

    __slots__ = [
        '_mean',
        '_variance',
    ]

    _fields_and_field_types = {
        'mean': 'std_msgs/Float64',
        'variance': 'std_msgs/Float64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float64
        self.mean = kwargs.get('mean', Float64())
        from std_msgs.msg import Float64
        self.variance = kwargs.get('variance', Float64())

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
        if self.mean != other.mean:
            return False
        if self.variance != other.variance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mean(self):
        """Message field 'mean'."""
        return self._mean

    @mean.setter
    def mean(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'mean' field must be a sub message of type 'Float64'"
        self._mean = value

    @builtins.property
    def variance(self):
        """Message field 'variance'."""
        return self._variance

    @variance.setter
    def variance(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'variance' field must be a sub message of type 'Float64'"
        self._variance = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetNoise_Response(type):
    """Metaclass of message 'SetNoise_Response'."""

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
            module = import_type_support('lab1_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lab1_interfaces.srv.SetNoise_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_noise__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_noise__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_noise__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_noise__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_noise__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetNoise_Response(metaclass=Metaclass_SetNoise_Response):
    """Message class 'SetNoise_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_SetNoise(type):
    """Metaclass of service 'SetNoise'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lab1_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lab1_interfaces.srv.SetNoise')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_noise

            from lab1_interfaces.srv import _set_noise
            if _set_noise.Metaclass_SetNoise_Request._TYPE_SUPPORT is None:
                _set_noise.Metaclass_SetNoise_Request.__import_type_support__()
            if _set_noise.Metaclass_SetNoise_Response._TYPE_SUPPORT is None:
                _set_noise.Metaclass_SetNoise_Response.__import_type_support__()


class SetNoise(metaclass=Metaclass_SetNoise):
    from lab1_interfaces.srv._set_noise import SetNoise_Request as Request
    from lab1_interfaces.srv._set_noise import SetNoise_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
