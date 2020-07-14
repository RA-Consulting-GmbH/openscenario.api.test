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
if( BUILD_STATIC_LIBS )
  set( LIB_TYPE "STATIC" )
else()
  add_definitions( -DEXPORT_OPENSCENARIOLIB)
  set( LIB_TYPE "SHARED" )
endif()

################################################################
# Include folders
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/inc )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/catalog )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/loader )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parameter )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parser )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/modelgroup )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/parser/type )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/simple )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/simple/struct )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/src/xmlIndexer )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../ExternalLibs/Filesystem)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../TinyXML2 )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../ANTLR4-Cpp-src/runtime/src )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../ANTLR4-Cpp-src/runtime/src/atn )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../ANTLR4-Cpp-src/runtime/src/dfa )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../ANTLR4-Cpp-src/runtime/src/misc )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../ANTLR4-Cpp-src/runtime/src/support )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../ANTLR4-Cpp-src/runtime/src/tree )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../ANTLR4-Cpp-src/runtime/src/tree/pattern )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../ANTLR4-Cpp-src/runtime/src/tree/xpath )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/api )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/common )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/checker )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/checker/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/checker/range )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/catalog)
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/impl )
include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/generated/xmlParser )

################################################################
# Source files
set( SOURCES
  ${SOURCES}
    "../../TinyXML2/tinyxml2.cpp"
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
  "generated/xmlParser/XmlParsers.cpp"
  "generated/xmlParser/XMLParserBaseVisitor.cpp"
  "generated/xmlParser/XMLParserVisitor.cpp"
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

set( HEADERS_API
  ${HEADERS_API}
  "src/api/IOpenScenarioModelElement.h"
)

set( HEADERS_COMMON
  ${HEADERS_COMMON}
  "src/common/INamedReference.h"
  "src/common/ILocator.h"
  "src/common/DateTime.h"
  "src/common/IParserMessageLogger.h"
  "src/common/Textmarker.h"
  "src/common/ErrorLevel.h"
  "src/common/FileContentMessage.h"
)

set( HEADERS_CHECKER
  ${HEADERS_CHECKER}
  "src/checker/ICheckerRule.h"
  "src/checker/RangeCheckerRule.h"
)

set( HEADERS_IMPL
  ${HEADERS_IMPL}
  "src/impl/NamedReferenceProxy.h"
  "src/impl/BaseImpl.h"
)

set( HEADERS_PARAMETER
  ${HEADERS_PARAMETER}
  "src/parameter/ParameterValue.h"
  "src/parameter/ParameterResolver.h"
  "src/parameter/IParameterizedObject.h"
)

set( HEADERS_PARSER
  ${HEADERS_PARSER}
  "src/parser/ParserHelper.h"
  "src/parser/ParserContext.h"
  "src/parser/WrappedListParser.h"
  "src/parser/XmlParserBase.h"
  "src/parser/XmlParserException.h"
  "src/parser/XmlModelGroupParser.h"
)

set( HEADERS_PARSER_MODEL_GROUP
  ${HEADERS_PARSER_MODEL_GROUP}
  "src/parser/modelgroup/XmlAllParser.h"
  "src/parser/modelgroup/XmlChoiceParser.h"
  "src/parser/modelgroup/XmlSequenceParser.h"
)

set( HEADERS_PARSER_TYPE
  ${HEADERS_PARSER_TYPE}
  "src/parser/type/IXmlTypeParser.h"
  "src/parser/type/XmlComplexTypeParser.h"
  "src/parser/type/XmlGroupParser.h"
  "src/parser/type/XmlSimpleContentParser.h"
)

set( HEADERS_XMLINDEXER
  ${HEADERS_XMLINDEXER}
  "src/xmlIndexer/AttributeNode.h"
  "src/xmlIndexer/ElementNode.h"
  "src/xmlIndexer/Position.h"
  "src/xmlIndexer/PositionIndex.h"
  "src/xmlIndexer/PositionNode.h"
)

set( HEADERS_SIMPLE_STRUCT
  ${HEADERS_SIMPLE_STRUCT}
  "src/simple/struct/IndexedElement.h"
  "src/simple/struct/XmlToSimpleNodeConverter.h"
)

set( HEADERS_CATALOG
  ${HEADERS_CATALOG}
  "src/catalog/ICatalogReferenceProvider.h"
  "src/catalog/CatalogCache.h"
)

set( HEADERS_LOADER
  ${HEADERS_LOADER}
  "src/loader/IResourceLocator.h"
  "src/loader/IScenarioLoaderFactory.h"
  "src/loader/IScenarioLoader.h"
  "src/loader/MessageLoggerDecorator.h"
  "src/loader/OpenScenarioProcessingHelper.h"
  "src/loader/ResourceNotFoundException.h"
  "src/loader/XmlScenarioImportLoader.h"
  "src/loader/XmlScenarioLoaderFactory.h"
  "src/loader/XmlScenarioLoader.h"
  "src/loader/ZipResourceLocator.h"
  "src/loader/FileResourceLocator.h"
  "src/loader/XmlScenarioImportLoaderFactory.h"
  "src/loader/ScenarioLoaderException.h"
)

set( HEADERS_GENERATED_API
  ${HEADERS_GENERATED_API}
  "generated/api/Enumerations.h"
  "generated/api/ApiClassInterfaces.h"
  "generated/api/OscInterfaces.h"
)

set( HEADERS_GENERATED_COMMON
  ${HEADERS_GENERATED_COMMON}
  "generated/common/OscConstants.h"
)

set( HEADERS_GENERATED_CHECKER
  ${HEADERS_GENERATED_CHECKER}
  "generated/checker/IScenarioChecker.h"
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
)

set( HEADERS_GENERATED_XMLPARSER
  ${HEADERS_GENERATED_XMLPARSER}
  "generated/xmlParser/XmlParsers.h"
    "generated/xmlParser/XMLParserBaseVisitor.h"
  "generated/xmlParser/XMLParserVisitor.h"
  "generated/xmlParser/XMLParser.h"
  "generated/xmlParser/XMLLexer.h"
)

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
  source_group( Headers\\Api FILES ${HEADERS_API} )
  source_group( Headers\\Common FILES ${HEADERS_COMMON})
  source_group( Headers\\Checker FILES ${HEADERS_CHECKER})
  source_group( Headers\\Impl FILES ${HEADERS_IMPL})
  source_group( Headers\\Parameter FILES ${HEADERS_PARAMETER})
  source_group( Headers\\Parser FILES ${HEADERS_PARSER})
  source_group( Headers\\Parser\\ModelGroup FILES ${HEADERS_PARSER_MODEL_GROUP})
  source_group( Headers\\Parser\\Type FILES ${HEADERS_PARSER_TYPE})
  source_group( Headers\\XmlIndexer FILES ${HEADERS_XMLINDEXER})
  source_group( Headers\\Simple\\Struct FILES ${HEADERS_SIMPLE_STRUCT})
  source_group( Headers\\Catalog FILES ${HEADERS_CATALOG})
  source_group( Headers\\Loaders FILES ${HEADERS_LOADER})

  source_group( Headers\\Generated\\Api FILES ${HEADERS_GENERATED_API} )
  source_group( Headers\\Generated\\Common FILES ${HEADERS_GENERATED_COMMON} )
  source_group( Headers\\Generated\\Checker FILES ${HEADERS_GENERATED_CHECKER} )
  source_group( Headers\\Generated\\Checker\\Impl FILES ${HEADERS_GENERATED_CHECKER_IMPL} )
  source_group( Headers\\Generated\\Checker\\Range FILES ${HEADERS_GENERATED_CHECKER_RANGE} )
  source_group( Headers\\Generated\\Catalog FILES ${HEADERS_GENERATED_CATALOG} )
  source_group( Headers\\Generated\\Impl FILES ${HEADERS_GENERATED_IMPL} )
  source_group( Headers\\Generated\\XmlParser FILES ${HEADERS_GENERATED_XMLPARSER} )
endif()


################################################################
# Generate the library
add_library ( ${PROJECT_NAME} ${SOURCES} ${SOURCES_GENERATED_API} ${SOURCES_GENERATED_CHECKER_IMPL} ${SOURCES_GENERATED_CHECKER_RANGE} 
              ${SOURCES_GENERATED_IMPL} ${SOURCES_GENERATED_XMLPARSER} ${SOURCES_LOADER} ${HEADERS} ${HEADERS_API} ${HEADERS_COMMON}
              ${HEADERS_CHECKER} ${HEADERS_IMPL} ${HEADERS_PARAMETER} ${HEADERS_PARSER} ${HEADERS_PARSER_MODEL_GROUP} ${HEADERS_PARSER_TYPE} 
              ${HEADERS_XMLINDEXER} ${HEADERS_SIMPLE_STRUCT} ${HEADERS_CATALOG} ${HEADERS_LOADER} ${HEADERS_GENERATED_API} ${HEADERS_GENERATED_COMMON}
              ${HEADERS_GENERATED_CHECKER} ${HEADERS_GENERATED_CHECKER_IMPL} ${HEADERS_GENERATED_CHECKER_RANGE} ${HEADERS_GENERATED_CATALOG}
              ${HEADERS_GENERATED_IMPL} ${HEADERS_GENERATED_XMLPARSER})

if( BUILD_STATIC_LIBS )
  target_link_libraries( ${PROJECT_NAME} antlr4_static )
else()
  target_link_libraries( ${PROJECT_NAME} antlr4_shared )
endif()

################################################################
# Visual Studio solution folders
if( MSVC )
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj /wd4251")
  set_target_properties( ${PROJECT_NAME} PROPERTIES FOLDER Core )
endif()
