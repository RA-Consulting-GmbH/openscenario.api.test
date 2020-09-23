#!/bin/bash

# get script folder
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
# check for parameter
if [[ $1 == "" ]] ; then
    echo "Parameter missing."
    echo "Usage: $0 <OpenSCENARIO API folder>"
    exit -1
fi
# cd to includes
OPEN_SCEANARIO_API=$1
cd ${SCRIPT_DIR}/${OPEN_SCEANARIO_API}

# CMakeLists.txt prefix
echo "################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( OpenScenario.v1_0.TestProject )
message(\"\${PROJECT_NAME}\")


################################################################
# Add a module path for cmake modules
list( APPEND CMAKE_MODULE_PATH \"\${PROJECT_SOURCE_DIR}\" )
include( CMakeHelpers )


################################################################
# Build as static or shared lib, Debug or Release, for Linux or Windows
option( BUILD_STATIC_LIBS \"Build the library as STATIC\" OFF )
if( UNIX )
    # Release or Debug
    if(NOT CMAKE_BUILD_TYPE)
        set(CMAKE_BUILD_TYPE \"Debug\" CACHE STRING \"Debug, Release\" FORCE)
    endif(NOT CMAKE_BUILD_TYPE)
    set(BUILD_TARGET_PARAM \${CMAKE_BUILD_TYPE})
    # Use static or shared libs
    if( NOT \${BUILD_STATIC_LIBS} )
        message(WARNING \"Lib type not set, falling back to SHARED mode. To specify the lib type use: -DBUILD_STATIC_LIBS=<on|off>\")
        set(BUILD_STATIC_LIBS \"OFF\" CACHE STRING \"Choose the type of library, options are: on or off.\" FORCE)
    else( NOT \${BUILD_STATIC_LIBS} )
        string( TOUPPER \${BUILD_STATIC_LIBS} BUILD_STATIC_LIBS )
    endif( NOT \${BUILD_STATIC_LIBS} )
endif( UNIX )

if(NOT PLATFORM_PARAM)
    set(PLATFORM_PARAM \"\${CMAKE_SYSTEM_NAME}\" CACHE STRING \"Linux, Windows, etc\" FORCE)
endif(NOT PLATFORM_PARAM)

set(ENV{CMAKE_BUILD_PARALLEL_LEVEL} 4)


################################################################
# Preprocessor settings
if( WIN32 )
  add_definitions( -D_CRT_SECURE_NO_WARNINGS )
else( WIN32 )
  add_definitions( -Wall -fPIC -Wno-unused-variable )
endif( WIN32 )


################################################################
# Set common, C++, and build params
RAC_SET_COMMON_PARAM()
RAC_SET_CPP_PARAM()
RAC_SET_BUILD_PARAM()


################################################################
# Set compile output folder
RAC_SET_FOLDERS()
message (\"Building all into: \${CMAKE_BINARY_DIR}\")


################################################################
# Set path to the OpenSCENARIO libs
set( CMAKE_LIBRARY_PATH \"\${CMAKE_LIBRARY_PATH}; \${CMAKE_SOURCE_DIR}/${OPEN_SCEANARIO_API}\" )


################################################################
# Include folders" > CMakeLists.txt

# CMakeLists.txt includes
for i in `find ./include -type d -print` ; do
    j=`echo $i | cut -c3-`
    echo "include_directories( \${CMAKE_SOURCE_DIR}/$j )" >> CMakeLists.txt
done

# CMakeLists.txt sources, headers, target def
echo "

################################################################
# Source files
set( SOURCES
  \${SOURCES}
  # your sources here
)

################################################################
# Header files
set( HEADERS
  \${HEADERS}
  # your headers here
)

################################################################
# Create groups for VS
if( MSVC )
  # Groups for source files
  source_group( Sources FILES \${SOURCES} )

  # Groups for header files
  source_group( Headers FILES \${HEADERS} )
endif()

################################################################
# Generate executable
add_executable( \${PROJECT_NAME} \${SOURCES} \${HEADERS} )

# Add OpenSCENARIO lib
set( LIB_PREFIX \"\" )
set( LIB_SUFFIX \"\" )
if( BUILD_STATIC_LIBS STREQUAL \"ON\" )
  if( WIN32 )
    set( LIB_SUFFIX \".lib\" )
  elseif( UNIX )
    set( LIB_PREFIX \"lib\" )
    set( LIB_SUFFIX \".a\" )
  endif()
else()
  if( WIN32 )
    set( LIB_SUFFIX \".dll\" )
  elseif( UNIX )
    set( LIB_PREFIX \"lib\" )
    set( LIB_SUFFIX \".so\" )
  endif()
endif()

unset( XOSC_LIB CACHE )
unset( ANTLR4_LIB CACHE )
find_library( XOSC_LIB name \"\${LIB_PREFIX}OpenScenarioLib.v1_0\${LIB_SUFFIX}\" HINTS \"\${PROJECT_SOURCE_DIR}/lib\" )
find_library( ANTLR4_LIB name \"\${LIB_PREFIX}antlr4-runtime\${LIB_SUFFIX}\" HINTS \"\${PROJECT_SOURCE_DIR}/lib\" )
#add_library(\"\${LIB_PREFIX}OpenScenarioLib.v1_0\${LIB_SUFFIX}\" STATIC IMPORTED)
#set_property(TARGET \"\${LIB_PREFIX}OpenScenarioLib.v1_0\${LIB_SUFFIX}\" PROPERTY IMPORTED_LOCATION \${XOSC_LIB})
target_link_libraries( \${PROJECT_NAME} \${XOSC_LIB} \${ANTLR4_LIB} )


################################################################
# Visual Studio solution settings
if( MSVC )
  set_target_properties( \${PROJECT_NAME} PROPERTIES FOLDER Apps )
endif()" >> CMakeLists.txt
