################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( ExpressionsLib )
message( STATUS "\n${PROJECT_NAME}" )


################################################################
# Preprocessor settings
if( WIN32 )
    add_definitions( -D_CRT_SECURE_NO_WARNINGS )
else( WIN32 )
    add_definitions( -Wall -fPIC -Wno-unused-variable )
endif( WIN32 )
# Shared or static lib?
if( ${BUILD_SHARED_LIBS} )
    add_definitions( -DEXPORT_OSC_EXPR )
#    set( LIB_TYPE "SHARED" )
else()
#    set( LIB_TYPE "STATIC" )
endif()


################################################################
# Set compile output folder
RAC_SET_FOLDERS()
message ( STATUS "Building all into: ${CMAKE_BINARY_DIR}" )


################################################################
# Update rc file
RAC_GET_PRODUCT_INFO("${CMAKE_CURRENT_SOURCE_DIR}/productInfo.txt")
configure_file("${CMAKE_SOURCE_DIR}/common/rc.template" "${CMAKE_CURRENT_SOURCE_DIR}/rc/${PROJECT_NAME}.rc")


################################################################
# Antlr
#add_definitions(-DANTLR4CPP_STATIC)
#set(ANTLR4_WITH_STATIC_CRT ON)
antlr_target(OscExprLexer ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr/OscExprLexer.g4 LEXER
             PACKAGE OscExpression)
antlr_target(OscExprParser ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr/OscExprParser.g4 PARSER
             PACKAGE OscExpression
             LISTENER 
             DEPENDS_ANTLR OscExprLexer
             COMPILE_FLAGS -lib ${ANTLR_OscExprLexer_OUTPUT_DIR})


################################################################
# Specify all header and source files

set ( LIB_HEADERS
	"inc/OscExprEvaluatorImpl.h"
	"inc/ParseErrorListener.hpp"
	"inc/OscExprEvaluatorFactory.h"
	"inc/OscExprEvaluator.h"
	"inc/EvaluatorListener.h"
	"inc/ExprType.h"
	"inc/ExprValue.h"
	"inc/SemanticException.h"
	"inc/OscExprExportDefs.h"
)

set( LIB_SOURCES
	"src/OscExprEvaluatorImpl.cpp"
	"src/OscExprEvaluatorFactory.cpp"
	"src/EvaluatorListener.cpp"
	"src/ExprType.cpp"
	"src/ExprValue.cpp"
	"src/SemanticException.cpp"
	
)
set( ANTLR_GENERATED
    ${ANTLR_OscExprLexer_CXX_OUTPUTS}
	  ${ANTLR_OscExprParser_CXX_OUTPUTS}
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
    source_group( Sources FILES ${LIB_SOURCES} )

    # Groups for header files
    source_group( Headers FILES ${LIB_HEADERS} )

    # Groups for resource files
    source_group( Resources FILES ${RESOURCE_FILES} )

    # Group for antlr files
    source_group( Antlr FILES ${ANTLR_OscExprLexer_OUTPUT_DIR} ${ANTLR_OscExprParser_OUTPUT_DIR} )
endif()

################################################################
# add generated grammar to demo binary target
add_library( ${PROJECT_NAME} ${LIB_SOURCES}
             ${ANTLR_OscExprLexer_CXX_OUTPUTS}
             ${ANTLR_OscExprParser_CXX_OUTPUTS}
             ${RESOURCE_FILES})

if( ${BUILD_SHARED_LIBS} )
   set( ANTLR_STATIC_SHARED  antlr4_shared )
   message( STATUS "${PROJECT_NAME}: using Antlr shared" )
else()
   set( ANTLR_STATIC_SHARED  antlr4_static )
   message( STATUS "${PROJECT_NAME}: using Antlr static" )
endif()

# Add libs
target_link_libraries( ${PROJECT_NAME} PRIVATE ${ANTLR_STATIC_SHARED} )

# Add include dirs
target_include_directories( ${PROJECT_NAME}
                    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inc
                            ${ANTLR4_INCLUDE_DIRS}
                            ${ANTLR_OscExprLexer_OUTPUT_DIR}
                            ${ANTLR_OscExprParser_OUTPUT_DIR}
                            )

#if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
if( MSVC )
    if( ${BUILD_SHARED_LIBS} )
        target_compile_options(${PROJECT_NAME} PRIVATE "/MD$<$<CONFIG:Debug>:d>")
        get_target_property(ANTLR_DLL_OUTPUT antlr4_shared IMPORTED_LOCATION)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy ${ANTLR_DLL_OUTPUT} ${CMAKE_BINARY_DIR}/$(Configuration)
        )
    else()
        target_compile_options(${PROJECT_NAME} PRIVATE "/MT$<$<CONFIG:Debug>:d>")
    endif()
endif()


################################################################
# Linux lib versioning
if( UNIX )
    set_target_properties( ${PROJECT_NAME} PROPERTIES VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${PATCHNUMBER} )
    set_target_properties( ${PROJECT_NAME} PROPERTIES SOVERSION ${VERSION_MAJOR} )
endif()
 

 ################################################################
# Visual Studio solution folders
if( MSVC )
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj /wd4251" ) # ${osc_extra_static_compile_flags}")
    set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Core )
endif()