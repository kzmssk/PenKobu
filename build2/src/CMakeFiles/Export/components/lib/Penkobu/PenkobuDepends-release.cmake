#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Penkobu" for configuration "Release"
set_property(TARGET Penkobu APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Penkobu PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/components/lib/Penkobu.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "RTC110;coil110;omniORB415_rt;omniDynamic415_rt;omnithread34_rt;advapi32;ws2_32;mswsock;opencv_gpu231;opencv_contrib231;opencv_legacy231;opencv_objdetect231;opencv_calib3d231;opencv_features2d231;opencv_video231;opencv_highgui231;opencv_ml231;opencv_imgproc231;opencv_flann231;opencv_core231"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/components/bin/Penkobu.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Penkobu )
list(APPEND _IMPORT_CHECK_FILES_FOR_Penkobu "${_IMPORT_PREFIX}/components/lib/Penkobu.lib" "${_IMPORT_PREFIX}/components/bin/Penkobu.dll" )

# Import target "PenkobuComp" for configuration "Release"
set_property(TARGET PenkobuComp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(PenkobuComp PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/components/bin/PenkobuComp.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS PenkobuComp )
list(APPEND _IMPORT_CHECK_FILES_FOR_PenkobuComp "${_IMPORT_PREFIX}/components/bin/PenkobuComp.exe" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
