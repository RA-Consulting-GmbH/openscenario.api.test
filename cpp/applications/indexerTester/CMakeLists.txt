################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( IndexerTester )
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
# Set compile output folder
RAC_SET_FOLDERS()
message ("Building all into: ${CMAKE_BINARY_DIR}")


################################################################
# Include folders
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/common/xmlIndexer )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/v1_0/generated/xmlParser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/TinyXML2 )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/Filesystem)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/atn )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/dfa )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/misc )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/support )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/tree )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/tree/pattern )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/tree/xpath )


################################################################
# Source files
set( SOURCES
  ${SOURCES}
  "src/IndexerTester.cpp"
   "../../externalLibs/TinyXML2/tinyxml2.cpp"
   "../../openScenarioLib/v1_0/generated/xmlParser/XMLLexer.cpp"
   "../../openScenarioLib/v1_0/generated/xmlParser/XMLParser.cpp"
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
# Generate executable
add_executable( ${PROJECT_NAME} ${SOURCES} ${HEADERS} ${RESOURCE_FILES} )

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  if( ${BUILD_SHARED_LIBS} )
      target_compile_options(${PROJECT_NAME} PRIVATE "/MD$<$<CONFIG:Debug>:d>")
  else()
      target_compile_options(${PROJECT_NAME} PRIVATE "/MT$<$<CONFIG:Debug>:d>")

  endif()
endif()

if( ${BUILD_SHARED_LIBS} )
  target_link_libraries( ${PROJECT_NAME} antlr4_shared )
else()
  target_link_libraries( ${PROJECT_NAME} antlr4_static )
endif()


################################################################
# Visual Studio solution settings
if( MSVC )
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4251 ${osc_extra_static_compile_flags}")
  set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Apps )
endif()
