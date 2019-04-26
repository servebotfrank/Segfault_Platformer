#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "sfml-system" for configuration "RelWithDebInfo"
set_property(TARGET sfml-system APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(sfml-system PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libsfml-system.so.2.5.1"
  IMPORTED_SONAME_RELWITHDEBINFO "libsfml-system.so.2.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS sfml-system )
list(APPEND _IMPORT_CHECK_FILES_FOR_sfml-system "${_IMPORT_PREFIX}/lib/libsfml-system.so.2.5.1" )

# Import target "sfml-window" for configuration "RelWithDebInfo"
set_property(TARGET sfml-window APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(sfml-window PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libsfml-window.so.2.5.1"
  IMPORTED_SONAME_RELWITHDEBINFO "libsfml-window.so.2.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS sfml-window )
list(APPEND _IMPORT_CHECK_FILES_FOR_sfml-window "${_IMPORT_PREFIX}/lib/libsfml-window.so.2.5.1" )

# Import target "sfml-network" for configuration "RelWithDebInfo"
set_property(TARGET sfml-network APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(sfml-network PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libsfml-network.so.2.5.1"
  IMPORTED_SONAME_RELWITHDEBINFO "libsfml-network.so.2.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS sfml-network )
list(APPEND _IMPORT_CHECK_FILES_FOR_sfml-network "${_IMPORT_PREFIX}/lib/libsfml-network.so.2.5.1" )

# Import target "sfml-graphics" for configuration "RelWithDebInfo"
set_property(TARGET sfml-graphics APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(sfml-graphics PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libsfml-graphics.so.2.5.1"
  IMPORTED_SONAME_RELWITHDEBINFO "libsfml-graphics.so.2.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS sfml-graphics )
list(APPEND _IMPORT_CHECK_FILES_FOR_sfml-graphics "${_IMPORT_PREFIX}/lib/libsfml-graphics.so.2.5.1" )

# Import target "sfml-audio" for configuration "RelWithDebInfo"
set_property(TARGET sfml-audio APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(sfml-audio PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libsfml-audio.so.2.5.1"
  IMPORTED_SONAME_RELWITHDEBINFO "libsfml-audio.so.2.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS sfml-audio )
list(APPEND _IMPORT_CHECK_FILES_FOR_sfml-audio "${_IMPORT_PREFIX}/lib/libsfml-audio.so.2.5.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
