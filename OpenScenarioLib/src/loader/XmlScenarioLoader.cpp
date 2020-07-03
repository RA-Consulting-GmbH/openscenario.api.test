#pragma once
#include "XmlScenarioLoader.h"
#include "ResourceNotFoundException.h"
#include <ANTLRInputStream.h>
#include "XMLLexer.h"
#include <XMLParserListener.h>
#include "ScenarioCheckerImpl.h"

//#include <ANTLRInputStream.h>
//#include "XMLLexer.h"
//#include "XMLParser.h"


namespace RAC_OPENSCENARIO
{
    std::shared_ptr<IOpenScenario> XmlScenarioLoader::Load(std::shared_ptr<IParserMessageLogger> messageLogger)
    {
        try 
        {
            auto inputStream = _resourceLocator->GetInputStream(_filename);
            tinyxml2::XMLDocument doc;

            // read data as a block:
            inputStream->seekg(0, inputStream->end);
            const auto kLength = static_cast<unsigned int>(inputStream->tellg());
            inputStream->seekg(0, inputStream->beg);
            char * buffer = new char[kLength];
            inputStream->read(buffer, kLength);
            std::string fileData;
            fileData.assign(buffer, kLength);
            delete[] buffer;
            inputStream->close();

            doc.Parse(fileData.c_str());

            // antlr indexing
            antlr4::ANTLRInputStream input(fileData);
            XMLLexer lexer(&input);
            antlr4::CommonTokenStream tokens(&lexer);
            XMLParser parser(&tokens);
            parser.document();

            auto positionIndex =  parser.GetPositionIndex();
            // Get simple structure from dom and antlr results
            XmlToSimpleNodeConverter xmlToSimpleNodeConverter(positionIndex);
            auto indexedElement = xmlToSimpleNodeConverter.Convert(doc);

            // Finally do parsing from dom result
            OpenScenarioXmlParser openScenarioXmlParser(*messageLogger.get(), _filename);

            auto openScenarioImpl = std::make_shared<OpenScenarioImpl>();
            auto parserContext = std::make_shared<ParserContext>();
            openScenarioXmlParser.ParseElement(indexedElement, parserContext, openScenarioImpl);

            OpenScenarioProcessingHelper::Resolve(messageLogger, openScenarioImpl);
            openScenarioImpl->AddAdapter(typeid(ICatalogReferenceProvider).name(), parserContext);
            auto scenarioCheckerImpl = std::make_shared<ScenarioCheckerImpl>();
            openScenarioImpl->AddAdapter(typeid(IScenarioChecker).name(), scenarioCheckerImpl);
            return openScenarioImpl;
        }
        //catch (ParserConfigurationException | IOException e)
        //{
        //    throw new ScenarioLoaderException("Internal Parser Exception", e);
        //}
        //catch (SAXParseException e) 
        //{
        //    messageLogger.logMessage(new FileContentMessage(e.getMessage(), ErrorLevel.FATAL, new Textmarker(e.getLineNumber() - 1, e.getColumnNumber() - 1, filename)));
        //}
        //catch (SAXException e) 
        //{
        //    throw new ScenarioLoaderException("Severe parser exception", e);
        //}
        catch (ResourceNotFoundException& e)
        {
            auto msg = FileContentMessage(std::string(e.what()), ERROR, Textmarker(-1,  -1, _filename));
            messageLogger->LogMessage(msg);
            return nullptr;
        }

        return nullptr;
    }
}
