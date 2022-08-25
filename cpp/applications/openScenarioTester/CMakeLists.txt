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
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/../../common/rc.template" "${CMAKE_CURRENT_SOURCE_DIR}/rc/${PROJECT_NAME}.rc")


################################################################
# Preprocessor settings
# Shared or static lib?
if( ${BUILD_SHARED_LIBS} )
    add_definitions( -DEXPORT_OPENSCENARIOLIB )
endif()


################################################################
# Include folders
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/helper )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../common)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/TinyXML2 )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/Filesystem)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/UtfCpp )

################################################################
# Header files
set( HEADERS
	"src/TestVersionOptionsWithReader.h"
)

if (SUPPORT_OSC_1_0)
	set( HEADERS
	  ${HEADERS}
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
	)
endif (SUPPORT_OSC_1_0)

if (SUPPORT_OSC_1_1)
	set( HEADERS
	  ${HEADERS}
	  "src/TestDeprecatedV1_1.h"
	  "src/TestExamplesV1_1.h"
	  "src/TestCardinalityV1_1.h"
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
endif (SUPPORT_OSC_1_1)

if (SUPPORT_OSC_1_2)
	set( HEADERS
	  ${HEADERS}
	  "src/TestDeprecatedV1_2.h"
	  "src/TestExamplesV1_2.h"
	  "src/TestBaseV1_2.h"
	  "src/TestFilesV1_2.h"
	  "src/TestReaderV1_2.h"
	  "src/TestWriterApiV1_2.h"
	  "src/TestImportsV1_2.h"
	  "src/TestSimpleDemosV1_2.h"
	  "src/TestRangeCheckerV1_2.h"
	  "src/TestFlexInterfaceV1_2.h"
	  "src/TestVersionCheckerV1_2.h"
	  "src/TestInjectedParametersV1_2.h"
	  "src/TestAlksV1_2.h"
	  "src/TestParameterValidationV1_2.h"  
	  "src/TestVariableValidationV1_2.h"  
	  "src/TestDeprecatedValidationV1_2.h"
	  "src/TestExamplesOscV1_2.h"
	)
endif (SUPPORT_OSC_1_2)

if (SUPPORT_OSC_1_0)
set( HEADERS_HELPER
    ${HEADERS_HELPER}
	"src/helper/EgoCheckerRuleV1_0.h"
)
endif (SUPPORT_OSC_1_0)

if (SUPPORT_OSC_1_1)
set( HEADERS_HELPER
    ${HEADERS_HELPER}
	"src/helper/EgoCheckerRuleV1_1.h"
)
endif (SUPPORT_OSC_1_1)

if (SUPPORT_OSC_1_2)
set( HEADERS_HELPER
    ${HEADERS_HELPER}
	"src/helper/EgoCheckerRuleV1_2.h"
)
endif (SUPPORT_OSC_1_2)

# Source files
set( SOURCES
    "../../externalLibs/TinyXML2/tinyxml2.cpp"
    "src/OpenScenarioTester.cpp"
	"src/TestVersionOptionsWithReader.cpp"
)

if (SUPPORT_OSC_1_0)
set( SOURCES
    ${SOURCES}
	"src/TestBaseV1_0.cpp"
    "src/TestExamplesV1_0.cpp"
    "src/TestExamplesV1_1.cpp"
    "src/TestCardinalityV1_1.cpp"
    "src/TestFilesV1_0.cpp"
    "src/TestFlexInterfaceV1_0.cpp"
    "src/TestImportsV1_0.cpp"
    "src/TestInjectedParametersV1_0.cpp"
    "src/TestRangeCheckerV1_0.cpp"
    "src/TestReaderV1_0.cpp"
    "src/TestSimpleDemosV1_0.cpp"
    "src/TestVersionCheckerV1_0.cpp"
    "src/TestWriterApiV1_0.cpp"
)
endif (SUPPORT_OSC_1_0)

if (SUPPORT_OSC_1_1)

set( SOURCES
    ${SOURCES}
	"src/TestBaseV1_1.cpp"
    "src/TestExamplesV1_1.cpp"
    "src/TestFilesV1_1.cpp"
    "src/TestFlexInterfaceV1_1.cpp"
    "src/TestImportsV1_1.cpp"
    "src/TestInjectedParametersV1_1.cpp"
    "src/TestRangeCheckerV1_1.cpp"
    "src/TestReaderV1_1.cpp"
    "src/TestSimpleDemosV1_1.cpp"
    "src/TestVersionCheckerV1_1.cpp"
    "src/TestWriterApiV1_1.cpp"
    "src/TestDeprecatedV1_1.cpp"
    "src/TestAlksV1_1.cpp"
	"src/TestParameterValidationV1_1.cpp"
)
endif (SUPPORT_OSC_1_1)

if (SUPPORT_OSC_1_2)
set( SOURCES
    ${SOURCES}
	"src/TestBaseV1_2.cpp"
    "src/TestExamplesV1_2.cpp"
    "src/TestFilesV1_2.cpp"
    "src/TestFlexInterfaceV1_2.cpp"
    "src/TestImportsV1_2.cpp"
    "src/TestInjectedParametersV1_2.cpp"
    "src/TestRangeCheckerV1_2.cpp"
    "src/TestReaderV1_2.cpp"
    "src/TestSimpleDemosV1_2.cpp"
    "src/TestVersionCheckerV1_2.cpp"
    "src/TestWriterApiV1_2.cpp"
    "src/TestDeprecatedV1_2.cpp"
    "src/TestAlksV1_2.cpp"
	"src/TestParameterValidationV1_2.cpp"
	"src/TestVariableValidationV1_2.cpp"
	"src/TestDeprecatedValidationV1_2.cpp"
	"src/TestExamplesOscV1_2.cpp"
)
endif (SUPPORT_OSC_1_2)

if (SUPPORT_OSC_1_0)
set( SOURCES_HELPER
    ${SOURCES_HELPER}
	"src/helper/EgoCheckerRuleV1_0.cpp"
)
endif (SUPPORT_OSC_1_0)

if (SUPPORT_OSC_1_1)
set( SOURCES_HELPER
    ${SOURCES_HELPER}
	"src/helper/EgoCheckerRuleV1_1.cpp"
)
endif (SUPPORT_OSC_1_1)

if (SUPPORT_OSC_1_2)
set( SOURCES_HELPER
    ${SOURCES_HELPER}
	"src/helper/EgoCheckerRuleV1_2.cpp"
)
endif (SUPPORT_OSC_1_2)

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
add_executable( ${PROJECT_NAME}
                ${SOURCES} ${SOURCES_HELPER} 				
                ${RESOURCE_FILES} )

################################################################
# Make sure the OpenSceanrioReader gets build before the Tests				
add_dependencies(${PROJECT_NAME} OpenScenarioReader)

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    if( ${BUILD_SHARED_LIBS} )
        target_compile_options(${PROJECT_NAME} PRIVATE "/MD$<$<CONFIG:Debug>:d>")
    else()
        target_compile_options(${PROJECT_NAME} PRIVATE "/MT$<$<CONFIG:Debug>:d>")
    endif()
endif()

target_link_libraries( ${PROJECT_NAME} OpenScenarioLib )

POST_BUILD_COPY_DEPENDENT_LIB(OpenScenarioLib ${PROJECT_NAME})
POST_BUILD_COPY_DEPENDENT_LIB(ExpressionsLib ${PROJECT_NAME})
POST_BUILD_ADD_COPY_TEST_RESOURCES(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/res)
POST_BUILD_COPY_ANTLR_RUNTIME_FILES(${PROJECT_NAME})

add_custom_command(TARGET ${PROJECT_NAME}
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND}
                           -E copy 
						   "$<TARGET_FILE:OpenScenarioReader>"
						   "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
################################################################
# Visual Studio solution settings
if( MSVC )
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj /utf-8 /we4828" ) # ${osc_extra_static_compile_flags}")
    set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Apps )
	set_target_properties( ${PROJECT_NAME} PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "$<TARGET_FILE_DIR:${PROJECT_NAME}>" )
endif()
