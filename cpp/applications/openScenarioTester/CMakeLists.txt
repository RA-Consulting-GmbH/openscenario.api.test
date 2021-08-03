################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( OpenScenarioTester )
message("${PROJECT_NAME}")


################################################################
# Preprocessor settings
if( WIN32 )
  add_definitions( -D_CRT_SECURE_NO_WARNINGS )
else( WIN32 )
  add_definitions( -Wall -fPIC -Wno-unused-variable )
endif( WIN32 )

################################################################
# Update rc file
RAC_GET_PRODUCT_INFO("${CMAKE_CURRENT_SOURCE_DIR}/productInfo.txt")
configure_file("${CMAKE_SOURCE_DIR}/common/rc.template" "${CMAKE_CURRENT_SOURCE_DIR}/rc/${PROJECT_NAME}.rc")


################################################################
# Preprocessor settings
# Shared or static lib?
if( ${BUILD_SHARED_LIBS} )
  add_definitions( -DEXPORT_OPENSCENARIOLIB )
  set( LIB_TYPE "SHARED" )
else()
  set( LIB_TYPE "STATIC" )
endif()

################################################################
# Set compile output folder
RAC_SET_FOLDERS()
message ("Building all into: ${CMAKE_BINARY_DIR}")


################################################################
# Include folders
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/helper )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../common)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/TinyXML2 )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/Filesystem)


include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_0/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_0/catalog )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_0/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_0/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_0/checker )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/export )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/checker/tree )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/parser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/simple/struct )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/xmlIndexer )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_0/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_0/api/writer )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_0/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_0/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_0/checker/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_0/checker/range )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_0/catalog)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_0/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_0/export/xml )


################################################################
# Source files
set( SOURCES
  ${SOURCES}
  "src/OpenScenarioTester.cpp"
  "../../externalLibs/TinyXML2/tinyxml2.cpp"
)

################################################################
# Header files
set( HEADERS
  ${HEADERS}
  "src/TestExamples.h"
  "src/TestBase.h"
  "src/TestFiles.h"
  "src/TestReader.h"
  "src/TestWriterApi.h"
  "src/TestImports.h"
  "src/TestSimpleDemos.h"
  "src/TestRangeChecker.h"
  "src/TestFlexInterface.h"
  "src/TestVersionChecker.h"
  "src/TestInjectedParameters.h"
)

set( HEADERS_HELPER
  ${HEADERS_HELPER}
  "src/helper/EgoCheckerRule.h"
)

################################################################
# Resource files
if( MSVC )
  set( RESOURCE_FILES
    "rc/${PROJECT_NAME}.rc"
    "rc/resource.h"
  )
  set( VS_RESOURCE_FILE ${CMAKE_CURRENT_SOURCE_DIR}/rc/${PROJECT_NAME}.rc )
endif()

################################################################
# Create groups for VS
if( MSVC )
  # Groups for source files
  source_group( Sources FILES ${SOURCES} )

  # Groups for header files
  source_group( Headers FILES ${HEADERS} )
  source_group( Headers\\Helper FILES ${HEADERS_HELPER} )

  # Groups for resource files
  source_group( Resources FILES ${RESOURCE_FILES} )
endif()

################################################################
# Generate executable
add_executable( ${PROJECT_NAME} ${SOURCES} ${HEADERS} ${HEADERS_HELPER} ${RESOURCE_FILES} )

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  if( ${BUILD_SHARED_LIBS} )
      target_compile_options(${PROJECT_NAME} PRIVATE "/MD$<$<CONFIG:Debug>:d>")
  else()
      target_compile_options(${PROJECT_NAME} PRIVATE "/MT$<$<CONFIG:Debug>:d>")
  endif()
endif()

target_link_libraries( ${PROJECT_NAME} OpenScenarioLib )


################################################################
# Visual Studio solution settings
if( MSVC )
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj ${osc_extra_static_compile_flags}")
  set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Apps )
endif()
