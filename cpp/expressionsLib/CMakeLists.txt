################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( ExpressionsLib )
message("${PROJECT_NAME}")

################################################################
# Set compile output folder
RAC_SET_FOLDERS()


################################################################
# Preprocessor settings
if( WIN32 )
  add_definitions( -D_CRT_SECURE_NO_WARNINGS )
else( WIN32 )
  add_definitions( -Wall -fPIC -Wno-unused-variable )
endif( WIN32 )

################################################################
# Preprocessor settings
# Shared or static lib?
if( ${BUILD_SHARED_LIBS} )
  add_definitions( -DEXPORT_OSC_EXPR )
  set( LIB_TYPE "SHARED" )
else()
  set( LIB_TYPE "STATIC" )
endif()

################################################################
# Update rc file
RAC_GET_PRODUCT_INFO("${CMAKE_CURRENT_SOURCE_DIR}/productInfo.txt")
configure_file("${CMAKE_SOURCE_DIR}/common/rc.template" "${CMAKE_CURRENT_SOURCE_DIR}/rc/${PROJECT_NAME}.rc")


include_directories(${ANTLR4_INCLUDE_DIRS})

antlr_target(OscExprLexer ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr/OscExprLexer.g4 LEXER
             PACKAGE OscExpression)
antlr_target(OscExprParser ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr/OscExprParser.g4 PARSER
			 PACKAGE OscExpression
			 LISTENER 
             DEPENDS_ANTLR OscExprLexer
             COMPILE_FLAGS -lib ${ANTLR_OscExprLexer_OUTPUT_DIR})

# include generated files in project environment
include_directories(${ANTLR_OscExprLexer_OUTPUT_DIR})
include_directories(${ANTLR_OscExprParser_OUTPUT_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

set ( HEADERS
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

set( SOURCES
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

if( MSVC )
  # Groups for source files
  source_group( Sources FILES ${SOURCES})
  # Groups for antlr source files

  # Groups for antlr generated files
  source_group( Antlr FILES ${ANTLR_GENERATED})
  
  # Groups for header files
  source_group( Headers FILES ${HEADERS} )
    
  # Groups for resource files
  source_group( Resources FILES ${RESOURCE_FILES} )
endif()

# add generated grammar to demo binary target
add_library( ${PROJECT_NAME} ${SOURCES} ${HEADERS} 
             ${ANTLR_OscExprLexer_CXX_OUTPUTS}
             ${ANTLR_OscExprParser_CXX_OUTPUTS}
			 ${RESOURCE_FILES})




if( ${BUILD_SHARED_LIBS} )
  add_definitions( -DEXPORT_OSC_EXPR)
  set( LIB_TYPE "SHARED" )
else()
  set( LIB_TYPE "STATIC" )
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
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

if( ${BUILD_SHARED_LIBS} )
  target_link_libraries( ${PROJECT_NAME} antlr4_shared )
else()
  target_link_libraries( ${PROJECT_NAME} antlr4_static )
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
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj /wd4251 ${osc_extra_static_compile_flags}")
  set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Core )
endif()