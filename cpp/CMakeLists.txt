################################################################
# CMakeLists.txt
cmake_minimum_required(VERSION 3.8.2)
project(OpenScenario-Cpp)
message(STATUS "${PROJECT_NAME}")

################################################################
# Preprocessor settings
option(SUPPORT_OSC_1_0 "Build the artifacts supporting OSC standard version 1.0" ON)
option(SUPPORT_OSC_1_1 "Build the artifacts supporting OSC standard version 1.1" ON)
option(SUPPORT_OSC_1_2 "Build the artifacts supporting OSC standard version 1.2" ON)

if (SUPPORT_OSC_1_0)
	add_definitions(-DSUPPORT_OSC_1_0)	
endif (SUPPORT_OSC_1_0)
if (SUPPORT_OSC_1_1)
	add_definitions(-DSUPPORT_OSC_1_1)	
endif (SUPPORT_OSC_1_1)
if (SUPPORT_OSC_1_2)
	add_definitions(-DSUPPORT_OSC_1_2)	
endif (SUPPORT_OSC_1_2)



################################################################
# Write msbuild.exe for Windows build
if(MSVC)
    write_file("${CMAKE_CURRENT_SOURCE_DIR}/buildArtifact/msbuildcmd.txt" "cmd,${CMAKE_VS_MSBUILD_COMMAND}")
endif(MSVC)


################################################################
# Add a module path for cmake modules
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}")
include(CMakeHelpers)
# Parallel build jobs
# if(NOT MSVC)
#     set(PARALLEL_BUILD_JOBS 8 CACHE STRING "Set amount of parallel build jobs")
#     set(ENV{CMAKE_BUILD_PARALLEL_LEVEL} ${PARALLEL_BUILD_JOBS})
# endif()
# Set common, C++, and build params
RAC_SET_COMMON_PARAM()
RAC_SET_CPP_PARAM()
RAC_SET_BUILD_PARAM()
# Build static or shared libs
option(BUILD_SHARED_LIBS "Build shared libraries" ON)


################################################################
# Add antlr features
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/buildAntlr4)

if(${BUILD_SHARED_LIBS})
    set(ANTLR4_WITH_STATIC_CRT OFF)
else()
    # required if linking to static library
    add_definitions(-DANTLR4CPP_STATIC)
    add_definitions(-DOSC_STATIC)
    set(ANTLR4_WITH_STATIC_CRT ON)
endif()

set(ANTLR4_TAG 4.8)
set(ANTLR4_ZIP_REPOSITORY ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/antlr/antlr4-${ANTLR4_TAG}.zip)
set(ANTLR_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/antlr/antlr-${ANTLR4_TAG}-complete.jar)

# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antrl4cpp artifacts to project environment

# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)


################################################################
# Build as Debug or Release, for Linux or Windows
if(UNIX)
    if(NOT CMAKE_BUILD_TYPE)
        set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "Debug, Release" FORCE)
    endif(NOT CMAKE_BUILD_TYPE)
    set(BUILD_TARGET_PARAM ${CMAKE_BUILD_TYPE})
endif(UNIX)
          
if(NOT PLATFORM_PARAM)
    set(PLATFORM_PARAM "${CMAKE_SYSTEM_NAME}" CACHE STRING "Linux, Windows, etc" FORCE)
endif(NOT PLATFORM_PARAM)


################################################################
# Get company info
RAC_GET_COMPANY_INFO("${PROJECT_SOURCE_DIR}/common/companyInfo.txt")
# Get version
RAC_GET_VERSION("common/version.h")
message("Program version: ${VERSION_MAJOR}.${VERSION_MINOR}.${PATCHNUMBER}")
message("OSC std version: ${OSC_VERSION_MAJOR}.${OSC_VERSION_MINOR}.${OSC_PATCHNUMBER}")
set(FILE_VERSION_COMMA "${VERSION_MAJOR},${VERSION_MINOR},${PATCHNUMBER},0")
set(FILE_VERSION_PERIOD "${VERSION_MAJOR}.${VERSION_MINOR}.${PATCHNUMBER}.0")
set(OSC_VERSION_COMMA "${OSC_VERSION_MAJOR},${OSC_VERSION_MINOR},${OSC_PATCHNUMBER}")
set(OSC_VERSION_PERIOD "${OSC_VERSION_MAJOR}.${OSC_VERSION_MINOR}.${OSC_PATCHNUMBER}")
 

################################################################
# Add subprojects
# Dependencies, not master
set(MASTER_PROJECT FALSE)
message(STATUS "Subprojects:")

# Set compile output folder for OpenSCENARIO core libs
# This is needed because of the way the makefiles for ANTLR4-Cpp-src are written
unset(CMAKE_BUILD_TYPE CACHE)
    
# CoreLibraries
add_subdirectory(openScenarioLib)
add_subdirectory(expressionsLib)

# Applications
add_subdirectory(applications/openScenarioReader)
add_subdirectory(applications/openScenarioTester)
add_subdirectory(applications/indexerTester)
add_subdirectory(applications/expressionsTester)


################################################################
# Visual Studio Startup Project and debug cmd line args
if(MSVC)
    set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT "OpenScenarioTester")
endif()
