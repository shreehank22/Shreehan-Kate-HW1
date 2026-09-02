// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from force_sum_interface:srv/ForceSum.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "force_sum_interface/srv/detail/force_sum__functions.h"
#include "force_sum_interface/srv/detail/force_sum__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace force_sum_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ForceSum_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ForceSum_Request_type_support_ids_t;

static const _ForceSum_Request_type_support_ids_t _ForceSum_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ForceSum_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ForceSum_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ForceSum_Request_type_support_symbol_names_t _ForceSum_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, force_sum_interface, srv, ForceSum_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, force_sum_interface, srv, ForceSum_Request)),
  }
};

typedef struct _ForceSum_Request_type_support_data_t
{
  void * data[2];
} _ForceSum_Request_type_support_data_t;

static _ForceSum_Request_type_support_data_t _ForceSum_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ForceSum_Request_message_typesupport_map = {
  2,
  "force_sum_interface",
  &_ForceSum_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ForceSum_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ForceSum_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ForceSum_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ForceSum_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &force_sum_interface__srv__ForceSum_Request__get_type_hash,
  &force_sum_interface__srv__ForceSum_Request__get_type_description,
  &force_sum_interface__srv__ForceSum_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace force_sum_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<force_sum_interface::srv::ForceSum_Request>()
{
  return &::force_sum_interface::srv::rosidl_typesupport_cpp::ForceSum_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, force_sum_interface, srv, ForceSum_Request)() {
  return get_message_type_support_handle<force_sum_interface::srv::ForceSum_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "force_sum_interface/srv/detail/force_sum__functions.h"
// already included above
// #include "force_sum_interface/srv/detail/force_sum__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace force_sum_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ForceSum_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ForceSum_Response_type_support_ids_t;

static const _ForceSum_Response_type_support_ids_t _ForceSum_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ForceSum_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ForceSum_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ForceSum_Response_type_support_symbol_names_t _ForceSum_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, force_sum_interface, srv, ForceSum_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, force_sum_interface, srv, ForceSum_Response)),
  }
};

typedef struct _ForceSum_Response_type_support_data_t
{
  void * data[2];
} _ForceSum_Response_type_support_data_t;

static _ForceSum_Response_type_support_data_t _ForceSum_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ForceSum_Response_message_typesupport_map = {
  2,
  "force_sum_interface",
  &_ForceSum_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ForceSum_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ForceSum_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ForceSum_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ForceSum_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &force_sum_interface__srv__ForceSum_Response__get_type_hash,
  &force_sum_interface__srv__ForceSum_Response__get_type_description,
  &force_sum_interface__srv__ForceSum_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace force_sum_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<force_sum_interface::srv::ForceSum_Response>()
{
  return &::force_sum_interface::srv::rosidl_typesupport_cpp::ForceSum_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, force_sum_interface, srv, ForceSum_Response)() {
  return get_message_type_support_handle<force_sum_interface::srv::ForceSum_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "force_sum_interface/srv/detail/force_sum__functions.h"
// already included above
// #include "force_sum_interface/srv/detail/force_sum__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace force_sum_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ForceSum_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ForceSum_Event_type_support_ids_t;

static const _ForceSum_Event_type_support_ids_t _ForceSum_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ForceSum_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ForceSum_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ForceSum_Event_type_support_symbol_names_t _ForceSum_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, force_sum_interface, srv, ForceSum_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, force_sum_interface, srv, ForceSum_Event)),
  }
};

typedef struct _ForceSum_Event_type_support_data_t
{
  void * data[2];
} _ForceSum_Event_type_support_data_t;

static _ForceSum_Event_type_support_data_t _ForceSum_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ForceSum_Event_message_typesupport_map = {
  2,
  "force_sum_interface",
  &_ForceSum_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ForceSum_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ForceSum_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ForceSum_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ForceSum_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &force_sum_interface__srv__ForceSum_Event__get_type_hash,
  &force_sum_interface__srv__ForceSum_Event__get_type_description,
  &force_sum_interface__srv__ForceSum_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace force_sum_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<force_sum_interface::srv::ForceSum_Event>()
{
  return &::force_sum_interface::srv::rosidl_typesupport_cpp::ForceSum_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, force_sum_interface, srv, ForceSum_Event)() {
  return get_message_type_support_handle<force_sum_interface::srv::ForceSum_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "force_sum_interface/srv/detail/force_sum__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace force_sum_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ForceSum_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ForceSum_type_support_ids_t;

static const _ForceSum_type_support_ids_t _ForceSum_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ForceSum_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ForceSum_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ForceSum_type_support_symbol_names_t _ForceSum_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, force_sum_interface, srv, ForceSum)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, force_sum_interface, srv, ForceSum)),
  }
};

typedef struct _ForceSum_type_support_data_t
{
  void * data[2];
} _ForceSum_type_support_data_t;

static _ForceSum_type_support_data_t _ForceSum_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ForceSum_service_typesupport_map = {
  2,
  "force_sum_interface",
  &_ForceSum_service_typesupport_ids.typesupport_identifier[0],
  &_ForceSum_service_typesupport_symbol_names.symbol_name[0],
  &_ForceSum_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ForceSum_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ForceSum_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<force_sum_interface::srv::ForceSum_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<force_sum_interface::srv::ForceSum_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<force_sum_interface::srv::ForceSum_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<force_sum_interface::srv::ForceSum>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<force_sum_interface::srv::ForceSum>,
  &force_sum_interface__srv__ForceSum__get_type_hash,
  &force_sum_interface__srv__ForceSum__get_type_description,
  &force_sum_interface__srv__ForceSum__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace force_sum_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<force_sum_interface::srv::ForceSum>()
{
  return &::force_sum_interface::srv::rosidl_typesupport_cpp::ForceSum_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, force_sum_interface, srv, ForceSum)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<force_sum_interface::srv::ForceSum>();
}

#ifdef __cplusplus
}
#endif
