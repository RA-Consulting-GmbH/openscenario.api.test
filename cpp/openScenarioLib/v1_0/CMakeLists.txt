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
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/catalog )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parser )

#generated
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/api/writer )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/checker/model )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/checker/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/checker/range )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/catalog)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/xmlParser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/export/xml )

#external files
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/Filesystem)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/TinyXML2 )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/atn )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/dfa )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/misc )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/support )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/tree )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/tree/pattern )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../externalLibs/ANTLR4-Cpp-src/runtime/src/tree/xpath )

#version independent
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/checker/tree )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/checker/model )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/export )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/parser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/parser/modelgroup )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/parser/type )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/simple/struct )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common/xmlIndexer )


################################################################
# Source files
set( SOURCES
  ${SOURCES}
    "../../externalLibs/TinyXML2/tinyxml2.cpp"
)

set( SOURCES_GENERATED_API
  ${SOURCES_GENERATED_API}
  "generated/api/Enumerations.cpp"
)

set( SOURCES_GENERATED_CHECKER_IMPL
  ${SOURCES_GENERATED_CHECKER_IMPL}
  "generated/checker/impl/ScenarioCheckerImpl.cpp"
)

set( SOURCES_GENERATED_CHECKER_RANGE
  ${SOURCES_GENERATED_CHECKER_RANGE}
  "generated/checker/range/RangeCheckerRules.cpp"
)

set( SOURCES_GENERATED_IMPL
  ${SOURCES_GENERATED_IMPL}
  "generated/impl/ApiClassImpl.cpp"
)

set( SOURCES_GENERATED_XMLPARSER
  ${SOURCES_GENERATED_XMLPARSER}
  "generated/xmlParser/XmlParsers1.cpp"
  "generated/xmlParser/XmlParsers2.cpp"
  "generated/xmlParser/XMLParser.cpp"
  "generated/xmlParser/XMLLexer.cpp"
)

set( SOURCES_LOADER
  ${SOURCES_LOADER}
  "src/loader/XmlScenarioLoader.cpp"
  )

################################################################
# Header files
set( HEADERS
  ${HEADERS}
)

set( HEADERS_COMMON_API
  ${HEADERS_COMMON_API}
  "../common/api/IOpenScenarioModelElement.h"
  "../common/api/IOpenScenarioElementWriter.h"
  "../common/api/IOpenScenarioFlexElement.h"
  "../common/api/KeyNotSupportedException.h"
  "../common/api/SimpleType.h"
)

set( HEADERS_COMMON_COMMON
  ${HEADERS_COMMON_COMMON}
  "../common/common/INamedReference.h"
  "../common/common/ILocator.h"
  "../common/common/SimpleMessageLogger.h"
  "../common/common/DateTime.h"
  "../common/common/IParserMessageLogger.h"
  "../common/common/Textmarker.h"
  "../common/common/ErrorLevel.h"
  "../common/common/FileContentMessage.h"
  "../common/common/BaseMessageLogger.h"
  "../common/common/ContentMessage.h"
  "../common/common/IContentMessageLogger.h"
  "../common/common/ITreeMessageLogger.h"
  "../common/common/TreeContentMessage.h"
  "../common/common/TreeMessageLogger.h"
)

set( HEADERS_COMMON_EXPORT
  ${HEADERS_COMMON_EXPORT}
  "../common/export/XmlExportHelper.h"
)


set( HEADERS_COMMON_CHECKER
  ${HEADERS_COMMON_CHECKER}
  "../common/checker/ICheckerRule.h"
  "../common/checker/RangeCheckerRule.h"
)

set( HEADERS_COMMON_CHECKER_TREE
  ${HEADERS_COMMON_CHECKER_TREE}
  "../common/checker/tree/BaseTreeContext.h"
  "../common/checker/tree/ITreeContext.h"
  "../common/checker/tree/PropertyTreeContext.h"
)

set( HEADERS_COMMON_CHECKER_MODEL
  ${HEADERS_COMMON_CHECKER_MODEL}
  "../common/checker/model/UnionCheckerRule.h"
  "../common/checker/model/ModelCheckerRule.h"
  "../common/checker/model/CardinalityCheckerRule.h"
)

set( HEADERS_COMMON_IMPL
  ${HEADERS_COMMON_IMPL}
  "../common/impl/NamedReferenceProxy.h"
  "../common/impl/BaseImpl.h"
)

set( HEADERS_COMMON_PARAMETER
  ${HEADERS_COMMON_PARAMETER}
  "../common/parameter/ParameterValue.h"
  "../common/parameter/IParameterizedObject.h"
)

set( HEADERS_COMMON_PARSER
  ${HEADERS_COMMON_PARSER}
  "../common/parser/ParserHelper.h"
  "../common/parser/ParserContext.h"
  "../common/parser/WrappedListParser.h"
  "../common/parser/XmlParserBase.h"
  "../common/parser/XmlParserException.h"
  "../common/parser/XmlModelGroupParser.h"
)

set( HEADERS_COMMON_PARSER_MODEL_GROUP
  ${HEADERS_COMMON_PARSER_MODEL_GROUP}
  "../common/parser/modelgroup/XmlAllParser.h"
  "../common/parser/modelgroup/XmlChoiceParser.h"
  "../common/parser/modelgroup/XmlSequenceParser.h"
)

set( HEADERS_COMMON_PARSER_TYPE
  ${HEADERS_COMMON_PARSER_TYPE}
  "../common/parser/type/IXmlTypeParser.h"
  "../common/parser/type/XmlComplexTypeParser.h"
  "../common/parser/type/XmlGroupParser.h"
  "../common/parser/type/XmlSimpleContentParser.h"
)

set( HEADERS_COMMON_XMLINDEXER
  ${HEADERS_COMMON_XMLINDEXER}
  "../common/xmlIndexer/AttributeNode.h"
  "../common/xmlIndexer/ElementNode.h"
  "../common/xmlIndexer/Position.h"
  "../common/xmlIndexer/PositionIndex.h"
  "../common/xmlIndexer/PositionNode.h"
)

set( HEADERS_COMMON_SIMPLE_STRUCT
  ${HEADERS_COMMON_SIMPLE_STRUCT}
  "../common/simple/struct/IndexedElement.h"
  "../common/simple/struct/XmlToSimpleNodeConverter.h"
)

set( HEADERS_COMMON_LOADER
  ${HEADERS_COMMON_LOADER}
  "../common/loader/IResourceLocator.h"
  "../common/loader/IScenarioLoaderFactory.h"
  "../common/loader/IScenarioLoader.h"
  "../common/loader/ResourceNotFoundException.h"
  "../common/loader/FileResourceLocator.h"
  "../common/loader/ScenarioLoaderException.h"
)

set( HEADERS_CATALOG
  ${HEADERS_CATALOG}
  "src/catalog/ICatalogReferenceProvider.h"
  "src/catalog/CatalogCache.h"
)

set( HEADERS_LOADER
  ${HEADERS_LOADER}
  "src/loader/OpenScenarioProcessingHelper.h"
  "src/loader/XmlScenarioImportLoader.h"
  "src/loader/XmlScenarioLoaderFactory.h"
  "src/loader/XmlScenarioLoader.h"
  "src/loader/XmlScenarioImportLoaderFactory.h"
)

set( HEADERS_PARAMETER
  ${HEADERS_PARAMETER}
  "src/parameter/ParameterResolver.h"
)

set( HEADERS_PARSER
  ${HEADERS_PARSER}
  "src/parser/CatalogReferenceParserContext.h"
)

set( HEADERS_CHECKER
  ${HEADERS_CHECKER}
  "src/checker/VersionCheckerRule.h"
  "src/checker/ParameterDeclarationChecker.h"
)

set( HEADERS_GENERATED_API
  ${HEADERS_GENERATED_API}
  "generated/api/Enumerations.h"
  "generated/api/ApiClassInterfaces.h"
  "generated/api/OscInterfaces.h"
)

set( HEADERS_GENERATED_API_WRITER
  ${HEADERS_GENERATED_API_WRITER}
  "generated/api/writer/ApiClassWriterInterfaces.h"
  "generated/api/writer/ApiWriterInterfaces.h"
  "generated/api/writer/IOpenScenarioWriterFactory.h"
)

set( HEADERS_GENERATED_COMMON
  ${HEADERS_GENERATED_COMMON}
  "generated/common/OscConstants.h"
)

set( HEADERS_GENERATED_CHECKER
  ${HEADERS_GENERATED_CHECKER}
  "generated/checker/IScenarioChecker.h"
)

set( HEADERS_GENERATED_CHECKER_MODEL
  ${HEADERS_GENERATED_CHECKER_MODEL}
  "generated/checker/model/CardinalityCheckerRules.h"
  "generated/checker/model/UnionCheckerRules.h"
)

set( HEADERS_GENERATED_CHECKER_IMPL
  ${HEADERS_GENERATED_CHECKER_IMPL}
  "generated/checker/impl/ScenarioCheckerImpl.h"
)

set( HEADERS_GENERATED_CHECKER_RANGE
  ${HEADERS_GENERATED_CHECKER_RANGE}
  "generated/checker/range/RangeCheckerRules.h"
  "generated/checker/range/RangeCheckerHelper.h"
)

set( HEADERS_GENERATED_CATALOG
  ${HEADERS_GENERATED_CATALOG}
  "generated/catalog/CatalogHelper.h"
)

set( HEADERS_GENERATED_IMPL
  ${HEADERS_GENERATED_IMPL}
  "generated/impl/ApiClassImpl.h"
  "generated/impl/OpenScenarioWriterFactoryImpl.h"
)

set( HEADERS_GENERATED_XMLPARSER
  ${HEADERS_GENERATED_XMLPARSER}
  "generated/xmlParser/XmlParsers.h"
  "generated/xmlParser/XMLParser.h"
  "generated/xmlParser/XMLLexer.h"
)

set( HEADERS_GENERATED_EXPORT_XML
  ${HEADERS_GENERATED_EXPORT_XML}
  "generated/export/xml/OpenScenarioXmlExporter.h"
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
