################################################################
cmake_minimum_required( VERSION 3.7.1 )
project( OpenScenario )
message("${PROJECT_NAME}")


################################################################
# Preprocessor settings
if( WIN32 )
  add_definitions( -D_CRT_SECURE_NO_WARNINGS )
else( WIN32 )
  add_definitions( -Wall -fPIC -Wno-unused-variable )
endif( WIN32 )


################################################################
# Include folders
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/catalog )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/main )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/simple )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/checker/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/checker/range )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/catalog)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/impl )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/loader )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/main )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/parameter )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/parser )
#include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/simple )

if ( WIN32 )
  include_directories (../pthreads4w)
endif ( WIN32 )


################################################################
# Source files
set( SOURCES
  ${SOURCES}
  "src/OpenScenario.cpp"  
)

set( SOURCES_GENERATED_API
  ${SOURCES_GENERATED_API}
  "generated/api/Enumerations.cpp"
)

set( SOURCES_GENERATED_CHECKER_IMPL
  ${SOURCES_GENERATED_CHECKER_IMPL}
  "generated/checker/impl/ScenarioCheckerImpl.cpp"
)

set( SOURCES_GENERATED_CHECKER_RANGE
  ${SOURCES_GENERATED_CHECKER_RANGE}
  "generated/checker/range/RangeCheckerRules.cpp"
)

set( SOURCES_GENERATED_IMPL
  ${SOURCES_GENERATED_IMPL}
  "generated/impl/ApiClassImpl.cpp"
)

################################################################
# Header files
set( HEADERS
  ${HEADERS}
)

set( HEADERS_API
  ${HEADERS_API}
  "src/api/IOpenScenarioModelElement.h"
)

set( HEADERS_COMMON
  ${HEADERS_COMMON}
  "src/common/INamedReference.h"
  "src/common/IParserMessageLogger.h"
  "src/common/Textmarker.h"
  "src/common/ILocator.h"
  "src/common/ErrorLevel.h"
  "src/common/FileContentMessage.h"
  "src/common/DateTime.h"
)

set( HEADERS_CHECKER
  ${HEADERS_CHECKER}
  "src/checker/ICheckerRule.h"
  "src/checker/RangeCheckerRule.h"
)

set( HEADERS_IMPL
  ${HEADERS_IMPL}
  "src/impl/NamedReferenceProxy.h"
  "src/impl/BaseImpl.h"
)

set( HEADERS_PARAMETER
  ${HEADERS_PARAMETER}
  "src/parameter/ParameterValue.h"
  "src/parameter/IParameterizedObject.h"
)

set( HEADERS_PARSER
  ${HEADERS_PARSER}
  "src/parser/ParserHelper.h"
)

set( HEADERS_GENERATED_API
  ${HEADERS_GENERATED_API}
  "generated/api/Enumerations.h"
  "generated/api/ApiClassInterfaces.h"
  "generated/api/OscInterfaces.h"
)

set( HEADERS_GENERATED_COMMON
  ${HEADERS_GENERATED_COMMON}
  "generated/common/OscConstants.h"
)

set( HEADERS_GENERATED_CHECKER
  ${HEADERS_GENERATED_CHECKER}
  "generated/checker/IScenarioChecker.h"
)

set( HEADERS_GENERATED_CHECKER_IMPL
  ${HEADERS_GENERATED_CHECKER_IMPL}
  "generated/checker/impl/ScenarioCheckerImpl.h"
)

set( HEADERS_GENERATED_CHECKER_RANGE
  ${HEADERS_GENERATED_CHECKER_RANGE}
  "generated/checker/range/RangeCheckerRules.h"
  "generated/checker/range/RangeCheckerHelper.h"
)

set( HEADERS_GENERATED_CATALOG
  ${HEADERS_GENERATED_CATALOG}
  "generated/catalog/CatalogHelper.h"
)

set( HEADERS_GENERATED_IMPL
  ${HEADERS_GENERATED_IMPL}
  "generated/impl/ApiClassImpl.h"
)

################################################################
# Create groups for VS
if( MSVC )
  # Groups for source files
  source_group( Sources FILES ${SOURCES} )
  source_group( Sources\\Generated\\Api FILES ${SOURCES_GENERATED_API} )
  source_group( Sources\\Generated\\Checker\\Impl FILES ${SOURCES_GENERATED_CHECKER_IMPL} )
  source_group( Sources\\Generated\\Checker\\Range FILES ${SOURCES_GENERATED_CHECKER_RANGE} )
  source_group( Sources\\Generated\\Impl FILES ${SOURCES_GENERATED_IMPL} )

  # Groups for header files
  source_group( Headers FILES ${HEADERS} )
  source_group( Headers\\Api FILES ${HEADERS_API} )
  source_group( Headers\\Common FILES ${HEADERS_COMMON})
  source_group( Headers\\Checker FILES ${HEADERS_CHECKER})
  source_group( Headers\\Impl FILES ${HEADERS_IMPL})
  source_group( Headers\\Parameter FILES ${HEADERS_PARAMETER})
  source_group( Headers\\Parser FILES ${HEADERS_PARSER})
  source_group( Headers\\Generated\\Api FILES ${HEADERS_GENERATED_API} )
  source_group( Headers\\Generated\\Common FILES ${HEADERS_GENERATED_COMMON} )
  source_group( Headers\\Generated\\Checker FILES ${HEADERS_GENERATED_CHECKER} )
  source_group( Headers\\Generated\\Checker\\Impl FILES ${HEADERS_GENERATED_CHECKER_IMPL} )
  source_group( Headers\\Generated\\Checker\\Range FILES ${HEADERS_GENERATED_CHECKER_RANGE} )
  source_group( Headers\\Generated\\Catalog FILES ${HEADERS_GENERATED_CATALOG} )
  source_group( Headers\\Generated\\Impl FILES ${HEADERS_GENERATED_IMPL} )
endif()


################################################################
# Generate executable
add_executable( ${PROJECT_NAME} ${SOURCES} ${SOURCES_GENERATED_API} ${SOURCES_GENERATED_CHECKER_IMPL} ${SOURCES_GENERATED_CHECKER_RANGE} ${SOURCES_GENERATED_IMPL} ${HEADERS} ${HEADERS_API} ${HEADERS_COMMON}
                ${HEADERS_CHECKER} ${HEADERS_IMPL} ${HEADERS_PARAMETER} ${HEADERS_PARSER}
                ${HEADERS_GENERATED_API} ${HEADERS_GENERATED_COMMON} ${HEADERS_GENERATED_CHECKER} ${HEADERS_GENERATED_CHECKER_IMPL} ${HEADERS_GENERATED_CHECKER_RANGE} ${HEADERS_GENERATED_CATALOG} ${HEADERS_GENERATED_IMPL})

# ${CMAKE_THREAD_LIBS_INIT}
target_link_libraries( ${PROJECT_NAME} )


################################################################
# Visual Studio solution folders
if( MSVC )
  set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Core )
endif()

################################################################
# Linux lib versioning
#if( UNIX )
#  set_target_properties( ${PROJECT_NAME} PROPERTIES VERSION ${MAJORVERSION_YEAR}.${MINORVERSION_MONTH}.${BUILDNUMBER_REVISION} )
#  set_target_properties( ${PROJECT_NAME} PROPERTIES SOVERSION ${MAJORVERSION_YEAR} )
#endif()

message("")
