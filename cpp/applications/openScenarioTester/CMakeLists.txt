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
# Source files
set( SOURCES
#    ${SOURCES}
    "src/OpenScenarioTester.cpp"
    "../../externalLibs/TinyXML2/tinyxml2.cpp"
)

# Header files
set( HEADERS
#    ${HEADERS}
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
)

set( HEADERS_HELPER
#    ${HEADERS_HELPER}
    "src/helper/EgoCheckerRuleV1_0.h"
    "src/helper/EgoCheckerRuleV1_1.h"
)

set (OPEN_SCENARIO_LIB_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../openScenarioLib/src)

set( SOURCES_API
	"${OPEN_SCENARIO_LIB_SRC_DIR}/api/KeyNotSupportedException.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/api/SimpleType.cpp"
)

set( SOURCES_CHECKER_TREE
	"${OPEN_SCENARIO_LIB_SRC_DIR}/checker/tree/BaseTreeContext.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/checker/tree/ContentMessage.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/checker/tree/PropertyTreeContext.cpp"
)

set( SOURCES_COMMON
	"${OPEN_SCENARIO_LIB_SRC_DIR}/common/ExportDefinitions.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/common/TreeContentMessage.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/common/TreeMessageLogger.cpp"
)

set( SOURCES_EXPORT
	"${OPEN_SCENARIO_LIB_SRC_DIR}/export/XmlExportHelper.cpp"
)

set( SOURCES_IMPL
	"${OPEN_SCENARIO_LIB_SRC_DIR}/impl/BaseImpl.cpp"
)

set( SOURCES_LOADER
	"${OPEN_SCENARIO_LIB_SRC_DIR}/loader/ResourceNotFoundException.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/loader/ScenarioLoaderException.cpp"
)

set( SOURCES_PARAMETER
	"${OPEN_SCENARIO_LIB_SRC_DIR}/parameter/ParameterValue.cpp"
)

set( SOURCES_PARSER
	"${OPEN_SCENARIO_LIB_SRC_DIR}/parser/ParserContext.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/parser/ParserHelper.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/parser/XmlParserException.cpp"
)

set( SOURCES_SIMPLE_STRUCT
	"${OPEN_SCENARIO_LIB_SRC_DIR}/simple/struct/IndexedElement.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/simple/struct/XmlToSimpleNodeConverter.cpp"
)

set( SOURCES_V1_0_CATALOG
	"${OPEN_SCENARIO_LIB_SRC_DIR}/v1_0/catalog/CatalogCacheV1_0.cpp"
)

set( SOURCES_V1_0_CHECKER
	"${OPEN_SCENARIO_LIB_SRC_DIR}/v1_0/checker/ParameterDeclarationCheckerV1_0.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/v1_0/checker/VersionCheckerRuleV1_0.cpp"
)

set( SOURCES_V1_0_LOADER
	"${OPEN_SCENARIO_LIB_SRC_DIR}/v1_0/loader/OpenScenarioProcessingHelperV1_0.cpp"
)

set( SOURCES_V1_0_PARAMETER
	"${OPEN_SCENARIO_LIB_SRC_DIR}/v1_0/parameter/ParameterResolverV1_0.cpp"
)

set( SOURCES_V1_0_PARSER
	"${OPEN_SCENARIO_LIB_SRC_DIR}/v1_0/parser/CatalogReferenceParserContextV1_0.cpp"
)

set( SOURCES_V1_1_CATALOG
	"${OPEN_SCENARIO_LIB_SRC_DIR}/v1_1/catalog/CatalogCacheV1_1.cpp"
)

set( SOURCES_V1_1_CHECKER
	"${OPEN_SCENARIO_LIB_SRC_DIR}/v1_1/checker/ParameterDeclarationCheckerV1_1.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/v1_1/checker/VersionCheckerRuleV1_1.cpp"
)

set( SOURCES_V1_1_LOADER
	"${OPEN_SCENARIO_LIB_SRC_DIR}/v1_1/loader/OpenScenarioProcessingHelperV1_1.cpp"
)

set( SOURCES_V1_1_PARAMETER
	"${OPEN_SCENARIO_LIB_SRC_DIR}/v1_1/parameter/ParameterResolverV1_1.cpp"
)

set( SOURCES_V1_1_PARSER
	"${OPEN_SCENARIO_LIB_SRC_DIR}/v1_1/parser/CatalogReferenceParserContextV1_1.cpp"
)

set( SOURCES_XMLINDEXER
	"${OPEN_SCENARIO_LIB_SRC_DIR}/xmlIndexer/AttributeNode.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/xmlIndexer/ElementNode.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/xmlIndexer/Position.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/xmlIndexer/PositionIndex.cpp"
	"${OPEN_SCENARIO_LIB_SRC_DIR}/xmlIndexer/PositionNode.cpp"
)

# Test Sources
set( SOURCES
	${SOURCES}
	"src/OpenScenarioTester.cpp"
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

    source_group( Sources\\Api FILES ${SOURCES_API})
    source_group( Sources\\Checker\\Tree FILES ${SOURCES_CHECKER_TREE})
    source_group( Sources\\Common FILES ${SOURCES_COMMON})
    source_group( Sources\\Export FILES ${SOURCES_EXPORT})
    source_group( Sources\\Impl FILES ${SOURCES_IMPL})
    source_group( Sources\\Loader FILES ${SOURCES_LOADER})
    source_group( Sources\\Parameter FILES ${SOURCES_PARAMETER})
    source_group( Sources\\Parser FILES ${SOURCES_PARSER})
    source_group( Sources\\Simple\\Struct FILES ${SOURCES_SIMPLE_STRUCT})
    source_group( Sources\\V1_0\\Catalog FILES ${SOURCES_V1_0_CATALOG})
    source_group( Sources\\V1_0\\Checker FILES ${SOURCES_V1_0_CHECKER})
    source_group( Sources\\V1_0\\Loader FILES ${SOURCES_V1_0_LOADER})
    source_group( Sources\\V1_0\\Parameter FILES ${SOURCES_V1_0_PARAMETER})
    source_group( Sources\\V1_0\\Parser FILES ${SOURCES_V1_0_PARSER})
    source_group( Sources\\V1_1\\Catalog FILES ${SOURCES_V1_1_CATALOG})
    source_group( Sources\\V1_1\\Checker FILES ${SOURCES_V1_1_CHECKER})
    source_group( Sources\\V1_1\\Loader FILES ${SOURCES_V1_1_LOADER})
    source_group( Sources\\V1_1\\Parameter FILES ${SOURCES_V1_1_PARAMETER})
    source_group( Sources\\V1_1\\Parser FILES ${SOURCES_V1_1_PARSER})
    source_group( Sources\\XmlIndexer FILES ${SOURCES_XMLINDEXER})
    
    # Groups for resource files
    source_group( Resources FILES ${RESOURCE_FILES} )
endif()


################################################################
# Generate executable
add_executable( ${PROJECT_NAME} ${SOURCES} ${SOURCES_HELPER} ${HEADERS} ${HEADERS_HELPER} 				
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
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj" ) # ${osc_extra_static_compile_flags}")
    set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Apps )
    set_target_properties(
        ${PROJECT_NAME} PROPERTIES
        VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/$(Configuration)")
endif()
