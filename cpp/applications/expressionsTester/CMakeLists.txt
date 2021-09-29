################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( ExpressionsTester )
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
RAC_GET_PRODUCT_INFO( "${CMAKE_CURRENT_SOURCE_DIR}/productInfo.txt" )
configure_file( "${CMAKE_SOURCE_DIR}/common/rc.template" "${CMAKE_CURRENT_SOURCE_DIR}/rc/${PROJECT_NAME}.rc" )


################################################################
# Set compile output folder
RAC_SET_FOLDERS()
message ( STATUS "Building all into: ${CMAKE_BINARY_DIR}" )


################################################################
# Antlr
#include_directories( ${ANTLR4_INCLUDE_DIRS} )
antlr_target( OscParamDefLexer ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr/OscParamDefLexer.g4 LEXER
    PACKAGE OscParamDef
    )
antlr_target( OscParamDefParser ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr/OscParamDefParser.g4 PARSER
    PACKAGE OscParamDef
    DEPENDS_ANTLR OscParamDefLexer
    COMPILE_FLAGS -lib ${ANTLR_OscParamDefLexer_OUTPUT_DIR}
    )

################################################################
# Specify all header and source files

set ( HEADERS
	"src/test/TestSpecification.h"
	"src/test/TestSpecificationReader.h"
	"src/test/ParamDefReader.h"
	"src/test/TestDescription.h"
	"src/test/TestSpecificationRunner.h"
	"thirdParty/nlohmann/inc/json.hpp"
)

set( SOURCES
    "src/test/OpenScenarioExpressionsTest.cpp"
	"src/test/ParamDefReader.cpp"
	"src/test/TestSpecification.cpp"
	"src/test/TestSpecificationReader.cpp"
	"src/test/TestDescription.cpp"
	"src/test/TestSpecificationRunner.cpp"

)

set( ANTLR_SOURCE_FILES
    "src/antlr/OscParamDefParser.g4"
	   "src/antlr/OscParamDefLexer.g4"

)

set( ANTLR_GENERATED
    ${ANTLR_OscParamDefLexer_CXX_OUTPUTS}
	  ${ANTLR_OscParamDefParser_CXX_OUTPUTS}

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
    # Group for source files
    source_group( Sources FILES ${SOURCES} )
    # Group for header files
    source_group( Headers FILES ${HEADERS} )
    # Group for antlr source files
    source_group( AntlrSources FILES ${ANTLR_SOURCE_FILES})
    # Group for antlr generated files
    source_group( Antlr FILES ${ANTLR_GENERATED})
    # Group for resource files
    source_group( Resources FILES ${RESOURCE_FILES} )
endif()

################################################################
# Add the executable by using cmake's var \${PROJECT_NAME}
add_executable( ${PROJECT_NAME} 
                ${SOURCES} 
				        ${ANTLR_OscParamDefLexer_CXX_OUTPUTS}
                ${ANTLR_OscParamDefParser_CXX_OUTPUTS}
                ${RESOURCE_FILES} )

#if( ${BUILD_SHARED_LIBS} )
#    set( ANTLR_STATIC_SHARED  antlr4_shared )
#    message( STATUS "${PROJECT_NAME}: using Antlr shared" )
#else()
#    set( ANTLR_STATIC_SHARED  antlr4_static )
#    message( STATUS "${PROJECT_NAME}: using Antlr static" )
#endif()

# Add libs
target_link_libraries( ${PROJECT_NAME} 
               PRIVATE ExpressionsLib
                       #antlr4_static #${ANTLR_STATIC_SHARED}
                       )

# Add include dirs
target_include_directories( ${PROJECT_NAME}
                    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/test
                            ${CMAKE_CURRENT_SOURCE_DIR}/../../common
                            ${CMAKE_CURRENT_SOURCE_DIR}/../../expressionsLib/inc
                            ${CMAKE_CURRENT_SOURCE_DIR}/thirdParty/nlohmann/inc
                            ${CMAKE_CURRENT_SOURCE_DIR}/antlr4cpp_generated_src/OscParamDefLexer
                            ${ANTLR4_INCLUDE_DIRS}
                            ${ANTLR_OscParamDefLexer_OUTPUT_DIR}
                            ${ANTLR_OscParamDefParser_OUTPUT_DIR}
                            )

#if( CMAKE_CXX_COMPILER_ID MATCHES "MSVC" )
if( MSVC )
    if( ${BUILD_SHARED_LIBS} )
        target_compile_options( ${PROJECT_NAME} PRIVATE "/MD$<$<CONFIG:Debug>:d>" )        
    else()
        target_compile_options( ${PROJECT_NAME} PRIVATE "/MT$<$<CONFIG:Debug>:d>" )
    endif()
endif()

list( APPEND CMAKE_CTEST_ARGUMENTS "--output-on-failure" )


################################################################
# Visual Studio solution settings
if( MSVC )
    set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4251" ) # ${osc_extra_static_compile_flags}" )
    set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Apps )
    set_target_properties( ${PROJECT_NAME} PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/$(Configuration)" )
endif()
