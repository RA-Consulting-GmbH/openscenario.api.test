################################################################
# Collect all headers
set( ALL_HEADERS "" )
# Regex case sensitive
# Regex create:
# s: set\([ ]*([a-zA-Z0-9_]+)[^\)]+\n[.\n]*\)
# r: $0\nset( ALL_HEADERS ${ALL_HEADERS} ${$1} )
# Regex delete:
# s: ^set\( ALL_HEADERS \${ALL_HEADERS} .*\n
# r: 
################################################################
# Header files in common, hand crafted
set( HEADERS
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS} )

set( HEADERS_COMMON_API
    "src/api/IOpenScenarioModelElement.h"
    "src/api/IOpenScenarioElementWriter.h"
    "src/api/IOpenScenarioFlexElement.h"
    "src/api/KeyNotSupportedException.h"
    "src/api/SimpleType.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_API} )

set( HEADERS_COMMON_COMMON
    "src/common/ExportDefinitions.h"
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
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_COMMON} )

set( HEADERS_COMMON_EXPORT
    "src/export/XmlExportHelper.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_EXPORT} )


set( HEADERS_COMMON_CHECKER
    "src/checker/ICheckerRule.h"
    "src/checker/RangeCheckerRule.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_CHECKER} )

set( HEADERS_COMMON_CHECKER_TREE
    "src/checker/tree/BaseTreeContext.h"
    "src/checker/tree/ITreeContext.h"
    "src/checker/tree/PropertyTreeContext.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_CHECKER_TREE} )

set( HEADERS_COMMON_CHECKER_MODEL
    "src/checker/model/UnionCheckerRule.h"
    "src/checker/model/ModelCheckerRule.h"
    "src/checker/model/CardinalityCheckerRule.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_CHECKER_MODEL} )


set( HEADERS_COMMON_IMPL
    "src/impl/NamedReferenceProxy.h"
    "src/impl/BaseImpl.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_IMPL} )

set( HEADERS_COMMON_LOADER
    "src/loader/IResourceLocator.h"
    "src/loader/IScenarioLoaderFactory.h"
    "src/loader/IScenarioLoader.h"
    "src/loader/ResourceNotFoundException.h"
    "src/loader/FileResourceLocator.h"
    "src/loader/ScenarioLoaderException.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_LOADER} )

set( HEADERS_COMMON_PARAMETER
    "src/parameter/ParameterValue.h"
    "src/parameter/IParameterizedObject.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_PARAMETER} )

set( HEADERS_COMMON_PARSER
    "src/parser/ParserOptions.h"
    "src/parser/ParserHelper.h"
    "src/parser/ParserContext.h"
    "src/parser/WrappedListParser.h"
    "src/parser/XmlParserBase.h"
    "src/parser/XmlParserException.h"
    "src/parser/XmlModelGroupParser.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_PARSER} )

set( HEADERS_COMMON_PARSER_TYPE
    "src/parser/type/IXmlTypeParser.h"
    "src/parser/type/XmlComplexTypeParser.h"
    "src/parser/type/XmlGroupParser.h"
    "src/parser/type/XmlSimpleContentParser.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_PARSER_TYPE} )

set( HEADERS_COMMON_PARSER_MODEL_GROUP
    "src/parser/modelgroup/XmlAllParser.h"
    "src/parser/modelgroup/XmlChoiceParser.h"
    "src/parser/modelgroup/XmlSequenceParser.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_PARSER_MODEL_GROUP} )

set( HEADERS_COMMON_SIMPLE_STRUCT
    "src/simple/struct/IndexedElement.h"
    "src/simple/struct/XmlToSimpleNodeConverter.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_SIMPLE_STRUCT} )

set( HEADERS_COMMON_XMLINDEXER
    "src/xmlIndexer/AttributeInfo.h"
    "src/xmlIndexer/AttributeNode.h"
    "src/xmlIndexer/ElementNode.h"
    "src/xmlIndexer/Position.h"
    "src/xmlIndexer/PositionIndex.h"
    "src/xmlIndexer/PositionNode.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_XMLINDEXER} )

set( HEADERS_COMMON_EXPRESSION
    "src/expression/IExpressionObject.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_COMMON_EXPRESSION} )

set( HEADERS_EXPRESSIONS_LIB
    "../expressionsLib/inc/OscExprEvaluator.h"
    "../expressionsLib/inc/ExprType.h"
    "../expressionsLib/inc/ExprValue.h"
    "../expressionsLib/inc/OscExprEvaluatorFactory.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_EXPRESSIONS_LIB} )

################################################
## V1_0
################################
if (SUPPORT_OSC_1_0)
# Headers hand crafted
set( HEADERS_LOADER_1_0
    "src/v1_0/loader/OpenScenarioProcessingHelperV1_0.h"
    "src/v1_0/loader/XmlScenarioImportLoaderV1_0.h"
    "src/v1_0/loader/XmlScenarioLoaderFactoryV1_0.h"
    "src/v1_0/loader/XmlScenarioLoaderV1_0.h"
    "src/v1_0/loader/XmlScenarioImportLoaderFactoryV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_LOADER_1_0} )

set( HEADERS_PARAMETER_1_0
    "src/v1_0/parameter/ParameterResolverV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_PARAMETER_1_0} )

set( HEADERS_PARSER_1_0
    "src/v1_0/parser/CatalogReferenceParserContextV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_PARSER_1_0} )

set( HEADERS_CHECKER_1_0
    "src/v1_0/checker/VersionCheckerRuleV1_0.h"
    "src/v1_0/checker/ParameterDeclarationCheckerV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_CHECKER_1_0} )

set( HEADERS_CATALOG
    "src/v1_0/catalog/ICatalogReferenceProviderV1_0.h"
    "src/v1_0/catalog/CatalogCacheV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_CATALOG} )

################################
# Headers generated
set( HEADERS_GENERATED_1_0_API
    "generated/v1_0/api/EnumerationsV1_0.h"
    "generated/v1_0/api/ApiClassInterfacesV1_0.h"
    "generated/v1_0/api/OscInterfacesV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_0_API} )

set( HEADERS_GENERATED_1_0_API_WRITER
    "generated/v1_0/api/writer/ApiClassWriterInterfacesV1_0.h"
    "generated/v1_0/api/writer/ApiWriterInterfacesV1_0.h"
    "generated/v1_0/api/writer/IOpenScenarioWriterFactoryV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_0_API_WRITER} )

set( HEADERS_GENERATED_1_0_COMMON
    "generated/v1_0/common/OscConstantsV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_0_COMMON} )

set( HEADERS_GENERATED_1_0_CHECKER
    "generated/v1_0/checker/IScenarioCheckerV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_0_CHECKER} )

set( HEADERS_GENERATED_1_0_CHECKER_MODEL
    "generated/v1_0/checker/model/CardinalityCheckerRulesV1_0.h"
    "generated/v1_0/checker/model/UnionCheckerRulesV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_0_CHECKER_MODEL} )

set( HEADERS_GENERATED_1_0_CHECKER_IMPL
    "generated/v1_0/checker/impl/ScenarioCheckerImplV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_0_CHECKER_IMPL} )

set( HEADERS_GENERATED_1_0_CHECKER_RANGE
    "generated/v1_0/checker/range/RangeCheckerRulesV1_0.h"
    "generated/v1_0/checker/range/RangeCheckerHelperV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_0_CHECKER_RANGE} )

set( HEADERS_GENERATED_1_0_CATALOG
    "generated/v1_0/catalog/CatalogHelperV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_0_CATALOG} )

set( HEADERS_GENERATED_1_0_IMPL
    "generated/v1_0/impl/ApiClassImplV1_0.h"
    "generated/v1_0/impl/OpenScenarioWriterFactoryImplV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_0_IMPL} )

set( HEADERS_GENERATED_1_0_XMLPARSER
    "generated/v1_0/xmlParser/XmlParsersV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_0_XMLPARSER} )

set( HEADERS_GENERATED_1_0_XMLEXPORTER
    "generated/v1_0/export/xml/OpenScenarioXmlExporterV1_0.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_0_XMLEXPORTER} )

endif (SUPPORT_OSC_1_0)

################################################
## V1_1
################################
if (SUPPORT_OSC_1_1)
# Headers hand crafted
set( HEADERS_LOADER_1_1
    "src/v1_1/loader/OpenScenarioProcessingHelperV1_1.h"
    "src/v1_1/loader/XmlScenarioImportLoaderV1_1.h"
    "src/v1_1/loader/XmlScenarioLoaderFactoryV1_1.h"
    "src/v1_1/loader/XmlScenarioLoaderV1_1.h"
    "src/v1_1/loader/XmlScenarioImportLoaderFactoryV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_LOADER_1_1} )

set( HEADERS_EXPRESSION_1_1
    "src/v1_1/expression/ExpressionResolverV1_1.h"
    "src/v1_1/expression/ExpressionResolverStackV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_EXPRESSION_1_1} )

set( HEADERS_PARSER_1_1
    "src/v1_1/parser/CatalogReferenceParserContextV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_PARSER_1_1} )

set( HEADERS_CHECKER_1_1
    "src/v1_1/checker/VersionCheckerRuleV1_1.h"
    "src/v1_1/checker/ParameterDeclarationCheckerV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_CHECKER_1_1} )

################################
# Headers generated
set( HEADERS_GENERATED_1_1_API
    "generated/v1_1/api/EnumerationsV1_1.h"
    "generated/v1_1/api/ApiClassInterfacesV1_1.h"
    "generated/v1_1/api/OscInterfacesV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_1_API} )

set( HEADERS_GENERATED_1_1_API_WRITER
    "generated/v1_1/api/writer/ApiClassWriterInterfacesV1_1.h"
    "generated/v1_1/api/writer/ApiWriterInterfacesV1_1.h"
    "generated/v1_1/api/writer/IOpenScenarioWriterFactoryV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_1_API_WRITER} )

set( HEADERS_GENERATED_1_1_COMMON
    "generated/v1_1/common/OscConstantsV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_1_COMMON} )

set( HEADERS_GENERATED_1_1_CHECKER
    "generated/v1_1/checker/IScenarioCheckerV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_1_CHECKER} )

set( HEADERS_GENERATED_1_1_CHECKER_MODEL
    "generated/v1_1/checker/model/CardinalityCheckerRulesV1_1.h"
    "generated/v1_1/checker/model/CardinalityCheckerHelperV1_1.h"
    "generated/v1_1/checker/model/UnionCheckerRulesV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_1_CHECKER_MODEL} )

set( HEADERS_GENERATED_1_1_CHECKER_IMPL
    "generated/v1_1/checker/impl/ScenarioCheckerImplV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_1_CHECKER_IMPL} )

set( HEADERS_GENERATED_1_1_CHECKER_RANGE
    "generated/v1_1/checker/range/RangeCheckerRulesV1_1.h"
    "generated/v1_1/checker/range/RangeCheckerHelperV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_1_CHECKER_RANGE} )

set( HEADERS_GENERATED_1_1_CATALOG
    "generated/v1_1/catalog/CatalogHelperV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_1_CATALOG} )

set( HEADERS_GENERATED_1_1_IMPL
    "generated/v1_1/impl/ApiClassImplV1_1.h"
    "generated/v1_1/impl/OpenScenarioWriterFactoryImplV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_1_IMPL} )

set( HEADERS_GENERATED_1_1_XMLPARSER
    "generated/v1_1/xmlParser/XmlParsersV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_1_XMLPARSER} )

set( HEADERS_GENERATED_1_1_XMLEXPORTER
    "generated/v1_1/export/xml/OpenScenarioXmlExporterV1_1.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_1_XMLEXPORTER} )

endif (SUPPORT_OSC_1_1)

################################################
## V1_2
################################
if (SUPPORT_OSC_1_2)
# Headers hand crafted
set( HEADERS_LOADER_1_2
    "src/v1_2/loader/OpenScenarioProcessingHelperV1_2.h"
    "src/v1_2/loader/XmlScenarioImportLoaderV1_2.h"
    "src/v1_2/loader/XmlScenarioLoaderFactoryV1_2.h"
    "src/v1_2/loader/XmlScenarioLoaderV1_2.h"
    "src/v1_2/loader/XmlScenarioImportLoaderFactoryV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_LOADER_1_2} )

set( HEADERS_EXPRESSION_1_2
    "src/v1_2/expression/ExpressionResolverV1_2.h"
    "src/v1_2/expression/ExpressionResolverStackV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_EXPRESSION_1_2} )

set( HEADERS_PARSER_1_2
    "src/v1_2/parser/CatalogReferenceParserContextV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_PARSER_1_2} )

set( HEADERS_CHECKER_1_2
    "src/v1_2/checker/VersionCheckerRuleV1_2.h"
    "src/v1_2/checker/ParameterDeclarationCheckerV1_2.h"
    "src/v1_2/checker/VariableCheckerV1_2.h"
    "src/v1_2/checker/DeprecatedCheckerV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_CHECKER_1_2} )

################################
# Headers generated
set( HEADERS_GENERATED_1_2_API
    "generated/v1_2/api/EnumerationsV1_2.h"
    "generated/v1_2/api/ApiClassInterfacesV1_2.h"
    "generated/v1_2/api/OscInterfacesV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_2_API} )

set( HEADERS_GENERATED_1_2_API_WRITER
    "generated/v1_2/api/writer/ApiClassWriterInterfacesV1_2.h"
    "generated/v1_2/api/writer/ApiWriterInterfacesV1_2.h"
    "generated/v1_2/api/writer/IOpenScenarioWriterFactoryV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_2_API_WRITER} )

set( HEADERS_GENERATED_1_2_COMMON
    "generated/v1_2/common/OscConstantsV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_2_COMMON} )

set( HEADERS_GENERATED_1_2_CHECKER
    "generated/v1_2/checker/IScenarioCheckerV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_2_CHECKER} )

set( HEADERS_GENERATED_1_2_CHECKER_MODEL
    "generated/v1_2/checker/model/CardinalityCheckerRulesV1_2.h"
    "generated/v1_2/checker/model/CardinalityCheckerHelperV1_2.h"
    "generated/v1_2/checker/model/UnionCheckerRulesV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_2_CHECKER_MODEL} )

set( HEADERS_GENERATED_1_2_CHECKER_IMPL
    "generated/v1_2/checker/impl/ScenarioCheckerImplV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_2_CHECKER_IMPL} )

set( HEADERS_GENERATED_1_2_CHECKER_RANGE
    "generated/v1_2/checker/range/RangeCheckerRulesV1_2.h"
    "generated/v1_2/checker/range/RangeCheckerHelperV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_2_CHECKER_RANGE} )

set( HEADERS_GENERATED_1_2_CATALOG
    "generated/v1_2/catalog/CatalogHelperV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_2_CATALOG} )

set( HEADERS_GENERATED_1_2_IMPL
    "generated/v1_2/impl/ApiClassImplV1_2.h"
    "generated/v1_2/impl/OpenScenarioWriterFactoryImplV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_2_IMPL} )

set( HEADERS_GENERATED_1_2_XMLPARSER
    "generated/v1_2/xmlParser/XmlParsersV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_2_XMLPARSER} )

set( HEADERS_GENERATED_1_2_XMLEXPORTER
    "generated/v1_2/export/xml/OpenScenarioXmlExporterV1_2.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_2_XMLEXPORTER} )
endif (SUPPORT_OSC_1_2)

################################################
## V1_3
################################
if (SUPPORT_OSC_1_3)
# Headers hand crafted
set( HEADERS_LOADER_1_3
    "src/v1_3/loader/OpenScenarioProcessingHelperV1_3.h"
    "src/v1_3/loader/XmlScenarioImportLoaderV1_3.h"
    "src/v1_3/loader/XmlScenarioLoaderFactoryV1_3.h"
    "src/v1_3/loader/XmlScenarioLoaderV1_3.h"
    "src/v1_3/loader/XmlScenarioImportLoaderFactoryV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_LOADER_1_3} )

set( HEADERS_EXPRESSION_1_3
    "src/v1_3/expression/ExpressionResolverV1_3.h"
    "src/v1_3/expression/ExpressionResolverStackV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_EXPRESSION_1_3} )

set( HEADERS_PARSER_1_3
    "src/v1_3/parser/CatalogReferenceParserContextV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_PARSER_1_3} )

set( HEADERS_CHECKER_1_3
    "src/v1_3/checker/VersionCheckerRuleV1_3.h"
    "src/v1_3/checker/ParameterDeclarationCheckerV1_3.h"
    "src/v1_3/checker/VariableCheckerV1_3.h"
    "src/v1_3/checker/DeprecatedCheckerV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_CHECKER_1_3} )

################################
# Headers generated
set( HEADERS_GENERATED_1_3_API
    "generated/v1_3/api/EnumerationsV1_3.h"
    "generated/v1_3/api/ApiClassInterfacesV1_3.h"
    "generated/v1_3/api/OscInterfacesV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_3_API} )

set( HEADERS_GENERATED_1_3_API_WRITER
    "generated/v1_3/api/writer/ApiClassWriterInterfacesV1_3.h"
    "generated/v1_3/api/writer/ApiWriterInterfacesV1_3.h"
    "generated/v1_3/api/writer/IOpenScenarioWriterFactoryV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_3_API_WRITER} )

set( HEADERS_GENERATED_1_3_COMMON
    "generated/v1_3/common/OscConstantsV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_3_COMMON} )

set( HEADERS_GENERATED_1_3_CHECKER
    "generated/v1_3/checker/IScenarioCheckerV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_3_CHECKER} )

set( HEADERS_GENERATED_1_3_CHECKER_MODEL
    "generated/v1_3/checker/model/CardinalityCheckerRulesV1_3.h"
    "generated/v1_3/checker/model/CardinalityCheckerHelperV1_3.h"
    "generated/v1_3/checker/model/UnionCheckerRulesV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_3_CHECKER_MODEL} )

set( HEADERS_GENERATED_1_3_CHECKER_IMPL
    "generated/v1_3/checker/impl/ScenarioCheckerImplV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_3_CHECKER_IMPL} )

set( HEADERS_GENERATED_1_3_CHECKER_RANGE
    "generated/v1_3/checker/range/RangeCheckerRulesV1_3.h"
    "generated/v1_3/checker/range/RangeCheckerHelperV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_3_CHECKER_RANGE} )

set( HEADERS_GENERATED_1_3_CATALOG
    "generated/v1_3/catalog/CatalogHelperV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_3_CATALOG} )

set( HEADERS_GENERATED_1_3_IMPL
    "generated/v1_3/impl/ApiClassImplV1_3.h"
    "generated/v1_3/impl/OpenScenarioWriterFactoryImplV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_3_IMPL} )

set( HEADERS_GENERATED_1_3_XMLPARSER
    "generated/v1_3/xmlParser/XmlParsersV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_3_XMLPARSER} )

set( HEADERS_GENERATED_1_3_XMLEXPORTER
    "generated/v1_3/export/xml/OpenScenarioXmlExporterV1_3.h"
)
set( ALL_HEADERS ${ALL_HEADERS} ${HEADERS_GENERATED_1_3_XMLEXPORTER} )
endif (SUPPORT_OSC_1_3)