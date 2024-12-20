################################################################
# Collect all sources
set( ALL_SOURCES "" )
# Regex case sensitive
# Regex create:
# s: set\([ ]*([a-zA-Z0-9_]+)[^\)]+\n[.\n]*\)
# r: $0\nset( ALL_SOURCES ${ALL_SOURCES} ${$1} )
# Regex delete:
# s: ^set\( ALL_SOURCES \${ALL_SOURCES} .*\n
# r: 
################################################################
# Source files in common, hand crafted
set( SOURCES
    "../externalLibs/TinyXML2/tinyxml2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES} )

set( SOURCES_API
    "src/api/KeyNotSupportedException.cpp"
    "src/api/SimpleType.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_API} )

set( SOURCES_COMMON
    "src/common/ContentMessage.cpp"
    "src/common/DateTime.cpp"
    "src/common/ErrorLevel.cpp"
    "src/common/FileContentMessage.cpp"
    "src/common/SimpleMessageLogger.cpp"
    "src/common/Textmarker.cpp"
    "src/common/TreeContentMessage.cpp"
    "src/common/TreeMessageLogger.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_COMMON} )

set( SOURCES_EXPORT
    "src/export/XmlExportHelper.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_EXPORT} )

set( SOURCES_CHECKER
    "src/checker/RangeCheckerRule.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_CHECKER} )

set( SOURCES_CHECKER_TREE
    "src/checker/tree/BaseTreeContext.cpp"
    "src/checker/tree/ContentMessage.cpp"
    "src/checker/tree/PropertyTreeContext.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_CHECKER_TREE} )

set( SOURCES_CHECKER_MODEL
    "src/checker/model/CardinalityCheckerRule.cpp"
    "src/checker/model/ModelCheckerRule.cpp"
    "src/checker/model/UnionCheckerRule.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_CHECKER_MODEL} )

set( SOURCES_IMPL
    "src/impl/BaseImpl.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_IMPL} )

set( SOURCES_LOADER
    "src/loader/FileResourceLocator.cpp"
    "src/loader/ResourceNotFoundException.cpp"
    "src/loader/ScenarioLoaderException.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_LOADER} )

set( SOURCES_PARAMETER
    "src/parameter/ParameterValue.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_PARAMETER} )

set( SOURCES_PARSER
    "src/parser/WrappedListParser.cpp"
    "src/parser/XmlModelGroupParser.cpp"
    "src/parser/ParserContext.cpp"
    "src/parser/ParserOptions.cpp"
    "src/parser/ParserHelper.cpp"
    "src/parser/XmlParserException.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_PARSER} )

set( SOURCES_PARSER_TYPE # SOURCES_TYPE_PARSER_
    "src/parser/type/XmlComplexTypeParser.cpp"
    "src/parser/type/XmlGroupParser.cpp"
    "src/parser/type/XmlSimpleContentParser.cpp"
    
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_PARSER_TYPE} )

set( SOURCES_PARSER_MODEL_GROUP # SOURCES_MODELGROUP_PARSER_
    "src/parser/modelgroup/XmlAllParser.cpp"
    "src/parser/modelgroup/XmlChoiceParser.cpp"
    "src/parser/modelgroup/XmlSequenceParser.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_PARSER_MODEL_GROUP} )

set( SOURCES_SIMPLE_STRUCT
    "src/simple/struct/IndexedElement.cpp"
    "src/simple/struct/XmlToSimpleNodeConverter.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_SIMPLE_STRUCT} )

set( SOURCES_XMLINDEXER
    "src/xmlIndexer/AttributeInfo.cpp"
    "src/xmlIndexer/AttributeNode.cpp"
    "src/xmlIndexer/ElementNode.cpp"
    "src/xmlIndexer/Position.cpp"
    "src/xmlIndexer/PositionIndex.cpp"
    "src/xmlIndexer/PositionNode.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_XMLINDEXER} )


################################################
## V1_0
################################
if (SUPPORT_OSC_1_0)
# Sources hand crafted
set( SOURCES_V1_0_LOADER
    "src/v1_0/loader/OpenScenarioProcessingHelperV1_0.cpp"
    "src/v1_0/loader/XmlScenarioImportLoaderFactoryV1_0.cpp"
    "src/v1_0/loader/XmlScenarioImportLoaderV1_0.cpp"
    "src/v1_0/loader/XmlScenarioLoaderFactoryV1_0.cpp"
    "src/v1_0/loader/XmlScenarioLoaderV1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_0_LOADER} )

set( SOURCES_V1_0_PARAMETER
    "src/v1_0/parameter/ParameterResolverV1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_0_PARAMETER} )

set( SOURCES_V1_0_PARSER
    "src/v1_0/parser/CatalogReferenceParserContextV1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_0_PARSER} )

set( SOURCES_V1_0_CHECKER
    "src/v1_0/checker/ParameterDeclarationCheckerV1_0.cpp"
    "src/v1_0/checker/VersionCheckerRuleV1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_0_CHECKER} )

set( SOURCES_V1_0_CATALOG
    "src/v1_0/catalog/CatalogCacheV1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_0_CATALOG} )

################################
# Sources generated
set( SOURCES_GENERATED_1_0_API
    "generated/v1_0/api/EnumerationsV1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_0_API} )

set( SOURCES_GENERATED_1_0_CHECKER_MODEL
    "generated/v1_0/checker/model/UnionCheckerRulesV1_0.cpp"
    "generated/v1_0/checker/model/CardinalityCheckerRulesV1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_0_CHECKER_MODEL} )

set( SOURCES_GENERATED_1_0_CHECKER_IMPL
    "generated/v1_0/checker/impl/ScenarioCheckerImplV1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_0_CHECKER_IMPL} )

set( SOURCES_GENERATED_1_0_CHECKER_RANGE
    "generated/v1_0/checker/range/RangeCheckerRulesV1_0.cpp"
    "generated/v1_0/checker/range/RangeCheckerHelperV1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_0_CHECKER_RANGE} )

set( SOURCES_GENERATED_1_0_CATALOG
    "generated/v1_0/catalog/CatalogHelperV1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_0_CATALOG} )

set( SOURCES_GENERATED_1_0_IMPL
    "generated/v1_0/impl/ApiClassImplV1_0.cpp"
    "generated/v1_0/impl/OpenScenarioWriterFactoryImplV1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_0_IMPL} )

set( SOURCES_GENERATED_1_0_XMLPARSER
    "generated/v1_0/xmlParser/XmlParsers1V1_0.cpp"
    "generated/v1_0/xmlParser/XmlParsers2V1_0.cpp"
    "generated/v1_0/xmlParser/XmlParsers3V1_0.cpp"
    "generated/v1_0/xmlParser/XmlParsers4V1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_0_XMLPARSER} )

set( SOURCES_GENERATED_1_0_XMLEXPORTER # SOURCES_GENERATED_1_0_XMLEXPORTER_
    "generated/v1_0/export/xml/OpenScenarioXmlExporterV1_0.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_0_XMLEXPORTER} )

endif (SUPPORT_OSC_1_0)

################################################
## V1_1
################################
if (SUPPORT_OSC_1_1)
# Sources hand crafted
set( SOURCES_V1_1_LOADER
    "src/v1_1/loader/OpenScenarioProcessingHelperV1_1.cpp"
    "src/v1_1/loader/XmlScenarioImportLoaderFactoryV1_1.cpp"
    "src/v1_1/loader/XmlScenarioImportLoaderV1_1.cpp"
    "src/v1_1/loader/XmlScenarioLoaderFactoryV1_1.cpp"
    "src/v1_1/loader/XmlScenarioLoaderV1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_1_LOADER} )

set( SOURCES_V1_1_EXPRESSION
    "src/v1_1/expression/ExpressionResolverV1_1.cpp"
    "src/v1_1/expression/ExpressionResolverStackV1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_1_EXPRESSION} )
set( SOURCES_V1_1_PARSER
    "src/v1_1/parser/CatalogReferenceParserContextV1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_1_PARSER} )

set( SOURCES_V1_1_CHECKER
    "src/v1_1/checker/ParameterDeclarationCheckerV1_1.cpp"
    "src/v1_1/checker/VersionCheckerRuleV1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_1_CHECKER} )

set( SOURCES_V1_1_CATALOG
    "src/v1_1/catalog/CatalogCacheV1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_1_CATALOG} )

################################
# Sources generated
set( SOURCES_GENERATED_1_1_API
    "generated/v1_1/api/EnumerationsV1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_1_API} )

set( SOURCES_GENERATED_1_1_CHECKER_MODEL
    "generated/v1_1/checker/model/UnionCheckerRulesV1_1.cpp"
    "generated/v1_1/checker/model/CardinalityCheckerRulesV1_1.cpp"
    "generated/v1_1/checker/model/CardinalityCheckerHelperV1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_1_CHECKER_MODEL} )

set( SOURCES_GENERATED_1_1_CHECKER_IMPL
   "generated/v1_1/checker/impl/ScenarioCheckerImplV1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_1_CHECKER_IMPL} )

set( SOURCES_GENERATED_1_1_CHECKER_RANGE
    "generated/v1_1/checker/range/RangeCheckerRulesV1_1.cpp"
    "generated/v1_1/checker/range/RangeCheckerHelperV1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_1_CHECKER_RANGE} )

set( SOURCES_GENERATED_1_1_CATALOG
    "generated/v1_1/catalog/CatalogHelperV1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_1_CATALOG} )

set( SOURCES_GENERATED_1_1_IMPL
    "generated/v1_1/impl/ApiClassImplV1_1.cpp"
    "generated/v1_1/impl/OpenScenarioWriterFactoryImplV1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_1_IMPL} )

set( SOURCES_GENERATED_1_1_XMLPARSER
    "generated/v1_1/xmlParser/XmlParsers1V1_1.cpp"
    "generated/v1_1/xmlParser/XmlParsers2V1_1.cpp"
    "generated/v1_1/xmlParser/XmlParsers3V1_1.cpp"
    "generated/v1_1/xmlParser/XmlParsers4V1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_1_XMLPARSER} )

set( SOURCES_GENERATED_1_1_XMLEXPORTER # SOURCES_GENERATED_1_1_XMLEXPORTER_
    "generated/v1_1/export/xml/OpenScenarioXmlExporterV1_1.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_1_XMLEXPORTER} )

endif (SUPPORT_OSC_1_1)

################################################
## V1_2
################################
if (SUPPORT_OSC_1_2)
# Sources hand crafted
set( SOURCES_V1_2_LOADER
    "src/v1_2/loader/OpenScenarioProcessingHelperV1_2.cpp"
    "src/v1_2/loader/XmlScenarioImportLoaderFactoryV1_2.cpp"
    "src/v1_2/loader/XmlScenarioImportLoaderV1_2.cpp"
    "src/v1_2/loader/XmlScenarioLoaderFactoryV1_2.cpp"
    "src/v1_2/loader/XmlScenarioLoaderV1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_2_LOADER} )

set( SOURCES_V1_2_EXPRESSION
    "src/v1_2/expression/ExpressionResolverV1_2.cpp"
    "src/v1_2/expression/ExpressionResolverStackV1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_2_EXPRESSION} )
set( SOURCES_V1_2_PARSER
    "src/v1_2/parser/CatalogReferenceParserContextV1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_2_PARSER} )

set( SOURCES_V1_2_CHECKER
    "src/v1_2/checker/ParameterDeclarationCheckerV1_2.cpp"
    "src/v1_2/checker/VariableCheckerV1_2.cpp"
    "src/v1_2/checker/DeprecatedCheckerV1_2.cpp"
    "src/v1_2/checker/VersionCheckerRuleV1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_2_CHECKER} )

set( SOURCES_V1_2_CATALOG
    "src/v1_2/catalog/CatalogCacheV1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_2_CATALOG} )

################################
# Sources generated
set( SOURCES_GENERATED_1_2_API
    "generated/v1_2/api/EnumerationsV1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_2_API} )

set( SOURCES_GENERATED_1_2_CHECKER_MODEL
    "generated/v1_2/checker/model/UnionCheckerRulesV1_2.cpp"
    "generated/v1_2/checker/model/CardinalityCheckerRulesV1_2.cpp"
    "generated/v1_2/checker/model/CardinalityCheckerHelperV1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_2_CHECKER_MODEL} )

set( SOURCES_GENERATED_1_2_CHECKER_IMPL
   "generated/v1_2/checker/impl/ScenarioCheckerImplV1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_2_CHECKER_IMPL} )

set( SOURCES_GENERATED_1_2_CHECKER_RANGE
    "generated/v1_2/checker/range/RangeCheckerRulesV1_2.cpp"
    "generated/v1_2/checker/range/RangeCheckerHelperV1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_2_CHECKER_RANGE} )

set( SOURCES_GENERATED_1_2_CATALOG
    "generated/v1_2/catalog/CatalogHelperV1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_2_CATALOG} )

set( SOURCES_GENERATED_1_2_IMPL
    "generated/v1_2/impl/ApiClassImplV1_2.cpp"
    "generated/v1_2/impl/OpenScenarioWriterFactoryImplV1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_2_IMPL} )

set( SOURCES_GENERATED_1_2_XMLPARSER
    "generated/v1_2/xmlParser/XmlParsers1V1_2.cpp"
    "generated/v1_2/xmlParser/XmlParsers2V1_2.cpp"
    "generated/v1_2/xmlParser/XmlParsers3V1_2.cpp"
    "generated/v1_2/xmlParser/XmlParsers4V1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_2_XMLPARSER} )

set( SOURCES_GENERATED_1_2_XMLEXPORTER # SOURCES_GENERATED_1_2_XMLEXPORTER_
    "generated/v1_2/export/xml/OpenScenarioXmlExporterV1_2.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_2_XMLEXPORTER} )

endif (SUPPORT_OSC_1_2)

################################################
## V1_3
################################
if (SUPPORT_OSC_1_3)
# Sources hand crafted
set( SOURCES_V1_3_LOADER
    "src/v1_3/loader/OpenScenarioProcessingHelperV1_3.cpp"
    "src/v1_3/loader/XmlScenarioImportLoaderFactoryV1_3.cpp"
    "src/v1_3/loader/XmlScenarioImportLoaderV1_3.cpp"
    "src/v1_3/loader/XmlScenarioLoaderFactoryV1_3.cpp"
    "src/v1_3/loader/XmlScenarioLoaderV1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_3_LOADER} )

set( SOURCES_V1_3_EXPRESSION
    "src/v1_3/expression/ExpressionResolverV1_3.cpp"
    "src/v1_3/expression/ExpressionResolverStackV1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_3_EXPRESSION} )
set( SOURCES_V1_3_PARSER
    "src/v1_3/parser/CatalogReferenceParserContextV1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_3_PARSER} )

set( SOURCES_V1_3_CHECKER
    "src/v1_3/checker/ParameterDeclarationCheckerV1_3.cpp"
    "src/v1_3/checker/VariableCheckerV1_3.cpp"
    "src/v1_3/checker/DeprecatedCheckerV1_3.cpp"
    "src/v1_3/checker/VersionCheckerRuleV1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_3_CHECKER} )

set( SOURCES_V1_3_CATALOG
    "src/v1_3/catalog/CatalogCacheV1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_V1_3_CATALOG} )

################################
# Sources generated
set( SOURCES_GENERATED_1_3_API
    "generated/v1_3/api/EnumerationsV1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_3_API} )

set( SOURCES_GENERATED_1_3_CHECKER_MODEL
    "generated/v1_3/checker/model/UnionCheckerRulesV1_3.cpp"
    "generated/v1_3/checker/model/CardinalityCheckerRulesV1_3.cpp"
    "generated/v1_3/checker/model/CardinalityCheckerHelperV1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_3_CHECKER_MODEL} )

set( SOURCES_GENERATED_1_3_CHECKER_IMPL
   "generated/v1_3/checker/impl/ScenarioCheckerImplV1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_3_CHECKER_IMPL} )

set( SOURCES_GENERATED_1_3_CHECKER_RANGE
    "generated/v1_3/checker/range/RangeCheckerRulesV1_3.cpp"
    "generated/v1_3/checker/range/RangeCheckerHelperV1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_3_CHECKER_RANGE} )

set( SOURCES_GENERATED_1_3_CATALOG
    "generated/v1_3/catalog/CatalogHelperV1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_3_CATALOG} )

set( SOURCES_GENERATED_1_3_IMPL
    "generated/v1_3/impl/ApiClassImplV1_3.cpp"
    "generated/v1_3/impl/OpenScenarioWriterFactoryImplV1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_3_IMPL} )

set( SOURCES_GENERATED_1_3_XMLPARSER
    "generated/v1_3/xmlParser/XmlParsers1V1_3.cpp"
    "generated/v1_3/xmlParser/XmlParsers2V1_3.cpp"
    "generated/v1_3/xmlParser/XmlParsers3V1_3.cpp"
    "generated/v1_3/xmlParser/XmlParsers4V1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_3_XMLPARSER} )

set( SOURCES_GENERATED_1_3_XMLEXPORTER # SOURCES_GENERATED_1_3_XMLEXPORTER_
    "generated/v1_3/export/xml/OpenScenarioXmlExporterV1_3.cpp"
)
set( ALL_SOURCES ${ALL_SOURCES} ${SOURCES_GENERATED_1_3_XMLEXPORTER} )

endif (SUPPORT_OSC_1_3)