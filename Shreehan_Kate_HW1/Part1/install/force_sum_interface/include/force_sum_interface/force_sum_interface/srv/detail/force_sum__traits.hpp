// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from force_sum_interface:srv/ForceSum.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "force_sum_interface/srv/force_sum.hpp"


#ifndef FORCE_SUM_INTERFACE__SRV__DETAIL__FORCE_SUM__TRAITS_HPP_
#define FORCE_SUM_INTERFACE__SRV__DETAIL__FORCE_SUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "force_sum_interface/srv/detail/force_sum__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace force_sum_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ForceSum_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: f1
  {
    if (msg.f1.size() == 0) {
      out << "f1: []";
    } else {
      out << "f1: [";
      size_t pending_items = msg.f1.size();
      for (auto item : msg.f1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: f2
  {
    if (msg.f2.size() == 0) {
      out << "f2: []";
    } else {
      out << "f2: [";
      size_t pending_items = msg.f2.size();
      for (auto item : msg.f2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ForceSum_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: f1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.f1.size() == 0) {
      out << "f1: []\n";
    } else {
      out << "f1:\n";
      for (auto item : msg.f1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: f2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.f2.size() == 0) {
      out << "f2: []\n";
    } else {
      out << "f2:\n";
      for (auto item : msg.f2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ForceSum_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace force_sum_interface

namespace rosidl_generator_traits
{

[[deprecated("use force_sum_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const force_sum_interface::srv::ForceSum_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  force_sum_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use force_sum_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const force_sum_interface::srv::ForceSum_Request & msg)
{
  return force_sum_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<force_sum_interface::srv::ForceSum_Request>()
{
  return "force_sum_interface::srv::ForceSum_Request";
}

template<>
inline const char * name<force_sum_interface::srv::ForceSum_Request>()
{
  return "force_sum_interface/srv/ForceSum_Request";
}

template<>
struct has_fixed_size<force_sum_interface::srv::ForceSum_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<force_sum_interface::srv::ForceSum_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<force_sum_interface::srv::ForceSum_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace force_sum_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ForceSum_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: f_sum
  {
    if (msg.f_sum.size() == 0) {
      out << "f_sum: []";
    } else {
      out << "f_sum: [";
      size_t pending_items = msg.f_sum.size();
      for (auto item : msg.f_sum) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ForceSum_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: f_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.f_sum.size() == 0) {
      out << "f_sum: []\n";
    } else {
      out << "f_sum:\n";
      for (auto item : msg.f_sum) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ForceSum_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace force_sum_interface

namespace rosidl_generator_traits
{

[[deprecated("use force_sum_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const force_sum_interface::srv::ForceSum_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  force_sum_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use force_sum_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const force_sum_interface::srv::ForceSum_Response & msg)
{
  return force_sum_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<force_sum_interface::srv::ForceSum_Response>()
{
  return "force_sum_interface::srv::ForceSum_Response";
}

template<>
inline const char * name<force_sum_interface::srv::ForceSum_Response>()
{
  return "force_sum_interface/srv/ForceSum_Response";
}

template<>
struct has_fixed_size<force_sum_interface::srv::ForceSum_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<force_sum_interface::srv::ForceSum_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<force_sum_interface::srv::ForceSum_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace force_sum_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ForceSum_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ForceSum_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ForceSum_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace force_sum_interface

namespace rosidl_generator_traits
{

[[deprecated("use force_sum_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const force_sum_interface::srv::ForceSum_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  force_sum_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use force_sum_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const force_sum_interface::srv::ForceSum_Event & msg)
{
  return force_sum_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<force_sum_interface::srv::ForceSum_Event>()
{
  return "force_sum_interface::srv::ForceSum_Event";
}

template<>
inline const char * name<force_sum_interface::srv::ForceSum_Event>()
{
  return "force_sum_interface/srv/ForceSum_Event";
}

template<>
struct has_fixed_size<force_sum_interface::srv::ForceSum_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<force_sum_interface::srv::ForceSum_Event>
  : std::integral_constant<bool, has_bounded_size<force_sum_interface::srv::ForceSum_Request>::value && has_bounded_size<force_sum_interface::srv::ForceSum_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<force_sum_interface::srv::ForceSum_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<force_sum_interface::srv::ForceSum>()
{
  return "force_sum_interface::srv::ForceSum";
}

template<>
inline const char * name<force_sum_interface::srv::ForceSum>()
{
  return "force_sum_interface/srv/ForceSum";
}

template<>
struct has_fixed_size<force_sum_interface::srv::ForceSum>
  : std::integral_constant<
    bool,
    has_fixed_size<force_sum_interface::srv::ForceSum_Request>::value &&
    has_fixed_size<force_sum_interface::srv::ForceSum_Response>::value
  >
{
};

template<>
struct has_bounded_size<force_sum_interface::srv::ForceSum>
  : std::integral_constant<
    bool,
    has_bounded_size<force_sum_interface::srv::ForceSum_Request>::value &&
    has_bounded_size<force_sum_interface::srv::ForceSum_Response>::value
  >
{
};

template<>
struct is_service<force_sum_interface::srv::ForceSum>
  : std::true_type
{
};

template<>
struct is_service_request<force_sum_interface::srv::ForceSum_Request>
  : std::true_type
{
};

template<>
struct is_service_response<force_sum_interface::srv::ForceSum_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FORCE_SUM_INTERFACE__SRV__DETAIL__FORCE_SUM__TRAITS_HPP_
