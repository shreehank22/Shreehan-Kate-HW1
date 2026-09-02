// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from force_sum_interface:srv/ForceSum.idl
// generated code does not contain a copyright notice
#include "force_sum_interface/srv/detail/force_sum__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
force_sum_interface__srv__ForceSum_Request__init(force_sum_interface__srv__ForceSum_Request * msg)
{
  if (!msg) {
    return false;
  }
  // f1
  // f2
  return true;
}

void
force_sum_interface__srv__ForceSum_Request__fini(force_sum_interface__srv__ForceSum_Request * msg)
{
  if (!msg) {
    return;
  }
  // f1
  // f2
}

bool
force_sum_interface__srv__ForceSum_Request__are_equal(const force_sum_interface__srv__ForceSum_Request * lhs, const force_sum_interface__srv__ForceSum_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // f1
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->f1[i] != rhs->f1[i]) {
      return false;
    }
  }
  // f2
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->f2[i] != rhs->f2[i]) {
      return false;
    }
  }
  return true;
}

bool
force_sum_interface__srv__ForceSum_Request__copy(
  const force_sum_interface__srv__ForceSum_Request * input,
  force_sum_interface__srv__ForceSum_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // f1
  for (size_t i = 0; i < 3; ++i) {
    output->f1[i] = input->f1[i];
  }
  // f2
  for (size_t i = 0; i < 3; ++i) {
    output->f2[i] = input->f2[i];
  }
  return true;
}

force_sum_interface__srv__ForceSum_Request *
force_sum_interface__srv__ForceSum_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  force_sum_interface__srv__ForceSum_Request * msg = (force_sum_interface__srv__ForceSum_Request *)allocator.allocate(sizeof(force_sum_interface__srv__ForceSum_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(force_sum_interface__srv__ForceSum_Request));
  bool success = force_sum_interface__srv__ForceSum_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
force_sum_interface__srv__ForceSum_Request__destroy(force_sum_interface__srv__ForceSum_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    force_sum_interface__srv__ForceSum_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
force_sum_interface__srv__ForceSum_Request__Sequence__init(force_sum_interface__srv__ForceSum_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  force_sum_interface__srv__ForceSum_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(force_sum_interface__srv__ForceSum_Request)) {
      return false;
    }
    data = (force_sum_interface__srv__ForceSum_Request *)allocator.zero_allocate(size, sizeof(force_sum_interface__srv__ForceSum_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = force_sum_interface__srv__ForceSum_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        force_sum_interface__srv__ForceSum_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
force_sum_interface__srv__ForceSum_Request__Sequence__fini(force_sum_interface__srv__ForceSum_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      force_sum_interface__srv__ForceSum_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

force_sum_interface__srv__ForceSum_Request__Sequence *
force_sum_interface__srv__ForceSum_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  force_sum_interface__srv__ForceSum_Request__Sequence * array = (force_sum_interface__srv__ForceSum_Request__Sequence *)allocator.allocate(sizeof(force_sum_interface__srv__ForceSum_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = force_sum_interface__srv__ForceSum_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
force_sum_interface__srv__ForceSum_Request__Sequence__destroy(force_sum_interface__srv__ForceSum_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    force_sum_interface__srv__ForceSum_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
force_sum_interface__srv__ForceSum_Request__Sequence__are_equal(const force_sum_interface__srv__ForceSum_Request__Sequence * lhs, const force_sum_interface__srv__ForceSum_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!force_sum_interface__srv__ForceSum_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
force_sum_interface__srv__ForceSum_Request__Sequence__copy(
  const force_sum_interface__srv__ForceSum_Request__Sequence * input,
  force_sum_interface__srv__ForceSum_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(force_sum_interface__srv__ForceSum_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(force_sum_interface__srv__ForceSum_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    force_sum_interface__srv__ForceSum_Request * data =
      (force_sum_interface__srv__ForceSum_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!force_sum_interface__srv__ForceSum_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          force_sum_interface__srv__ForceSum_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!force_sum_interface__srv__ForceSum_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
force_sum_interface__srv__ForceSum_Response__init(force_sum_interface__srv__ForceSum_Response * msg)
{
  if (!msg) {
    return false;
  }
  // f_sum
  return true;
}

void
force_sum_interface__srv__ForceSum_Response__fini(force_sum_interface__srv__ForceSum_Response * msg)
{
  if (!msg) {
    return;
  }
  // f_sum
}

bool
force_sum_interface__srv__ForceSum_Response__are_equal(const force_sum_interface__srv__ForceSum_Response * lhs, const force_sum_interface__srv__ForceSum_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // f_sum
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->f_sum[i] != rhs->f_sum[i]) {
      return false;
    }
  }
  return true;
}

bool
force_sum_interface__srv__ForceSum_Response__copy(
  const force_sum_interface__srv__ForceSum_Response * input,
  force_sum_interface__srv__ForceSum_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // f_sum
  for (size_t i = 0; i < 3; ++i) {
    output->f_sum[i] = input->f_sum[i];
  }
  return true;
}

force_sum_interface__srv__ForceSum_Response *
force_sum_interface__srv__ForceSum_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  force_sum_interface__srv__ForceSum_Response * msg = (force_sum_interface__srv__ForceSum_Response *)allocator.allocate(sizeof(force_sum_interface__srv__ForceSum_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(force_sum_interface__srv__ForceSum_Response));
  bool success = force_sum_interface__srv__ForceSum_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
force_sum_interface__srv__ForceSum_Response__destroy(force_sum_interface__srv__ForceSum_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    force_sum_interface__srv__ForceSum_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
force_sum_interface__srv__ForceSum_Response__Sequence__init(force_sum_interface__srv__ForceSum_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  force_sum_interface__srv__ForceSum_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(force_sum_interface__srv__ForceSum_Response)) {
      return false;
    }
    data = (force_sum_interface__srv__ForceSum_Response *)allocator.zero_allocate(size, sizeof(force_sum_interface__srv__ForceSum_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = force_sum_interface__srv__ForceSum_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        force_sum_interface__srv__ForceSum_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
force_sum_interface__srv__ForceSum_Response__Sequence__fini(force_sum_interface__srv__ForceSum_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      force_sum_interface__srv__ForceSum_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

force_sum_interface__srv__ForceSum_Response__Sequence *
force_sum_interface__srv__ForceSum_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  force_sum_interface__srv__ForceSum_Response__Sequence * array = (force_sum_interface__srv__ForceSum_Response__Sequence *)allocator.allocate(sizeof(force_sum_interface__srv__ForceSum_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = force_sum_interface__srv__ForceSum_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
force_sum_interface__srv__ForceSum_Response__Sequence__destroy(force_sum_interface__srv__ForceSum_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    force_sum_interface__srv__ForceSum_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
force_sum_interface__srv__ForceSum_Response__Sequence__are_equal(const force_sum_interface__srv__ForceSum_Response__Sequence * lhs, const force_sum_interface__srv__ForceSum_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!force_sum_interface__srv__ForceSum_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
force_sum_interface__srv__ForceSum_Response__Sequence__copy(
  const force_sum_interface__srv__ForceSum_Response__Sequence * input,
  force_sum_interface__srv__ForceSum_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(force_sum_interface__srv__ForceSum_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(force_sum_interface__srv__ForceSum_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    force_sum_interface__srv__ForceSum_Response * data =
      (force_sum_interface__srv__ForceSum_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!force_sum_interface__srv__ForceSum_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          force_sum_interface__srv__ForceSum_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!force_sum_interface__srv__ForceSum_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "force_sum_interface/srv/detail/force_sum__functions.h"

bool
force_sum_interface__srv__ForceSum_Event__init(force_sum_interface__srv__ForceSum_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    force_sum_interface__srv__ForceSum_Event__fini(msg);
    return false;
  }
  // request
  if (!force_sum_interface__srv__ForceSum_Request__Sequence__init(&msg->request, 0)) {
    force_sum_interface__srv__ForceSum_Event__fini(msg);
    return false;
  }
  // response
  if (!force_sum_interface__srv__ForceSum_Response__Sequence__init(&msg->response, 0)) {
    force_sum_interface__srv__ForceSum_Event__fini(msg);
    return false;
  }
  return true;
}

void
force_sum_interface__srv__ForceSum_Event__fini(force_sum_interface__srv__ForceSum_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  force_sum_interface__srv__ForceSum_Request__Sequence__fini(&msg->request);
  // response
  force_sum_interface__srv__ForceSum_Response__Sequence__fini(&msg->response);
}

bool
force_sum_interface__srv__ForceSum_Event__are_equal(const force_sum_interface__srv__ForceSum_Event * lhs, const force_sum_interface__srv__ForceSum_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!force_sum_interface__srv__ForceSum_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!force_sum_interface__srv__ForceSum_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
force_sum_interface__srv__ForceSum_Event__copy(
  const force_sum_interface__srv__ForceSum_Event * input,
  force_sum_interface__srv__ForceSum_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!force_sum_interface__srv__ForceSum_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!force_sum_interface__srv__ForceSum_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

force_sum_interface__srv__ForceSum_Event *
force_sum_interface__srv__ForceSum_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  force_sum_interface__srv__ForceSum_Event * msg = (force_sum_interface__srv__ForceSum_Event *)allocator.allocate(sizeof(force_sum_interface__srv__ForceSum_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(force_sum_interface__srv__ForceSum_Event));
  bool success = force_sum_interface__srv__ForceSum_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
force_sum_interface__srv__ForceSum_Event__destroy(force_sum_interface__srv__ForceSum_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    force_sum_interface__srv__ForceSum_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
force_sum_interface__srv__ForceSum_Event__Sequence__init(force_sum_interface__srv__ForceSum_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  force_sum_interface__srv__ForceSum_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(force_sum_interface__srv__ForceSum_Event)) {
      return false;
    }
    data = (force_sum_interface__srv__ForceSum_Event *)allocator.zero_allocate(size, sizeof(force_sum_interface__srv__ForceSum_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = force_sum_interface__srv__ForceSum_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        force_sum_interface__srv__ForceSum_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
force_sum_interface__srv__ForceSum_Event__Sequence__fini(force_sum_interface__srv__ForceSum_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      force_sum_interface__srv__ForceSum_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

force_sum_interface__srv__ForceSum_Event__Sequence *
force_sum_interface__srv__ForceSum_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  force_sum_interface__srv__ForceSum_Event__Sequence * array = (force_sum_interface__srv__ForceSum_Event__Sequence *)allocator.allocate(sizeof(force_sum_interface__srv__ForceSum_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = force_sum_interface__srv__ForceSum_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
force_sum_interface__srv__ForceSum_Event__Sequence__destroy(force_sum_interface__srv__ForceSum_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    force_sum_interface__srv__ForceSum_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
force_sum_interface__srv__ForceSum_Event__Sequence__are_equal(const force_sum_interface__srv__ForceSum_Event__Sequence * lhs, const force_sum_interface__srv__ForceSum_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!force_sum_interface__srv__ForceSum_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
force_sum_interface__srv__ForceSum_Event__Sequence__copy(
  const force_sum_interface__srv__ForceSum_Event__Sequence * input,
  force_sum_interface__srv__ForceSum_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(force_sum_interface__srv__ForceSum_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(force_sum_interface__srv__ForceSum_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    force_sum_interface__srv__ForceSum_Event * data =
      (force_sum_interface__srv__ForceSum_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!force_sum_interface__srv__ForceSum_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          force_sum_interface__srv__ForceSum_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!force_sum_interface__srv__ForceSum_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
