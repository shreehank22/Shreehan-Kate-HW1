// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from force_sum_interface:srv/ForceSum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "force_sum_interface/srv/force_sum.hpp"


#ifndef FORCE_SUM_INTERFACE__SRV__DETAIL__FORCE_SUM__BUILDER_HPP_
#define FORCE_SUM_INTERFACE__SRV__DETAIL__FORCE_SUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "force_sum_interface/srv/detail/force_sum__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace force_sum_interface
{

namespace srv
{

namespace builder
{

class Init_ForceSum_Request_f2
{
public:
  explicit Init_ForceSum_Request_f2(::force_sum_interface::srv::ForceSum_Request & msg)
  : msg_(msg)
  {}
  ::force_sum_interface::srv::ForceSum_Request f2(::force_sum_interface::srv::ForceSum_Request::_f2_type arg)
  {
    msg_.f2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::force_sum_interface::srv::ForceSum_Request msg_;
};

class Init_ForceSum_Request_f1
{
public:
  Init_ForceSum_Request_f1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ForceSum_Request_f2 f1(::force_sum_interface::srv::ForceSum_Request::_f1_type arg)
  {
    msg_.f1 = std::move(arg);
    return Init_ForceSum_Request_f2(msg_);
  }

private:
  ::force_sum_interface::srv::ForceSum_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::force_sum_interface::srv::ForceSum_Request>()
{
  return force_sum_interface::srv::builder::Init_ForceSum_Request_f1();
}

}  // namespace force_sum_interface


namespace force_sum_interface
{

namespace srv
{

namespace builder
{

class Init_ForceSum_Response_f_sum
{
public:
  Init_ForceSum_Response_f_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::force_sum_interface::srv::ForceSum_Response f_sum(::force_sum_interface::srv::ForceSum_Response::_f_sum_type arg)
  {
    msg_.f_sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::force_sum_interface::srv::ForceSum_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::force_sum_interface::srv::ForceSum_Response>()
{
  return force_sum_interface::srv::builder::Init_ForceSum_Response_f_sum();
}

}  // namespace force_sum_interface


namespace force_sum_interface
{

namespace srv
{

namespace builder
{

class Init_ForceSum_Event_response
{
public:
  explicit Init_ForceSum_Event_response(::force_sum_interface::srv::ForceSum_Event & msg)
  : msg_(msg)
  {}
  ::force_sum_interface::srv::ForceSum_Event response(::force_sum_interface::srv::ForceSum_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::force_sum_interface::srv::ForceSum_Event msg_;
};

class Init_ForceSum_Event_request
{
public:
  explicit Init_ForceSum_Event_request(::force_sum_interface::srv::ForceSum_Event & msg)
  : msg_(msg)
  {}
  Init_ForceSum_Event_response request(::force_sum_interface::srv::ForceSum_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ForceSum_Event_response(msg_);
  }

private:
  ::force_sum_interface::srv::ForceSum_Event msg_;
};

class Init_ForceSum_Event_info
{
public:
  Init_ForceSum_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ForceSum_Event_request info(::force_sum_interface::srv::ForceSum_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ForceSum_Event_request(msg_);
  }

private:
  ::force_sum_interface::srv::ForceSum_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::force_sum_interface::srv::ForceSum_Event>()
{
  return force_sum_interface::srv::builder::Init_ForceSum_Event_info();
}

}  // namespace force_sum_interface

#endif  // FORCE_SUM_INTERFACE__SRV__DETAIL__FORCE_SUM__BUILDER_HPP_
