# Penkobu CMake config file
#
# This file sets the following variables:
# Penkobu_FOUND - Always TRUE.
# Penkobu_INCLUDE_DIRS - Directories containing the Penkobu include files.
# Penkobu_IDL_DIRS - Directories containing the Penkobu IDL files.
# Penkobu_LIBRARIES - Libraries needed to use Penkobu.
# Penkobu_DEFINITIONS - Compiler flags for Penkobu.
# Penkobu_VERSION - The version of Penkobu found.
# Penkobu_VERSION_MAJOR - The major version of Penkobu found.
# Penkobu_VERSION_MINOR - The minor version of Penkobu found.
# Penkobu_VERSION_REVISION - The revision version of Penkobu found.
# Penkobu_VERSION_CANDIDATE - The candidate version of Penkobu found.

message(STATUS "Found Penkobu-1.0.0")
set(Penkobu_FOUND TRUE)

find_package(<dependency> REQUIRED)

#set(Penkobu_INCLUDE_DIRS
#    "C:/Program Files (x86)/Penkobu/include/penkobu-1"
#    ${<dependency>_INCLUDE_DIRS}
#    )
#
#set(Penkobu_IDL_DIRS
#    "C:/Program Files (x86)/Penkobu/include/penkobu-1/idl")
set(Penkobu_INCLUDE_DIRS
    "C:/Program Files (x86)/Penkobu/include/"
    ${<dependency>_INCLUDE_DIRS}
    )
set(Penkobu_IDL_DIRS
    "C:/Program Files (x86)/Penkobu/include//idl")


if(WIN32)
    set(Penkobu_LIBRARIES
        "C:/Program Files (x86)/Penkobu/components/lib/penkobu.lib"
        ${<dependency>_LIBRARIES}
        )
else(WIN32)
    set(Penkobu_LIBRARIES
        "C:/Program Files (x86)/Penkobu/components/lib/penkobu.dll"
        ${<dependency>_LIBRARIES}
        )
endif(WIN32)

set(Penkobu_DEFINITIONS ${<dependency>_DEFINITIONS})

set(Penkobu_VERSION 1.0.0)
set(Penkobu_VERSION_MAJOR 1)
set(Penkobu_VERSION_MINOR 0)
set(Penkobu_VERSION_REVISION 0)
set(Penkobu_VERSION_CANDIDATE )

