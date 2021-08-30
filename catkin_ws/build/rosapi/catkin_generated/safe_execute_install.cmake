execute_process(COMMAND "/home/petern25/catkin_ws/build/rosapi/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/petern25/catkin_ws/build/rosapi/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
