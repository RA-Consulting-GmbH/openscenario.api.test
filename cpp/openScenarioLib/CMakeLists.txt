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


################################################################
# Update rc file
RAC_GET_PRODUCT_INFO("${CMAKE_CURRENT_SOURCE_DIR}/productInfo.txt")
configure_file("${CMAKE_SOURCE_DIR}/common/rc.template" "${CMAKE_CURRENT_SOURCE_DIR}/rc/${PROJECT_NAME}.rc")


################################################################
# Set compile output folder
RAC_SET_FOLDERS()
message ( STATUS "Building all into: ${CMAKE_BINARY_DIR}" )


################################################################
# Antlr
#add_definitions(-DANTLR4CPP_STATIC)
#set(ANTLR4_WITH_STATIC_CRT ON)
#include_directories( ${ANTLR4_INCLUDE_DIRS} )
antlr_target(XMLLexer ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr/XMLLexer.g4 LEXER)
antlr_target(XMLParser ${CMAKE_CURRENT_SOURCE_DIR}/src/antlr/XMLParser.g4 PARSER
             LISTENER 
             DEPENDS_ANTLR XMLLexer
             COMPILE_FLAGS -lib ${ANTLR_XMLLexer_OUTPUT_DIR})
             
             

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
# Include folders
include_directories( ${ANTLR4_INCLUDE_DIRS} )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/catalog )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/parser )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_1/catalog )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_1/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_1/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_1/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_1/expression )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_1/parser )

#generated
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/api/writer )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/checker/model )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/checker/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/checker/range )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/catalog)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/xmlParser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_0/export/xml )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/api/writer )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/checker/model )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/checker/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/checker/range )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/catalog)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/xmlParser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/v1_1/export/xml )
include_directories(${ANTLR_XMLLexer_OUTPUT_DIR})
include_directories(${ANTLR_XMLParser_OUTPUT_DIR})

#external files
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/Filesystem)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/TinyXML2 )

#version independent
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/checker/tree )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/checker/model )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/export )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/expression )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/modelgroup )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/type )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/simple/struct )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/xmlIndexer )

#expressionsLib
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../expressionsLib/inc)


################################################################
# Source files
set( SOURCES
#  ${SOURCES}
    "../externalLibs/TinyXML2/tinyxml2.cpp"
)

set( SOURCES_GENERATED_1_0_API
    "generated/v1_0/api/EnumerationsV1_0.cpp"
)

set( SOURCES_GENERATED_1_0_CHECKER_IMPL
    "generated/v1_0/checker/impl/ScenarioCheckerImplV1_0.cpp"
)

set( SOURCES_GENERATED_1_0_CHECKER_RANGE
    "generated/v1_0/checker/range/RangeCheckerRulesV1_0.cpp"
    "generated/v1_0/checker/range/RangeCheckerHelperV1_0.cpp"
)

set( SOURCES_GENERATED_1_0_CATALOG
    "generated/v1_0/catalog/CatalogHelperV1_0.cpp"
)

set( SOURCES_GENERATED_1_0_CHECKER_MODEL
    "generated/v1_0/checker/model/UnionCheckerRulesV1_0.cpp"
    "generated/v1_0/checker/model/CardinalityCheckerRulesV1_0.cpp"
)

set( SOURCES_GENERATED_1_0_IMPL
    "generated/v1_0/impl/ApiClassImplV1_0.cpp"
    "generated/v1_0/impl/OpenScenarioWriterFactoryImplV1_0.cpp"
)

set( SOURCES_GENERATED_1_0_XMLPARSER
    "generated/v1_0/xmlParser/XmlParsers1V1_0.cpp"
    "generated/v1_0/xmlParser/XmlParsers2V1_0.cpp"
)

set( SOURCES_GENERATED_1_0_XMLEXPORTER
    "generated/v1_0/export/xml/OpenScenarioXmlExporterV1_0.cpp"
)


## V1.1
set( SOURCES_GENERATED_1_1_API
    "generated/v1_1/api/EnumerationsV1_1.cpp"
)

set( SOURCES_GENERATED_1_1_CHECKER_IMPL
   "generated/v1_1/checker/impl/ScenarioCheckerImplV1_1.cpp"
)

set( SOURCES_GENERATED_1_1_CHECKER_RANGE
    "generated/v1_1/checker/range/RangeCheckerRulesV1_1.cpp"
    "generated/v1_1/checker/range/RangeCheckerHelperV1_1.cpp"
)

set( SOURCES_GENERATED_1_1_CATALOG
    "generated/v1_1/catalog/CatalogHelperV1_1.cpp"
)

set( SOURCES_GENERATED_1_1_CHECKER_MODEL
    "generated/v1_1/checker/model/UnionCheckerRulesV1_1.cpp"
    "generated/v1_1/checker/model/CardinalityCheckerRulesV1_1.cpp"
)

set( SOURCES_GENERATED_1_1_IMPL
    "generated/v1_1/impl/ApiClassImplV1_1.cpp"
    "generated/v1_1/impl/OpenScenarioWriterFactoryImplV1_1.cpp"
)

set( SOURCES_GENERATED_1_1_XMLPARSER
    "generated/v1_1/xmlParser/XmlParsers1V1_1.cpp"
    "generated/v1_1/xmlParser/XmlParsers2V1_1.cpp"
)

set( SOURCES_GENERATED_1_1_XMLEXPORTER
    "generated/v1_1/export/xml/OpenScenarioXmlExporterV1_1.cpp"
)
  
set( HEADERS_EXPRESSIONS_LIB
    "../expressionsLib/inc/OscExprEvaluator.h"
    "../expressionsLib/inc/ExprType.h"
    "../expressionsLib/inc/ExprValue.h"
    "../expressionsLib/inc/OscExprEvaluatorFactory.h"
)

################################################################
# Header files
set( HEADERS
#    ${HEADERS}
)

set( HEADERS_COMMON_API
    "src/api/IOpenScenarioModelElement.h"
    "src/api/IOpenScenarioElementWriter.h"
    "src/api/IOpenScenarioFlexElement.h"
    "src/api/KeyNotSupportedException.h"
    "src/api/SimpleType.h"
)

set( HEADERS_COMMON_COMMON
    "src/common/INamedReference.h"
    "src/common/ILocator.h"
    "src/common/SimpleMessageLogger.h"
    "src/common/DateTime.h"
    "src/common/IParserMessageLogger.h"
    "src/common/Textmarker.h"
    "src/common/ErrorLevel.h"
    "src/common/FileContentMessage.h"
    "src/common/BaseMessageLogger.h"
    "src/common/ContentMessage.h"
    "src/common/IContentMessageLogger.h"
    "src/common/ITreeMessageLogger.h"
    "src/common/TreeContentMessage.h"
    "src/common/TreeMessageLogger.h"
)

set( HEADERS_COMMON_EXPORT
    "src/export/XmlExportHelper.h"
)


set( HEADERS_COMMON_CHECKER
    "src/checker/ICheckerRule.h"
    "src/checker/RangeCheckerRule.h"
)

set( HEADERS_COMMON_CHECKER_TREE
    "src/checker/tree/BaseTreeContext.h"
    "src/checker/tree/ITreeContext.h"
    "src/checker/tree/PropertyTreeContext.h"
)

set( HEADERS_COMMON_CHECKER_MODEL
    "src/checker/model/UnionCheckerRule.h"
    "src/checker/model/ModelCheckerRule.h"
    "src/checker/model/CardinalityCheckerRule.h"
)

set( HEADERS_COMMON_IMPL
    "src/impl/NamedReferenceProxy.h"
    "src/impl/BaseImpl.h"
)

set( HEADERS_COMMON_PARAMETER
    "src/parameter/ParameterValue.h"
    "src/parameter/IParameterizedObject.h"
)

set( HEADERS_COMMON_EXPRESSION
    "src/expression/IExpressionObject.h"
)

set( HEADERS_COMMON_PARSER
    "src/parser/ParserOptions.h"
    "src/parser/ParserHelper.h"
    "src/parser/ParserContext.h"
    "src/parser/WrappedListParser.h"
    "src/parser/XmlParserBase.h"
    "src/parser/XmlParserException.h"
    "src/parser/XmlModelGroupParser.h"
)

set( HEADERS_COMMON_PARSER_MODEL_GROUP
    "src/parser/modelgroup/XmlAllParser.h"
    "src/parser/modelgroup/XmlChoiceParser.h"
    "src/parser/modelgroup/XmlSequenceParser.h"
)

set( HEADERS_COMMON_PARSER_TYPE
    "src/parser/type/IXmlTypeParser.h"
    "src/parser/type/XmlComplexTypeParser.h"
    "src/parser/type/XmlGroupParser.h"
    "src/parser/type/XmlSimpleContentParser.h"
)

set( HEADERS_COMMON_XMLINDEXER
  "src/xmlIndexer/AttributeInfo.h"
  "src/xmlIndexer/AttributeNode.h"
  "src/xmlIndexer/ElementNode.h"
  "src/xmlIndexer/Position.h"
  "src/xmlIndexer/PositionIndex.h"
  "src/xmlIndexer/PositionNode.h"

)

set( HEADERS_COMMON_SIMPLE_STRUCT
    "src/simple/struct/IndexedElement.h"
    "src/simple/struct/XmlToSimpleNodeConverter.h"
)

set( HEADERS_COMMON_LOADER
    "src/loader/IResourceLocator.h"
    "src/loader/IScenarioLoaderFactory.h"
    "src/loader/IScenarioLoader.h"
    "src/loader/ResourceNotFoundException.h"
    "src/loader/FileResourceLocator.h"
    "src/loader/ScenarioLoaderException.h"
)

set( HEADERS_CATALOG
    "src/v1_0/catalog/ICatalogReferenceProviderV1_0.h"
    "src/v1_0/catalog/CatalogCacheV1_0.h"
)

set( HEADERS_LOADER_1_0
    "src/v1_0/loader/OpenScenarioProcessingHelperV1_0.h"
    "src/v1_0/loader/XmlScenarioImportLoaderV1_0.h"
    "src/v1_0/loader/XmlScenarioLoaderFactoryV1_0.h"
    "src/v1_0/loader/XmlScenarioLoaderV1_0.h"
    "src/v1_0/loader/XmlScenarioImportLoaderFactoryV1_0.h"
)

set( HEADERS_PARAMETER_1_0
    "src/v1_0/parameter/ParameterResolverV1_0.h"
)

set( HEADERS_PARSER_1_0
    "src/v1_0/parser/CatalogReferenceParserContextV1_0.h"
)

set( HEADERS_CHECKER_1_0
    "src/v1_0/checker/VersionCheckerRuleV1_0.h"
    "src/v1_0/checker/ParameterDeclarationCheckerV1_0.h"
)

set( HEADERS_GENERATED_1_0_API
    "generated/v1_0/api/EnumerationsV1_0.h"
    "generated/v1_0/api/ApiClassInterfacesV1_0.h"
    "generated/v1_0/api/OscInterfacesV1_0.h"
)

set( HEADERS_GENERATED_1_0_API_WRITER
    "generated/v1_0/api/writer/ApiClassWriterInterfacesV1_0.h"
    "generated/v1_0/api/writer/ApiWriterInterfacesV1_0.h"
    "generated/v1_0/api/writer/IOpenScenarioWriterFactoryV1_0.h"
)

set( HEADERS_GENERATED_1_0_COMMON
    "generated/v1_0/common/OscConstantsV1_0.h"
)

set( HEADERS_GENERATED_1_0_CHECKER
    "generated/v1_0/checker/IScenarioCheckerV1_0.h"
)

set( HEADERS_GENERATED_1_0_CHECKER_MODEL
    "generated/v1_0/checker/model/CardinalityCheckerRulesV1_0.h"
    "generated/v1_0/checker/model/UnionCheckerRulesV1_0.h"
)

set( HEADERS_GENERATED_1_0_CHECKER_IMPL
    "generated/v1_0/checker/impl/ScenarioCheckerImplV1_0.h"
)

set( HEADERS_GENERATED_1_0_CHECKER_RANGE
    "generated/v1_0/checker/range/RangeCheckerRulesV1_0.h"
    "generated/v1_0/checker/range/RangeCheckerHelperV1_0.h"
)

set( HEADERS_GENERATED_1_0_CATALOG
    "generated/v1_0/catalog/CatalogHelperV1_0.h"
)

set( HEADERS_GENERATED_1_0_IMPL
    "generated/v1_0/impl/ApiClassImplV1_0.h"
    "generated/v1_0/impl/OpenScenarioWriterFactoryImplV1_0.h"
)

set( HEADERS_GENERATED_1_0_XMLPARSER
    "generated/v1_0/xmlParser/XmlParsersV1_0.h"
)

set( HEADERS_GENERATED_1_0_EXPORT_XML
    "generated/v1_0/export/xml/OpenScenarioXmlExporterV1_0.h"
)

## V1.1
set( HEADERS_LOADER_1_1
    "src/v1_1/loader/OpenScenarioProcessingHelperV1_1.h"
    "src/v1_1/loader/XmlScenarioImportLoaderV1_1.h"
    "src/v1_1/loader/XmlScenarioLoaderFactoryV1_1.h"
    "src/v1_1/loader/XmlScenarioLoaderV1_1.h"
    "src/v1_1/loader/XmlScenarioImportLoaderFactoryV1_1.h"
)

set( HEADERS_EXPRESSION_1_1
  "src/v1_1/expression/ExpressionResolverV1_1.h"
  "src/v1_1/expression/ExpressionResolverStackV1_1.h"
)

set( HEADERS_PARSER_1_1
    "src/v1_1/parser/CatalogReferenceParserContextV1_1.h"
)

set( HEADERS_CHECKER_1_1
    "src/v1_1/checker/VersionCheckerRuleV1_1.h"
)

set( HEADERS_GENERATED_1_1_API
    "generated/v1_1/api/EnumerationsV1_1.h"
    "generated/v1_1/api/ApiClassInterfacesV1_1.h"
    "generated/v1_1/api/OscInterfacesV1_1.h"
)

set( HEADERS_GENERATED_1_1_API_WRITER
    "generated/v1_1/api/writer/ApiClassWriterInterfacesV1_1.h"
    "generated/v1_1/api/writer/ApiWriterInterfacesV1_1.h"
    "generated/v1_1/api/writer/IOpenScenarioWriterFactoryV1_1.h"
)

set( HEADERS_GENERATED_1_1_COMMON
    "generated/v1_1/common/OscConstantsV1_1.h"
)

set( HEADERS_GENERATED_1_1_CHECKER
    "generated/v1_1/checker/IScenarioCheckerV1_1.h"
)

set( HEADERS_GENERATED_1_1_CHECKER_MODEL
    "generated/v1_1/checker/model/CardinalityCheckerRulesV1_1.h"
    "generated/v1_1/checker/model/UnionCheckerRulesV1_1.h"
)

set( HEADERS_GENERATED_1_1_CHECKER_IMPL
    "generated/v1_1/checker/impl/ScenarioCheckerImplV1_1.h"
)

set( HEADERS_GENERATED_1_1_CHECKER_RANGE
    "generated/v1_1/checker/range/RangeCheckerRulesV1_1.h"
    "generated/v1_1/checker/range/RangeCheckerHelperV1_1.h"
)

set( HEADERS_GENERATED_1_1_CATALOG
    "generated/v1_1/catalog/CatalogHelperV1_1.h"
)

set( HEADERS_GENERATED_1_1_IMPL
    "generated/v1_1/impl/ApiClassImplV1_1.h"
    "generated/v1_1/impl/OpenScenarioWriterFactoryImplV1_1.h"
)

set( HEADERS_GENERATED_1_1_XMLPARSER
    "generated/v1_1/xmlParser/XmlParsersV1_1.h"
)

set( HEADERS_GENERATED_1_1_EXPORT_XML
    "generated/v1_1/export/xml/OpenScenarioXmlExporterV1_1.h"
)


#SOURCES
set( SOURCES_API
    "src/api/KeyNotSupportedException.cpp"
    "src/api/SimpleType.cpp"
)

set( SOURCES_CHECKER_TREE
    "src/checker/tree/BaseTreeContext.cpp"
    "src/checker/tree/ContentMessage.cpp"
    "src/checker/tree/PropertyTreeContext.cpp"
)

set( SOURCES_CHECKER
    "src/checker/RangeCheckerRule.cpp"
)

set( SOURCES_CHECKER_MODEL
    "src/checker/model/CardinalityCheckerRule.cpp"
    "src/checker/model/ModelCheckerRule.cpp"
    "src/checker/model/UnionCheckerRule.cpp"
)

set( SOURCES_COMMON
    "src/common/ContentMessage.cpp"
    "src/common/DateTime.cpp"
    "src/common/ErrorLevel.cpp"
    "src/common/ExportDefinitions.cpp"
    "src/common/FileContentMessage.cpp"
    "src/common/SimpleMessageLogger.cpp"
    "src/common/Textmarker.cpp"
    "src/common/TreeContentMessage.cpp"
    "src/common/TreeMessageLogger.cpp"
)

set( SOURCES_EXPORT
    "src/export/XmlExportHelper.cpp"
)

set( SOURCES_IMPL
    "src/impl/BaseImpl.cpp"
)

set( SOURCES_LOADER
    "src/loader/FileResourceLocator.cpp"
    "src/loader/ResourceNotFoundException.cpp"
    "src/loader/ScenarioLoaderException.cpp"
)

set( SOURCES_PARAMETER
    "src/parameter/ParameterValue.cpp"
)

set( SOURCES_PARSER
    "src/parser/WrappedListParser.cpp"
    "src/parser/XmlModelGroupParser.cpp"
    "src/parser/ParserContext.cpp"
    "src/parser/ParserOptions.cpp"
    "src/parser/ParserHelper.cpp"
    "src/parser/XmlParserException.cpp"
)

set( SOURCES_TYPE_PARSER
    "src/parser/type/XmlComplexTypeParser.cpp"
    "src/parser/type/XmlGroupParser.cpp"
    "src/parser/type/XmlSimpleContentParser.cpp"
    
)

set( SOURCES_MODELGROUP_PARSER
    "src/parser/modelgroup/XmlAllParser.cpp"
    "src/parser/modelgroup/XmlChoiceParser.cpp"
    "src/parser/modelgroup/XmlSequenceParser.cpp"
    
)

set( SOURCES_SIMPLE_STRUCT
    "src/simple/struct/IndexedElement.cpp"
    "src/simple/struct/XmlToSimpleNodeConverter.cpp"
)

set( SOURCES_V1_0_CATALOG
    "src/v1_0/catalog/CatalogCacheV1_0.cpp"
)

set( SOURCES_V1_0_CHECKER
    "src/v1_0/checker/ParameterDeclarationCheckerV1_0.cpp"
    "src/v1_0/checker/VersionCheckerRuleV1_0.cpp"
)

set( SOURCES_V1_0_LOADER
    "src/v1_0/loader/OpenScenarioProcessingHelperV1_0.cpp"
    "src/v1_0/loader/XmlScenarioImportLoaderFactoryV1_0.cpp"
    "src/v1_0/loader/XmlScenarioImportLoaderV1_0.cpp"
    "src/v1_0/loader/XmlScenarioLoaderFactoryV1_0.cpp"
    "src/v1_0/loader/XmlScenarioLoaderV1_0.cpp"
)

set( SOURCES_V1_0_PARAMETER
    "src/v1_0/parameter/ParameterResolverV1_0.cpp"
)

set( SOURCES_V1_0_PARSER
    "src/v1_0/parser/CatalogReferenceParserContextV1_0.cpp"
)

## V1.1
set( SOURCES_V1_1_CATALOG
    "src/v1_1/catalog/CatalogCacheV1_1.cpp"
)

set( SOURCES_V1_1_CHECKER
    "src/v1_1/checker/VersionCheckerRuleV1_1.cpp"
)

set( SOURCES_V1_1_LOADER
    "src/v1_1/loader/OpenScenarioProcessingHelperV1_1.cpp"
    "src/v1_1/loader/XmlScenarioImportLoaderFactoryV1_1.cpp"
    "src/v1_1/loader/XmlScenarioImportLoaderV1_1.cpp"
    "src/v1_1/loader/XmlScenarioLoaderFactoryV1_1.cpp"
    "src/v1_1/loader/XmlScenarioLoaderV1_1.cpp"
)

set( SOURCES_V1_1_EXPRESSION
	"src/v1_1/expression/ExpressionResolverV1_1.cpp"
	"src/v1_1/expression/ExpressionResolverStackV1_1.cpp"
)
set( SOURCES_V1_1_PARSER
    "src/v1_1/parser/CatalogReferenceParserContextV1_1.cpp"
)

set( SOURCES_XMLINDEXER
	"src/xmlIndexer/AttributeInfo.cpp"
	"src/xmlIndexer/AttributeNode.cpp"
	"src/xmlIndexer/ElementNode.cpp"
	"src/xmlIndexer/Position.cpp"
	"src/xmlIndexer/PositionIndex.cpp"
	"src/xmlIndexer/PositionNode.cpp"
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
  source_group( Sources FILES ${SOURCES} )

  source_group( Sources\\v1_0\\Generated\\Api FILES ${SOURCES_GENERATED_1_0_API} )
  source_group( Sources\\v1_0\\Generated\\Checker\\Impl FILES ${SOURCES_GENERATED_1_0_CHECKER_IMPL} )
  source_group( Sources\\v1_0\\Generated\\Checker\\Range FILES ${SOURCES_GENERATED_1_0_CHECKER_RANGE} )
  source_group( Sources\\v1_0\\Generated\\Catalog FILES ${SOURCES_GENERATED_1_0_CATALOG} )
  source_group( Sources\\v1_0\\Generated\\Checker\\Model FILES ${SOURCES_GENERATED_1_0_CHECKER_MODEL} )
  source_group( Sources\\v1_0\\Generated\\Impl FILES ${SOURCES_GENERATED_1_0_IMPL} )
  source_group( Sources\\v1_0\\Generated\\XmlParser FILES ${SOURCES_GENERATED_1_0_XMLPARSER} )
  source_group( Sources\\v1_0\\Generated\\XmlParser FILES ${SOURCES_GENERATED_1_0_XMLEXPORTER} )

  source_group( Sources\\v1_1\\Generated\\Api FILES ${SOURCES_GENERATED_1_1_API} )
  source_group( Sources\\v1_1\\Generated\\Checker\\Impl FILES ${SOURCES_GENERATED_1_1_CHECKER_IMPL} )
  source_group( Sources\\v1_1\\Generated\\Checker\\Range FILES ${SOURCES_GENERATED_1_1_CHECKER_RANGE} )
  source_group( Sources\\v1_1\\Generated\\Catalog FILES ${SOURCES_GENERATED_1_1_CATALOG} )
  source_group( Sources\\v1_1\\Generated\\Checker\\Model FILES ${SOURCES_GENERATED_1_1_CHECKER_MODEL} )
  source_group( Sources\\v1_1\\Generated\\Impl FILES ${SOURCES_GENERATED_1_1_IMPL} )
  source_group( Sources\\v1_1\\Generated\\XmlParser FILES ${SOURCES_GENERATED_1_1_XMLPARSER} )
  source_group( Sources\\v1_1\\Generated\\XmlParser FILES ${SOURCES_GENERATED_1_1_XMLEXPORTER} )

  source_group( Sources\\Api FILES ${SOURCES_API})
  source_group( Sources\\Checker FILES ${SOURCES_CHECKER})
  source_group( Sources\\Checker\\Model FILES ${SOURCES_CHECKER_MODEL})
  source_group( Sources\\Checker\\Tree FILES ${SOURCES_CHECKER_TREE})
  source_group( Sources\\Common FILES ${SOURCES_COMMON})
  source_group( Sources\\Export FILES ${SOURCES_EXPORT})
  source_group( Sources\\Impl FILES ${SOURCES_IMPL})
  source_group( Sources\\Loader FILES ${SOURCES_LOADER})
  source_group( Sources\\Parameter FILES ${SOURCES_PARAMETER})
  source_group( Sources\\Parser FILES ${SOURCES_PARSER})
  source_group( Sources\\Parser\\Type FILES ${SOURCES_TYPE_PARSER})
  source_group( Sources\\Parser\\ModelGroup FILES ${SOURCES_MODELGROUP_PARSER})
  
  source_group( Sources\\Simple\\Struct FILES ${SOURCES_SIMPLE_STRUCT})
  source_group( Sources\\V1_0\\Catalog FILES ${SOURCES_V1_0_CATALOG})
  source_group( Sources\\V1_0\\Checker FILES ${SOURCES_V1_0_CHECKER})
  source_group( Sources\\V1_0\\Loader FILES ${SOURCES_V1_0_LOADER})
  source_group( Sources\\V1_0\\Parameter FILES ${SOURCES_V1_0_PARAMETER})
  source_group( Sources\\V1_0\\Parser FILES ${SOURCES_V1_0_PARSER})
  source_group( Sources\\V1_1\\Catalog FILES ${SOURCES_V1_1_CATALOG})
  source_group( Sources\\V1_1\\Checker FILES ${SOURCES_V1_1_CHECKER})
  source_group( Sources\\V1_1\\Loader FILES ${SOURCES_V1_1_LOADER})
  source_group( Sources\\V1_1\\Expression FILES ${SOURCES_V1_1_EXPRESSION})
  source_group( Sources\\V1_1\\Parser FILES ${SOURCES_V1_1_PARSER})
  source_group( Sources\\XmlIndexer FILES ${SOURCES_XMLINDEXER})
  
  # Groups for header files
  source_group( Headers FILES ${HEADERS} )

  source_group( Headers\\ExpressionsLib FILES ${HEADERS_EXPRESSIONS_LIB} )
  source_group( Headers\\Common\\Api FILES ${HEADERS_COMMON_API} )
  source_group( Headers\\Common\\Common FILES ${HEADERS_COMMON_COMMON})
  source_group( Headers\\Common\\Export FILES ${HEADERS_COMMON_EXPORT})
  source_group( Headers\\Common\\Checker FILES ${HEADERS_COMMON_CHECKER})
  source_group( Headers\\Common\\Checker\\Tree FILES ${HEADERS_COMMON_CHECKER_TREE})
  source_group( Headers\\Common\\Checker\\Model FILES ${HEADERS_COMMON_CHECKER_MODEL})
  source_group( Headers\\Common\\Impl FILES ${HEADERS_COMMON_IMPL})
  source_group( Headers\\Common\\Parameter FILES ${HEADERS_COMMON_PARAMETER})
  source_group( Headers\\Common\\Expression FILES ${HEADERS_COMMON_EXPRESSION})
  source_group( Headers\\Common\\Parser FILES ${HEADERS_COMMON_PARSER})
  source_group( Headers\\Common\\Parser\\ModelGroup FILES ${HEADERS_COMMON_PARSER_MODEL_GROUP})
  source_group( Headers\\Common\\Parser\\Type FILES ${HEADERS_COMMON_PARSER_TYPE})
  source_group( Headers\\Common\\XmlIndexer FILES ${HEADERS_COMMON_XMLINDEXER})
  source_group( Headers\\Common\\Simple\\Struct FILES ${HEADERS_COMMON_SIMPLE_STRUCT})
  source_group( Headers\\Common\\Loaders FILES ${HEADERS_COMMON_LOADER})

  source_group( Headers\\v1_0\\Catalog FILES ${HEADERS_CATALOG})
  source_group( Headers\\v1_0\\Loaders FILES ${HEADERS_LOADER_1_0})
  source_group( Headers\\v1_0\\Parameter FILES ${HEADERS_PARAMETER_1_0})
  source_group( Headers\\v1_0\\Parser FILES ${HEADERS_PARSER_1_0})
  source_group( Headers\\v1_0\\Checker FILES ${HEADERS_CHECKER_1_0})

  source_group( Headers\\v1_1\\Catalog FILES ${HEADERS_CATALOG})
  source_group( Headers\\v1_1\\Loaders FILES ${HEADERS_LOADER_1_1})
  source_group( Headers\\v1_1\\Expression FILES ${HEADERS_EXPRESSION_1_1})
  source_group( Headers\\v1_1\\Parser FILES ${HEADERS_PARSER_1_1})
  source_group( Headers\\v1_1\\Checker FILES ${HEADERS_CHECKER_1_1})
  
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
  source_group( Headers\\v1_0\\Generated\\Export\\Xml FILES ${HEADERS_GENERATED_1_0_EXPORT_XML} )
  
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
  source_group( Headers\\v1_1\\Generated\\Export\\Xml FILES ${HEADERS_GENERATED_1_1_EXPORT_XML} )

  source_group( Antlr FILES ${ANTLR_XMLLexer_CXX_OUTPUTS} ${ANTLR_XMLParser_CXX_OUTPUTS})

  # Groups for resources files
  source_group( Resources FILES ${RESOURCE_FILES} )
endif()


################################################################
# Generate the library
add_library(  ${PROJECT_NAME} # ${LIB_TYPE}

              ${SOURCES} 

              ${SOURCES_GENERATED_1_0_API} ${SOURCES_GENERATED_1_0_CHECKER_IMPL} ${SOURCES_GENERATED_1_0_CHECKER_RANGE} 
              ${SOURCES_GENERATED_1_0_IMPL} ${SOURCES_GENERATED_1_0_XMLPARSER} ${SOURCES_GENERATED_1_0_CATALOG} ${SOURCES_GENERATED_1_0_CHECKER_MODEL}
              ${SOURCES_GENERATED_1_0_XMLEXPORTER}

              ${SOURCES_GENERATED_1_1_API} ${SOURCES_GENERATED_1_1_CHECKER_IMPL} ${SOURCES_GENERATED_1_1_CHECKER_RANGE} 
              ${SOURCES_GENERATED_1_1_IMPL} ${SOURCES_GENERATED_1_1_XMLPARSER} ${SOURCES_GENERATED_1_1_CATALOG} ${SOURCES_GENERATED_1_1_CHECKER_MODEL}
              ${SOURCES_GENERATED_1_1_XMLEXPORTER} ${SOURCES_V1_1_EXPRESSION}
  

			  
              ${SOURCES_API} ${SOURCES_CHECKER_TREE} ${SOURCES_COMMON} ${SOURCES_EXPORT} ${SOURCES_IMPL} ${SOURCES_LOADER} ${SOURCES_PARAMETER} 
              ${SOURCES_PARSER} ${SOURCES_SIMPLE_STRUCT} ${SOURCES_V1_0_CATALOG} ${SOURCES_V1_0_CHECKER} ${SOURCES_V1_0_LOADER} ${SOURCES_V1_0_PARAMETER} 
              ${SOURCES_V1_0_PARSER} ${SOURCES_V1_1_CATALOG} ${SOURCES_V1_1_CHECKER} ${SOURCES_V1_1_LOADER} ${SOURCES_V1_1_PARSER} 
              ${SOURCES_XMLINDEXER} ${SOURCES_TYPE_PARSER} ${SOURCES_MODELGROUP_PARSER} ${SOURCES_CHECKER} ${SOURCES_CHECKER_MODEL}

              ${ANTLR_XMLLexer_CXX_OUTPUTS}
              ${ANTLR_XMLParser_CXX_OUTPUTS}

              ${HEADERS}

              ${HEADERS_COMMON_API} ${HEADERS_COMMON_COMMON}  ${HEADERS_COMMON_EXPORT} ${HEADERS_COMMON_CHECKER_TREE} ${HEADERS_COMMON_CHECKER_MODEL} 
              ${HEADERS_COMMON_CHECKER} ${HEADERS_COMMON_IMPL} ${HEADERS_COMMON_PARAMETER} ${HEADERS_COMMON_EXPRESSION} ${HEADERS_COMMON_PARSER} ${HEADERS_COMMON_PARSER_MODEL_GROUP} 
              ${HEADERS_COMMON_PARSER_TYPE} ${HEADERS_COMMON_XMLINDEXER} ${HEADERS_COMMON_SIMPLE_STRUCT} ${HEADERS_COMMON_LOADER} 

              ${HEADERS_PARAMETER_1_0} ${HEADERS_PARSER_1_0} ${HEADERS_CATALOG} ${HEADERS_LOADER_1_0} ${HEADERS_CHECKER_1_0} 

              ${HEADERS_EXPRESSION_1_1} ${HEADERS_PARSER_1_1} ${HEADERS_CATALOG} ${HEADERS_LOADER_1_1} ${HEADERS_CHECKER_1_1} 

              ${HEADERS_GENERATED_1_0_API} ${HEADERS_GENERATED_1_0_API_WRITER} ${HEADERS_GENERATED_1_0_COMMON} ${HEADERS_GENERATED_1_0_CHECKER} 
              ${HEADERS_GENERATED_1_0_CHECKER_MODEL} ${HEADERS_GENERATED_1_0_CHECKER_IMPL} ${HEADERS_GENERATED_1_0_CHECKER_RANGE} ${HEADERS_GENERATED_1_0_CATALOG} 
              ${HEADERS_GENERATED_1_0_IMPL} ${HEADERS_GENERATED_1_0_XMLPARSER}  ${HEADERS_GENERATED_1_0_EXPORT_XML}

              ${HEADERS_GENERATED_1_1_API} ${HEADERS_GENERATED_1_1_API_WRITER} ${HEADERS_GENERATED_1_1_COMMON} ${HEADERS_GENERATED_1_1_CHECKER} 
              ${HEADERS_GENERATED_1_1_CHECKER_MODEL} ${HEADERS_GENERATED_1_1_CHECKER_IMPL} ${HEADERS_GENERATED_1_1_CHECKER_RANGE} ${HEADERS_GENERATED_1_1_CATALOG} 
              ${HEADERS_GENERATED_1_1_IMPL} ${HEADERS_GENERATED_1_1_XMLPARSER}  ${HEADERS_GENERATED_1_1_EXPORT_XML}
              
              ${HEADERS_EXPRESSIONS_LIB}
              
              ${RESOURCE_FILES} 
              )
              
#if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
if( MSVC )
    if( ${BUILD_SHARED_LIBS} )
        target_compile_options(${PROJECT_NAME} PRIVATE "/MD$<$<CONFIG:Debug>:d>")
        get_target_property(ANTLR_DLL_OUTPUT antlr4_shared IMPORTED_LOCATION)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
            ${ANTLR_DLL_OUTPUT} ${CMAKE_BINARY_DIR}/$(Configuration))
    else()
        target_compile_options(${PROJECT_NAME} PRIVATE "/MT$<$<CONFIG:Debug>:d>")
    endif()
endif()

if( ${BUILD_SHARED_LIBS} )
    set( ANTLR_STATIC_SHARED  antlr4_shared )
    message( STATUS "${PROJECT_NAME}: using Antlr shared" )
else()
    set( ANTLR_STATIC_SHARED  antlr4_static )
    message( STATUS "${PROJECT_NAME}: using Antlr static" )
endif()

# Add libs
target_link_libraries( ${PROJECT_NAME} 
                PUBLIC ExpressionsLib
                       ${ANTLR_STATIC_SHARED}
                       )


################################################################
# Linux lib versioning
if( UNIX )
    set_target_properties( ${PROJECT_NAME} PROPERTIES VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${PATCHNUMBER} )
    set_target_properties( ${PROJECT_NAME} PROPERTIES SOVERSION ${VERSION_MAJOR} )
endif()
 

 ################################################################
# Visual Studio solution folders
if( MSVC )
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj /wd4251") # ${osc_extra_static_compile_flags}")
    set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Core )
endif()
