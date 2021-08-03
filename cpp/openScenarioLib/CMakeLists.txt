################################################################
cmake_minimum_required( VERSION 3.8.2 )
project( OpenScenarioLib )
message("${PROJECT_NAME}")

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
  add_definitions( -DEXPORT_OPENSCENARIOLIB )
  set( LIB_TYPE "SHARED" )
else()
  set( LIB_TYPE "STATIC" )
endif()


################################################################
# Update rc file
RAC_GET_PRODUCT_INFO("${CMAKE_CURRENT_SOURCE_DIR}/productInfo.txt")
configure_file("${CMAKE_SOURCE_DIR}/common/rc.template" "${CMAKE_CURRENT_SOURCE_DIR}/rc/${PROJECT_NAME}.rc")

################################################################
# Include folders
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/catalog )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/v1_0/parser )

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

#external files
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/Filesystem)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/TinyXML2 )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/ANTLR4-Cpp-src/runtime/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/ANTLR4-Cpp-src/runtime/src/atn )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/ANTLR4-Cpp-src/runtime/src/dfa )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/ANTLR4-Cpp-src/runtime/src/misc )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/ANTLR4-Cpp-src/runtime/src/support )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/ANTLR4-Cpp-src/runtime/src/tree )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/ANTLR4-Cpp-src/runtime/src/tree/pattern )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../externalLibs/ANTLR4-Cpp-src/runtime/src/tree/xpath )

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
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/modelgroup )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/type )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/simple/struct )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/xmlIndexer )


################################################################
# Source files
set( SOURCES
  ${SOURCES}
    "../externalLibs/TinyXML2/tinyxml2.cpp"
)

set( SOURCES_GENERATED_API
  ${SOURCES_GENERATED_API}
  "generated/v1_0/api/EnumerationsV1_0.cpp"
)

set( SOURCES_GENERATED_CHECKER_IMPL
  ${SOURCES_GENERATED_CHECKER_IMPL}
  "generated/v1_0/checker/impl/ScenarioCheckerImplV1_0.cpp"
)

set( SOURCES_GENERATED_CHECKER_RANGE
  ${SOURCES_GENERATED_CHECKER_RANGE}
  "generated/v1_0/checker/range/RangeCheckerRulesV1_0.cpp"
)

set( SOURCES_GENERATED_IMPL
  ${SOURCES_GENERATED_IMPL}
  "generated/v1_0/impl/ApiClassImplV1_0.cpp"
)

set( SOURCES_GENERATED_XMLPARSER
  ${SOURCES_GENERATED_XMLPARSER}
  "generated/v1_0/xmlParser/XmlParsers1V1_0.cpp"
  "generated/v1_0/xmlParser/XmlParsers2V1_0.cpp"
  "generated/v1_0/xmlParser/XMLParser.cpp"
  "generated/v1_0/xmlParser/XMLLexer.cpp"
)

set( SOURCES_LOADER
  ${SOURCES_LOADER}
  "src/v1_0/loader/XmlScenarioLoader.cpp"
  )

################################################################
# Header files
set( HEADERS
  ${HEADERS}
)

set( HEADERS_COMMON_API
  ${HEADERS_COMMON_API}
  "src/api/IOpenScenarioModelElement.h"
  "src/api/IOpenScenarioElementWriter.h"
  "src/api/IOpenScenarioFlexElement.h"
  "src/api/KeyNotSupportedException.h"
  "src/api/SimpleType.h"
)

set( HEADERS_COMMON_COMMON
  ${HEADERS_COMMON_COMMON}
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
  ${HEADERS_COMMON_EXPORT}
  "src/export/XmlExportHelper.h"
)


set( HEADERS_COMMON_CHECKER
  ${HEADERS_COMMON_CHECKER}
  "src/checker/ICheckerRule.h"
  "src/checker/RangeCheckerRule.h"
)

set( HEADERS_COMMON_CHECKER_TREE
  ${HEADERS_COMMON_CHECKER_TREE}
  "src/checker/tree/BaseTreeContext.h"
  "src/checker/tree/ITreeContext.h"
  "src/checker/tree/PropertyTreeContext.h"
)

set( HEADERS_COMMON_CHECKER_MODEL
  ${HEADERS_COMMON_CHECKER_MODEL}
  "src/checker/model/UnionCheckerRule.h"
  "src/checker/model/ModelCheckerRule.h"
  "src/checker/model/CardinalityCheckerRule.h"
)

set( HEADERS_COMMON_IMPL
  ${HEADERS_COMMON_IMPL}
  "src/impl/NamedReferenceProxy.h"
  "src/impl/BaseImpl.h"
)

set( HEADERS_COMMON_PARAMETER
  ${HEADERS_COMMON_PARAMETER}
  "src/parameter/ParameterValue.h"
  "src/parameter/IParameterizedObject.h"
)

set( HEADERS_COMMON_PARSER
  ${HEADERS_COMMON_PARSER}
  "src/parser/ParserHelper.h"
  "src/parser/ParserContext.h"
  "src/parser/WrappedListParser.h"
  "src/parser/XmlParserBase.h"
  "src/parser/XmlParserException.h"
  "src/parser/XmlModelGroupParser.h"
)

set( HEADERS_COMMON_PARSER_MODEL_GROUP
  ${HEADERS_COMMON_PARSER_MODEL_GROUP}
  "src/parser/modelgroup/XmlAllParser.h"
  "src/parser/modelgroup/XmlChoiceParser.h"
  "src/parser/modelgroup/XmlSequenceParser.h"
)

set( HEADERS_COMMON_PARSER_TYPE
  ${HEADERS_COMMON_PARSER_TYPE}
  "src/parser/type/IXmlTypeParser.h"
  "src/parser/type/XmlComplexTypeParser.h"
  "src/parser/type/XmlGroupParser.h"
  "src/parser/type/XmlSimpleContentParser.h"
)

set( HEADERS_COMMON_XMLINDEXER
  ${HEADERS_COMMON_XMLINDEXER}
  "src/xmlIndexer/AttributeNode.h"
  "src/xmlIndexer/ElementNode.h"
  "src/xmlIndexer/Position.h"
  "src/xmlIndexer/PositionIndex.h"
  "src/xmlIndexer/PositionNode.h"
)

set( HEADERS_COMMON_SIMPLE_STRUCT
  ${HEADERS_COMMON_SIMPLE_STRUCT}
  "src/simple/struct/IndexedElement.h"
  "src/simple/struct/XmlToSimpleNodeConverter.h"
)

set( HEADERS_COMMON_LOADER
  ${HEADERS_COMMON_LOADER}
  "src/loader/IResourceLocator.h"
  "src/loader/IScenarioLoaderFactory.h"
  "src/loader/IScenarioLoader.h"
  "src/loader/ResourceNotFoundException.h"
  "src/loader/FileResourceLocator.h"
  "src/loader/ScenarioLoaderException.h"
)

set( HEADERS_CATALOG
  ${HEADERS_CATALOG}
  "src/v1_0/catalog/ICatalogReferenceProvider.h"
  "src/v1_0/catalog/CatalogCache.h"
)

set( HEADERS_LOADER
  ${HEADERS_LOADER}
  "src/v1_0/loader/OpenScenarioProcessingHelper.h"
  "src/v1_0/loader/XmlScenarioImportLoader.h"
  "src/v1_0/loader/XmlScenarioLoaderFactory.h"
  "src/v1_0/loader/XmlScenarioLoader.h"
  "src/v1_0/loader/XmlScenarioImportLoaderFactory.h"
)

set( HEADERS_PARAMETER
  ${HEADERS_PARAMETER}
  "src/v1_0/parameter/ParameterResolver.h"
)

set( HEADERS_PARSER
  ${HEADERS_PARSER}
  "src/v1_0/parser/CatalogReferenceParserContext.h"
)

set( HEADERS_CHECKER
  ${HEADERS_CHECKER}
  "src/v1_0/checker/VersionCheckerRule.h"
  "src/v1_0/checker/ParameterDeclarationChecker.h"
)

set( HEADERS_GENERATED_API
  ${HEADERS_GENERATED_API}
  "generated/v1_0/api/EnumerationsV1_0.h"
  "generated/v1_0/api/ApiClassInterfacesV1_0.h"
  "generated/v1_0/api/OscInterfacesV1_0.h"
)

set( HEADERS_GENERATED_API_WRITER
  ${HEADERS_GENERATED_API_WRITER}
  "generated/v1_0/api/writer/ApiClassWriterInterfacesV1_0.h"
  "generated/v1_0/api/writer/ApiWriterInterfacesV1_0.h"
  "generated/v1_0/api/writer/IOpenScenarioWriterFactoryV1_0.h"
)

set( HEADERS_GENERATED_COMMON
  ${HEADERS_GENERATED_COMMON}
  "generated/v1_0/common/OscConstantsV1_0.h"
)

set( HEADERS_GENERATED_CHECKER
  ${HEADERS_GENERATED_CHECKER}
  "generated/v1_0/checker/IScenarioCheckerV1_0.h"
)

set( HEADERS_GENERATED_CHECKER_MODEL
  ${HEADERS_GENERATED_CHECKER_MODEL}
  "generated/v1_0/checker/model/CardinalityCheckerRulesV1_0.h"
  "generated/v1_0/checker/model/UnionCheckerRulesV1_0.h"
)

set( HEADERS_GENERATED_CHECKER_IMPL
  ${HEADERS_GENERATED_CHECKER_IMPL}
  "generated/v1_0/checker/impl/ScenarioCheckerImplV1_0.h"
)

set( HEADERS_GENERATED_CHECKER_RANGE
  ${HEADERS_GENERATED_CHECKER_RANGE}
  "generated/v1_0/checker/range/RangeCheckerRulesV1_0.h"
  "generated/v1_0/checker/range/RangeCheckerHelperV1_0.h"
)

set( HEADERS_GENERATED_CATALOG
  ${HEADERS_GENERATED_CATALOG}
  "generated/v1_0/catalog/CatalogHelperV1_0.h"
)

set( HEADERS_GENERATED_IMPL
  ${HEADERS_GENERATED_IMPL}
  "generated/v1_0/impl/ApiClassImplV1_0.h"
  "generated/v1_0/impl/OpenScenarioWriterFactoryImplV1_0.h"
)

set( HEADERS_GENERATED_XMLPARSER
  ${HEADERS_GENERATED_XMLPARSER}
  "generated/v1_0/xmlParser/XmlParsersV1_0.h"
  "generated/v1_0/xmlParser/XMLParser.h"
  "generated/v1_0/xmlParser/XMLLexer.h"
)

set( HEADERS_GENERATED_EXPORT_XML
  ${HEADERS_GENERATED_EXPORT_XML}
  "generated/v1_0/export/xml/OpenScenarioXmlExporterV1_0.h"
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
  source_group( Sources\\Generated\\Api FILES ${SOURCES_GENERATED_API} )
  source_group( Sources\\Generated\\Checker\\Impl FILES ${SOURCES_GENERATED_CHECKER_IMPL} )
  source_group( Sources\\Generated\\Checker\\Range FILES ${SOURCES_GENERATED_CHECKER_RANGE} )
  source_group( Sources\\Generated\\Impl FILES ${SOURCES_GENERATED_IMPL} )
  source_group( Sources\\Generated\\XmlParser FILES ${SOURCES_GENERATED_XMLPARSER} )
  source_group( Sources\\Loader FILES ${SOURCES_LOADER} )

  # Groups for header files
  source_group( Headers FILES ${HEADERS} )

  source_group( Headers\\Common\\Api FILES ${HEADERS_COMMON_API} )
  source_group( Headers\\Common\\Common FILES ${HEADERS_COMMON_COMMON})
  source_group( Headers\\Common\\Export FILES ${HEADERS_COMMON_EXPORT})
  source_group( Headers\\Common\\Checker FILES ${HEADERS_COMMON_CHECKER})
  source_group( Headers\\Common\\Checker\\Tree FILES ${HEADERS_COMMON_CHECKER_TREE})
  source_group( Headers\\Common\\Checker\\Model FILES ${HEADERS_COMMON_CHECKER_MODEL})
  source_group( Headers\\Common\\Impl FILES ${HEADERS_COMMON_IMPL})
  source_group( Headers\\Common\\Parameter FILES ${HEADERS_COMMON_PARAMETER})
  source_group( Headers\\Common\\Parser FILES ${HEADERS_COMMON_PARSER})
  source_group( Headers\\Common\\Parser\\ModelGroup FILES ${HEADERS_COMMON_PARSER_MODEL_GROUP})
  source_group( Headers\\Common\\Parser\\Type FILES ${HEADERS_COMMON_PARSER_TYPE})
  source_group( Headers\\Common\\XmlIndexer FILES ${HEADERS_COMMON_XMLINDEXER})
  source_group( Headers\\Common\\Simple\\Struct FILES ${HEADERS_COMMON_SIMPLE_STRUCT})
  source_group( Headers\\Common\\Loaders FILES ${HEADERS_COMMON_LOADER})

  source_group( Headers\\Catalog FILES ${HEADERS_CATALOG})
  source_group( Headers\\Loaders FILES ${HEADERS_LOADER})
  source_group( Headers\\Parameter FILES ${HEADERS_PARAMETER})
  source_group( Headers\\Parser FILES ${HEADERS_PARSER})
  source_group( Headers\\Checker FILES ${HEADERS_CHECKER})

  source_group( Headers\\Generated\\Api FILES ${HEADERS_GENERATED_API} )
  source_group( Headers\\Generated\\Api\\Writer FILES ${HEADERS_GENERATED_API_WRITER} )
  source_group( Headers\\Generated\\Common FILES ${HEADERS_GENERATED_COMMON} )
  source_group( Headers\\Generated\\Checker FILES ${HEADERS_GENERATED_CHECKER} )
  source_group( Headers\\Generated\\Checker\\Model FILES ${HEADERS_GENERATED_CHECKER_MODEL} )
  source_group( Headers\\Generated\\Checker\\Impl FILES ${HEADERS_GENERATED_CHECKER_IMPL} )
  source_group( Headers\\Generated\\Checker\\Range FILES ${HEADERS_GENERATED_CHECKER_RANGE} )
  source_group( Headers\\Generated\\Catalog FILES ${HEADERS_GENERATED_CATALOG} )
  source_group( Headers\\Generated\\Impl FILES ${HEADERS_GENERATED_IMPL} )
  source_group( Headers\\Generated\\XmlParser FILES ${HEADERS_GENERATED_XMLPARSER} )
  source_group( Headers\\Generated\\Export\\Xml FILES ${HEADERS_GENERATED_EXPORT_XML} )

  # Groups for resources files
  source_group( Resources FILES ${RESOURCE_FILES} )
endif()

message(STATUS "lib binding: ${LIB_TYPE}" )

################################################################
# Generate the library
add_library ( ${PROJECT_NAME} # ${LIB_TYPE}

              ${SOURCES} 

              ${SOURCES_GENERATED_API} ${SOURCES_GENERATED_CHECKER_IMPL} ${SOURCES_GENERATED_CHECKER_RANGE} 
              ${SOURCES_GENERATED_IMPL} ${SOURCES_GENERATED_XMLPARSER} ${SOURCES_LOADER} 

              ${HEADERS}

              ${HEADERS_COMMON_API} ${HEADERS_COMMON_COMMON}  ${HEADERS_COMMON_EXPORT} ${HEADERS_COMMON_CHECKER_TREE} ${HEADERS_COMMON_CHECKER_MODEL} 
              ${HEADERS_COMMON_CHECKER} ${HEADERS_COMMON_IMPL} ${HEADERS_COMMON_PARAMETER} ${HEADERS_COMMON_PARSER} ${HEADERS_COMMON_PARSER_MODEL_GROUP} 
              ${HEADERS_COMMON_PARSER_TYPE} ${HEADERS_COMMON_XMLINDEXER} ${HEADERS_COMMON_SIMPLE_STRUCT} ${HEADERS_COMMON_LOADER}

              ${HEADERS_PARAMETER} ${HEADERS_PARSER} ${HEADERS_CATALOG} ${HEADERS_LOADER} ${HEADERS_CHECKER} 

              ${HEADERS_GENERATED_API} ${HEADERS_GENERATED_API_WRITER} ${HEADERS_GENERATED_COMMON} ${HEADERS_GENERATED_CHECKER} 
              ${HEADERS_GENERATED_CHECKER_MODEL} ${HEADERS_GENERATED_CHECKER_IMPL} ${HEADERS_GENERATED_CHECKER_RANGE} ${HEADERS_GENERATED_CATALOG} 
              ${HEADERS_GENERATED_IMPL} ${HEADERS_GENERATED_XMLPARSER}  ${HEADERS_GENERATED_EXPORT_XML}

              ${RESOURCE_FILES} )

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
