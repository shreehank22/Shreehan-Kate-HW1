// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from force_sum_interface:srv/ForceSum.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "force_sum_interface/srv/detail/force_sum__rosidl_typesupport_introspection_c.h"
#include "force_sum_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "force_sum_interface/srv/detail/force_sum__functions.h"
#include "force_sum_interface/srv/detail/force_sum__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  force_sum_interface__srv__ForceSum_Request__init(message_memory);
}

void force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_fini_function(void * message_memory)
{
  force_sum_interface__srv__ForceSum_Request__fini(message_memory);
}

size_t force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__size_function__ForceSum_Request__f1(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Request__f1(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__get_function__ForceSum_Request__f1(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__fetch_function__ForceSum_Request__f1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Request__f1(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__assign_function__ForceSum_Request__f1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__get_function__ForceSum_Request__f1(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__size_function__ForceSum_Request__f2(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Request__f2(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__get_function__ForceSum_Request__f2(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__fetch_function__ForceSum_Request__f2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Request__f2(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__assign_function__ForceSum_Request__f2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__get_function__ForceSum_Request__f2(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_message_member_array[2] = {
  {
    "f1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(force_sum_interface__srv__ForceSum_Request, f1),  // bytes offset in struct
    NULL,  // default value
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__size_function__ForceSum_Request__f1,  // size() function pointer
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Request__f1,  // get_const(index) function pointer
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__get_function__ForceSum_Request__f1,  // get(index) function pointer
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__fetch_function__ForceSum_Request__f1,  // fetch(index, &value) function pointer
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__assign_function__ForceSum_Request__f1,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(force_sum_interface__srv__ForceSum_Request, f2),  // bytes offset in struct
    NULL,  // default value
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__size_function__ForceSum_Request__f2,  // size() function pointer
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Request__f2,  // get_const(index) function pointer
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__get_function__ForceSum_Request__f2,  // get(index) function pointer
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__fetch_function__ForceSum_Request__f2,  // fetch(index, &value) function pointer
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__assign_function__ForceSum_Request__f2,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_message_members = {
  "force_sum_interface__srv",  // message namespace
  "ForceSum_Request",  // message name
  2,  // number of fields
  sizeof(force_sum_interface__srv__ForceSum_Request),
  false,  // has_any_key_member_
  force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_message_member_array,  // message members
  force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_message_type_support_handle = {
  0,
  &force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_message_members,
  get_message_typesupport_handle_function,
  &force_sum_interface__srv__ForceSum_Request__get_type_hash,
  &force_sum_interface__srv__ForceSum_Request__get_type_description,
  &force_sum_interface__srv__ForceSum_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_force_sum_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, force_sum_interface, srv, ForceSum_Request)() {
  if (!force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_message_type_support_handle.typesupport_identifier) {
    force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "force_sum_interface/srv/detail/force_sum__rosidl_typesupport_introspection_c.h"
// already included above
// #include "force_sum_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "force_sum_interface/srv/detail/force_sum__functions.h"
// already included above
// #include "force_sum_interface/srv/detail/force_sum__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  force_sum_interface__srv__ForceSum_Response__init(message_memory);
}

void force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_fini_function(void * message_memory)
{
  force_sum_interface__srv__ForceSum_Response__fini(message_memory);
}

size_t force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__size_function__ForceSum_Response__f_sum(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Response__f_sum(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__get_function__ForceSum_Response__f_sum(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__fetch_function__ForceSum_Response__f_sum(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Response__f_sum(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__assign_function__ForceSum_Response__f_sum(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__get_function__ForceSum_Response__f_sum(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_message_member_array[1] = {
  {
    "f_sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(force_sum_interface__srv__ForceSum_Response, f_sum),  // bytes offset in struct
    NULL,  // default value
    force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__size_function__ForceSum_Response__f_sum,  // size() function pointer
    force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Response__f_sum,  // get_const(index) function pointer
    force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__get_function__ForceSum_Response__f_sum,  // get(index) function pointer
    force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__fetch_function__ForceSum_Response__f_sum,  // fetch(index, &value) function pointer
    force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__assign_function__ForceSum_Response__f_sum,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_message_members = {
  "force_sum_interface__srv",  // message namespace
  "ForceSum_Response",  // message name
  1,  // number of fields
  sizeof(force_sum_interface__srv__ForceSum_Response),
  false,  // has_any_key_member_
  force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_message_member_array,  // message members
  force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_message_type_support_handle = {
  0,
  &force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_message_members,
  get_message_typesupport_handle_function,
  &force_sum_interface__srv__ForceSum_Response__get_type_hash,
  &force_sum_interface__srv__ForceSum_Response__get_type_description,
  &force_sum_interface__srv__ForceSum_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_force_sum_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, force_sum_interface, srv, ForceSum_Response)() {
  if (!force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_message_type_support_handle.typesupport_identifier) {
    force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "force_sum_interface/srv/detail/force_sum__rosidl_typesupport_introspection_c.h"
// already included above
// #include "force_sum_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "force_sum_interface/srv/detail/force_sum__functions.h"
// already included above
// #include "force_sum_interface/srv/detail/force_sum__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "force_sum_interface/srv/force_sum.h"
// Member `request`
// Member `response`
// already included above
// #include "force_sum_interface/srv/detail/force_sum__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  force_sum_interface__srv__ForceSum_Event__init(message_memory);
}

void force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_fini_function(void * message_memory)
{
  force_sum_interface__srv__ForceSum_Event__fini(message_memory);
}

size_t force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__size_function__ForceSum_Event__request(
  const void * untyped_member)
{
  const force_sum_interface__srv__ForceSum_Request__Sequence * member =
    (const force_sum_interface__srv__ForceSum_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Event__request(
  const void * untyped_member, size_t index)
{
  const force_sum_interface__srv__ForceSum_Request__Sequence * member =
    (const force_sum_interface__srv__ForceSum_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__get_function__ForceSum_Event__request(
  void * untyped_member, size_t index)
{
  force_sum_interface__srv__ForceSum_Request__Sequence * member =
    (force_sum_interface__srv__ForceSum_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__fetch_function__ForceSum_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const force_sum_interface__srv__ForceSum_Request * item =
    ((const force_sum_interface__srv__ForceSum_Request *)
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Event__request(untyped_member, index));
  force_sum_interface__srv__ForceSum_Request * value =
    (force_sum_interface__srv__ForceSum_Request *)(untyped_value);
  *value = *item;
}

void force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__assign_function__ForceSum_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  force_sum_interface__srv__ForceSum_Request * item =
    ((force_sum_interface__srv__ForceSum_Request *)
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__get_function__ForceSum_Event__request(untyped_member, index));
  const force_sum_interface__srv__ForceSum_Request * value =
    (const force_sum_interface__srv__ForceSum_Request *)(untyped_value);
  *item = *value;
}

bool force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__resize_function__ForceSum_Event__request(
  void * untyped_member, size_t size)
{
  force_sum_interface__srv__ForceSum_Request__Sequence * member =
    (force_sum_interface__srv__ForceSum_Request__Sequence *)(untyped_member);
  force_sum_interface__srv__ForceSum_Request__Sequence__fini(member);
  return force_sum_interface__srv__ForceSum_Request__Sequence__init(member, size);
}

size_t force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__size_function__ForceSum_Event__response(
  const void * untyped_member)
{
  const force_sum_interface__srv__ForceSum_Response__Sequence * member =
    (const force_sum_interface__srv__ForceSum_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Event__response(
  const void * untyped_member, size_t index)
{
  const force_sum_interface__srv__ForceSum_Response__Sequence * member =
    (const force_sum_interface__srv__ForceSum_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__get_function__ForceSum_Event__response(
  void * untyped_member, size_t index)
{
  force_sum_interface__srv__ForceSum_Response__Sequence * member =
    (force_sum_interface__srv__ForceSum_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__fetch_function__ForceSum_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const force_sum_interface__srv__ForceSum_Response * item =
    ((const force_sum_interface__srv__ForceSum_Response *)
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Event__response(untyped_member, index));
  force_sum_interface__srv__ForceSum_Response * value =
    (force_sum_interface__srv__ForceSum_Response *)(untyped_value);
  *value = *item;
}

void force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__assign_function__ForceSum_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  force_sum_interface__srv__ForceSum_Response * item =
    ((force_sum_interface__srv__ForceSum_Response *)
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__get_function__ForceSum_Event__response(untyped_member, index));
  const force_sum_interface__srv__ForceSum_Response * value =
    (const force_sum_interface__srv__ForceSum_Response *)(untyped_value);
  *item = *value;
}

bool force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__resize_function__ForceSum_Event__response(
  void * untyped_member, size_t size)
{
  force_sum_interface__srv__ForceSum_Response__Sequence * member =
    (force_sum_interface__srv__ForceSum_Response__Sequence *)(untyped_member);
  force_sum_interface__srv__ForceSum_Response__Sequence__fini(member);
  return force_sum_interface__srv__ForceSum_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(force_sum_interface__srv__ForceSum_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(force_sum_interface__srv__ForceSum_Event, request),  // bytes offset in struct
    NULL,  // default value
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__size_function__ForceSum_Event__request,  // size() function pointer
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Event__request,  // get_const(index) function pointer
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__get_function__ForceSum_Event__request,  // get(index) function pointer
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__fetch_function__ForceSum_Event__request,  // fetch(index, &value) function pointer
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__assign_function__ForceSum_Event__request,  // assign(index, value) function pointer
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__resize_function__ForceSum_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(force_sum_interface__srv__ForceSum_Event, response),  // bytes offset in struct
    NULL,  // default value
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__size_function__ForceSum_Event__response,  // size() function pointer
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__get_const_function__ForceSum_Event__response,  // get_const(index) function pointer
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__get_function__ForceSum_Event__response,  // get(index) function pointer
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__fetch_function__ForceSum_Event__response,  // fetch(index, &value) function pointer
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__assign_function__ForceSum_Event__response,  // assign(index, value) function pointer
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__resize_function__ForceSum_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_message_members = {
  "force_sum_interface__srv",  // message namespace
  "ForceSum_Event",  // message name
  3,  // number of fields
  sizeof(force_sum_interface__srv__ForceSum_Event),
  false,  // has_any_key_member_
  force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_message_member_array,  // message members
  force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_message_type_support_handle = {
  0,
  &force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_message_members,
  get_message_typesupport_handle_function,
  &force_sum_interface__srv__ForceSum_Event__get_type_hash,
  &force_sum_interface__srv__ForceSum_Event__get_type_description,
  &force_sum_interface__srv__ForceSum_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_force_sum_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, force_sum_interface, srv, ForceSum_Event)() {
  force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, force_sum_interface, srv, ForceSum_Request)();
  force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, force_sum_interface, srv, ForceSum_Response)();
  if (!force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_message_type_support_handle.typesupport_identifier) {
    force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "force_sum_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "force_sum_interface/srv/detail/force_sum__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers force_sum_interface__srv__detail__force_sum__rosidl_typesupport_introspection_c__ForceSum_service_members = {
  "force_sum_interface__srv",  // service namespace
  "ForceSum",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // force_sum_interface__srv__detail__force_sum__rosidl_typesupport_introspection_c__ForceSum_Request_message_type_support_handle,
  NULL,  // response message
  // force_sum_interface__srv__detail__force_sum__rosidl_typesupport_introspection_c__ForceSum_Response_message_type_support_handle
  NULL  // event_message
  // force_sum_interface__srv__detail__force_sum__rosidl_typesupport_introspection_c__ForceSum_Response_message_type_support_handle
};


static rosidl_service_type_support_t force_sum_interface__srv__detail__force_sum__rosidl_typesupport_introspection_c__ForceSum_service_type_support_handle = {
  0,
  &force_sum_interface__srv__detail__force_sum__rosidl_typesupport_introspection_c__ForceSum_service_members,
  get_service_typesupport_handle_function,
  &force_sum_interface__srv__ForceSum_Request__rosidl_typesupport_introspection_c__ForceSum_Request_message_type_support_handle,
  &force_sum_interface__srv__ForceSum_Response__rosidl_typesupport_introspection_c__ForceSum_Response_message_type_support_handle,
  &force_sum_interface__srv__ForceSum_Event__rosidl_typesupport_introspection_c__ForceSum_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    force_sum_interface,
    srv,
    ForceSum
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    force_sum_interface,
    srv,
    ForceSum
  ),
  &force_sum_interface__srv__ForceSum__get_type_hash,
  &force_sum_interface__srv__ForceSum__get_type_description,
  &force_sum_interface__srv__ForceSum__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, force_sum_interface, srv, ForceSum_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, force_sum_interface, srv, ForceSum_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, force_sum_interface, srv, ForceSum_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_force_sum_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, force_sum_interface, srv, ForceSum)(void) {
  if (!force_sum_interface__srv__detail__force_sum__rosidl_typesupport_introspection_c__ForceSum_service_type_support_handle.typesupport_identifier) {
    force_sum_interface__srv__detail__force_sum__rosidl_typesupport_introspection_c__ForceSum_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)force_sum_interface__srv__detail__force_sum__rosidl_typesupport_introspection_c__ForceSum_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, force_sum_interface, srv, ForceSum_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, force_sum_interface, srv, ForceSum_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, force_sum_interface, srv, ForceSum_Event)()->data;
  }

  return &force_sum_interface__srv__detail__force_sum__rosidl_typesupport_introspection_c__ForceSum_service_type_support_handle;
}
