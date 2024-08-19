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
endif()

################################################################
# Update linker settings
set(CMAKE_BUILD_RPATH "\$ORIGIN")

################################################################
# Update rc file
RAC_GET_PRODUCT_INFO("${CMAKE_CURRENT_SOURCE_DIR}/productInfo.txt")
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/../common/rc.template" "${CMAKE_CURRENT_SOURCE_DIR}/rc/${PROJECT_NAME}.rc")


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


set ( INC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/inc")
set ( SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
################################################################
# Specify all header and source files
set ( LIB_HEADERS
    "${INC_DIR}/OscExprEvaluatorImpl.h"
    "${INC_DIR}/ParseErrorListener.hpp"
    "${INC_DIR}/OscExprEvaluatorFactory.h"
    "${INC_DIR}/OscExprEvaluator.h"
    "${INC_DIR}/EvaluatorListener.h"
    "${INC_DIR}/ExprType.h"
    "${INC_DIR}/ExprValue.h"
    "${INC_DIR}/SemanticException.h"
    "${INC_DIR}/OscExprExportDefs.h"
)

set( LIB_SOURCES
    "${SRC_DIR}/OscExprEvaluatorImpl.cpp"
    "${SRC_DIR}/OscExprEvaluatorFactory.cpp"
    "${SRC_DIR}/EvaluatorListener.cpp"
    "${SRC_DIR}/ExprType.cpp"
    "${SRC_DIR}/ExprValue.cpp"
    "${SRC_DIR}/SemanticException.cpp"
    
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
target_link_libraries( ${PROJECT_NAME} PUBLIC ${ANTLR_STATIC_SHARED} )

# Add include dirs
target_include_directories( ${PROJECT_NAME}
							PUBLIC
							${ANTLR4_INCLUDE_DIRS}
							PRIVATE 
							${INC_DIR}
                            ${ANTLR_OscExprLexer_OUTPUT_DIR}
                            ${ANTLR_OscExprParser_OUTPUT_DIR}
							INTERFACE
							${INC_DIR}
                            )

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
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj /wd4251" )
    set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Core )
endif()