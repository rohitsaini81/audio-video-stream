#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "SoundTouch::SoundTouch" for configuration ""
set_property(TARGET SoundTouch::SoundTouch APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(SoundTouch::SoundTouch PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libSoundTouch.a"
  )

list(APPEND _cmake_import_check_targets SoundTouch::SoundTouch )
list(APPEND _cmake_import_check_files_for_SoundTouch::SoundTouch "${_IMPORT_PREFIX}/lib/libSoundTouch.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
