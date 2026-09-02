// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from force_sum_interface:srv/ForceSum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "force_sum_interface/srv/force_sum.hpp"


#ifndef FORCE_SUM_INTERFACE__SRV__DETAIL__FORCE_SUM__STRUCT_HPP_
#define FORCE_SUM_INTERFACE__SRV__DETAIL__FORCE_SUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__force_sum_interface__srv__ForceSum_Request __attribute__((deprecated))
#else
# define DEPRECATED__force_sum_interface__srv__ForceSum_Request __declspec(deprecated)
#endif

namespace force_sum_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ForceSum_Request_
{
  using Type = ForceSum_Request_<ContainerAllocator>;

  explicit ForceSum_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->f1.begin(), this->f1.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->f2.begin(), this->f2.end(), 0.0);
    }
  }

  explicit ForceSum_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : f1(_alloc),
    f2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->f1.begin(), this->f1.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->f2.begin(), this->f2.end(), 0.0);
    }
  }

  // field types and members
  using _f1_type =
    std::array<double, 3>;
  _f1_type f1;
  using _f2_type =
    std::array<double, 3>;
  _f2_type f2;

  // setters for named parameter idiom
  Type & set__f1(
    const std::array<double, 3> & _arg)
  {
    this->f1 = _arg;
    return *this;
  }
  Type & set__f2(
    const std::array<double, 3> & _arg)
  {
    this->f2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    force_sum_interface::srv::ForceSum_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const force_sum_interface::srv::ForceSum_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<force_sum_interface::srv::ForceSum_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<force_sum_interface::srv::ForceSum_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      force_sum_interface::srv::ForceSum_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<force_sum_interface::srv::ForceSum_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      force_sum_interface::srv::ForceSum_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<force_sum_interface::srv::ForceSum_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<force_sum_interface::srv::ForceSum_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<force_sum_interface::srv::ForceSum_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__force_sum_interface__srv__ForceSum_Request
    std::shared_ptr<force_sum_interface::srv::ForceSum_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__force_sum_interface__srv__ForceSum_Request
    std::shared_ptr<force_sum_interface::srv::ForceSum_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ForceSum_Request_ & other) const
  {
    if (this->f1 != other.f1) {
      return false;
    }
    if (this->f2 != other.f2) {
      return false;
    }
    return true;
  }
  bool operator!=(const ForceSum_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ForceSum_Request_

// alias to use template instance with default allocator
using ForceSum_Request =
  force_sum_interface::srv::ForceSum_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace force_sum_interface


#ifndef _WIN32
# define DEPRECATED__force_sum_interface__srv__ForceSum_Response __attribute__((deprecated))
#else
# define DEPRECATED__force_sum_interface__srv__ForceSum_Response __declspec(deprecated)
#endif

namespace force_sum_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ForceSum_Response_
{
  using Type = ForceSum_Response_<ContainerAllocator>;

  explicit ForceSum_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->f_sum.begin(), this->f_sum.end(), 0.0);
    }
  }

  explicit ForceSum_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : f_sum(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->f_sum.begin(), this->f_sum.end(), 0.0);
    }
  }

  // field types and members
  using _f_sum_type =
    std::array<double, 3>;
  _f_sum_type f_sum;

  // setters for named parameter idiom
  Type & set__f_sum(
    const std::array<double, 3> & _arg)
  {
    this->f_sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    force_sum_interface::srv::ForceSum_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const force_sum_interface::srv::ForceSum_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<force_sum_interface::srv::ForceSum_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<force_sum_interface::srv::ForceSum_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      force_sum_interface::srv::ForceSum_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<force_sum_interface::srv::ForceSum_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      force_sum_interface::srv::ForceSum_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<force_sum_interface::srv::ForceSum_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<force_sum_interface::srv::ForceSum_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<force_sum_interface::srv::ForceSum_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__force_sum_interface__srv__ForceSum_Response
    std::shared_ptr<force_sum_interface::srv::ForceSum_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__force_sum_interface__srv__ForceSum_Response
    std::shared_ptr<force_sum_interface::srv::ForceSum_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ForceSum_Response_ & other) const
  {
    if (this->f_sum != other.f_sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const ForceSum_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ForceSum_Response_

// alias to use template instance with default allocator
using ForceSum_Response =
  force_sum_interface::srv::ForceSum_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace force_sum_interface


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__force_sum_interface__srv__ForceSum_Event __attribute__((deprecated))
#else
# define DEPRECATED__force_sum_interface__srv__ForceSum_Event __declspec(deprecated)
#endif

namespace force_sum_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ForceSum_Event_
{
  using Type = ForceSum_Event_<ContainerAllocator>;

  explicit ForceSum_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ForceSum_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<force_sum_interface::srv::ForceSum_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<force_sum_interface::srv::ForceSum_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<force_sum_interface::srv::ForceSum_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<force_sum_interface::srv::ForceSum_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<force_sum_interface::srv::ForceSum_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<force_sum_interface::srv::ForceSum_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<force_sum_interface::srv::ForceSum_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<force_sum_interface::srv::ForceSum_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    force_sum_interface::srv::ForceSum_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const force_sum_interface::srv::ForceSum_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<force_sum_interface::srv::ForceSum_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<force_sum_interface::srv::ForceSum_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      force_sum_interface::srv::ForceSum_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<force_sum_interface::srv::ForceSum_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      force_sum_interface::srv::ForceSum_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<force_sum_interface::srv::ForceSum_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<force_sum_interface::srv::ForceSum_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<force_sum_interface::srv::ForceSum_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__force_sum_interface__srv__ForceSum_Event
    std::shared_ptr<force_sum_interface::srv::ForceSum_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__force_sum_interface__srv__ForceSum_Event
    std::shared_ptr<force_sum_interface::srv::ForceSum_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ForceSum_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ForceSum_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ForceSum_Event_

// alias to use template instance with default allocator
using ForceSum_Event =
  force_sum_interface::srv::ForceSum_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace force_sum_interface

namespace force_sum_interface
{

namespace srv
{

struct ForceSum
{
  using Request = force_sum_interface::srv::ForceSum_Request;
  using Response = force_sum_interface::srv::ForceSum_Response;
  using Event = force_sum_interface::srv::ForceSum_Event;
};

}  // namespace srv

}  // namespace force_sum_interface

#endif  // FORCE_SUM_INTERFACE__SRV__DETAIL__FORCE_SUM__STRUCT_HPP_
