// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rp2_inter:srv/Multy.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rp2_inter/srv/detail/multy__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rp2_inter
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Multy_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Multy_Request_type_support_ids_t;

static const _Multy_Request_type_support_ids_t _Multy_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Multy_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Multy_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Multy_Request_type_support_symbol_names_t _Multy_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rp2_inter, srv, Multy_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rp2_inter, srv, Multy_Request)),
  }
};

typedef struct _Multy_Request_type_support_data_t
{
  void * data[2];
} _Multy_Request_type_support_data_t;

static _Multy_Request_type_support_data_t _Multy_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Multy_Request_message_typesupport_map = {
  2,
  "rp2_inter",
  &_Multy_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Multy_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Multy_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Multy_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Multy_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rp2_inter

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rp2_inter::srv::Multy_Request>()
{
  return &::rp2_inter::srv::rosidl_typesupport_cpp::Multy_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rp2_inter, srv, Multy_Request)() {
  return get_message_type_support_handle<rp2_inter::srv::Multy_Request>();
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
// #include "rp2_inter/srv/detail/multy__struct.hpp"
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

namespace rp2_inter
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Multy_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Multy_Response_type_support_ids_t;

static const _Multy_Response_type_support_ids_t _Multy_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Multy_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Multy_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Multy_Response_type_support_symbol_names_t _Multy_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rp2_inter, srv, Multy_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rp2_inter, srv, Multy_Response)),
  }
};

typedef struct _Multy_Response_type_support_data_t
{
  void * data[2];
} _Multy_Response_type_support_data_t;

static _Multy_Response_type_support_data_t _Multy_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Multy_Response_message_typesupport_map = {
  2,
  "rp2_inter",
  &_Multy_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Multy_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Multy_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Multy_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Multy_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rp2_inter

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rp2_inter::srv::Multy_Response>()
{
  return &::rp2_inter::srv::rosidl_typesupport_cpp::Multy_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rp2_inter, srv, Multy_Response)() {
  return get_message_type_support_handle<rp2_inter::srv::Multy_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rp2_inter/srv/detail/multy__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rp2_inter
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Multy_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Multy_type_support_ids_t;

static const _Multy_type_support_ids_t _Multy_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Multy_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Multy_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Multy_type_support_symbol_names_t _Multy_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rp2_inter, srv, Multy)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rp2_inter, srv, Multy)),
  }
};

typedef struct _Multy_type_support_data_t
{
  void * data[2];
} _Multy_type_support_data_t;

static _Multy_type_support_data_t _Multy_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Multy_service_typesupport_map = {
  2,
  "rp2_inter",
  &_Multy_service_typesupport_ids.typesupport_identifier[0],
  &_Multy_service_typesupport_symbol_names.symbol_name[0],
  &_Multy_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Multy_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Multy_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rp2_inter

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rp2_inter::srv::Multy>()
{
  return &::rp2_inter::srv::rosidl_typesupport_cpp::Multy_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
