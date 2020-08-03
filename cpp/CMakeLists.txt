################################################################
# CMakeLists.txt
cmake_minimum_required( VERSION 3.8.2 )
project( OpenScenario-Cpp )
message("${PROJECT_NAME}")


################################################################
# Add a module path for cmake modules
list( APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}" )
include( CMakeHelpers )

################################################################
# Build as static or shared lib, Debug or Release, for Linuc or Windows
option( BUILD_STATIC_LIBS "Build the library as STATIC" OFF )
if( UNIX )
    if(NOT CMAKE_BUILD_TYPE)
        set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Debug, Release" FORCE)
    endif(NOT CMAKE_BUILD_TYPE)
    set(BUILD_TARGET_PARAM ${CMAKE_BUILD_TYPE})
endif( UNIX )
if(NOT PLATFORM_PARAM)
    set(PLATFORM_PARAM "${CMAKE_SYSTEM_NAME}" CACHE STRING "Linux, Windows, etc" FORCE)
endif(NOT PLATFORM_PARAM)

set(ENV{CMAKE_BUILD_PARALLEL_LEVEL} 4)

################################################################
# Set common, C++, and build params
RAC_SET_COMMON_PARAM()
RAC_SET_CPP_PARAM()
RAC_SET_BUILD_PARAM()

################################################################
# Add subprojects
# DiagRA Portable dependencies, not master
set( MASTER_PROJECT FALSE )
message("Subprojects:")

# Set compile output folder for OpenSCENARIO core libs
# This is needed because of the way the makefiles for ANTLR4-Cpp-src are written
unset(CMAKE_BUILD_TYPE CACHE)
RAC_SET_FOLDERS()
message ("Building all into: ${CMAKE_BINARY_DIR}")

# Dependencies
add_subdirectory( externalLibs/ANTLR4-Cpp-src ${PROJECT_BINARY_DIR}/externalLibs/ANTLR4-Cpp-src)

# CoreLibraries
add_subdirectory( openScenarioLib/v_1_0 ${PROJECT_BINARY_DIR}/openScenarioLib/v_1_0 )

# Applications
add_subdirectory( applications/openScenarioReader/v_1_0 ${PROJECT_BINARY_DIR}/applications/openScenarioReader/v_1_0 )
add_subdirectory( applications/openScenarioTester/v_1_0 ${PROJECT_BINARY_DIR}/applications/openScenarioTester/v_1_0)
add_subdirectory( applications/indexerTester ${PROJECT_BINARY_DIR}/applications/indexerTester)

################################################################
# Visual Studio Startup Project and debug cmd line args
if( MSVC )
  set_property( DIRECTORY PROPERTY VS_STARTUP_PROJECT "OpenScenarioReaderV_1_0" )
endif()
