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
# Build as static or shared lib
option( BUILD_STATIC_LIBS "Build the library as STATIC" OFF )

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
add_subdirectory( ExternalLibs/ANTLR4-Cpp-src ${PROJECT_BINARY_DIR}/ExternalLibs/ANTLR4-Cpp-src)

# CoreLibraries
add_subdirectory( OpenScenarioLib ${PROJECT_BINARY_DIR}/OpenScenarioLib )

# Applications
add_subdirectory( Applications/OpenScenarioReader ${PROJECT_BINARY_DIR}/Applications/OpenScenarioReader )
add_subdirectory( Applications/OpenScenarioTester )
add_subdirectory( Applications/IndexerTester )

################################################################
# Visual Studio Startup Project and debug cmd line args
if( MSVC )
  set_property( DIRECTORY PROPERTY VS_STARTUP_PROJECT "OpenScenarioReader" )
endif()
