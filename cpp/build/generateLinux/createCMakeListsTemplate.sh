#!/bin/bash

# get script folder
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
# check for parameter
if [[ $1 == "" ]] ; then
    echo "Parameter missing."
    echo "Usage: $0 <openSCENARIO API folder>"
    exit -1
fi
# cd to includes
OPEN_SCEANARIO_API=$1
cd ${SCRIPT_DIR}/${OPEN_SCEANARIO_API}

# CMakeLists.txt prefix
echo "################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( OpenScenario.v1_0.TestProject )
message("\${PROJECT_NAME}")


################################################################
# Preprocessor settings
if( WIN32 )
  add_definitions( -D_CRT_SECURE_NO_WARNINGS )
else( WIN32 )
  add_definitions( -Wall -fPIC -Wno-unused-variable )
endif( WIN32 )


################################################################
# Set compile output folder
RAC_SET_FOLDERS()
message ("Building all into: \${CMAKE_BINARY_DIR}")


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
target_link_libraries( \${PROJECT_NAME} OpenScenarioLib.v1_0 )


################################################################
# Visual Studio solution settings
if( MSVC )
  set_target_properties( \${PROJECT_NAME} PROPERTIES FOLDER Apps )
endif()" >> CMakeLists.txt
