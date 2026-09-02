# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target force_sum_interface::force_sum_interface
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${force_sum_interface_TARGETS}.
if(force_sum_interface_TARGETS AND NOT TARGET force_sum_interface::force_sum_interface)
  add_library(force_sum_interface::force_sum_interface INTERFACE IMPORTED)
  set_target_properties(force_sum_interface::force_sum_interface PROPERTIES
    INTERFACE_LINK_LIBRARIES "${force_sum_interface_TARGETS}")
endif()
