#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Penkobu" for configuration "Debug"
set_property(TARGET Penkobu APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Penkobu PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/components/lib/Penkobu.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "RTC110d;coil110d;omniORB415_rtd;omniDynamic415_rtd;omnithread34_rtd;advapi32;ws2_32;mswsock;opencv_gpu231d;opencv_contrib231d;opencv_legacy231d;opencv_objdetect231d;opencv_calib3d231d;opencv_features2d231d;opencv_video231d;opencv_highgui231d;opencv_ml231d;opencv_imgproc231d;opencv_flann231d;opencv_core231d"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/components/bin/Penkobu.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Penkobu )
list(APPEND _IMPORT_CHECK_FILES_FOR_Penkobu "${_IMPORT_PREFIX}/components/lib/Penkobu.lib" "${_IMPORT_PREFIX}/components/bin/Penkobu.dll" )

# Import target "PenkobuComp" for configuration "Debug"
set_property(TARGET PenkobuComp APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(PenkobuComp PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/components/bin/PenkobuComp.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS PenkobuComp )
list(APPEND _IMPORT_CHECK_FILES_FOR_PenkobuComp "${_IMPORT_PREFIX}/components/bin/PenkobuComp.exe" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
