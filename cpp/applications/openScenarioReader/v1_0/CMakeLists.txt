################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( OpenScenarioReader )
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
# This is needed because of the way the cmakefiles for ANTLR4-Cpp-src are written
unset(CMAKE_BUILD_TYPE CACHE)
################################################################
# Set compile output folder
RAC_SET_FOLDERS()
message ("Building all into: ${CMAKE_BINARY_DIR}")


################################################################
# Include folders
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../common)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../externalLibs/TinyXML2 )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../externalLibs/Filesystem)


include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/src/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/src/catalog )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/src/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/src/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/src/parser )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/export )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/checker/tree )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/parser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/parser/modelgroup )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/parser/type )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/simple/struct )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/xmlIndexer )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/generated/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/generated/api/writer )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/generated/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/generated/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/generated/checker/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/generated/checker/range )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/generated/catalog)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/generated/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/generated/xmlParser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v1_0/generated/export/xml )


################################################################
# Source files
set( SOURCES
  ${SOURCES}
  "src/OpenScenarioReader.cpp"
  "../../../externalLibs/TinyXML2/tinyxml2.cpp"
)

################################################################
# Header files
set( HEADERS
  ${HEADERS}
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

  # Groups for resource files
  source_group( Resources FILES ${RESOURCE_FILES} )
endif()


################################################################
# Visual Studio debug cmd line args
if( MSVC )
FILE( WRITE "${CMAKE_CURRENT_BINARY_DIR}/OpenScenarioReaderv1_0.vcxproj.user"
  "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"
  "<Project ToolsVersion=\"15.0\" xmlns=\"http://schemas.microsoft.com/developer/msbuild/2003\">\n"
  "  <PropertyGroup Condition=\"'$(Configuration)|$(Platform)'=='Debug|${PLATFORM_PARAM}'\">\n"
  "    <LocalDebuggerCommandArguments>-i ../../../../../../applications/openScenarioReader/res/simpleImport/simpleImport.xosc</LocalDebuggerCommandArguments>\n"
  "    <DebuggerFlavor>WindowsLocalDebugger</DebuggerFlavor>\n"
  "  </PropertyGroup>\n"
  "  <PropertyGroup Condition=\"'$(Configuration)|$(Platform)'=='MinSizeRel|${PLATFORM_PARAM}'\">\n"
  "    <LocalDebuggerCommandArguments>-i ../../../../../../applications/openScenarioReader/res/simpleImport/simpleImport.xosc</LocalDebuggerCommandArguments>\n"
  "    <DebuggerFlavor>WindowsLocalDebugger</DebuggerFlavor>\n"
  "  </PropertyGroup>\n"
  "  <PropertyGroup Condition=\"'$(Configuration)|$(Platform)'=='Release|${PLATFORM_PARAM}'\">\n"
  "    <LocalDebuggerCommandArguments>-i ../../../../../../applications/openScenarioReader/res/simpleImport/simpleImport.xosc</LocalDebuggerCommandArguments>\n"
  "    <DebuggerFlavor>WindowsLocalDebugger</DebuggerFlavor>\n"
  "  </PropertyGroup>\n"
  "  <PropertyGroup Condition=\"'$(Configuration)|$(Platform)'=='RelWithDebInfo|${PLATFORM_PARAM}'\">\n"
  "    <LocalDebuggerCommandArguments>-i ../../../../../../applications/openScenarioReader/res/simpleImport/simpleImport.xosc</LocalDebuggerCommandArguments>\n"
  "    <DebuggerFlavor>WindowsLocalDebugger</DebuggerFlavor>\n"
  "  </PropertyGroup>\n"
  "</Project>\n"
)
endif()


################################################################
# Generate executable
add_executable( ${PROJECT_NAME} ${SOURCES} ${HEADERS} ${RESOURCE_FILES} )

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
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${osc_extra_static_compile_flags}")
  set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Apps )
endif()
