################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( OpenScenarioLib )
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
    add_definitions( -DEXPORT_OPENSCENARIOLIB )
endif()


################################################################
# Update rc file
RAC_GET_PRODUCT_INFO("${CMAKE_CURRENT_SOURCE_DIR}/productInfo.txt")
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/../common/rc.template" "${CMAKE_CURRENT_SOURCE_DIR}/rc/${PROJECT_NAME}.rc")


################################################################
# Antlr
antlr_target(XMLLexer ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr/XMLLexer.g4 LEXER)
antlr_target(XMLParser ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr/XMLParser.g4 PARSER
             LISTENER 
             DEPENDS_ANTLR XMLLexer
             COMPILE_FLAGS -lib ${ANTLR_XMLLexer_OUTPUT_DIR})



################################################################
# Code files
################################
# Source files
include( "sources.cmake" )

################################
# Header files
include( "headers.cmake" )

################################
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

    source_group( Sources\\Common\\Api FILES ${SOURCES_API})
    source_group( Sources\\Common\\Checker FILES ${SOURCES_CHECKER})
    source_group( Sources\\Common\\Checker\\Model FILES ${SOURCES_CHECKER_MODEL})
    source_group( Sources\\Common\\Checker\\Tree FILES ${SOURCES_CHECKER_TREE})
    source_group( Sources\\Common\\Common FILES ${SOURCES_COMMON})
    source_group( Sources\\Common\\Export FILES ${SOURCES_EXPORT})
    source_group( Sources\\Common\\Impl FILES ${SOURCES_IMPL})
    source_group( Sources\\Common\\Loader FILES ${SOURCES_LOADER})
    source_group( Sources\\Common\\Parameter FILES ${SOURCES_PARAMETER})
    source_group( Sources\\Common\\Parser FILES ${SOURCES_PARSER})
    source_group( Sources\\Common\\Parser\\ModelGroup FILES ${SOURCES_PARSER_MODEL_GROUP})
    source_group( Sources\\Common\\Parser\\Type FILES ${SOURCES_PARSER_TYPE})
    source_group( Sources\\Common\\Simple\\Struct FILES ${SOURCES_SIMPLE_STRUCT})
    source_group( Sources\\Common\\XmlIndexer FILES ${SOURCES_XMLINDEXER})

if (SUPPORT_OSC_1_0)
    source_group( Sources\\V1_0\\Catalog FILES ${SOURCES_V1_0_CATALOG})
    source_group( Sources\\V1_0\\Checker FILES ${SOURCES_V1_0_CHECKER})
    source_group( Sources\\V1_0\\Loader FILES ${SOURCES_V1_0_LOADER})
    source_group( Sources\\V1_0\\Parameter FILES ${SOURCES_V1_0_PARAMETER})
    source_group( Sources\\V1_0\\Parser FILES ${SOURCES_V1_0_PARSER})
 
	source_group( Sources\\v1_0\\Generated\\Api FILES ${SOURCES_GENERATED_1_0_API} )
    source_group( Sources\\v1_0\\Generated\\Checker\\Impl FILES ${SOURCES_GENERATED_1_0_CHECKER_IMPL} )
    source_group( Sources\\v1_0\\Generated\\Checker\\Range FILES ${SOURCES_GENERATED_1_0_CHECKER_RANGE} )
    source_group( Sources\\v1_0\\Generated\\Catalog FILES ${SOURCES_GENERATED_1_0_CATALOG} )
    source_group( Sources\\v1_0\\Generated\\Checker\\Model FILES ${SOURCES_GENERATED_1_0_CHECKER_MODEL} )
    source_group( Sources\\v1_0\\Generated\\Impl FILES ${SOURCES_GENERATED_1_0_IMPL} )
    source_group( Sources\\v1_0\\Generated\\XmlParser FILES ${SOURCES_GENERATED_1_0_XMLPARSER} )
    source_group( Sources\\v1_0\\Generated\\XmlExporter FILES ${SOURCES_GENERATED_1_0_XMLEXPORTER} )
	
	source_group( Headers\\v1_0\\Catalog FILES ${HEADERS_CATALOG_1_0})
    source_group( Headers\\v1_0\\Loaders FILES ${HEADERS_LOADER_1_0})
    source_group( Headers\\v1_0\\Parameter FILES ${HEADERS_PARAMETER_1_0})
    source_group( Headers\\v1_0\\Parser FILES ${HEADERS_PARSER_1_0})
    source_group( Headers\\v1_0\\Checker FILES ${HEADERS_CHECKER_1_0})
	
	source_group( Headers\\v1_0\\Generated\\Api FILES ${HEADERS_GENERATED_1_0_API} )
    source_group( Headers\\v1_0\\Generated\\Api\\Writer FILES ${HEADERS_GENERATED_1_0_API_WRITER} )
    source_group( Headers\\v1_0\\Generated\\Common FILES ${HEADERS_GENERATED_1_0_COMMON} )
    source_group( Headers\\v1_0\\Generated\\Checker FILES ${HEADERS_GENERATED_1_0_CHECKER} )
    source_group( Headers\\v1_0\\Generated\\Checker\\Model FILES ${HEADERS_GENERATED_1_0_CHECKER_MODEL} )
    source_group( Headers\\v1_0\\Generated\\Checker\\Impl FILES ${HEADERS_GENERATED_1_0_CHECKER_IMPL} )
    source_group( Headers\\v1_0\\Generated\\Checker\\Range FILES ${HEADERS_GENERATED_1_0_CHECKER_RANGE} )
    source_group( Headers\\v1_0\\Generated\\Catalog FILES ${HEADERS_GENERATED_1_0_CATALOG} )
    source_group( Headers\\v1_0\\Generated\\Impl FILES ${HEADERS_GENERATED_1_0_IMPL} )
    source_group( Headers\\v1_0\\Generated\\XmlParser FILES ${HEADERS_GENERATED_1_0_XMLPARSER} )
    source_group( Headers\\v1_0\\Generated\\Export\\Xml FILES ${HEADERS_GENERATED_1_0_XMLEXPORTER} )
endif (SUPPORT_OSC_1_0)

if (SUPPORT_OSC_1_1)
    source_group( Sources\\V1_1\\Catalog FILES ${SOURCES_V1_1_CATALOG})
    source_group( Sources\\V1_1\\Checker FILES ${SOURCES_V1_1_CHECKER})
    source_group( Sources\\V1_1\\Loader FILES ${SOURCES_V1_1_LOADER})
    source_group( Sources\\V1_1\\Expression FILES ${SOURCES_V1_1_EXPRESSION})
    source_group( Sources\\V1_1\\Parser FILES ${SOURCES_V1_1_PARSER})

    source_group( Sources\\v1_1\\Generated\\Api FILES ${SOURCES_GENERATED_1_1_API} )
    source_group( Sources\\v1_1\\Generated\\Checker\\Impl FILES ${SOURCES_GENERATED_1_1_CHECKER_IMPL} )
    source_group( Sources\\v1_1\\Generated\\Checker\\Range FILES ${SOURCES_GENERATED_1_1_CHECKER_RANGE} )
    source_group( Sources\\v1_1\\Generated\\Catalog FILES ${SOURCES_GENERATED_1_1_CATALOG} )
    source_group( Sources\\v1_1\\Generated\\Checker\\Model FILES ${SOURCES_GENERATED_1_1_CHECKER_MODEL} )
    source_group( Sources\\v1_1\\Generated\\Impl FILES ${SOURCES_GENERATED_1_1_IMPL} )
    source_group( Sources\\v1_1\\Generated\\XmlParser FILES ${SOURCES_GENERATED_1_1_XMLPARSER} )
    source_group( Sources\\v1_1\\Generated\\XmlExporter FILES ${SOURCES_GENERATED_1_1_XMLEXPORTER} )
	
	source_group( Headers\\v1_1\\Catalog FILES ${HEADERS_CATALOG_1_1})
    source_group( Headers\\v1_1\\Loaders FILES ${HEADERS_LOADER_1_1})
    source_group( Headers\\v1_1\\Expression FILES ${HEADERS_EXPRESSION_1_1})
    source_group( Headers\\v1_1\\Parser FILES ${HEADERS_PARSER_1_1})
    source_group( Headers\\v1_1\\Checker FILES ${HEADERS_CHECKER_1_1})
  
    source_group( Headers\\v1_1\\Generated\\Api FILES ${HEADERS_GENERATED_1_1_API} )
    source_group( Headers\\v1_1\\Generated\\Api\\Writer FILES ${HEADERS_GENERATED_1_1_API_WRITER} )
    source_group( Headers\\v1_1\\Generated\\Common FILES ${HEADERS_GENERATED_1_1_COMMON} )
    source_group( Headers\\v1_1\\Generated\\Checker FILES ${HEADERS_GENERATED_1_1_CHECKER} )
    source_group( Headers\\v1_1\\Generated\\Checker\\Model FILES ${HEADERS_GENERATED_1_1_CHECKER_MODEL} )
    source_group( Headers\\v1_1\\Generated\\Checker\\Impl FILES ${HEADERS_GENERATED_1_1_CHECKER_IMPL} )
    source_group( Headers\\v1_1\\Generated\\Checker\\Range FILES ${HEADERS_GENERATED_1_1_CHECKER_RANGE} )
    source_group( Headers\\v1_1\\Generated\\Catalog FILES ${HEADERS_GENERATED_1_1_CATALOG} )
    source_group( Headers\\v1_1\\Generated\\Impl FILES ${HEADERS_GENERATED_1_1_IMPL} )
    source_group( Headers\\v1_1\\Generated\\XmlParser FILES ${HEADERS_GENERATED_1_1_XMLPARSER} )
    source_group( Headers\\v1_1\\Generated\\Export\\Xml FILES ${HEADERS_GENERATED_1_1_XMLEXPORTER} )


endif (SUPPORT_OSC_1_1)
	
if (SUPPORT_OSC_1_2)
    source_group( Sources\\V1_2\\Catalog FILES ${SOURCES_V1_2_CATALOG})
    source_group( Sources\\V1_2\\Checker FILES ${SOURCES_V1_2_CHECKER})
    source_group( Sources\\V1_2\\Loader FILES ${SOURCES_V1_2_LOADER})
    source_group( Sources\\V1_2\\Expression FILES ${SOURCES_V1_2_EXPRESSION})
    source_group( Sources\\V1_2\\Parameter FILES ${SOURCES_V1_2_PARAMETER})
    source_group( Sources\\V1_2\\Parser FILES ${SOURCES_V1_2_PARSER})

	source_group( Sources\\v1_2\\Generated\\Api FILES ${SOURCES_GENERATED_1_2_API} )
    source_group( Sources\\v1_2\\Generated\\Checker\\Impl FILES ${SOURCES_GENERATED_1_2_CHECKER_IMPL} )
    source_group( Sources\\v1_2\\Generated\\Checker\\Range FILES ${SOURCES_GENERATED_1_2_CHECKER_RANGE} )
    source_group( Sources\\v1_2\\Generated\\Catalog FILES ${SOURCES_GENERATED_1_2_CATALOG} )
    source_group( Sources\\v1_2\\Generated\\Checker\\Model FILES ${SOURCES_GENERATED_1_2_CHECKER_MODEL} )
    source_group( Sources\\v1_2\\Generated\\Impl FILES ${SOURCES_GENERATED_1_2_IMPL} )
    source_group( Sources\\v1_2\\Generated\\XmlParser FILES ${SOURCES_GENERATED_1_2_XMLPARSER} )
    source_group( Sources\\v1_2\\Generated\\XmlExporter FILES ${SOURCES_GENERATED_1_2_XMLEXPORTER} )
	
	source_group( Headers\\v1_2\\Catalog FILES ${HEADERS_CATALOG_1_2})
    source_group( Headers\\v1_2\\Loaders FILES ${HEADERS_LOADER_1_2})
    source_group( Headers\\v1_2\\Expression FILES ${HEADERS_EXPRESSION_1_2})
    source_group( Headers\\v1_2\\Parser FILES ${HEADERS_PARSER_1_2})
    source_group( Headers\\v1_2\\Checker FILES ${HEADERS_CHECKER_1_2})
	
	source_group( Headers\\v1_2\\Generated\\Api FILES ${HEADERS_GENERATED_1_2_API} )
    source_group( Headers\\v1_2\\Generated\\Api\\Writer FILES ${HEADERS_GENERATED_1_2_API_WRITER} )
    source_group( Headers\\v1_2\\Generated\\Common FILES ${HEADERS_GENERATED_1_2_COMMON} )
    source_group( Headers\\v1_2\\Generated\\Checker FILES ${HEADERS_GENERATED_1_2_CHECKER} )
    source_group( Headers\\v1_2\\Generated\\Checker\\Model FILES ${HEADERS_GENERATED_1_2_CHECKER_MODEL} )
    source_group( Headers\\v1_2\\Generated\\Checker\\Impl FILES ${HEADERS_GENERATED_1_2_CHECKER_IMPL} )
    source_group( Headers\\v1_2\\Generated\\Checker\\Range FILES ${HEADERS_GENERATED_1_2_CHECKER_RANGE} )
    source_group( Headers\\v1_2\\Generated\\Catalog FILES ${HEADERS_GENERATED_1_2_CATALOG} )
    source_group( Headers\\v1_2\\Generated\\Impl FILES ${HEADERS_GENERATED_1_2_IMPL} )
    source_group( Headers\\v1_2\\Generated\\XmlParser FILES ${HEADERS_GENERATED_1_2_XMLPARSER} )
    source_group( Headers\\v1_2\\Generated\\Export\\Xml FILES ${HEADERS_GENERATED_1_2_XMLEXPORTER} )
endif (SUPPORT_OSC_1_2)

if (SUPPORT_OSC_1_3)
    source_group( Sources\\V1_3\\Catalog FILES ${SOURCES_V1_3_CATALOG})
    source_group( Sources\\V1_3\\Checker FILES ${SOURCES_V1_3_CHECKER})
    source_group( Sources\\V1_3\\Loader FILES ${SOURCES_V1_3_LOADER})
    source_group( Sources\\V1_3\\Expression FILES ${SOURCES_V1_3_EXPRESSION})
    source_group( Sources\\V1_3\\Parameter FILES ${SOURCES_V1_3_PARAMETER})
    source_group( Sources\\V1_3\\Parser FILES ${SOURCES_V1_3_PARSER})

	source_group( Sources\\v1_3\\Generated\\Api FILES ${SOURCES_GENERATED_1_3_API} )
    source_group( Sources\\v1_3\\Generated\\Checker\\Impl FILES ${SOURCES_GENERATED_1_3_CHECKER_IMPL} )
    source_group( Sources\\v1_3\\Generated\\Checker\\Range FILES ${SOURCES_GENERATED_1_3_CHECKER_RANGE} )
    source_group( Sources\\v1_3\\Generated\\Catalog FILES ${SOURCES_GENERATED_1_3_CATALOG} )
    source_group( Sources\\v1_3\\Generated\\Checker\\Model FILES ${SOURCES_GENERATED_1_3_CHECKER_MODEL} )
    source_group( Sources\\v1_3\\Generated\\Impl FILES ${SOURCES_GENERATED_1_3_IMPL} )
    source_group( Sources\\v1_3\\Generated\\XmlParser FILES ${SOURCES_GENERATED_1_3_XMLPARSER} )
    source_group( Sources\\v1_3\\Generated\\XmlExporter FILES ${SOURCES_GENERATED_1_3_XMLEXPORTER} )
	
	source_group( Headers\\v1_3\\Catalog FILES ${HEADERS_CATALOG_1_3})
    source_group( Headers\\v1_3\\Loaders FILES ${HEADERS_LOADER_1_3})
    source_group( Headers\\v1_3\\Expression FILES ${HEADERS_EXPRESSION_1_3})
    source_group( Headers\\v1_3\\Parser FILES ${HEADERS_PARSER_1_3})
    source_group( Headers\\v1_3\\Checker FILES ${HEADERS_CHECKER_1_3})
	
	source_group( Headers\\v1_3\\Generated\\Api FILES ${HEADERS_GENERATED_1_3_API} )
    source_group( Headers\\v1_3\\Generated\\Api\\Writer FILES ${HEADERS_GENERATED_1_3_API_WRITER} )
    source_group( Headers\\v1_3\\Generated\\Common FILES ${HEADERS_GENERATED_1_3_COMMON} )
    source_group( Headers\\v1_3\\Generated\\Checker FILES ${HEADERS_GENERATED_1_3_CHECKER} )
    source_group( Headers\\v1_3\\Generated\\Checker\\Model FILES ${HEADERS_GENERATED_1_3_CHECKER_MODEL} )
    source_group( Headers\\v1_3\\Generated\\Checker\\Impl FILES ${HEADERS_GENERATED_1_3_CHECKER_IMPL} )
    source_group( Headers\\v1_3\\Generated\\Checker\\Range FILES ${HEADERS_GENERATED_1_3_CHECKER_RANGE} )
    source_group( Headers\\v1_3\\Generated\\Catalog FILES ${HEADERS_GENERATED_1_3_CATALOG} )
    source_group( Headers\\v1_3\\Generated\\Impl FILES ${HEADERS_GENERATED_1_3_IMPL} )
    source_group( Headers\\v1_3\\Generated\\XmlParser FILES ${HEADERS_GENERATED_1_3_XMLPARSER} )
    source_group( Headers\\v1_3\\Generated\\Export\\Xml FILES ${HEADERS_GENERATED_1_3_XMLEXPORTER} )
endif (SUPPORT_OSC_1_3)
   
    # Groups for header files
    source_group( Headers FILES ${HEADERS} )

    source_group( Headers\\ExpressionsLib FILES ${HEADERS_EXPRESSIONS_LIB} )
    source_group( Headers\\Common\\Api FILES ${HEADERS_COMMON_API} )
    source_group( Headers\\Common\\Checker FILES ${HEADERS_COMMON_CHECKER})
    source_group( Headers\\Common\\Checker\\Model FILES ${HEADERS_COMMON_CHECKER_MODEL})
    source_group( Headers\\Common\\Checker\\Tree FILES ${HEADERS_COMMON_CHECKER_TREE})
    source_group( Headers\\Common\\Common FILES ${HEADERS_COMMON_COMMON})
    source_group( Headers\\Common\\Export FILES ${HEADERS_COMMON_EXPORT})
    source_group( Headers\\Common\\Expression FILES ${HEADERS_COMMON_EXPRESSION})
    source_group( Headers\\Common\\Impl FILES ${HEADERS_COMMON_IMPL})
    source_group( Headers\\Common\\Loaders FILES ${HEADERS_COMMON_LOADER})
    source_group( Headers\\Common\\Parameter FILES ${HEADERS_COMMON_PARAMETER})
    source_group( Headers\\Common\\Parser FILES ${HEADERS_COMMON_PARSER})
    source_group( Headers\\Common\\Parser\\ModelGroup FILES ${HEADERS_COMMON_PARSER_MODEL_GROUP})
    source_group( Headers\\Common\\Parser\\Type FILES ${HEADERS_COMMON_PARSER_TYPE})
    source_group( Headers\\Common\\Simple\\Struct FILES ${HEADERS_COMMON_SIMPLE_STRUCT})
    source_group( Headers\\Common\\XmlIndexer FILES ${HEADERS_COMMON_XMLINDEXER})



    


    source_group( Antlr FILES ${ANTLR_XMLLexer_CXX_OUTPUTS} ${ANTLR_XMLParser_CXX_OUTPUTS})

    # Groups for resources files
    source_group( Resources FILES ${RESOURCE_FILES} )
endif()


################################################################
# Generate the library
add_library(  ${PROJECT_NAME} # ${LIB_TYPE}
              ${ALL_SOURCES}
              ${ALL_HEADERS}
              ${ANTLR_XMLLexer_CXX_OUTPUTS}
              ${ANTLR_XMLParser_CXX_OUTPUTS}
              ${RESOURCE_FILES} 
              )

if( MSVC )
    if( ${BUILD_SHARED_LIBS} )
        target_compile_options(${PROJECT_NAME} PRIVATE "/MD$<$<CONFIG:Debug>:d>") # TODO: add Release etc.
        get_target_property(ANTLR_DLL_OUTPUT antlr4_shared IMPORTED_LOCATION)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
            ${ANTLR_DLL_OUTPUT} ${CMAKE_BINARY_DIR}/$(Configuration))
    else()
        target_compile_options(${PROJECT_NAME} PRIVATE "/MT$<$<CONFIG:Debug>:d>")
    endif()
endif()

if (SUPPORT_OSC_1_0)
target_include_directories( ${PROJECT_NAME}
	PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/catalog"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/checker"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/loader"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/parameter"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/parser"
	#generated
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/api"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/api/writer"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/common"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/checker"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/checker/model"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/checker/impl"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/checker/range"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/catalog"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/impl"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/xmlParser"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/export/xml" 
)
endif (SUPPORT_OSC_1_0)

if (SUPPORT_OSC_1_1)
target_include_directories( ${PROJECT_NAME}
	PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_1/catalog"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_1/checker"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_1/loader"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_1/parameter"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_1/expression"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_1/parser"

	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/api"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/api/writer"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/common"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/checker"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/checker/model"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/checker/impl"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/checker/range"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/catalog"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/impl"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/xmlParser"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/export/xml" 
)
endif (SUPPORT_OSC_1_1)


if (SUPPORT_OSC_1_2)
target_include_directories( ${PROJECT_NAME}
	PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_2/catalog"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_2/checker"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_2/loader"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_2/parameter"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_2/expression"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_2/parser"

	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_2/api"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_2/api/writer"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_2/common"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_2/checker"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_2/checker/model"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_2/checker/impl"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_2/checker/range"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_2/catalog"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_2/impl"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_2/xmlParser"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_2/export/xml" 
)
endif (SUPPORT_OSC_1_2)

if (SUPPORT_OSC_1_3)
target_include_directories( ${PROJECT_NAME}
	PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_3/catalog"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_3/checker"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_3/loader"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_3/parameter"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_3/expression"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/v1_3/parser"

	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_3/api"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_3/api/writer"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_3/common"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_3/checker"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_3/checker/model"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_3/checker/impl"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_3/checker/range"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_3/catalog"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_3/impl"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_3/xmlParser"
	"${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_3/export/xml" 
)
endif (SUPPORT_OSC_1_3)

################################################################
# Include folders
#external files
target_include_directories( ${PROJECT_NAME}
	PUBLIC
	${ANTLR4_INCLUDE_DIRS}
	"${CMAKE_CURRENT_SOURCE_DIR}/../common"
	"${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/Filesystem"
	"${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/TinyXML2"
	"${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/UtfCpp"

#version independent
	"${CMAKE_CURRENT_SOURCE_DIR}/src/api"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/checker"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/checker/tree"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/checker/model"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/common"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/export"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/impl"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/loader"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/parameter"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/expression"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/parser"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/parser/modelgroup"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/parser/type"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/simple/struct"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/xmlIndexer" 
    ${ANTLR_XMLLexer_OUTPUT_DIR}
    ${ANTLR_XMLParser_OUTPUT_DIR}
)

if( ${BUILD_SHARED_LIBS} )
   set( ANTLR_STATIC_SHARED  antlr4_shared )
   message( STATUS "${PROJECT_NAME}: using Antlr shared" )
else()
   set( ANTLR_STATIC_SHARED  antlr4_static )
   message( STATUS "${PROJECT_NAME}: using Antlr static" )
endif()

# Add libs
target_link_libraries( ${PROJECT_NAME} 
                PUBLIC ExpressionsLib ${ANTLR_STATIC_SHARED}
                       )

set_target_properties( ${PROJECT_NAME} PROPERTIES ANTLR4_RUNTIME_LIBRARIES "${ANTLR4_RUNTIME_LIBRARIES}" )

################################################################
# Linux lib versioning
if( UNIX )
    set_target_properties( ${PROJECT_NAME} PROPERTIES VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${PATCHNUMBER} )
    set_target_properties( ${PROJECT_NAME} PROPERTIES SOVERSION ${VERSION_MAJOR} )
endif()
 

 ################################################################
# Visual Studio solution folders
if( MSVC )
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj /wd4251 /utf-8 /we4828 ")
    set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Core )
endif()
