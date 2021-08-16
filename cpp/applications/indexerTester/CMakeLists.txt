################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( IndexerTester )
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

antlr_target(XMLLexer ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/antlr/XMLLexer.g4 LEXER)
antlr_target(XMLParser ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/antlr/XMLParser.g4 PARSER
			 LISTENER 
             DEPENDS_ANTLR XMLLexer
             COMPILE_FLAGS -lib ${ANTLR_XMLLexer_OUTPUT_DIR})


################################################################
# Include folders
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src/xmlIndexer )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/generated/antlr/xmlParser)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/TinyXML2 )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/Filesystem)
include_directories(${ANTLR4_INCLUDE_DIRS})
include_directories(${ANTLR_XMLLexer_OUTPUT_DIR})
include_directories(${ANTLR_XMLParser_OUTPUT_DIR})


################################################################
# Source files
set( SOURCES
  ${SOURCES}
  "src/IndexerTester.cpp"
)

################################################################
# Header files
set( HEADERS
  ${HEADERS}
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
  # Groups for source files
  source_group( Sources FILES ${SOURCES} )

  # Groups for header files
  source_group( Headers FILES ${HEADERS} )

  # Groups for resource files
  source_group( Resources FILES ${RESOURCE_FILES} )
  
  source_group( Antlr FILES ${ANTLR_XMLLexer_CXX_OUTPUTS} ${ANTLR_XMLParser_CXX_OUTPUTS})
endif()

################################################################
# Generate executable
add_executable( ${PROJECT_NAME} 
			  ${SOURCES} 			  
			  ${ANTLR_XMLLexer_CXX_OUTPUTS}
              ${ANTLR_XMLParser_CXX_OUTPUTS}
			  ${HEADERS} ${RESOURCE_FILES} )
			  
################################################################
# Copy the resources for testing
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/$(Configuration)/TestResources/${PROJECT_NAME}
		COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/res ${CMAKE_BINARY_DIR}/$(Configuration)/TestResources/${PROJECT_NAME}
		)
		

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  if( ${BUILD_SHARED_LIBS} )
      target_compile_options(${PROJECT_NAME} PRIVATE "/MD$<$<CONFIG:Debug>:d>")
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
# Visual Studio solution settings
if( MSVC )
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4251 ${osc_extra_static_compile_flags}")
  set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Apps )
    set_target_properties(
    ${PROJECT_NAME} PROPERTIES
    VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/$(Configuration)")
endif()
