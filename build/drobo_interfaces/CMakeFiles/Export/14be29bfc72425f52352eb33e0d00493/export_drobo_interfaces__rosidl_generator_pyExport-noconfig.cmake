#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "drobo_interfaces::drobo_interfaces__rosidl_generator_py" for configuration ""
set_property(TARGET drobo_interfaces::drobo_interfaces__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(drobo_interfaces::drobo_interfaces__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdrobo_interfaces__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libdrobo_interfaces__rosidl_generator_py.so"
  )

list(APPEND _cmake_import_check_targets drobo_interfaces::drobo_interfaces__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_drobo_interfaces::drobo_interfaces__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libdrobo_interfaces__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
