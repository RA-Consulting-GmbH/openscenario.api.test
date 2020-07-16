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
# Set compile output folder
RAC_SET_FOLDERS()
message ("Building all into: ${CMAKE_BINARY_DIR}")


################################################################
# Include folders
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/inc )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/catalog )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/parser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/parser/modelgroup )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/parser/type )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/simple )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/simple/struct )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/src/xmlIndexer )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/generated/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../../TinyXML2 )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../ExternalLibs/Filesystem)

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/generated )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/generated/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/generated/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/generated/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/generated/checker/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/generated/checker/range )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/generated/catalog)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/generated/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../OpenScenarioLib/generated/xmlParser )




################################################################
# Source files
set( SOURCES
  ${SOURCES}
  "src/OpenScenarioTester.cpp"
  "../../../TinyXML2/tinyxml2.cpp"
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
  "src/TestRangeChecker.h"
  "src/MessageLogger.h"
)

################################################################
# Create groups for VS
if( MSVC )
  # Groups for source files
  source_group( Sources FILES ${SOURCES} )

  # Groups for header files
  source_group( Headers FILES ${HEADERS} )

endif()

################################################################
# Generate executable
add_executable( ${PROJECT_NAME} ${SOURCES} ${HEADERS} )

target_link_libraries( ${PROJECT_NAME} OpenScenarioLib )


################################################################
# Visual Studio solution settings
if( MSVC )
  set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Apps )
endif()
