#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to force_sum_interface__srv__ForceSum_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ForceSum_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub f1: [f64; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub f2: [f64; 3],

}



impl Default for ForceSum_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ForceSum_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ForceSum_Request {
  type RmwMsg = super::srv::rmw::ForceSum_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        f1: msg.f1,
        f2: msg.f2,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        f1: msg.f1,
        f2: msg.f2,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      f1: msg.f1,
      f2: msg.f2,
    }
  }
}


// Corresponds to force_sum_interface__srv__ForceSum_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ForceSum_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub f_sum: [f64; 3],

}



impl Default for ForceSum_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ForceSum_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ForceSum_Response {
  type RmwMsg = super::srv::rmw::ForceSum_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        f_sum: msg.f_sum,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        f_sum: msg.f_sum,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      f_sum: msg.f_sum,
    }
  }
}






#[link(name = "force_sum_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__force_sum_interface__srv__ForceSum() -> *const std::ffi::c_void;
}

// Corresponds to force_sum_interface__srv__ForceSum
#[allow(missing_docs, non_camel_case_types)]
pub struct ForceSum;

impl rosidl_runtime_rs::Service for ForceSum {
    type Request = ForceSum_Request;
    type Response = ForceSum_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__force_sum_interface__srv__ForceSum() }
    }
}


