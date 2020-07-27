################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( OpenScenarioTesterV_1_0 )
message("${PROJECT_NAME}")

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
message ("Building all into: ${CMAKE_BINARY_DIR}")


################################################################
# Include folders
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/helper )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../common)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../externalLibs/TinyXML2 )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../externalLibs/Filesystem)


include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/src/catalog )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/src/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/src/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/src/parser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/src/checker )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/parser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/parser/modelgroup )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/parser/type )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/simple/struct )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/common/xmlIndexer )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/generated/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/generated/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/generated/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/generated/checker/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/generated/checker/range )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/generated/catalog)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/generated/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../openScenarioLib/v_1_0/generated/xmlParser )




################################################################
# Source files
set( SOURCES
  ${SOURCES}
  "src/OpenScenarioTester.cpp"
  "../../../externalLibs/TinyXML2/tinyxml2.cpp"
)

################################################################
# Header files
set( HEADERS
  ${HEADERS}
  "src/TestExamples.h"
  "src/TestBase.h"
  "src/TestFiles.h"
  "src/TestReader.h"
  "src/TestImports.h"
  "src/TestSimpleDemos.h"
  "src/TestRangeChecker.h"
  "src/MessageLogger.h"
)

set( HEADERS_HELPER
  ${HEADERS_HELPER}
  "src/helper/EgoCheckerRule.h"
)

################################################################
# Create groups for VS
if( MSVC )
  # Groups for source files
  source_group( Sources FILES ${SOURCES} )

  # Groups for header files
  source_group( Headers FILES ${HEADERS} )
  source_group( Headers\\Helper FILES ${HEADERS_HELPER} )

endif()

################################################################
# Generate executable
add_executable( ${PROJECT_NAME} ${SOURCES} ${HEADERS} ${HEADERS_HELPER})

target_link_libraries( ${PROJECT_NAME} OpenScenarioLibV_1_0 )


################################################################
# Visual Studio solution settings
if( MSVC )
  set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Apps )
endif()
