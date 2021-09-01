################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( ExpressionsTester )
message("${PROJECT_NAME}")


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
# Set compile output folder
RAC_SET_FOLDERS()


################################################################
# Antlr
include_directories(${ANTLR4_INCLUDE_DIRS})

antlr_target(OscParamDefLexer ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr/OscParamDefLexer.g4 LEXER
             PACKAGE OscParamDef
             )
antlr_target(OscParamDefParser ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr/OscParamDefParser.g4 PARSER
			       PACKAGE OscParamDef
             DEPENDS_ANTLR OscParamDefLexer
             COMPILE_FLAGS -lib ${ANTLR_OscParamDefLexer_OUTPUT_DIR})


################################################################
# Include folders
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/antlr4cpp_generated_src/OscParamDefLexer )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../expressionsLib/inc )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/thirdParty/nlohmann/inc )
include_directories( ${ANTLR4_INCLUDE_DIRS} )
include_directories( ${ANTLR_OscParamDefLexer_OUTPUT_DIR} )
include_directories( ${ANTLR_OscParamDefParser_OUTPUT_DIR} )


################################################################
# Specify all header and source files
set ( TEST_HEADERS
    ${TEST_HEADERS}
	"inc/TestSpecification.hpp"
	"inc/TestSpecificationReader.hpp"
	"inc/ParamDefReader.h"
	"inc/TestDescription.hpp"
	"inc/TestSpecificationRunner.hpp"
	"thirdParty/nlohmann/inc/json.hpp"
)

set( TEST_SOURCES
    ${TEST_SOURCES}
    "src/test/OpenScenarioExpressionsTest.cpp"
	"src/test/ParamDefReader.cpp"
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
# Add the executable by using cmake's var \${PROJECT_NAME}
add_executable( ${PROJECT_NAME} ${TEST_SOURCES} ${TEST_HEADERS} 
				${ANTLR_OscParamDefLexer_CXX_OUTPUTS}
                ${ANTLR_OscParamDefParser_CXX_OUTPUTS}
				${RESOURCE_FILES})
# The the compiler to export the DiagRA Embedded API 
#target_compile_definitions( ${PROJECT_NAME} PRIVATE EXPORT_RA_COMPONENT_COMMON )
# Add / link the RaComponentCommonLib

if( ${BUILD_SHARED_LIBS} )
	set(ANTLR_STATIC_SHARED  antlr4_shared )
	message("Shared")
else()
	set(ANTLR_STATIC_SHARED  antlr4_static )
	message("Static")
endif()

target_link_libraries( ${PROJECT_NAME} 
			    PUBLIC ExpressionsLib
					   ${ANTLR_STATIC_SHARED}
					   )
				   
# Add local include dir
target_include_directories( ${PROJECT_NAME}
                    PUBLIC  ${CMAKE_CURRENT_SOURCE_DIR}
                            ${CMAKE_CURRENT_SOURCE_DIR}/inc
)

list(APPEND CMAKE_CTEST_ARGUMENTS "--output-on-failure")

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
if( ${BUILD_SHARED_LIBS} )
	target_compile_options(${PROJECT_NAME} PRIVATE "/MD$<$<CONFIG:Debug>:d>")
		
else()
	target_compile_options(${PROJECT_NAME} PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()
endif()


if( MSVC )
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4251 ${osc_extra_static_compile_flags}")
  set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Apps )
    set_target_properties(
    ${PROJECT_NAME} PROPERTIES
    VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/$(Configuration)")
endif()
