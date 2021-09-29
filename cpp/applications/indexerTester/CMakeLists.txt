################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( IndexerTester )
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
antlr_target( XMLLexer ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/antlr/XMLLexer.g4 LEXER )
antlr_target( XMLParser ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/antlr/XMLParser.g4 PARSER
             LISTENER 
             DEPENDS_ANTLR XMLLexer
             COMPILE_FLAGS -lib ${ANTLR_XMLLexer_OUTPUT_DIR} )




################################################################
# Source files
set( SOURCES
  ${SOURCES}
  "src/IndexerTester.cpp"
  "../../externalLibs/TinyXML2/tinyxml2.cpp"
  "../../openScenarioLib/src/xmlIndexer/AttributeInfo.cpp"
  "../../openScenarioLib/src/xmlIndexer/ElementNode.cpp"
  "../../openScenarioLib/src/xmlIndexer/AttributeNode.cpp"
  "../../openScenarioLib/src/xmlIndexer/Position.cpp"
  "../../openScenarioLib/src/xmlIndexer/PositionNode.cpp"
  "../../openScenarioLib/src/xmlIndexer/PositionIndex.cpp"
)

# Header files
set( HEADERS
#    ${HEADERS}
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

    # Group for resource files
    source_group( Resources FILES ${RESOURCE_FILES} )

    # Group for antlr files
    source_group( Antlr FILES ${ANTLR_XMLLexer_CXX_OUTPUTS} ${ANTLR_XMLParser_CXX_OUTPUTS} )
endif()


################################################################
# Generate executable
add_executable( ${PROJECT_NAME} 
                ${SOURCES} ${HEADERS}
                ${ANTLR_XMLLexer_CXX_OUTPUTS}
                ${ANTLR_XMLParser_CXX_OUTPUTS}
                ${RESOURCE_FILES} )


if( ${BUILD_SHARED_LIBS} )
    set( ANTLR_STATIC_SHARED  antlr4_shared )
    message( STATUS "${PROJECT_NAME}: using Antlr shared" )
else()
    set( ANTLR_STATIC_SHARED  antlr4_static )
    message( STATUS "${PROJECT_NAME}: using Antlr static" )
endif()

# Add libs
target_link_libraries( ${PROJECT_NAME} 
                       ${ANTLR_STATIC_SHARED}
                       )
                   
# Add include dirs
target_include_directories( ${PROJECT_NAME}
                    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src
                            ${CMAKE_CURRENT_SOURCE_DIR}/../../common
                            ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/TinyXML2
                            ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/Filesystem
                            ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/xmlIndexer
                            ${ANTLR4_INCLUDE_DIRS}
                            ${ANTLR_XMLLexer_OUTPUT_DIR}
                            ${ANTLR_XMLParser_OUTPUT_DIR}
                            )


#if( CMAKE_CXX_COMPILER_ID MATCHES "MSVC" )
if( MSVC )
    if( ${BUILD_SHARED_LIBS} )
        target_compile_options( ${PROJECT_NAME} PRIVATE "/MD$<$<CONFIG:Debug>:d>" )        
    else()
        target_compile_options( ${PROJECT_NAME} PRIVATE "/MT$<$<CONFIG:Debug>:d>" )
    endif()
endif()


################################################################
# Copy the resources for testing
add_custom_command( TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/$(Configuration)/TestResources/${PROJECT_NAME}
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/res ${CMAKE_BINARY_DIR}/$(Configuration)/TestResources/${PROJECT_NAME}
        )
        

################################################################
# Visual Studio solution settings
if( MSVC )
    set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4251" ) # ${osc_extra_static_compile_flags}" )
    set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Apps )
    set_target_properties( ${PROJECT_NAME} PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/$(Configuration)" )
endif()
