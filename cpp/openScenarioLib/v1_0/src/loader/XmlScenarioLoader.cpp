/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "XmlScenarioLoader.h"
#include "ResourceNotFoundException.h"
#include <ANTLRInputStream.h>
#include "XMLLexer.h"
#include <XMLParserListener.h>
#include "ScenarioCheckerImplV1_0.h"
#include "XmlParsersV1_0.h"
#include "CatalogReferenceParserContext.h"


namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        std::shared_ptr<IOpenScenarioModelElement> XmlScenarioLoader::Load(std::shared_ptr<IParserMessageLogger> messageLogger)
        {
            std::map<std::string, std::string> injectedParameters;
            return Load(messageLogger, injectedParameters);
        }

        std::shared_ptr<IOpenScenarioModelElement> XmlScenarioLoader::Load(std::shared_ptr<IParserMessageLogger> messageLogger, std::map<std::string, std::string>& injectedParameters)
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

                auto errorCode = doc.Parse(fileData.c_str());
                switch (errorCode)
                {
                case tinyxml2::XML_SUCCESS: break;
                case tinyxml2::XML_NO_ATTRIBUTE:
                    throw ScenarioLoaderException("XML_NO_ATTRIBUTE");
                case tinyxml2::XML_WRONG_ATTRIBUTE_TYPE:
                    throw ScenarioLoaderException("XML_WRONG_ATTRIBUTE_TYPE");
                case tinyxml2::XML_ERROR_FILE_NOT_FOUND:
                    throw ScenarioLoaderException("XML_ERROR_FILE_NOT_FOUND");
                case tinyxml2::XML_ERROR_FILE_COULD_NOT_BE_OPENED:
                    throw ScenarioLoaderException("XML_ERROR_FILE_COULD_NOT_BE_OPENED");
                case tinyxml2::XML_ERROR_FILE_READ_ERROR:
                    throw ScenarioLoaderException("XML_ERROR_FILE_READ_ERROR");
                case tinyxml2::XML_ERROR_PARSING_ELEMENT:
                    throw ScenarioLoaderException("XML_ERROR_PARSING_ELEMENT");
                case tinyxml2::XML_ERROR_PARSING_ATTRIBUTE:
                    throw ScenarioLoaderException("XML_ERROR_PARSING_ATTRIBUTE");
                case tinyxml2::XML_ERROR_PARSING_TEXT:
                    throw ScenarioLoaderException("XML_ERROR_PARSING_TEXT");
                case tinyxml2::XML_ERROR_PARSING_CDATA:
                    throw ScenarioLoaderException("XML_ERROR_PARSING_CDATA");
                case tinyxml2::XML_ERROR_PARSING_COMMENT:
                    throw ScenarioLoaderException("XML_ERROR_PARSING_COMMENT");
                case tinyxml2::XML_ERROR_PARSING_DECLARATION:
                    throw ScenarioLoaderException("XML_ERROR_PARSING_DECLARATION");
                case tinyxml2::XML_ERROR_PARSING_UNKNOWN:
                    throw ScenarioLoaderException("XML_ERROR_PARSING_UNKNOWN");
                case tinyxml2::XML_ERROR_EMPTY_DOCUMENT:
                    throw ScenarioLoaderException("XML_ERROR_EMPTY_DOCUMENT");
                case tinyxml2::XML_ERROR_MISMATCHED_ELEMENT:
                    throw ScenarioLoaderException("XML_ERROR_MISMATCHED_ELEMENT");
                case tinyxml2::XML_ERROR_PARSING:
                    throw ScenarioLoaderException("XML_ERROR_PARSING");
                case tinyxml2::XML_CAN_NOT_CONVERT_TEXT:
                    throw ScenarioLoaderException("XML_CAN_NOT_CONVERT_TEXT");
                case tinyxml2::XML_NO_TEXT_NODE:
                    throw ScenarioLoaderException("XML_NO_TEXT_NODE");
                case tinyxml2::XML_ELEMENT_DEPTH_EXCEEDED:
                    throw ScenarioLoaderException("XML_ELEMENT_DEPTH_EXCEEDED");
                case tinyxml2::XML_ERROR_COUNT:
                    throw ScenarioLoaderException("XML_ERROR_COUNT");
                default:;
                }

                // antlr indexing
                antlr4::ANTLRInputStream input(fileData);
                XMLLexer lexer(&input);
                antlr4::CommonTokenStream tokens(&lexer);
                XMLParser parser(&tokens);
                parser.document();

                auto positionIndex = parser.GetPositionIndex();
                // Get simple structure from dom and antlr results
                XmlToSimpleNodeConverter xmlToSimpleNodeConverter(positionIndex);
                auto indexedElement = xmlToSimpleNodeConverter.Convert(doc);

                // Finally do parsing from dom result
                OpenScenarioXmlParser openScenarioXmlParser(*messageLogger.get(), _filename);

                auto openScenarioImpl = std::make_shared<OpenScenarioImpl>();
                auto parserContext = std::dynamic_pointer_cast<ParserContext>(std::make_shared<CatalogReferenceParserContext>());
                openScenarioXmlParser.ParseElement(indexedElement, parserContext, openScenarioImpl);

                // resolve parameter only when no errors occured
                if (messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(ErrorLevel::ERROR).empty())
                {
                    // Check 
                    ScenarioCheckerImpl scenarioChecker;
                    auto parameterDeclarationCheckerRule = std::make_shared<ParameterDeclarationChecker>();
                    scenarioChecker.AddParameterDeclarationCheckerRule(parameterDeclarationCheckerRule);
                    scenarioChecker.CheckScenarioInFileContext(messageLogger, openScenarioImpl);
                    OpenScenarioProcessingHelper::Resolve(messageLogger, openScenarioImpl, injectedParameters);
                    openScenarioImpl->AddAdapter(typeid(ICatalogReferenceProvider).name(), std::dynamic_pointer_cast<ICatalogReferenceProvider>(parserContext));
                    auto scenarioCheckerImpl = std::make_shared<ScenarioCheckerImpl>();
                    openScenarioImpl->AddAdapter(typeid(IScenarioChecker).name(), scenarioCheckerImpl);
                }

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
                auto msg = FileContentMessage(std::string(e.what()), ERROR, Textmarker(-1, -1, _filename));
                messageLogger->LogMessage(msg);
                return nullptr;
            }
        }
    }
}
