################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( OpenScenarioTester )
message( STATUS "\n${PROJECT_NAME}" )


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
#    set( LIB_TYPE "SHARED" )
else()
#    set( LIB_TYPE "STATIC" )
endif()

################################################################
# Set compile output folder
RAC_SET_FOLDERS()
message (STATUS "Building all into: ${CMAKE_BINARY_DIR}")


################################################################
# Include folders
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/helper )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../common)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/TinyXML2 )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/Filesystem)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/UtfCpp )


include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_0/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_0/catalog )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_0/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_0/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_0/checker )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_1/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_1/catalog )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_1/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_1/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_1/expression )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/v1_1/checker )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/export )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/checker/tree )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/expression )
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

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_1/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_1/api/writer )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_1/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_1/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_1/checker/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_1/checker/range )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_1/catalog)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_1/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/v1_1/export/xml )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../expressionsLib/inc)


################################################################
# Header files
set( HEADERS
  "src/TestExamplesV1_0.h"
  "src/TestBaseV1_0.h"
  "src/TestFilesV1_0.h"
  "src/TestReaderV1_0.h"
  "src/TestWriterApiV1_0.h"
  "src/TestImportsV1_0.h"
  "src/TestSimpleDemosV1_0.h"
  "src/TestRangeCheckerV1_0.h"
  "src/TestFlexInterfaceV1_0.h"
  "src/TestVersionCheckerV1_0.h"
  "src/TestInjectedParametersV1_0.h"
  "src/TestDeprecatedV1_1.h"
  "src/TestExamplesV1_1.h"
  "src/TestBaseV1_1.h"
  "src/TestFilesV1_1.h"
  "src/TestReaderV1_1.h"
  "src/TestWriterApiV1_1.h"
  "src/TestImportsV1_1.h"
  "src/TestSimpleDemosV1_1.h"
  "src/TestRangeCheckerV1_1.h"
  "src/TestFlexInterfaceV1_1.h"
  "src/TestVersionCheckerV1_1.h"
  "src/TestInjectedParametersV1_1.h"
  "src/TestAlksV1_1.h"
  "src/TestParameterValidationV1_1.h"
)

set( HEADERS_HELPER
    "src/helper/EgoCheckerRuleV1_0.h"
    "src/helper/EgoCheckerRuleV1_1.h"
)

# Source files
set( SOURCES
	"src/OpenScenarioTester.cpp"
  "../../externalLibs/TinyXML2/tinyxml2.cpp""src/OpenScenarioTester.cpp"
	"src/TestBaseV1_0.cpp"
	"src/TestBaseV1_1.cpp"
	"src/TestExamplesV1_0.cpp"
	"src/TestExamplesV1_1.cpp"
	"src/TestFilesV1_0.cpp"
	"src/TestFilesV1_1.cpp"
	"src/TestFlexInterfaceV1_0.cpp"
	"src/TestFlexInterfaceV1_1.cpp"
	"src/TestImportsV1_0.cpp"
	"src/TestImportsV1_1.cpp"
	"src/TestInjectedParametersV1_0.cpp"
	"src/TestInjectedParametersV1_1.cpp"
	"src/TestRangeCheckerV1_0.cpp"
	"src/TestRangeCheckerV1_1.cpp"
	"src/TestReaderV1_0.cpp"
	"src/TestReaderV1_1.cpp"
	"src/TestSimpleDemosV1_0.cpp"
	"src/TestSimpleDemosV1_1.cpp"
	"src/TestVersionCheckerV1_0.cpp"
	"src/TestVersionCheckerV1_1.cpp"
	"src/TestWriterApiV1_0.cpp"
	"src/TestWriterApiV1_1.cpp"
	"src/TestDeprecatedV1_1.cpp"
	"src/TestAlksV1_1.cpp"
	"src/TestParameterValidationV1_1.cpp"
)

set( SOURCES_HELPER
	"src/helper/EgoCheckerRuleV1_0.cpp"
	"src/helper/EgoCheckerRuleV1_1.cpp"
)

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
    source_group( Sources FILES ${SOURCES})
    source_group( Sources\\Helper FILES ${SOURCES_HELPER})

    # Groups for header files
    source_group( Headers FILES ${HEADERS} )
    source_group( Headers\\Helper FILES ${HEADERS_HELPER} )
    
    # Groups for resource files
    source_group( Resources FILES ${RESOURCE_FILES} )
endif()


################################################################
# Generate executable
add_executable( ${PROJECT_NAME} ${SOURCES} ${SOURCES_HELPER} 
				${RESOURCE_FILES} )

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    if( ${BUILD_SHARED_LIBS} )
        target_compile_options(${PROJECT_NAME} PRIVATE "/MD$<$<CONFIG:Debug>:d>")
    else()
        target_compile_options(${PROJECT_NAME} PRIVATE "/MT$<$<CONFIG:Debug>:d>")
    endif()
endif()

target_link_libraries( ${PROJECT_NAME} OpenScenarioLib )


################################################################
# Copy the resources for testing
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/$(Configuration)/TestResources/${PROJECT_NAME}
		COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/res ${CMAKE_BINARY_DIR}/$(Configuration)/TestResources/${PROJECT_NAME}
		)


################################################################
# Visual Studio solution settings
if( MSVC )
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj /utf-8 /we4828" ) # ${osc_extra_static_compile_flags}")
    set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Apps )
    set_target_properties(
        ${PROJECT_NAME} PROPERTIES
        VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/$(Configuration)")
endif()
