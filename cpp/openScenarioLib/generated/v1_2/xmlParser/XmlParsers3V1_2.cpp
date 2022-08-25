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
 
#include "XmlParsersV1_2.h"
#include "NamedReferenceProxy.h"
#include "FileContentMessage.h"
#include "Position.h"
#include "Textmarker.h"
#include "ErrorLevel.h"
#include "WrappedListParser.h"
#include "CatalogReferenceParserContextV1_2.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
    {

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterMultiplyByValueRuleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ParameterMultiplyByValueRuleXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ParameterMultiplyByValueRuleXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<ParameterMultiplyByValueRuleImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ParameterMultiplyByValueRuleXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        ParameterMultiplyByValueRuleXmlParser::ParameterMultiplyByValueRuleXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterSetActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ParameterSetActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ParameterSetActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<ParameterSetActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ParameterSetActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        ParameterSetActionXmlParser::ParameterSetActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterValueDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ParameterValueDistributionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ParameterValueDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ParameterValueDistributionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementScenarioFileParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementDistributionDefinitionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        ParameterValueDistributionXmlParser::SubElementScenarioFileParser::SubElementScenarioFileParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _fileXmlParser = std::make_shared<FileXmlParser>(messageLogger, filename, parserOptions);
        }

        void ParameterValueDistributionXmlParser::SubElementScenarioFileParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto scenarioFile = std::make_shared<FileImpl>();
            auto typedObject = std::static_pointer_cast<ParameterValueDistributionImpl>(object);                    
            // Setting the parent
            scenarioFile->SetParent(object);
            _fileXmlParser->ParseElement(indexedElement, parserContext, scenarioFile);

            typedObject->SetScenarioFile(scenarioFile);
            
            
        }
        
        int ParameterValueDistributionXmlParser::SubElementScenarioFileParser::GetMinOccur() 
        {
            return 1;
        }

        int ParameterValueDistributionXmlParser::SubElementScenarioFileParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ParameterValueDistributionXmlParser::SubElementScenarioFileParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SCENARIO_FILE ;
        }

        std::vector<std::string> ParameterValueDistributionXmlParser::SubElementScenarioFileParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SCENARIO_FILE
                    };
        }
        ParameterValueDistributionXmlParser::SubElementDistributionDefinitionParser::SubElementDistributionDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _distributionDefinitionXmlParser = std::make_shared<DistributionDefinitionXmlParser>(messageLogger, filename, parserOptions);
        }

        void ParameterValueDistributionXmlParser::SubElementDistributionDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto distributionDefinition = std::make_shared<DistributionDefinitionImpl>();
            auto typedObject = std::static_pointer_cast<ParameterValueDistributionImpl>(object);                    
            // Setting the parent
            distributionDefinition->SetParent(object);
            _distributionDefinitionXmlParser->ParseElement(indexedElement, parserContext, distributionDefinition);

            typedObject->SetDistributionDefinition(distributionDefinition);
            
            
        }
        
        int ParameterValueDistributionXmlParser::SubElementDistributionDefinitionParser::GetMinOccur() 
        {
            return 1;
        }

        int ParameterValueDistributionXmlParser::SubElementDistributionDefinitionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ParameterValueDistributionXmlParser::SubElementDistributionDefinitionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DETERMINISTIC || 
                elementName == OSC_CONSTANTS::ELEMENT__STOCHASTIC ;
        }

        std::vector<std::string> ParameterValueDistributionXmlParser::SubElementDistributionDefinitionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DETERMINISTIC,
                OSC_CONSTANTS::ELEMENT__STOCHASTIC
                    };
        }
  
        ParameterValueDistributionXmlParser::ParameterValueDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterValueDistributionDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ParameterValueDistributionDefinitionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}


        std::vector<std::shared_ptr<IElementParser>> ParameterValueDistributionDefinitionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementParameterValueDistributionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        ParameterValueDistributionDefinitionXmlParser::SubElementParameterValueDistributionParser::SubElementParameterValueDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _parameterValueDistributionXmlParser = std::make_shared<ParameterValueDistributionXmlParser>(messageLogger, filename, parserOptions);
        }

        void ParameterValueDistributionDefinitionXmlParser::SubElementParameterValueDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterValueDistribution = std::make_shared<ParameterValueDistributionImpl>();
            auto typedObject = std::static_pointer_cast<ParameterValueDistributionDefinitionImpl>(object);                    
            // Setting the parent
            parameterValueDistribution->SetParent(object);
            _parameterValueDistributionXmlParser->ParseElement(indexedElement, parserContext, parameterValueDistribution);

            typedObject->SetParameterValueDistribution(parameterValueDistribution);
            
            
        }
        
        int ParameterValueDistributionDefinitionXmlParser::SubElementParameterValueDistributionParser::GetMinOccur() 
        {
            return 1;
        }

        int ParameterValueDistributionDefinitionXmlParser::SubElementParameterValueDistributionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ParameterValueDistributionDefinitionXmlParser::SubElementParameterValueDistributionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_VALUE_DISTRIBUTION ;
        }

        std::vector<std::string> ParameterValueDistributionDefinitionXmlParser::SubElementParameterValueDistributionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PARAMETER_VALUE_DISTRIBUTION
                    };
        }
  
        ParameterValueDistributionDefinitionXmlParser::ParameterValueDistributionDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlGroupParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterValueSetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ParameterValueSetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ParameterValueSetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ParameterValueSetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementParameterAssignmentsParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        ParameterValueSetXmlParser::SubElementParameterAssignmentsParser::SubElementParameterAssignmentsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _parameterAssignmentXmlParser = std::make_shared<ParameterAssignmentXmlParser>(messageLogger, filename, parserOptions);
        }

        void ParameterValueSetXmlParser::SubElementParameterAssignmentsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterAssignments = std::make_shared<ParameterAssignmentImpl>();
            auto typedObject = std::static_pointer_cast<ParameterValueSetImpl>(object);                    
            // Setting the parent
            parameterAssignments->SetParent(object);
            _parameterAssignmentXmlParser->ParseElement(indexedElement, parserContext, parameterAssignments);
            auto parameterAssignmentsList = typedObject->GetWriterParameterAssignments();
            parameterAssignmentsList.push_back(parameterAssignments);
            typedObject->SetParameterAssignments(parameterAssignmentsList);
            
            
        }
        
        int ParameterValueSetXmlParser::SubElementParameterAssignmentsParser::GetMinOccur() 
        {
            return 1;
        }

        int ParameterValueSetXmlParser::SubElementParameterAssignmentsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ParameterValueSetXmlParser::SubElementParameterAssignmentsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENT ;
        }

        std::vector<std::string> ParameterValueSetXmlParser::SubElementParameterAssignmentsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENT
                    };
        }
  
        ParameterValueSetXmlParser::ParameterValueSetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PedestrianImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PedestrianXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> PedestrianXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeMass: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMass(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PedestrianImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MASS, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MASS, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetMass(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MASS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MASS, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MASS, std::make_shared<AttributeMass>(_messageLogger, _filename, _parserOptions)));
            class AttributeModel: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeModel(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PedestrianImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MODEL, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MODEL, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetModel(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MODEL, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MODEL, std::make_shared<Textmarker>(endMarker));
                     
                    
					if (!_parserOptions.IsOptionSetSupressDeprecationWarnings())
					{
						// This element is deprecated
						auto msg = FileContentMessage("Attribute '" + attributeName + "' is deprecated since standard version 'n/a'. Comment: 'n/a'.", WARNING, Textmarker(startPosition.GetLine(), startPosition.GetColumn(), this->_filename));
						this->_messageLogger.LogMessage(msg);
					}
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MODEL, std::make_shared<AttributeModel>(_messageLogger, _filename, _parserOptions)));
            class AttributeModel3d: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeModel3d(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PedestrianImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetModel3d(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, std::make_shared<AttributeModel3d>(_messageLogger, _filename, _parserOptions)));
            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PedestrianImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            class AttributePedestrianCategory: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributePedestrianCategory(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PedestrianImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = PedestrianCategory::GetFromLiteral(attributeValue);
                        if (kResult != PedestrianCategory::UNKNOWN)
                        {
                            typedObject->SetPedestrianCategory(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (PedestrianCategory::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  PedestrianCategory::GetDeprecatedVersion(kResult) +"'. " + PedestrianCategory::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY, std::make_shared<AttributePedestrianCategory>(_messageLogger, _filename, _parserOptions)));
            class AttributeRole: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRole(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PedestrianImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ROLE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Role::GetFromLiteral(attributeValue);
                        if (kResult != Role::UNKNOWN)
                        {
                            typedObject->SetRole(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (Role::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  Role::GetDeprecatedVersion(kResult) +"'. " + Role::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ROLE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ROLE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ROLE, std::make_shared<AttributeRole>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PedestrianXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename, _parserOptions), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS, _parserOptions) );
            result.push_back(std::make_shared<SubElementBoundingBoxParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementPropertiesParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        PedestrianXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename, parserOptions);
        }

        void PedestrianXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            auto typedObject = std::static_pointer_cast<PedestrianImpl>(object);                    
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = typedObject->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            typedObject->SetParameterDeclarations(parameterDeclarationsList);
            
            
        }
        
        int PedestrianXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int PedestrianXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool PedestrianXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> PedestrianXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        PedestrianXmlParser::SubElementBoundingBoxParser::SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _boundingBoxXmlParser = std::make_shared<BoundingBoxXmlParser>(messageLogger, filename, parserOptions);
        }

        void PedestrianXmlParser::SubElementBoundingBoxParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto boundingBox = std::make_shared<BoundingBoxImpl>();
            auto typedObject = std::static_pointer_cast<PedestrianImpl>(object);                    
            // Setting the parent
            boundingBox->SetParent(object);
            _boundingBoxXmlParser->ParseElement(indexedElement, parserContext, boundingBox);

            typedObject->SetBoundingBox(boundingBox);
            
            
        }
        
        int PedestrianXmlParser::SubElementBoundingBoxParser::GetMinOccur() 
        {
            return 1;
        }

        int PedestrianXmlParser::SubElementBoundingBoxParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PedestrianXmlParser::SubElementBoundingBoxParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__BOUNDING_BOX ;
        }

        std::vector<std::string> PedestrianXmlParser::SubElementBoundingBoxParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__BOUNDING_BOX
                    };
        }
        PedestrianXmlParser::SubElementPropertiesParser::SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _propertiesXmlParser = std::make_shared<PropertiesXmlParser>(messageLogger, filename, parserOptions);
        }

        void PedestrianXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto properties = std::make_shared<PropertiesImpl>();
            auto typedObject = std::static_pointer_cast<PedestrianImpl>(object);                    
            // Setting the parent
            properties->SetParent(object);
            _propertiesXmlParser->ParseElement(indexedElement, parserContext, properties);

            typedObject->SetProperties(properties);
            
            
        }
        
        int PedestrianXmlParser::SubElementPropertiesParser::GetMinOccur() 
        {
            return 1;
        }

        int PedestrianXmlParser::SubElementPropertiesParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PedestrianXmlParser::SubElementPropertiesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PROPERTIES ;
        }

        std::vector<std::string> PedestrianXmlParser::SubElementPropertiesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PROPERTIES
                    };
        }
  
        PedestrianXmlParser::PedestrianXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PedestrianAnimationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PedestrianAnimationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PedestrianAnimationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeMotion: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMotion(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PedestrianAnimationImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MOTION, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = PedestrianMotionType::GetFromLiteral(attributeValue);
                        if (kResult != PedestrianMotionType::UNKNOWN)
                        {
                            typedObject->SetMotion(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (PedestrianMotionType::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  PedestrianMotionType::GetDeprecatedVersion(kResult) +"'. " + PedestrianMotionType::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MOTION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MOTION, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MOTION, std::make_shared<AttributeMotion>(_messageLogger, _filename, _parserOptions)));
            class AttributeUserDefinedPedestrianAnimation: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeUserDefinedPedestrianAnimation(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PedestrianAnimationImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_PEDESTRIAN_ANIMATION, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_PEDESTRIAN_ANIMATION, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetUserDefinedPedestrianAnimation(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_PEDESTRIAN_ANIMATION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_PEDESTRIAN_ANIMATION, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_PEDESTRIAN_ANIMATION, std::make_shared<AttributeUserDefinedPedestrianAnimation>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PedestrianAnimationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementGesturesParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        PedestrianAnimationXmlParser::SubElementGesturesParser::SubElementGesturesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _pedestrianGestureXmlParser = std::make_shared<PedestrianGestureXmlParser>(messageLogger, filename, parserOptions);
        }

        void PedestrianAnimationXmlParser::SubElementGesturesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto gestures = std::make_shared<PedestrianGestureImpl>();
            auto typedObject = std::static_pointer_cast<PedestrianAnimationImpl>(object);                    
            // Setting the parent
            gestures->SetParent(object);
            _pedestrianGestureXmlParser->ParseElement(indexedElement, parserContext, gestures);
            auto gesturesList = typedObject->GetWriterGestures();
            gesturesList.push_back(gestures);
            typedObject->SetGestures(gesturesList);
            
            
        }
        
        int PedestrianAnimationXmlParser::SubElementGesturesParser::GetMinOccur() 
        {
            return 0;
        }

        int PedestrianAnimationXmlParser::SubElementGesturesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool PedestrianAnimationXmlParser::SubElementGesturesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PEDESTRIAN_GESTURE ;
        }

        std::vector<std::string> PedestrianAnimationXmlParser::SubElementGesturesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PEDESTRIAN_GESTURE
                    };
        }
  
        PedestrianAnimationXmlParser::PedestrianAnimationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PedestrianCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PedestrianCatalogLocationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> PedestrianCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PedestrianCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        PedestrianCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename, parserOptions);
        }

        void PedestrianCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            auto typedObject = std::static_pointer_cast<PedestrianCatalogLocationImpl>(object);                    
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            typedObject->SetDirectory(directory);
            
            
        }
        
        int PedestrianCatalogLocationXmlParser::SubElementDirectoryParser::GetMinOccur() 
        {
            return 1;
        }

        int PedestrianCatalogLocationXmlParser::SubElementDirectoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PedestrianCatalogLocationXmlParser::SubElementDirectoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
        }

        std::vector<std::string> PedestrianCatalogLocationXmlParser::SubElementDirectoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DIRECTORY
                    };
        }
  
        PedestrianCatalogLocationXmlParser::PedestrianCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PedestrianGestureImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PedestrianGestureXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PedestrianGestureXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeGesture: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeGesture(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PedestrianGestureImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__GESTURE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = PedestrianGestureType::GetFromLiteral(attributeValue);
                        if (kResult != PedestrianGestureType::UNKNOWN)
                        {
                            typedObject->SetGesture(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (PedestrianGestureType::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  PedestrianGestureType::GetDeprecatedVersion(kResult) +"'. " + PedestrianGestureType::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__GESTURE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__GESTURE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__GESTURE, std::make_shared<AttributeGesture>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PedestrianGestureXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        PedestrianGestureXmlParser::PedestrianGestureXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PerformanceImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PerformanceXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PerformanceXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeMaxAcceleration: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMaxAcceleration(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PerformanceImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetMaxAcceleration(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, std::make_shared<AttributeMaxAcceleration>(_messageLogger, _filename, _parserOptions)));
            class AttributeMaxAccelerationRate: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMaxAccelerationRate(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PerformanceImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetMaxAccelerationRate(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE, std::make_shared<AttributeMaxAccelerationRate>(_messageLogger, _filename, _parserOptions)));
            class AttributeMaxDeceleration: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMaxDeceleration(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PerformanceImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetMaxDeceleration(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, std::make_shared<AttributeMaxDeceleration>(_messageLogger, _filename, _parserOptions)));
            class AttributeMaxDecelerationRate: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMaxDecelerationRate(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PerformanceImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetMaxDecelerationRate(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE, std::make_shared<AttributeMaxDecelerationRate>(_messageLogger, _filename, _parserOptions)));
            class AttributeMaxSpeed: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMaxSpeed(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PerformanceImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetMaxSpeed(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, std::make_shared<AttributeMaxSpeed>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PerformanceXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        PerformanceXmlParser::PerformanceXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PhaseImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PhaseXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PhaseXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDuration: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDuration(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PhaseImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DURATION, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DURATION, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDuration(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<AttributeDuration>(_messageLogger, _filename, _parserOptions)));
            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PhaseImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PhaseXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementTrafficSignalStatesParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTrafficeSignalGroupStateParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        PhaseXmlParser::SubElementTrafficSignalStatesParser::SubElementTrafficSignalStatesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _trafficSignalStateXmlParser = std::make_shared<TrafficSignalStateXmlParser>(messageLogger, filename, parserOptions);
        }

        void PhaseXmlParser::SubElementTrafficSignalStatesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficSignalStates = std::make_shared<TrafficSignalStateImpl>();
            auto typedObject = std::static_pointer_cast<PhaseImpl>(object);                    
            // Setting the parent
            trafficSignalStates->SetParent(object);
            _trafficSignalStateXmlParser->ParseElement(indexedElement, parserContext, trafficSignalStates);
            auto trafficSignalStatesList = typedObject->GetWriterTrafficSignalStates();
            trafficSignalStatesList.push_back(trafficSignalStates);
            typedObject->SetTrafficSignalStates(trafficSignalStatesList);
            
            
        }
        
        int PhaseXmlParser::SubElementTrafficSignalStatesParser::GetMinOccur() 
        {
            return 0;
        }

        int PhaseXmlParser::SubElementTrafficSignalStatesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool PhaseXmlParser::SubElementTrafficSignalStatesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE ;
        }

        std::vector<std::string> PhaseXmlParser::SubElementTrafficSignalStatesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE
                    };
        }
        PhaseXmlParser::SubElementTrafficeSignalGroupStateParser::SubElementTrafficeSignalGroupStateParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _trafficSignalGroupStateXmlParser = std::make_shared<TrafficSignalGroupStateXmlParser>(messageLogger, filename, parserOptions);
        }

        void PhaseXmlParser::SubElementTrafficeSignalGroupStateParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficeSignalGroupState = std::make_shared<TrafficSignalGroupStateImpl>();
            auto typedObject = std::static_pointer_cast<PhaseImpl>(object);                    
            // Setting the parent
            trafficeSignalGroupState->SetParent(object);
            _trafficSignalGroupStateXmlParser->ParseElement(indexedElement, parserContext, trafficeSignalGroupState);

            typedObject->SetTrafficeSignalGroupState(trafficeSignalGroupState);
            
            
        }
        
        int PhaseXmlParser::SubElementTrafficeSignalGroupStateParser::GetMinOccur() 
        {
            return 0;
        }

        int PhaseXmlParser::SubElementTrafficeSignalGroupStateParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PhaseXmlParser::SubElementTrafficeSignalGroupStateParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFICE_SIGNAL_GROUP_STATE ;
        }

        std::vector<std::string> PhaseXmlParser::SubElementTrafficeSignalGroupStateParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFICE_SIGNAL_GROUP_STATE
                    };
        }
  
        PhaseXmlParser::PhaseXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PoissonDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PoissonDistributionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PoissonDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeExpectedValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeExpectedValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PoissonDistributionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetExpectedValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE, std::make_shared<AttributeExpectedValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PoissonDistributionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementRangeParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        PoissonDistributionXmlParser::SubElementRangeParser::SubElementRangeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _rangeXmlParser = std::make_shared<RangeXmlParser>(messageLogger, filename, parserOptions);
        }

        void PoissonDistributionXmlParser::SubElementRangeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto range = std::make_shared<RangeImpl>();
            auto typedObject = std::static_pointer_cast<PoissonDistributionImpl>(object);                    
            // Setting the parent
            range->SetParent(object);
            _rangeXmlParser->ParseElement(indexedElement, parserContext, range);

            typedObject->SetRange(range);
            
            
        }
        
        int PoissonDistributionXmlParser::SubElementRangeParser::GetMinOccur() 
        {
            return 0;
        }

        int PoissonDistributionXmlParser::SubElementRangeParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PoissonDistributionXmlParser::SubElementRangeParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RANGE ;
        }

        std::vector<std::string> PoissonDistributionXmlParser::SubElementRangeParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RANGE
                    };
        }
  
        PoissonDistributionXmlParser::PoissonDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PolylineImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PolylineXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PolylineXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PolylineXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementVerticesParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        PolylineXmlParser::SubElementVerticesParser::SubElementVerticesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _vertexXmlParser = std::make_shared<VertexXmlParser>(messageLogger, filename, parserOptions);
        }

        void PolylineXmlParser::SubElementVerticesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto vertices = std::make_shared<VertexImpl>();
            auto typedObject = std::static_pointer_cast<PolylineImpl>(object);                    
            // Setting the parent
            vertices->SetParent(object);
            _vertexXmlParser->ParseElement(indexedElement, parserContext, vertices);
            auto verticesList = typedObject->GetWriterVertices();
            verticesList.push_back(vertices);
            typedObject->SetVertices(verticesList);
            
            
        }
        
        int PolylineXmlParser::SubElementVerticesParser::GetMinOccur() 
        {
            return 2;
        }

        int PolylineXmlParser::SubElementVerticesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool PolylineXmlParser::SubElementVerticesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__VERTEX ;
        }

        std::vector<std::string> PolylineXmlParser::SubElementVerticesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__VERTEX
                    };
        }
  
        PolylineXmlParser::PolylineXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> PositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementWorldPositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementRelativeWorldPositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementRelativeObjectPositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementRoadPositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementRelativeRoadPositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementLanePositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementRelativeLanePositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementRoutePositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementGeoPositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTrajectoryPositionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        PositionXmlParser::SubElementWorldPositionParser::SubElementWorldPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _worldPositionXmlParser = std::make_shared<WorldPositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PositionXmlParser::SubElementWorldPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto worldPosition = std::make_shared<WorldPositionImpl>();
            auto typedObject = std::static_pointer_cast<PositionImpl>(object);                    
            // Setting the parent
            worldPosition->SetParent(object);
            _worldPositionXmlParser->ParseElement(indexedElement, parserContext, worldPosition);

            typedObject->SetWorldPosition(worldPosition);
            
            
        }
        
        int PositionXmlParser::SubElementWorldPositionParser::GetMinOccur() 
        {
            return 0;
        }

        int PositionXmlParser::SubElementWorldPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PositionXmlParser::SubElementWorldPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__WORLD_POSITION ;
        }

        std::vector<std::string> PositionXmlParser::SubElementWorldPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__WORLD_POSITION
                    };
        }
        PositionXmlParser::SubElementRelativeWorldPositionParser::SubElementRelativeWorldPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _relativeWorldPositionXmlParser = std::make_shared<RelativeWorldPositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PositionXmlParser::SubElementRelativeWorldPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto relativeWorldPosition = std::make_shared<RelativeWorldPositionImpl>();
            auto typedObject = std::static_pointer_cast<PositionImpl>(object);                    
            // Setting the parent
            relativeWorldPosition->SetParent(object);
            _relativeWorldPositionXmlParser->ParseElement(indexedElement, parserContext, relativeWorldPosition);

            typedObject->SetRelativeWorldPosition(relativeWorldPosition);
            
            
        }
        
        int PositionXmlParser::SubElementRelativeWorldPositionParser::GetMinOccur() 
        {
            return 0;
        }

        int PositionXmlParser::SubElementRelativeWorldPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PositionXmlParser::SubElementRelativeWorldPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_WORLD_POSITION ;
        }

        std::vector<std::string> PositionXmlParser::SubElementRelativeWorldPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RELATIVE_WORLD_POSITION
                    };
        }
        PositionXmlParser::SubElementRelativeObjectPositionParser::SubElementRelativeObjectPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _relativeObjectPositionXmlParser = std::make_shared<RelativeObjectPositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PositionXmlParser::SubElementRelativeObjectPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto relativeObjectPosition = std::make_shared<RelativeObjectPositionImpl>();
            auto typedObject = std::static_pointer_cast<PositionImpl>(object);                    
            // Setting the parent
            relativeObjectPosition->SetParent(object);
            _relativeObjectPositionXmlParser->ParseElement(indexedElement, parserContext, relativeObjectPosition);

            typedObject->SetRelativeObjectPosition(relativeObjectPosition);
            
            
        }
        
        int PositionXmlParser::SubElementRelativeObjectPositionParser::GetMinOccur() 
        {
            return 0;
        }

        int PositionXmlParser::SubElementRelativeObjectPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PositionXmlParser::SubElementRelativeObjectPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_OBJECT_POSITION ;
        }

        std::vector<std::string> PositionXmlParser::SubElementRelativeObjectPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RELATIVE_OBJECT_POSITION
                    };
        }
        PositionXmlParser::SubElementRoadPositionParser::SubElementRoadPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _roadPositionXmlParser = std::make_shared<RoadPositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PositionXmlParser::SubElementRoadPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto roadPosition = std::make_shared<RoadPositionImpl>();
            auto typedObject = std::static_pointer_cast<PositionImpl>(object);                    
            // Setting the parent
            roadPosition->SetParent(object);
            _roadPositionXmlParser->ParseElement(indexedElement, parserContext, roadPosition);

            typedObject->SetRoadPosition(roadPosition);
            
            
        }
        
        int PositionXmlParser::SubElementRoadPositionParser::GetMinOccur() 
        {
            return 0;
        }

        int PositionXmlParser::SubElementRoadPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PositionXmlParser::SubElementRoadPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ROAD_POSITION ;
        }

        std::vector<std::string> PositionXmlParser::SubElementRoadPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ROAD_POSITION
                    };
        }
        PositionXmlParser::SubElementRelativeRoadPositionParser::SubElementRelativeRoadPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _relativeRoadPositionXmlParser = std::make_shared<RelativeRoadPositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PositionXmlParser::SubElementRelativeRoadPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto relativeRoadPosition = std::make_shared<RelativeRoadPositionImpl>();
            auto typedObject = std::static_pointer_cast<PositionImpl>(object);                    
            // Setting the parent
            relativeRoadPosition->SetParent(object);
            _relativeRoadPositionXmlParser->ParseElement(indexedElement, parserContext, relativeRoadPosition);

            typedObject->SetRelativeRoadPosition(relativeRoadPosition);
            
            
        }
        
        int PositionXmlParser::SubElementRelativeRoadPositionParser::GetMinOccur() 
        {
            return 0;
        }

        int PositionXmlParser::SubElementRelativeRoadPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PositionXmlParser::SubElementRelativeRoadPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_ROAD_POSITION ;
        }

        std::vector<std::string> PositionXmlParser::SubElementRelativeRoadPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RELATIVE_ROAD_POSITION
                    };
        }
        PositionXmlParser::SubElementLanePositionParser::SubElementLanePositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _lanePositionXmlParser = std::make_shared<LanePositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PositionXmlParser::SubElementLanePositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto lanePosition = std::make_shared<LanePositionImpl>();
            auto typedObject = std::static_pointer_cast<PositionImpl>(object);                    
            // Setting the parent
            lanePosition->SetParent(object);
            _lanePositionXmlParser->ParseElement(indexedElement, parserContext, lanePosition);

            typedObject->SetLanePosition(lanePosition);
            
            
        }
        
        int PositionXmlParser::SubElementLanePositionParser::GetMinOccur() 
        {
            return 0;
        }

        int PositionXmlParser::SubElementLanePositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PositionXmlParser::SubElementLanePositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__LANE_POSITION ;
        }

        std::vector<std::string> PositionXmlParser::SubElementLanePositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__LANE_POSITION
                    };
        }
        PositionXmlParser::SubElementRelativeLanePositionParser::SubElementRelativeLanePositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _relativeLanePositionXmlParser = std::make_shared<RelativeLanePositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PositionXmlParser::SubElementRelativeLanePositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto relativeLanePosition = std::make_shared<RelativeLanePositionImpl>();
            auto typedObject = std::static_pointer_cast<PositionImpl>(object);                    
            // Setting the parent
            relativeLanePosition->SetParent(object);
            _relativeLanePositionXmlParser->ParseElement(indexedElement, parserContext, relativeLanePosition);

            typedObject->SetRelativeLanePosition(relativeLanePosition);
            
            
        }
        
        int PositionXmlParser::SubElementRelativeLanePositionParser::GetMinOccur() 
        {
            return 0;
        }

        int PositionXmlParser::SubElementRelativeLanePositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PositionXmlParser::SubElementRelativeLanePositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_LANE_POSITION ;
        }

        std::vector<std::string> PositionXmlParser::SubElementRelativeLanePositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RELATIVE_LANE_POSITION
                    };
        }
        PositionXmlParser::SubElementRoutePositionParser::SubElementRoutePositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _routePositionXmlParser = std::make_shared<RoutePositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PositionXmlParser::SubElementRoutePositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto routePosition = std::make_shared<RoutePositionImpl>();
            auto typedObject = std::static_pointer_cast<PositionImpl>(object);                    
            // Setting the parent
            routePosition->SetParent(object);
            _routePositionXmlParser->ParseElement(indexedElement, parserContext, routePosition);

            typedObject->SetRoutePosition(routePosition);
            
            
        }
        
        int PositionXmlParser::SubElementRoutePositionParser::GetMinOccur() 
        {
            return 0;
        }

        int PositionXmlParser::SubElementRoutePositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PositionXmlParser::SubElementRoutePositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ROUTE_POSITION ;
        }

        std::vector<std::string> PositionXmlParser::SubElementRoutePositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ROUTE_POSITION
                    };
        }
        PositionXmlParser::SubElementGeoPositionParser::SubElementGeoPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _geoPositionXmlParser = std::make_shared<GeoPositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PositionXmlParser::SubElementGeoPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto geoPosition = std::make_shared<GeoPositionImpl>();
            auto typedObject = std::static_pointer_cast<PositionImpl>(object);                    
            // Setting the parent
            geoPosition->SetParent(object);
            _geoPositionXmlParser->ParseElement(indexedElement, parserContext, geoPosition);

            typedObject->SetGeoPosition(geoPosition);
            
            
        }
        
        int PositionXmlParser::SubElementGeoPositionParser::GetMinOccur() 
        {
            return 0;
        }

        int PositionXmlParser::SubElementGeoPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PositionXmlParser::SubElementGeoPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__GEO_POSITION ;
        }

        std::vector<std::string> PositionXmlParser::SubElementGeoPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__GEO_POSITION
                    };
        }
        PositionXmlParser::SubElementTrajectoryPositionParser::SubElementTrajectoryPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _trajectoryPositionXmlParser = std::make_shared<TrajectoryPositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PositionXmlParser::SubElementTrajectoryPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trajectoryPosition = std::make_shared<TrajectoryPositionImpl>();
            auto typedObject = std::static_pointer_cast<PositionImpl>(object);                    
            // Setting the parent
            trajectoryPosition->SetParent(object);
            _trajectoryPositionXmlParser->ParseElement(indexedElement, parserContext, trajectoryPosition);

            typedObject->SetTrajectoryPosition(trajectoryPosition);
            
            
        }
        
        int PositionXmlParser::SubElementTrajectoryPositionParser::GetMinOccur() 
        {
            return 0;
        }

        int PositionXmlParser::SubElementTrajectoryPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PositionXmlParser::SubElementTrajectoryPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAJECTORY_POSITION ;
        }

        std::vector<std::string> PositionXmlParser::SubElementTrajectoryPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAJECTORY_POSITION
                    };
        }
  
        PositionXmlParser::PositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PositionInLaneCoordinatesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PositionInLaneCoordinatesXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PositionInLaneCoordinatesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeLaneId: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeLaneId(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PositionInLaneCoordinatesImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetLaneId(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, std::make_shared<AttributeLaneId>(_messageLogger, _filename, _parserOptions)));
            class AttributeLaneOffset: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeLaneOffset(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PositionInLaneCoordinatesImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetLaneOffset(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET, std::make_shared<AttributeLaneOffset>(_messageLogger, _filename, _parserOptions)));
            class AttributePathS: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributePathS(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PositionInLaneCoordinatesImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PATH_S, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PATH_S, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetPathS(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PATH_S, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PATH_S, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PATH_S, std::make_shared<AttributePathS>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PositionInLaneCoordinatesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        PositionInLaneCoordinatesXmlParser::PositionInLaneCoordinatesXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PositionInRoadCoordinatesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PositionInRoadCoordinatesXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PositionInRoadCoordinatesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributePathS: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributePathS(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PositionInRoadCoordinatesImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PATH_S, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PATH_S, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetPathS(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PATH_S, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PATH_S, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PATH_S, std::make_shared<AttributePathS>(_messageLogger, _filename, _parserOptions)));
            class AttributeT: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeT(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PositionInRoadCoordinatesImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__T, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__T, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetT(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<AttributeT>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PositionInRoadCoordinatesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        PositionInRoadCoordinatesXmlParser::PositionInRoadCoordinatesXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PositionOfCurrentEntityImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PositionOfCurrentEntityXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PositionOfCurrentEntityXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PositionOfCurrentEntityImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PositionOfCurrentEntityXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        PositionOfCurrentEntityXmlParser::PositionOfCurrentEntityXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PrecipitationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PrecipitationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PrecipitationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeIntensity: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeIntensity(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PrecipitationImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetIntensity(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<Textmarker>(endMarker));
                     
                    
					if (!_parserOptions.IsOptionSetSupressDeprecationWarnings())
					{
						// This element is deprecated
						auto msg = FileContentMessage("Attribute '" + attributeName + "' is deprecated since standard version '1.1'. Comment: 'Use instead precipitationIntensity.'.", WARNING, Textmarker(startPosition.GetLine(), startPosition.GetColumn(), this->_filename));
						this->_messageLogger.LogMessage(msg);
					}
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<AttributeIntensity>(_messageLogger, _filename, _parserOptions)));
            class AttributePrecipitationIntensity: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributePrecipitationIntensity(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PrecipitationImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_INTENSITY, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_INTENSITY, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetPrecipitationIntensity(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_INTENSITY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_INTENSITY, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_INTENSITY, std::make_shared<AttributePrecipitationIntensity>(_messageLogger, _filename, _parserOptions)));
            class AttributePrecipitationType: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributePrecipitationType(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PrecipitationImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = PrecipitationType::GetFromLiteral(attributeValue);
                        if (kResult != PrecipitationType::UNKNOWN)
                        {
                            typedObject->SetPrecipitationType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (PrecipitationType::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  PrecipitationType::GetDeprecatedVersion(kResult) +"'. " + PrecipitationType::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE, std::make_shared<AttributePrecipitationType>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PrecipitationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        PrecipitationXmlParser::PrecipitationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PrivateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PrivateXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PrivateXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PrivateImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PrivateXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPrivateActionsParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        PrivateXmlParser::SubElementPrivateActionsParser::SubElementPrivateActionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _privateActionXmlParser = std::make_shared<PrivateActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PrivateXmlParser::SubElementPrivateActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto privateActions = std::make_shared<PrivateActionImpl>();
            auto typedObject = std::static_pointer_cast<PrivateImpl>(object);                    
            // Setting the parent
            privateActions->SetParent(object);
            _privateActionXmlParser->ParseElement(indexedElement, parserContext, privateActions);
            auto privateActionsList = typedObject->GetWriterPrivateActions();
            privateActionsList.push_back(privateActions);
            typedObject->SetPrivateActions(privateActionsList);
            
            
        }
        
        int PrivateXmlParser::SubElementPrivateActionsParser::GetMinOccur() 
        {
            return 1;
        }

        int PrivateXmlParser::SubElementPrivateActionsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool PrivateXmlParser::SubElementPrivateActionsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION ;
        }

        std::vector<std::string> PrivateXmlParser::SubElementPrivateActionsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION
                    };
        }
  
        PrivateXmlParser::PrivateXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PrivateActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PrivateActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> PrivateActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PrivateActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementLongitudinalActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementLateralActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementVisibilityActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementSynchronizeActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementActivateControllerActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementControllerActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTeleportActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementRoutingActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementAppearanceActionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        PrivateActionXmlParser::SubElementLongitudinalActionParser::SubElementLongitudinalActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _longitudinalActionXmlParser = std::make_shared<LongitudinalActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PrivateActionXmlParser::SubElementLongitudinalActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto longitudinalAction = std::make_shared<LongitudinalActionImpl>();
            auto typedObject = std::static_pointer_cast<PrivateActionImpl>(object);                    
            // Setting the parent
            longitudinalAction->SetParent(object);
            _longitudinalActionXmlParser->ParseElement(indexedElement, parserContext, longitudinalAction);

            typedObject->SetLongitudinalAction(longitudinalAction);
            
            
        }
        
        int PrivateActionXmlParser::SubElementLongitudinalActionParser::GetMinOccur() 
        {
            return 0;
        }

        int PrivateActionXmlParser::SubElementLongitudinalActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PrivateActionXmlParser::SubElementLongitudinalActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__LONGITUDINAL_ACTION ;
        }

        std::vector<std::string> PrivateActionXmlParser::SubElementLongitudinalActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__LONGITUDINAL_ACTION
                    };
        }
        PrivateActionXmlParser::SubElementLateralActionParser::SubElementLateralActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _lateralActionXmlParser = std::make_shared<LateralActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PrivateActionXmlParser::SubElementLateralActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto lateralAction = std::make_shared<LateralActionImpl>();
            auto typedObject = std::static_pointer_cast<PrivateActionImpl>(object);                    
            // Setting the parent
            lateralAction->SetParent(object);
            _lateralActionXmlParser->ParseElement(indexedElement, parserContext, lateralAction);

            typedObject->SetLateralAction(lateralAction);
            
            
        }
        
        int PrivateActionXmlParser::SubElementLateralActionParser::GetMinOccur() 
        {
            return 0;
        }

        int PrivateActionXmlParser::SubElementLateralActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PrivateActionXmlParser::SubElementLateralActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__LATERAL_ACTION ;
        }

        std::vector<std::string> PrivateActionXmlParser::SubElementLateralActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__LATERAL_ACTION
                    };
        }
        PrivateActionXmlParser::SubElementVisibilityActionParser::SubElementVisibilityActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _visibilityActionXmlParser = std::make_shared<VisibilityActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PrivateActionXmlParser::SubElementVisibilityActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto visibilityAction = std::make_shared<VisibilityActionImpl>();
            auto typedObject = std::static_pointer_cast<PrivateActionImpl>(object);                    
            // Setting the parent
            visibilityAction->SetParent(object);
            _visibilityActionXmlParser->ParseElement(indexedElement, parserContext, visibilityAction);

            typedObject->SetVisibilityAction(visibilityAction);
            
            
        }
        
        int PrivateActionXmlParser::SubElementVisibilityActionParser::GetMinOccur() 
        {
            return 0;
        }

        int PrivateActionXmlParser::SubElementVisibilityActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PrivateActionXmlParser::SubElementVisibilityActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__VISIBILITY_ACTION ;
        }

        std::vector<std::string> PrivateActionXmlParser::SubElementVisibilityActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__VISIBILITY_ACTION
                    };
        }
        PrivateActionXmlParser::SubElementSynchronizeActionParser::SubElementSynchronizeActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _synchronizeActionXmlParser = std::make_shared<SynchronizeActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PrivateActionXmlParser::SubElementSynchronizeActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto synchronizeAction = std::make_shared<SynchronizeActionImpl>();
            auto typedObject = std::static_pointer_cast<PrivateActionImpl>(object);                    
            // Setting the parent
            synchronizeAction->SetParent(object);
            _synchronizeActionXmlParser->ParseElement(indexedElement, parserContext, synchronizeAction);

            typedObject->SetSynchronizeAction(synchronizeAction);
            
            
        }
        
        int PrivateActionXmlParser::SubElementSynchronizeActionParser::GetMinOccur() 
        {
            return 0;
        }

        int PrivateActionXmlParser::SubElementSynchronizeActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PrivateActionXmlParser::SubElementSynchronizeActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SYNCHRONIZE_ACTION ;
        }

        std::vector<std::string> PrivateActionXmlParser::SubElementSynchronizeActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SYNCHRONIZE_ACTION
                    };
        }
        PrivateActionXmlParser::SubElementActivateControllerActionParser::SubElementActivateControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _activateControllerActionXmlParser = std::make_shared<ActivateControllerActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PrivateActionXmlParser::SubElementActivateControllerActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto activateControllerAction = std::make_shared<ActivateControllerActionImpl>();
            auto typedObject = std::static_pointer_cast<PrivateActionImpl>(object);                    
            // Setting the parent
            activateControllerAction->SetParent(object);
            _activateControllerActionXmlParser->ParseElement(indexedElement, parserContext, activateControllerAction);

            typedObject->SetActivateControllerAction(activateControllerAction);
            
            
			if (!_activateControllerActionXmlParser->_parserOptions.IsOptionSetSupressDeprecationWarnings())
			{
				// This element is deprecated
				std::string name = indexedElement->GetElement()->Name();
				Position startPosition = indexedElement->GetStartElementLocation();
				auto msg = FileContentMessage("Element '" + name + "' is deprecated since standard version '1.1'. Comment: 'Moved to ControllerAction'.", WARNING, Textmarker(startPosition.GetLine(), startPosition.GetColumn(), _activateControllerActionXmlParser->_filename));
				_activateControllerActionXmlParser->_messageLogger.LogMessage(msg);
			}
        }
        
        int PrivateActionXmlParser::SubElementActivateControllerActionParser::GetMinOccur() 
        {
            return 0;
        }

        int PrivateActionXmlParser::SubElementActivateControllerActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PrivateActionXmlParser::SubElementActivateControllerActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ACTIVATE_CONTROLLER_ACTION ;
        }

        std::vector<std::string> PrivateActionXmlParser::SubElementActivateControllerActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ACTIVATE_CONTROLLER_ACTION
                    };
        }
        PrivateActionXmlParser::SubElementControllerActionParser::SubElementControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _controllerActionXmlParser = std::make_shared<ControllerActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PrivateActionXmlParser::SubElementControllerActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto controllerAction = std::make_shared<ControllerActionImpl>();
            auto typedObject = std::static_pointer_cast<PrivateActionImpl>(object);                    
            // Setting the parent
            controllerAction->SetParent(object);
            _controllerActionXmlParser->ParseElement(indexedElement, parserContext, controllerAction);

            typedObject->SetControllerAction(controllerAction);
            
            
        }
        
        int PrivateActionXmlParser::SubElementControllerActionParser::GetMinOccur() 
        {
            return 0;
        }

        int PrivateActionXmlParser::SubElementControllerActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PrivateActionXmlParser::SubElementControllerActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER_ACTION ;
        }

        std::vector<std::string> PrivateActionXmlParser::SubElementControllerActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONTROLLER_ACTION
                    };
        }
        PrivateActionXmlParser::SubElementTeleportActionParser::SubElementTeleportActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _teleportActionXmlParser = std::make_shared<TeleportActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PrivateActionXmlParser::SubElementTeleportActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto teleportAction = std::make_shared<TeleportActionImpl>();
            auto typedObject = std::static_pointer_cast<PrivateActionImpl>(object);                    
            // Setting the parent
            teleportAction->SetParent(object);
            _teleportActionXmlParser->ParseElement(indexedElement, parserContext, teleportAction);

            typedObject->SetTeleportAction(teleportAction);
            
            
        }
        
        int PrivateActionXmlParser::SubElementTeleportActionParser::GetMinOccur() 
        {
            return 0;
        }

        int PrivateActionXmlParser::SubElementTeleportActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PrivateActionXmlParser::SubElementTeleportActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TELEPORT_ACTION ;
        }

        std::vector<std::string> PrivateActionXmlParser::SubElementTeleportActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TELEPORT_ACTION
                    };
        }
        PrivateActionXmlParser::SubElementRoutingActionParser::SubElementRoutingActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _routingActionXmlParser = std::make_shared<RoutingActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PrivateActionXmlParser::SubElementRoutingActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto routingAction = std::make_shared<RoutingActionImpl>();
            auto typedObject = std::static_pointer_cast<PrivateActionImpl>(object);                    
            // Setting the parent
            routingAction->SetParent(object);
            _routingActionXmlParser->ParseElement(indexedElement, parserContext, routingAction);

            typedObject->SetRoutingAction(routingAction);
            
            
        }
        
        int PrivateActionXmlParser::SubElementRoutingActionParser::GetMinOccur() 
        {
            return 0;
        }

        int PrivateActionXmlParser::SubElementRoutingActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PrivateActionXmlParser::SubElementRoutingActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ROUTING_ACTION ;
        }

        std::vector<std::string> PrivateActionXmlParser::SubElementRoutingActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ROUTING_ACTION
                    };
        }
        PrivateActionXmlParser::SubElementAppearanceActionParser::SubElementAppearanceActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _appearanceActionXmlParser = std::make_shared<AppearanceActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void PrivateActionXmlParser::SubElementAppearanceActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto appearanceAction = std::make_shared<AppearanceActionImpl>();
            auto typedObject = std::static_pointer_cast<PrivateActionImpl>(object);                    
            // Setting the parent
            appearanceAction->SetParent(object);
            _appearanceActionXmlParser->ParseElement(indexedElement, parserContext, appearanceAction);

            typedObject->SetAppearanceAction(appearanceAction);
            
            
        }
        
        int PrivateActionXmlParser::SubElementAppearanceActionParser::GetMinOccur() 
        {
            return 0;
        }

        int PrivateActionXmlParser::SubElementAppearanceActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool PrivateActionXmlParser::SubElementAppearanceActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__APPEARANCE_ACTION ;
        }

        std::vector<std::string> PrivateActionXmlParser::SubElementAppearanceActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__APPEARANCE_ACTION
                    };
        }
  
        PrivateActionXmlParser::PrivateActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ProbabilityDistributionSetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ProbabilityDistributionSetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ProbabilityDistributionSetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ProbabilityDistributionSetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementElementsParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        ProbabilityDistributionSetXmlParser::SubElementElementsParser::SubElementElementsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _probabilityDistributionSetElementXmlParser = std::make_shared<ProbabilityDistributionSetElementXmlParser>(messageLogger, filename, parserOptions);
        }

        void ProbabilityDistributionSetXmlParser::SubElementElementsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto elements = std::make_shared<ProbabilityDistributionSetElementImpl>();
            auto typedObject = std::static_pointer_cast<ProbabilityDistributionSetImpl>(object);                    
            // Setting the parent
            elements->SetParent(object);
            _probabilityDistributionSetElementXmlParser->ParseElement(indexedElement, parserContext, elements);
            auto elementsList = typedObject->GetWriterElements();
            elementsList.push_back(elements);
            typedObject->SetElements(elementsList);
            
            
        }
        
        int ProbabilityDistributionSetXmlParser::SubElementElementsParser::GetMinOccur() 
        {
            return 1;
        }

        int ProbabilityDistributionSetXmlParser::SubElementElementsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ProbabilityDistributionSetXmlParser::SubElementElementsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ELEMENT ;
        }

        std::vector<std::string> ProbabilityDistributionSetXmlParser::SubElementElementsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ELEMENT
                    };
        }
  
        ProbabilityDistributionSetXmlParser::ProbabilityDistributionSetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ProbabilityDistributionSetElementImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ProbabilityDistributionSetElementXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ProbabilityDistributionSetElementXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<ProbabilityDistributionSetElementImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            class AttributeWeight: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeWeight(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<ProbabilityDistributionSetElementImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetWeight(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<AttributeWeight>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ProbabilityDistributionSetElementXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        ProbabilityDistributionSetElementXmlParser::ProbabilityDistributionSetElementXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PropertiesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PropertiesXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PropertiesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PropertiesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPropertiesParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementFilesParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementCustomContentParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        PropertiesXmlParser::SubElementPropertiesParser::SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _propertyXmlParser = std::make_shared<PropertyXmlParser>(messageLogger, filename, parserOptions);
        }

        void PropertiesXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto properties = std::make_shared<PropertyImpl>();
            auto typedObject = std::static_pointer_cast<PropertiesImpl>(object);                    
            // Setting the parent
            properties->SetParent(object);
            _propertyXmlParser->ParseElement(indexedElement, parserContext, properties);
            auto propertiesList = typedObject->GetWriterProperties();
            propertiesList.push_back(properties);
            typedObject->SetProperties(propertiesList);
            
            
        }
        
        int PropertiesXmlParser::SubElementPropertiesParser::GetMinOccur() 
        {
            return 0;
        }

        int PropertiesXmlParser::SubElementPropertiesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool PropertiesXmlParser::SubElementPropertiesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PROPERTY ;
        }

        std::vector<std::string> PropertiesXmlParser::SubElementPropertiesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PROPERTY
                    };
        }
        PropertiesXmlParser::SubElementFilesParser::SubElementFilesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _fileXmlParser = std::make_shared<FileXmlParser>(messageLogger, filename, parserOptions);
        }

        void PropertiesXmlParser::SubElementFilesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto files = std::make_shared<FileImpl>();
            auto typedObject = std::static_pointer_cast<PropertiesImpl>(object);                    
            // Setting the parent
            files->SetParent(object);
            _fileXmlParser->ParseElement(indexedElement, parserContext, files);
            auto filesList = typedObject->GetWriterFiles();
            filesList.push_back(files);
            typedObject->SetFiles(filesList);
            
            
        }
        
        int PropertiesXmlParser::SubElementFilesParser::GetMinOccur() 
        {
            return 0;
        }

        int PropertiesXmlParser::SubElementFilesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool PropertiesXmlParser::SubElementFilesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__FILE ;
        }

        std::vector<std::string> PropertiesXmlParser::SubElementFilesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__FILE
                    };
        }
        PropertiesXmlParser::SubElementCustomContentParser::SubElementCustomContentParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _customContentXmlParser = std::make_shared<CustomContentXmlParser>(messageLogger, filename, parserOptions);
        }

        void PropertiesXmlParser::SubElementCustomContentParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto customContent = std::make_shared<CustomContentImpl>();
            auto typedObject = std::static_pointer_cast<PropertiesImpl>(object);                    
            // Setting the parent
            customContent->SetParent(object);
            _customContentXmlParser->ParseElement(indexedElement, parserContext, customContent);
            auto customContentList = typedObject->GetWriterCustomContent();
            customContentList.push_back(customContent);
            typedObject->SetCustomContent(customContentList);
            
            
        }
        
        int PropertiesXmlParser::SubElementCustomContentParser::GetMinOccur() 
        {
            return 0;
        }

        int PropertiesXmlParser::SubElementCustomContentParser::GetMaxOccur() 
        {
            return -1;
        }

        bool PropertiesXmlParser::SubElementCustomContentParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CUSTOM_CONTENT ;
        }

        std::vector<std::string> PropertiesXmlParser::SubElementCustomContentParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CUSTOM_CONTENT
                    };
        }
  
        PropertiesXmlParser::PropertiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PropertyImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PropertyXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> PropertyXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PropertyImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<PropertyImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> PropertyXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        PropertyXmlParser::PropertyXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RangeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RangeXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> RangeXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeLowerLimit: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeLowerLimit(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RangeImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LOWER_LIMIT, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LOWER_LIMIT, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetLowerLimit(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LOWER_LIMIT, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LOWER_LIMIT, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LOWER_LIMIT, std::make_shared<AttributeLowerLimit>(_messageLogger, _filename, _parserOptions)));
            class AttributeUpperLimit: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeUpperLimit(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RangeImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__UPPER_LIMIT, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__UPPER_LIMIT, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetUpperLimit(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__UPPER_LIMIT, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__UPPER_LIMIT, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__UPPER_LIMIT, std::make_shared<AttributeUpperLimit>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RangeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        RangeXmlParser::RangeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ReachPositionConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ReachPositionConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ReachPositionConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeTolerance: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTolerance(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<ReachPositionConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetTolerance(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE, std::make_shared<AttributeTolerance>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ReachPositionConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        ReachPositionConditionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void ReachPositionConditionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto position = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<ReachPositionConditionImpl>(object);                    
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            typedObject->SetPosition(position);
            
            
        }
        
        int ReachPositionConditionXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int ReachPositionConditionXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ReachPositionConditionXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> ReachPositionConditionXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        ReachPositionConditionXmlParser::ReachPositionConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeClearanceConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeClearanceConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> RelativeClearanceConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDistanceBackward: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDistanceBackward(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeClearanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_BACKWARD, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_BACKWARD, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDistanceBackward(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_BACKWARD, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_BACKWARD, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_BACKWARD, std::make_shared<AttributeDistanceBackward>(_messageLogger, _filename, _parserOptions)));
            class AttributeDistanceForward: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDistanceForward(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeClearanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_FORWARD, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_FORWARD, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDistanceForward(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_FORWARD, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_FORWARD, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DISTANCE_FORWARD, std::make_shared<AttributeDistanceForward>(_messageLogger, _filename, _parserOptions)));
            class AttributeFreeSpace: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeFreeSpace(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeClearanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FREE_SPACE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetFreeSpace(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FREE_SPACE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FREE_SPACE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FREE_SPACE, std::make_shared<AttributeFreeSpace>(_messageLogger, _filename, _parserOptions)));
            class AttributeOppositeLanes: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeOppositeLanes(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeClearanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__OPPOSITE_LANES, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetOppositeLanes(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__OPPOSITE_LANES, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__OPPOSITE_LANES, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__OPPOSITE_LANES, std::make_shared<AttributeOppositeLanes>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RelativeClearanceConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementRelativeLaneRangeParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementEntityRefParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RelativeClearanceConditionXmlParser::SubElementRelativeLaneRangeParser::SubElementRelativeLaneRangeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _relativeLaneRangeXmlParser = std::make_shared<RelativeLaneRangeXmlParser>(messageLogger, filename, parserOptions);
        }

        void RelativeClearanceConditionXmlParser::SubElementRelativeLaneRangeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto relativeLaneRange = std::make_shared<RelativeLaneRangeImpl>();
            auto typedObject = std::static_pointer_cast<RelativeClearanceConditionImpl>(object);                    
            // Setting the parent
            relativeLaneRange->SetParent(object);
            _relativeLaneRangeXmlParser->ParseElement(indexedElement, parserContext, relativeLaneRange);
            auto relativeLaneRangeList = typedObject->GetWriterRelativeLaneRange();
            relativeLaneRangeList.push_back(relativeLaneRange);
            typedObject->SetRelativeLaneRange(relativeLaneRangeList);
            
            
        }
        
        int RelativeClearanceConditionXmlParser::SubElementRelativeLaneRangeParser::GetMinOccur() 
        {
            return 0;
        }

        int RelativeClearanceConditionXmlParser::SubElementRelativeLaneRangeParser::GetMaxOccur() 
        {
            return -1;
        }

        bool RelativeClearanceConditionXmlParser::SubElementRelativeLaneRangeParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_LANE_RANGE ;
        }

        std::vector<std::string> RelativeClearanceConditionXmlParser::SubElementRelativeLaneRangeParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RELATIVE_LANE_RANGE
                    };
        }
        RelativeClearanceConditionXmlParser::SubElementEntityRefParser::SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _entityRefXmlParser = std::make_shared<EntityRefXmlParser>(messageLogger, filename, parserOptions);
        }

        void RelativeClearanceConditionXmlParser::SubElementEntityRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto entityRef = std::make_shared<EntityRefImpl>();
            auto typedObject = std::static_pointer_cast<RelativeClearanceConditionImpl>(object);                    
            // Setting the parent
            entityRef->SetParent(object);
            _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRef);
            auto entityRefList = typedObject->GetWriterEntityRef();
            entityRefList.push_back(entityRef);
            typedObject->SetEntityRef(entityRefList);
            
            
        }
        
        int RelativeClearanceConditionXmlParser::SubElementEntityRefParser::GetMinOccur() 
        {
            return 0;
        }

        int RelativeClearanceConditionXmlParser::SubElementEntityRefParser::GetMaxOccur() 
        {
            return -1;
        }

        bool RelativeClearanceConditionXmlParser::SubElementEntityRefParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
        }

        std::vector<std::string> RelativeClearanceConditionXmlParser::SubElementEntityRefParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENTITY_REF
                    };
        }
  
        RelativeClearanceConditionXmlParser::RelativeClearanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeDistanceConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeDistanceConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> RelativeDistanceConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeCoordinateSystem: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeCoordinateSystem(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeDistanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = CoordinateSystem::GetFromLiteral(attributeValue);
                        if (kResult != CoordinateSystem::UNKNOWN)
                        {
                            typedObject->SetCoordinateSystem(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (CoordinateSystem::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  CoordinateSystem::GetDeprecatedVersion(kResult) +"'. " + CoordinateSystem::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, std::make_shared<AttributeCoordinateSystem>(_messageLogger, _filename, _parserOptions)));
            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeDistanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            class AttributeFreespace: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeFreespace(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeDistanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetFreespace(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<AttributeFreespace>(_messageLogger, _filename, _parserOptions)));
            class AttributeRelativeDistanceType: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRelativeDistanceType(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeDistanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = RelativeDistanceType::GetFromLiteral(attributeValue);
                        if (kResult != RelativeDistanceType::UNKNOWN)
                        {
                            typedObject->SetRelativeDistanceType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (RelativeDistanceType::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  RelativeDistanceType::GetDeprecatedVersion(kResult) +"'. " + RelativeDistanceType::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, std::make_shared<AttributeRelativeDistanceType>(_messageLogger, _filename, _parserOptions)));
            class AttributeRoutingAlgorithm: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRoutingAlgorithm(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeDistanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ROUTING_ALGORITHM, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = RoutingAlgorithm::GetFromLiteral(attributeValue);
                        if (kResult != RoutingAlgorithm::UNKNOWN)
                        {
                            typedObject->SetRoutingAlgorithm(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (RoutingAlgorithm::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  RoutingAlgorithm::GetDeprecatedVersion(kResult) +"'. " + RoutingAlgorithm::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ROUTING_ALGORITHM, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ROUTING_ALGORITHM, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ROUTING_ALGORITHM, std::make_shared<AttributeRoutingAlgorithm>(_messageLogger, _filename, _parserOptions)));
            class AttributeRule: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeDistanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            typedObject->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (Rule::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  Rule::GetDeprecatedVersion(kResult) +"'. " + Rule::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeDistanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RelativeDistanceConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        RelativeDistanceConditionXmlParser::RelativeDistanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeLanePositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeLanePositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> RelativeLanePositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDLane: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDLane(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeLanePositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__D_LANE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype int
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__D_LANE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDLane(ParseInt(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__D_LANE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__D_LANE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__D_LANE, std::make_shared<AttributeDLane>(_messageLogger, _filename, _parserOptions)));
            class AttributeDs: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDs(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeLanePositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DS, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DS, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDs(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<AttributeDs>(_messageLogger, _filename, _parserOptions)));
            class AttributeDsLane: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDsLane(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeLanePositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DS_LANE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DS_LANE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDsLane(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DS_LANE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DS_LANE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DS_LANE, std::make_shared<AttributeDsLane>(_messageLogger, _filename, _parserOptions)));
            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeLanePositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            class AttributeOffset: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeOffset(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeLanePositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__OFFSET, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__OFFSET, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetOffset(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<AttributeOffset>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RelativeLanePositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RelativeLanePositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename, parserOptions);
        }

        void RelativeLanePositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            auto typedObject = std::static_pointer_cast<RelativeLanePositionImpl>(object);                    
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            typedObject->SetOrientation(orientation);
            
            
        }
        
        int RelativeLanePositionXmlParser::SubElementOrientationParser::GetMinOccur() 
        {
            return 0;
        }

        int RelativeLanePositionXmlParser::SubElementOrientationParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RelativeLanePositionXmlParser::SubElementOrientationParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
        }

        std::vector<std::string> RelativeLanePositionXmlParser::SubElementOrientationParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ORIENTATION
                    };
        }
  
        RelativeLanePositionXmlParser::RelativeLanePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeLaneRangeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeLaneRangeXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> RelativeLaneRangeXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeFrom: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeFrom(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeLaneRangeImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FROM, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype int
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FROM, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetFrom(ParseInt(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FROM, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FROM, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FROM, std::make_shared<AttributeFrom>(_messageLogger, _filename, _parserOptions)));
            class AttributeTo: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTo(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeLaneRangeImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TO, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype int
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TO, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetTo(ParseInt(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TO, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TO, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TO, std::make_shared<AttributeTo>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RelativeLaneRangeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        RelativeLaneRangeXmlParser::RelativeLaneRangeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeObjectPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeObjectPositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> RelativeObjectPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDx: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDx(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeObjectPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DX, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DX, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDx(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DX, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DX, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DX, std::make_shared<AttributeDx>(_messageLogger, _filename, _parserOptions)));
            class AttributeDy: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDy(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeObjectPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DY, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DY, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDy(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DY, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DY, std::make_shared<AttributeDy>(_messageLogger, _filename, _parserOptions)));
            class AttributeDz: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDz(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeObjectPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DZ, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DZ, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDz(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DZ, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DZ, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DZ, std::make_shared<AttributeDz>(_messageLogger, _filename, _parserOptions)));
            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeObjectPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RelativeObjectPositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RelativeObjectPositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename, parserOptions);
        }

        void RelativeObjectPositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            auto typedObject = std::static_pointer_cast<RelativeObjectPositionImpl>(object);                    
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            typedObject->SetOrientation(orientation);
            
            
        }
        
        int RelativeObjectPositionXmlParser::SubElementOrientationParser::GetMinOccur() 
        {
            return 0;
        }

        int RelativeObjectPositionXmlParser::SubElementOrientationParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RelativeObjectPositionXmlParser::SubElementOrientationParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
        }

        std::vector<std::string> RelativeObjectPositionXmlParser::SubElementOrientationParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ORIENTATION
                    };
        }
  
        RelativeObjectPositionXmlParser::RelativeObjectPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeRoadPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeRoadPositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> RelativeRoadPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDs: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDs(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeRoadPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DS, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DS, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDs(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<AttributeDs>(_messageLogger, _filename, _parserOptions)));
            class AttributeDt: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDt(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeRoadPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DT, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DT, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDt(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DT, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DT, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DT, std::make_shared<AttributeDt>(_messageLogger, _filename, _parserOptions)));
            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeRoadPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RelativeRoadPositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RelativeRoadPositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename, parserOptions);
        }

        void RelativeRoadPositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            auto typedObject = std::static_pointer_cast<RelativeRoadPositionImpl>(object);                    
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            typedObject->SetOrientation(orientation);
            
            
        }
        
        int RelativeRoadPositionXmlParser::SubElementOrientationParser::GetMinOccur() 
        {
            return 0;
        }

        int RelativeRoadPositionXmlParser::SubElementOrientationParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RelativeRoadPositionXmlParser::SubElementOrientationParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
        }

        std::vector<std::string> RelativeRoadPositionXmlParser::SubElementOrientationParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ORIENTATION
                    };
        }
  
        RelativeRoadPositionXmlParser::RelativeRoadPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeSpeedConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeSpeedConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> RelativeSpeedConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDirection: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDirection(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeSpeedConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = DirectionalDimension::GetFromLiteral(attributeValue);
                        if (kResult != DirectionalDimension::UNKNOWN)
                        {
                            typedObject->SetDirection(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (DirectionalDimension::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  DirectionalDimension::GetDeprecatedVersion(kResult) +"'. " + DirectionalDimension::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, std::make_shared<AttributeDirection>(_messageLogger, _filename, _parserOptions)));
            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeSpeedConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            class AttributeRule: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeSpeedConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            typedObject->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (Rule::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  Rule::GetDeprecatedVersion(kResult) +"'. " + Rule::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeSpeedConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RelativeSpeedConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        RelativeSpeedConditionXmlParser::RelativeSpeedConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeSpeedToMasterImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeSpeedToMasterXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> RelativeSpeedToMasterXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeSpeedTargetValueType: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeSpeedTargetValueType(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeSpeedToMasterImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = SpeedTargetValueType::GetFromLiteral(attributeValue);
                        if (kResult != SpeedTargetValueType::UNKNOWN)
                        {
                            typedObject->SetSpeedTargetValueType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (SpeedTargetValueType::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  SpeedTargetValueType::GetDeprecatedVersion(kResult) +"'. " + SpeedTargetValueType::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, std::make_shared<AttributeSpeedTargetValueType>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeSpeedToMasterImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RelativeSpeedToMasterXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementSteadyStateParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RelativeSpeedToMasterXmlParser::SubElementSteadyStateParser::SubElementSteadyStateParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _steadyStateXmlParser = std::make_shared<SteadyStateXmlParser>(messageLogger, filename, parserOptions);
        }

        void RelativeSpeedToMasterXmlParser::SubElementSteadyStateParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto steadyState = std::make_shared<SteadyStateImpl>();
            auto typedObject = std::static_pointer_cast<RelativeSpeedToMasterImpl>(object);                    
            // Setting the parent
            steadyState->SetParent(object);
            _steadyStateXmlParser->ParseElement(indexedElement, parserContext, steadyState);

            typedObject->SetSteadyState(steadyState);
            
            
        }
        
        int RelativeSpeedToMasterXmlParser::SubElementSteadyStateParser::GetMinOccur() 
        {
            return 0;
        }

        int RelativeSpeedToMasterXmlParser::SubElementSteadyStateParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RelativeSpeedToMasterXmlParser::SubElementSteadyStateParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TARGET_DISTANCE_STEADY_STATE || 
                elementName == OSC_CONSTANTS::ELEMENT__TARGET_TIME_STEADY_STATE ;
        }

        std::vector<std::string> RelativeSpeedToMasterXmlParser::SubElementSteadyStateParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TARGET_DISTANCE_STEADY_STATE,
                OSC_CONSTANTS::ELEMENT__TARGET_TIME_STEADY_STATE
                    };
        }
  
        RelativeSpeedToMasterXmlParser::RelativeSpeedToMasterXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeTargetLaneImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeTargetLaneXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> RelativeTargetLaneXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeTargetLaneImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeTargetLaneImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype int
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseInt(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RelativeTargetLaneXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        RelativeTargetLaneXmlParser::RelativeTargetLaneXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeTargetLaneOffsetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeTargetLaneOffsetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> RelativeTargetLaneOffsetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeTargetLaneOffsetImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeTargetLaneOffsetImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RelativeTargetLaneOffsetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        RelativeTargetLaneOffsetXmlParser::RelativeTargetLaneOffsetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeTargetSpeedImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeTargetSpeedXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> RelativeTargetSpeedXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeContinuous: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeContinuous(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeTargetSpeedImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetContinuous(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, std::make_shared<AttributeContinuous>(_messageLogger, _filename, _parserOptions)));
            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeTargetSpeedImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            class AttributeSpeedTargetValueType: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeSpeedTargetValueType(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeTargetSpeedImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = SpeedTargetValueType::GetFromLiteral(attributeValue);
                        if (kResult != SpeedTargetValueType::UNKNOWN)
                        {
                            typedObject->SetSpeedTargetValueType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (SpeedTargetValueType::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  SpeedTargetValueType::GetDeprecatedVersion(kResult) +"'. " + SpeedTargetValueType::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, std::make_shared<AttributeSpeedTargetValueType>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeTargetSpeedImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RelativeTargetSpeedXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        RelativeTargetSpeedXmlParser::RelativeTargetSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeWorldPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeWorldPositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> RelativeWorldPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDx: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDx(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeWorldPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DX, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DX, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDx(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DX, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DX, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DX, std::make_shared<AttributeDx>(_messageLogger, _filename, _parserOptions)));
            class AttributeDy: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDy(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeWorldPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DY, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DY, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDy(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DY, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DY, std::make_shared<AttributeDy>(_messageLogger, _filename, _parserOptions)));
            class AttributeDz: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDz(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeWorldPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DZ, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DZ, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDz(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DZ, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DZ, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DZ, std::make_shared<AttributeDz>(_messageLogger, _filename, _parserOptions)));
            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RelativeWorldPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RelativeWorldPositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RelativeWorldPositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename, parserOptions);
        }

        void RelativeWorldPositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            auto typedObject = std::static_pointer_cast<RelativeWorldPositionImpl>(object);                    
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            typedObject->SetOrientation(orientation);
            
            
        }
        
        int RelativeWorldPositionXmlParser::SubElementOrientationParser::GetMinOccur() 
        {
            return 0;
        }

        int RelativeWorldPositionXmlParser::SubElementOrientationParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RelativeWorldPositionXmlParser::SubElementOrientationParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
        }

        std::vector<std::string> RelativeWorldPositionXmlParser::SubElementOrientationParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ORIENTATION
                    };
        }
  
        RelativeWorldPositionXmlParser::RelativeWorldPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RoadConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RoadConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> RoadConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeFrictionScaleFactor: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeFrictionScaleFactor(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RoadConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetFrictionScaleFactor(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR, std::make_shared<AttributeFrictionScaleFactor>(_messageLogger, _filename, _parserOptions)));
            class AttributeWetness: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeWetness(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RoadConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__WETNESS, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Wetness::GetFromLiteral(attributeValue);
                        if (kResult != Wetness::UNKNOWN)
                        {
                            typedObject->SetWetness(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (Wetness::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  Wetness::GetDeprecatedVersion(kResult) +"'. " + Wetness::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__WETNESS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__WETNESS, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__WETNESS, std::make_shared<AttributeWetness>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RoadConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPropertiesParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RoadConditionXmlParser::SubElementPropertiesParser::SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _propertiesXmlParser = std::make_shared<PropertiesXmlParser>(messageLogger, filename, parserOptions);
        }

        void RoadConditionXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto properties = std::make_shared<PropertiesImpl>();
            auto typedObject = std::static_pointer_cast<RoadConditionImpl>(object);                    
            // Setting the parent
            properties->SetParent(object);
            _propertiesXmlParser->ParseElement(indexedElement, parserContext, properties);

            typedObject->SetProperties(properties);
            
            
        }
        
        int RoadConditionXmlParser::SubElementPropertiesParser::GetMinOccur() 
        {
            return 0;
        }

        int RoadConditionXmlParser::SubElementPropertiesParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RoadConditionXmlParser::SubElementPropertiesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PROPERTIES ;
        }

        std::vector<std::string> RoadConditionXmlParser::SubElementPropertiesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PROPERTIES
                    };
        }
  
        RoadConditionXmlParser::RoadConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RoadNetworkImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RoadNetworkXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> RoadNetworkXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RoadNetworkXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementLogicFileParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementSceneGraphFileParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementTrafficSignalsParser>(_messageLogger, _filename, _parserOptions), OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNALS, _parserOptions) );
            result.push_back(std::make_shared<SubElementUsedAreaParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RoadNetworkXmlParser::SubElementLogicFileParser::SubElementLogicFileParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _fileXmlParser = std::make_shared<FileXmlParser>(messageLogger, filename, parserOptions);
        }

        void RoadNetworkXmlParser::SubElementLogicFileParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto logicFile = std::make_shared<FileImpl>();
            auto typedObject = std::static_pointer_cast<RoadNetworkImpl>(object);                    
            // Setting the parent
            logicFile->SetParent(object);
            _fileXmlParser->ParseElement(indexedElement, parserContext, logicFile);

            typedObject->SetLogicFile(logicFile);
            
            
        }
        
        int RoadNetworkXmlParser::SubElementLogicFileParser::GetMinOccur() 
        {
            return 0;
        }

        int RoadNetworkXmlParser::SubElementLogicFileParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RoadNetworkXmlParser::SubElementLogicFileParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__LOGIC_FILE ;
        }

        std::vector<std::string> RoadNetworkXmlParser::SubElementLogicFileParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__LOGIC_FILE
                    };
        }
        RoadNetworkXmlParser::SubElementSceneGraphFileParser::SubElementSceneGraphFileParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _fileXmlParser = std::make_shared<FileXmlParser>(messageLogger, filename, parserOptions);
        }

        void RoadNetworkXmlParser::SubElementSceneGraphFileParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto sceneGraphFile = std::make_shared<FileImpl>();
            auto typedObject = std::static_pointer_cast<RoadNetworkImpl>(object);                    
            // Setting the parent
            sceneGraphFile->SetParent(object);
            _fileXmlParser->ParseElement(indexedElement, parserContext, sceneGraphFile);

            typedObject->SetSceneGraphFile(sceneGraphFile);
            
            
        }
        
        int RoadNetworkXmlParser::SubElementSceneGraphFileParser::GetMinOccur() 
        {
            return 0;
        }

        int RoadNetworkXmlParser::SubElementSceneGraphFileParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RoadNetworkXmlParser::SubElementSceneGraphFileParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SCENE_GRAPH_FILE ;
        }

        std::vector<std::string> RoadNetworkXmlParser::SubElementSceneGraphFileParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SCENE_GRAPH_FILE
                    };
        }
        RoadNetworkXmlParser::SubElementTrafficSignalsParser::SubElementTrafficSignalsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _trafficSignalControllerXmlParser = std::make_shared<TrafficSignalControllerXmlParser>(messageLogger, filename, parserOptions);
        }

        void RoadNetworkXmlParser::SubElementTrafficSignalsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficSignals = std::make_shared<TrafficSignalControllerImpl>();
            auto typedObject = std::static_pointer_cast<RoadNetworkImpl>(object);                    
            // Setting the parent
            trafficSignals->SetParent(object);
            _trafficSignalControllerXmlParser->ParseElement(indexedElement, parserContext, trafficSignals);
            auto trafficSignalsList = typedObject->GetWriterTrafficSignals();
            trafficSignalsList.push_back(trafficSignals);
            typedObject->SetTrafficSignals(trafficSignalsList);
            
            
        }
        
        int RoadNetworkXmlParser::SubElementTrafficSignalsParser::GetMinOccur() 
        {
            return 0;
        }

        int RoadNetworkXmlParser::SubElementTrafficSignalsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool RoadNetworkXmlParser::SubElementTrafficSignalsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER;
        }

        std::vector<std::string> RoadNetworkXmlParser::SubElementTrafficSignalsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER};
        }
        RoadNetworkXmlParser::SubElementUsedAreaParser::SubElementUsedAreaParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _usedAreaXmlParser = std::make_shared<UsedAreaXmlParser>(messageLogger, filename, parserOptions);
        }

        void RoadNetworkXmlParser::SubElementUsedAreaParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto usedArea = std::make_shared<UsedAreaImpl>();
            auto typedObject = std::static_pointer_cast<RoadNetworkImpl>(object);                    
            // Setting the parent
            usedArea->SetParent(object);
            _usedAreaXmlParser->ParseElement(indexedElement, parserContext, usedArea);

            typedObject->SetUsedArea(usedArea);
            
            
        }
        
        int RoadNetworkXmlParser::SubElementUsedAreaParser::GetMinOccur() 
        {
            return 0;
        }

        int RoadNetworkXmlParser::SubElementUsedAreaParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RoadNetworkXmlParser::SubElementUsedAreaParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__USED_AREA ;
        }

        std::vector<std::string> RoadNetworkXmlParser::SubElementUsedAreaParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__USED_AREA
                    };
        }
  
        RoadNetworkXmlParser::RoadNetworkXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RoadPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RoadPositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> RoadPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeRoadId: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRoadId(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RoadPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetRoadId(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, std::make_shared<AttributeRoadId>(_messageLogger, _filename, _parserOptions)));
            class AttributeS: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeS(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RoadPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__S, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__S, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetS(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__S, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__S, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__S, std::make_shared<AttributeS>(_messageLogger, _filename, _parserOptions)));
            class AttributeT: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeT(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RoadPositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__T, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__T, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetT(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<AttributeT>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RoadPositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RoadPositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename, parserOptions);
        }

        void RoadPositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            auto typedObject = std::static_pointer_cast<RoadPositionImpl>(object);                    
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            typedObject->SetOrientation(orientation);
            
            
        }
        
        int RoadPositionXmlParser::SubElementOrientationParser::GetMinOccur() 
        {
            return 0;
        }

        int RoadPositionXmlParser::SubElementOrientationParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RoadPositionXmlParser::SubElementOrientationParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
        }

        std::vector<std::string> RoadPositionXmlParser::SubElementOrientationParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ORIENTATION
                    };
        }
  
        RoadPositionXmlParser::RoadPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RouteImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RouteXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> RouteXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeClosed: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeClosed(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RouteImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CLOSED, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetClosed(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CLOSED, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CLOSED, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CLOSED, std::make_shared<AttributeClosed>(_messageLogger, _filename, _parserOptions)));
            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<RouteImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RouteXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename, _parserOptions), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS, _parserOptions) );
            result.push_back(std::make_shared<SubElementWaypointsParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RouteXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename, parserOptions);
        }

        void RouteXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            auto typedObject = std::static_pointer_cast<RouteImpl>(object);                    
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = typedObject->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            typedObject->SetParameterDeclarations(parameterDeclarationsList);
            
            
        }
        
        int RouteXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int RouteXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool RouteXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> RouteXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        RouteXmlParser::SubElementWaypointsParser::SubElementWaypointsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _waypointXmlParser = std::make_shared<WaypointXmlParser>(messageLogger, filename, parserOptions);
        }

        void RouteXmlParser::SubElementWaypointsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto waypoints = std::make_shared<WaypointImpl>();
            auto typedObject = std::static_pointer_cast<RouteImpl>(object);                    
            // Setting the parent
            waypoints->SetParent(object);
            _waypointXmlParser->ParseElement(indexedElement, parserContext, waypoints);
            auto waypointsList = typedObject->GetWriterWaypoints();
            waypointsList.push_back(waypoints);
            typedObject->SetWaypoints(waypointsList);
            
            
        }
        
        int RouteXmlParser::SubElementWaypointsParser::GetMinOccur() 
        {
            return 2;
        }

        int RouteXmlParser::SubElementWaypointsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool RouteXmlParser::SubElementWaypointsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__WAYPOINT ;
        }

        std::vector<std::string> RouteXmlParser::SubElementWaypointsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__WAYPOINT
                    };
        }
  
        RouteXmlParser::RouteXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RouteCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RouteCatalogLocationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> RouteCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RouteCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RouteCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename, parserOptions);
        }

        void RouteCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            auto typedObject = std::static_pointer_cast<RouteCatalogLocationImpl>(object);                    
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            typedObject->SetDirectory(directory);
            
            
        }
        
        int RouteCatalogLocationXmlParser::SubElementDirectoryParser::GetMinOccur() 
        {
            return 1;
        }

        int RouteCatalogLocationXmlParser::SubElementDirectoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RouteCatalogLocationXmlParser::SubElementDirectoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
        }

        std::vector<std::string> RouteCatalogLocationXmlParser::SubElementDirectoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DIRECTORY
                    };
        }
  
        RouteCatalogLocationXmlParser::RouteCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RoutePositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RoutePositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> RoutePositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RoutePositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementRouteRefParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementInRoutePositionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RoutePositionXmlParser::SubElementRouteRefParser::SubElementRouteRefParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _routeRefXmlParser = std::make_shared<RouteRefXmlParser>(messageLogger, filename, parserOptions);
        }

        void RoutePositionXmlParser::SubElementRouteRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto routeRef = std::make_shared<RouteRefImpl>();
            auto typedObject = std::static_pointer_cast<RoutePositionImpl>(object);                    
            // Setting the parent
            routeRef->SetParent(object);
            _routeRefXmlParser->ParseElement(indexedElement, parserContext, routeRef);

            typedObject->SetRouteRef(routeRef);
            
            
        }
        
        int RoutePositionXmlParser::SubElementRouteRefParser::GetMinOccur() 
        {
            return 1;
        }

        int RoutePositionXmlParser::SubElementRouteRefParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RoutePositionXmlParser::SubElementRouteRefParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ROUTE_REF ;
        }

        std::vector<std::string> RoutePositionXmlParser::SubElementRouteRefParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ROUTE_REF
                    };
        }
        RoutePositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename, parserOptions);
        }

        void RoutePositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            auto typedObject = std::static_pointer_cast<RoutePositionImpl>(object);                    
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            typedObject->SetOrientation(orientation);
            
            
        }
        
        int RoutePositionXmlParser::SubElementOrientationParser::GetMinOccur() 
        {
            return 0;
        }

        int RoutePositionXmlParser::SubElementOrientationParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RoutePositionXmlParser::SubElementOrientationParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
        }

        std::vector<std::string> RoutePositionXmlParser::SubElementOrientationParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ORIENTATION
                    };
        }
        RoutePositionXmlParser::SubElementInRoutePositionParser::SubElementInRoutePositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _inRoutePositionXmlParser = std::make_shared<InRoutePositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void RoutePositionXmlParser::SubElementInRoutePositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto inRoutePosition = std::make_shared<InRoutePositionImpl>();
            auto typedObject = std::static_pointer_cast<RoutePositionImpl>(object);                    
            // Setting the parent
            inRoutePosition->SetParent(object);
            _inRoutePositionXmlParser->ParseElement(indexedElement, parserContext, inRoutePosition);

            typedObject->SetInRoutePosition(inRoutePosition);
            
            
        }
        
        int RoutePositionXmlParser::SubElementInRoutePositionParser::GetMinOccur() 
        {
            return 1;
        }

        int RoutePositionXmlParser::SubElementInRoutePositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RoutePositionXmlParser::SubElementInRoutePositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__IN_ROUTE_POSITION ;
        }

        std::vector<std::string> RoutePositionXmlParser::SubElementInRoutePositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__IN_ROUTE_POSITION
                    };
        }
  
        RoutePositionXmlParser::RoutePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RouteRefImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RouteRefXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> RouteRefXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RouteRefXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementRouteParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RouteRefXmlParser::SubElementRouteParser::SubElementRouteParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _routeXmlParser = std::make_shared<RouteXmlParser>(messageLogger, filename, parserOptions);
        }

        void RouteRefXmlParser::SubElementRouteParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto route = std::make_shared<RouteImpl>();
            auto typedObject = std::static_pointer_cast<RouteRefImpl>(object);                    
            // Setting the parent
            route->SetParent(object);
            _routeXmlParser->ParseElement(indexedElement, parserContext, route);

            typedObject->SetRoute(route);
            
            
        }
        
        int RouteRefXmlParser::SubElementRouteParser::GetMinOccur() 
        {
            return 0;
        }

        int RouteRefXmlParser::SubElementRouteParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RouteRefXmlParser::SubElementRouteParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ROUTE ;
        }

        std::vector<std::string> RouteRefXmlParser::SubElementRouteParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ROUTE
                    };
        }
        RouteRefXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename, parserOptions);
        }

        void RouteRefXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            auto typedObject = std::static_pointer_cast<RouteRefImpl>(object);                    
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            typedObject->SetCatalogReference(catalogReference);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(std::dynamic_pointer_cast<ICatalogReference>(catalogReference));
            
            
        }
        
        int RouteRefXmlParser::SubElementCatalogReferenceParser::GetMinOccur() 
        {
            return 0;
        }

        int RouteRefXmlParser::SubElementCatalogReferenceParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RouteRefXmlParser::SubElementCatalogReferenceParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
        }

        std::vector<std::string> RouteRefXmlParser::SubElementCatalogReferenceParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                    };
        }
  
        RouteRefXmlParser::RouteRefXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RoutingActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RoutingActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> RoutingActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> RoutingActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementAssignRouteActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementFollowTrajectoryActionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementAcquirePositionActionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        RoutingActionXmlParser::SubElementAssignRouteActionParser::SubElementAssignRouteActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _assignRouteActionXmlParser = std::make_shared<AssignRouteActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void RoutingActionXmlParser::SubElementAssignRouteActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto assignRouteAction = std::make_shared<AssignRouteActionImpl>();
            auto typedObject = std::static_pointer_cast<RoutingActionImpl>(object);                    
            // Setting the parent
            assignRouteAction->SetParent(object);
            _assignRouteActionXmlParser->ParseElement(indexedElement, parserContext, assignRouteAction);

            typedObject->SetAssignRouteAction(assignRouteAction);
            
            
        }
        
        int RoutingActionXmlParser::SubElementAssignRouteActionParser::GetMinOccur() 
        {
            return 0;
        }

        int RoutingActionXmlParser::SubElementAssignRouteActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RoutingActionXmlParser::SubElementAssignRouteActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ASSIGN_ROUTE_ACTION ;
        }

        std::vector<std::string> RoutingActionXmlParser::SubElementAssignRouteActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ASSIGN_ROUTE_ACTION
                    };
        }
        RoutingActionXmlParser::SubElementFollowTrajectoryActionParser::SubElementFollowTrajectoryActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _followTrajectoryActionXmlParser = std::make_shared<FollowTrajectoryActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void RoutingActionXmlParser::SubElementFollowTrajectoryActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto followTrajectoryAction = std::make_shared<FollowTrajectoryActionImpl>();
            auto typedObject = std::static_pointer_cast<RoutingActionImpl>(object);                    
            // Setting the parent
            followTrajectoryAction->SetParent(object);
            _followTrajectoryActionXmlParser->ParseElement(indexedElement, parserContext, followTrajectoryAction);

            typedObject->SetFollowTrajectoryAction(followTrajectoryAction);
            
            
        }
        
        int RoutingActionXmlParser::SubElementFollowTrajectoryActionParser::GetMinOccur() 
        {
            return 0;
        }

        int RoutingActionXmlParser::SubElementFollowTrajectoryActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RoutingActionXmlParser::SubElementFollowTrajectoryActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__FOLLOW_TRAJECTORY_ACTION ;
        }

        std::vector<std::string> RoutingActionXmlParser::SubElementFollowTrajectoryActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__FOLLOW_TRAJECTORY_ACTION
                    };
        }
        RoutingActionXmlParser::SubElementAcquirePositionActionParser::SubElementAcquirePositionActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _acquirePositionActionXmlParser = std::make_shared<AcquirePositionActionXmlParser>(messageLogger, filename, parserOptions);
        }

        void RoutingActionXmlParser::SubElementAcquirePositionActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto acquirePositionAction = std::make_shared<AcquirePositionActionImpl>();
            auto typedObject = std::static_pointer_cast<RoutingActionImpl>(object);                    
            // Setting the parent
            acquirePositionAction->SetParent(object);
            _acquirePositionActionXmlParser->ParseElement(indexedElement, parserContext, acquirePositionAction);

            typedObject->SetAcquirePositionAction(acquirePositionAction);
            
            
        }
        
        int RoutingActionXmlParser::SubElementAcquirePositionActionParser::GetMinOccur() 
        {
            return 0;
        }

        int RoutingActionXmlParser::SubElementAcquirePositionActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool RoutingActionXmlParser::SubElementAcquirePositionActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ACQUIRE_POSITION_ACTION ;
        }

        std::vector<std::string> RoutingActionXmlParser::SubElementAcquirePositionActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ACQUIRE_POSITION_ACTION
                    };
        }
  
        RoutingActionXmlParser::RoutingActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ScenarioDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ScenarioDefinitionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}


        std::vector<std::shared_ptr<IElementParser>> ScenarioDefinitionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename, _parserOptions), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS, _parserOptions) );
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementVariableDeclarationsParser>(_messageLogger, _filename, _parserOptions), OSC_CONSTANTS::ELEMENT__VARIABLE_DECLARATIONS, _parserOptions) );
            result.push_back(std::make_shared<SubElementCatalogLocationsParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementRoadNetworkParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementEntitiesParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementStoryboardParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        ScenarioDefinitionXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename, parserOptions);
        }

        void ScenarioDefinitionXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            auto typedObject = std::static_pointer_cast<ScenarioDefinitionImpl>(object);                    
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = typedObject->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            typedObject->SetParameterDeclarations(parameterDeclarationsList);
            
            
        }
        
        int ScenarioDefinitionXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int ScenarioDefinitionXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ScenarioDefinitionXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> ScenarioDefinitionXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        ScenarioDefinitionXmlParser::SubElementVariableDeclarationsParser::SubElementVariableDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _variableDeclarationXmlParser = std::make_shared<VariableDeclarationXmlParser>(messageLogger, filename, parserOptions);
        }

        void ScenarioDefinitionXmlParser::SubElementVariableDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto variableDeclarations = std::make_shared<VariableDeclarationImpl>();
            auto typedObject = std::static_pointer_cast<ScenarioDefinitionImpl>(object);                    
            // Setting the parent
            variableDeclarations->SetParent(object);
            _variableDeclarationXmlParser->ParseElement(indexedElement, parserContext, variableDeclarations);
            auto variableDeclarationsList = typedObject->GetWriterVariableDeclarations();
            variableDeclarationsList.push_back(variableDeclarations);
            typedObject->SetVariableDeclarations(variableDeclarationsList);
            
            
        }
        
        int ScenarioDefinitionXmlParser::SubElementVariableDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int ScenarioDefinitionXmlParser::SubElementVariableDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ScenarioDefinitionXmlParser::SubElementVariableDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__VARIABLE_DECLARATION;
        }

        std::vector<std::string> ScenarioDefinitionXmlParser::SubElementVariableDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__VARIABLE_DECLARATION};
        }
        ScenarioDefinitionXmlParser::SubElementCatalogLocationsParser::SubElementCatalogLocationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _catalogLocationsXmlParser = std::make_shared<CatalogLocationsXmlParser>(messageLogger, filename, parserOptions);
        }

        void ScenarioDefinitionXmlParser::SubElementCatalogLocationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto catalogLocations = std::make_shared<CatalogLocationsImpl>();
            auto typedObject = std::static_pointer_cast<ScenarioDefinitionImpl>(object);                    
            // Setting the parent
            catalogLocations->SetParent(object);
            _catalogLocationsXmlParser->ParseElement(indexedElement, parserContext, catalogLocations);

            typedObject->SetCatalogLocations(catalogLocations);
            
            
        }
        
        int ScenarioDefinitionXmlParser::SubElementCatalogLocationsParser::GetMinOccur() 
        {
            return 1;
        }

        int ScenarioDefinitionXmlParser::SubElementCatalogLocationsParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ScenarioDefinitionXmlParser::SubElementCatalogLocationsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS ;
        }

        std::vector<std::string> ScenarioDefinitionXmlParser::SubElementCatalogLocationsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS
                    };
        }
        ScenarioDefinitionXmlParser::SubElementRoadNetworkParser::SubElementRoadNetworkParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _roadNetworkXmlParser = std::make_shared<RoadNetworkXmlParser>(messageLogger, filename, parserOptions);
        }

        void ScenarioDefinitionXmlParser::SubElementRoadNetworkParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto roadNetwork = std::make_shared<RoadNetworkImpl>();
            auto typedObject = std::static_pointer_cast<ScenarioDefinitionImpl>(object);                    
            // Setting the parent
            roadNetwork->SetParent(object);
            _roadNetworkXmlParser->ParseElement(indexedElement, parserContext, roadNetwork);

            typedObject->SetRoadNetwork(roadNetwork);
            
            
        }
        
        int ScenarioDefinitionXmlParser::SubElementRoadNetworkParser::GetMinOccur() 
        {
            return 1;
        }

        int ScenarioDefinitionXmlParser::SubElementRoadNetworkParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ScenarioDefinitionXmlParser::SubElementRoadNetworkParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ROAD_NETWORK ;
        }

        std::vector<std::string> ScenarioDefinitionXmlParser::SubElementRoadNetworkParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ROAD_NETWORK
                    };
        }
        ScenarioDefinitionXmlParser::SubElementEntitiesParser::SubElementEntitiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _entitiesXmlParser = std::make_shared<EntitiesXmlParser>(messageLogger, filename, parserOptions);
        }

        void ScenarioDefinitionXmlParser::SubElementEntitiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto entities = std::make_shared<EntitiesImpl>();
            auto typedObject = std::static_pointer_cast<ScenarioDefinitionImpl>(object);                    
            // Setting the parent
            entities->SetParent(object);
            _entitiesXmlParser->ParseElement(indexedElement, parserContext, entities);

            typedObject->SetEntities(entities);
            
            
        }
        
        int ScenarioDefinitionXmlParser::SubElementEntitiesParser::GetMinOccur() 
        {
            return 1;
        }

        int ScenarioDefinitionXmlParser::SubElementEntitiesParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ScenarioDefinitionXmlParser::SubElementEntitiesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENTITIES ;
        }

        std::vector<std::string> ScenarioDefinitionXmlParser::SubElementEntitiesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENTITIES
                    };
        }
        ScenarioDefinitionXmlParser::SubElementStoryboardParser::SubElementStoryboardParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _storyboardXmlParser = std::make_shared<StoryboardXmlParser>(messageLogger, filename, parserOptions);
        }

        void ScenarioDefinitionXmlParser::SubElementStoryboardParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto storyboard = std::make_shared<StoryboardImpl>();
            auto typedObject = std::static_pointer_cast<ScenarioDefinitionImpl>(object);                    
            // Setting the parent
            storyboard->SetParent(object);
            _storyboardXmlParser->ParseElement(indexedElement, parserContext, storyboard);

            typedObject->SetStoryboard(storyboard);
            
            
        }
        
        int ScenarioDefinitionXmlParser::SubElementStoryboardParser::GetMinOccur() 
        {
            return 1;
        }

        int ScenarioDefinitionXmlParser::SubElementStoryboardParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ScenarioDefinitionXmlParser::SubElementStoryboardParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__STORYBOARD ;
        }

        std::vector<std::string> ScenarioDefinitionXmlParser::SubElementStoryboardParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__STORYBOARD
                    };
        }
  
        ScenarioDefinitionXmlParser::ScenarioDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlGroupParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ScenarioObjectImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ScenarioObjectXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ScenarioObjectXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<ScenarioObjectImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ScenarioObjectXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementEntityObjectParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementObjectControllerParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        ScenarioObjectXmlParser::SubElementEntityObjectParser::SubElementEntityObjectParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _entityObjectXmlParser = std::make_shared<EntityObjectXmlParser>(messageLogger, filename, parserOptions);
        }

        void ScenarioObjectXmlParser::SubElementEntityObjectParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto entityObject = std::make_shared<EntityObjectImpl>();
            auto typedObject = std::static_pointer_cast<ScenarioObjectImpl>(object);                    
            // Setting the parent
            entityObject->SetParent(object);
            _entityObjectXmlParser->ParseElement(indexedElement, parserContext, entityObject);

            typedObject->SetEntityObject(entityObject);
            
            
        }
        
        int ScenarioObjectXmlParser::SubElementEntityObjectParser::GetMinOccur() 
        {
            return 1;
        }

        int ScenarioObjectXmlParser::SubElementEntityObjectParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ScenarioObjectXmlParser::SubElementEntityObjectParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE || 
                elementName == OSC_CONSTANTS::ELEMENT__VEHICLE || 
                elementName == OSC_CONSTANTS::ELEMENT__PEDESTRIAN || 
                elementName == OSC_CONSTANTS::ELEMENT__MISC_OBJECT || 
                elementName == OSC_CONSTANTS::ELEMENT__EXTERNAL_OBJECT_REFERENCE ;
        }

        std::vector<std::string> ScenarioObjectXmlParser::SubElementEntityObjectParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE,
                OSC_CONSTANTS::ELEMENT__VEHICLE,
                OSC_CONSTANTS::ELEMENT__PEDESTRIAN,
                OSC_CONSTANTS::ELEMENT__MISC_OBJECT,
                OSC_CONSTANTS::ELEMENT__EXTERNAL_OBJECT_REFERENCE
                    };
        }
        ScenarioObjectXmlParser::SubElementObjectControllerParser::SubElementObjectControllerParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _objectControllerXmlParser = std::make_shared<ObjectControllerXmlParser>(messageLogger, filename, parserOptions);
        }

        void ScenarioObjectXmlParser::SubElementObjectControllerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto objectController = std::make_shared<ObjectControllerImpl>();
            auto typedObject = std::static_pointer_cast<ScenarioObjectImpl>(object);                    
            // Setting the parent
            objectController->SetParent(object);
            _objectControllerXmlParser->ParseElement(indexedElement, parserContext, objectController);
            auto objectControllerList = typedObject->GetWriterObjectController();
            objectControllerList.push_back(objectController);
            typedObject->SetObjectController(objectControllerList);
            
            
        }
        
        int ScenarioObjectXmlParser::SubElementObjectControllerParser::GetMinOccur() 
        {
            return 0;
        }

        int ScenarioObjectXmlParser::SubElementObjectControllerParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ScenarioObjectXmlParser::SubElementObjectControllerParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__OBJECT_CONTROLLER ;
        }

        std::vector<std::string> ScenarioObjectXmlParser::SubElementObjectControllerParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__OBJECT_CONTROLLER
                    };
        }
  
        ScenarioObjectXmlParser::ScenarioObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SelectedEntitiesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SelectedEntitiesXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> SelectedEntitiesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SelectedEntitiesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementEntityRefParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementByTypeParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        SelectedEntitiesXmlParser::SubElementEntityRefParser::SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _entityRefXmlParser = std::make_shared<EntityRefXmlParser>(messageLogger, filename, parserOptions);
        }

        void SelectedEntitiesXmlParser::SubElementEntityRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto entityRef = std::make_shared<EntityRefImpl>();
            auto typedObject = std::static_pointer_cast<SelectedEntitiesImpl>(object);                    
            // Setting the parent
            entityRef->SetParent(object);
            _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRef);
            auto entityRefList = typedObject->GetWriterEntityRef();
            entityRefList.push_back(entityRef);
            typedObject->SetEntityRef(entityRefList);
            
            
        }
        
        int SelectedEntitiesXmlParser::SubElementEntityRefParser::GetMinOccur() 
        {
            return 0;
        }

        int SelectedEntitiesXmlParser::SubElementEntityRefParser::GetMaxOccur() 
        {
            return -1;
        }

        bool SelectedEntitiesXmlParser::SubElementEntityRefParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
        }

        std::vector<std::string> SelectedEntitiesXmlParser::SubElementEntityRefParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENTITY_REF
                    };
        }
        SelectedEntitiesXmlParser::SubElementByTypeParser::SubElementByTypeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _byTypeXmlParser = std::make_shared<ByTypeXmlParser>(messageLogger, filename, parserOptions);
        }

        void SelectedEntitiesXmlParser::SubElementByTypeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto byType = std::make_shared<ByTypeImpl>();
            auto typedObject = std::static_pointer_cast<SelectedEntitiesImpl>(object);                    
            // Setting the parent
            byType->SetParent(object);
            _byTypeXmlParser->ParseElement(indexedElement, parserContext, byType);
            auto byTypeList = typedObject->GetWriterByType();
            byTypeList.push_back(byType);
            typedObject->SetByType(byTypeList);
            
            
        }
        
        int SelectedEntitiesXmlParser::SubElementByTypeParser::GetMinOccur() 
        {
            return 0;
        }

        int SelectedEntitiesXmlParser::SubElementByTypeParser::GetMaxOccur() 
        {
            return -1;
        }

        bool SelectedEntitiesXmlParser::SubElementByTypeParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__BY_TYPE ;
        }

        std::vector<std::string> SelectedEntitiesXmlParser::SubElementByTypeParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__BY_TYPE
                    };
        }
  
        SelectedEntitiesXmlParser::SelectedEntitiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SensorReferenceImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SensorReferenceXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> SensorReferenceXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SensorReferenceImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SensorReferenceXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        SensorReferenceXmlParser::SensorReferenceXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SensorReferenceSetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SensorReferenceSetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> SensorReferenceSetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SensorReferenceSetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementSensorReferencesParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        SensorReferenceSetXmlParser::SubElementSensorReferencesParser::SubElementSensorReferencesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _sensorReferenceXmlParser = std::make_shared<SensorReferenceXmlParser>(messageLogger, filename, parserOptions);
        }

        void SensorReferenceSetXmlParser::SubElementSensorReferencesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto sensorReferences = std::make_shared<SensorReferenceImpl>();
            auto typedObject = std::static_pointer_cast<SensorReferenceSetImpl>(object);                    
            // Setting the parent
            sensorReferences->SetParent(object);
            _sensorReferenceXmlParser->ParseElement(indexedElement, parserContext, sensorReferences);
            auto sensorReferencesList = typedObject->GetWriterSensorReferences();
            sensorReferencesList.push_back(sensorReferences);
            typedObject->SetSensorReferences(sensorReferencesList);
            
            
        }
        
        int SensorReferenceSetXmlParser::SubElementSensorReferencesParser::GetMinOccur() 
        {
            return 1;
        }

        int SensorReferenceSetXmlParser::SubElementSensorReferencesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool SensorReferenceSetXmlParser::SubElementSensorReferencesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SENSOR_REFERENCE ;
        }

        std::vector<std::string> SensorReferenceSetXmlParser::SubElementSensorReferencesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SENSOR_REFERENCE
                    };
        }
  
        SensorReferenceSetXmlParser::SensorReferenceSetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ShapeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ShapeXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ShapeXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ShapeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPolylineParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementClothoidParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementNurbsParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        ShapeXmlParser::SubElementPolylineParser::SubElementPolylineParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _polylineXmlParser = std::make_shared<PolylineXmlParser>(messageLogger, filename, parserOptions);
        }

        void ShapeXmlParser::SubElementPolylineParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto polyline = std::make_shared<PolylineImpl>();
            auto typedObject = std::static_pointer_cast<ShapeImpl>(object);                    
            // Setting the parent
            polyline->SetParent(object);
            _polylineXmlParser->ParseElement(indexedElement, parserContext, polyline);

            typedObject->SetPolyline(polyline);
            
            
        }
        
        int ShapeXmlParser::SubElementPolylineParser::GetMinOccur() 
        {
            return 0;
        }

        int ShapeXmlParser::SubElementPolylineParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ShapeXmlParser::SubElementPolylineParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POLYLINE ;
        }

        std::vector<std::string> ShapeXmlParser::SubElementPolylineParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POLYLINE
                    };
        }
        ShapeXmlParser::SubElementClothoidParser::SubElementClothoidParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _clothoidXmlParser = std::make_shared<ClothoidXmlParser>(messageLogger, filename, parserOptions);
        }

        void ShapeXmlParser::SubElementClothoidParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto clothoid = std::make_shared<ClothoidImpl>();
            auto typedObject = std::static_pointer_cast<ShapeImpl>(object);                    
            // Setting the parent
            clothoid->SetParent(object);
            _clothoidXmlParser->ParseElement(indexedElement, parserContext, clothoid);

            typedObject->SetClothoid(clothoid);
            
            
        }
        
        int ShapeXmlParser::SubElementClothoidParser::GetMinOccur() 
        {
            return 0;
        }

        int ShapeXmlParser::SubElementClothoidParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ShapeXmlParser::SubElementClothoidParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CLOTHOID ;
        }

        std::vector<std::string> ShapeXmlParser::SubElementClothoidParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CLOTHOID
                    };
        }
        ShapeXmlParser::SubElementNurbsParser::SubElementNurbsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _nurbsXmlParser = std::make_shared<NurbsXmlParser>(messageLogger, filename, parserOptions);
        }

        void ShapeXmlParser::SubElementNurbsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto nurbs = std::make_shared<NurbsImpl>();
            auto typedObject = std::static_pointer_cast<ShapeImpl>(object);                    
            // Setting the parent
            nurbs->SetParent(object);
            _nurbsXmlParser->ParseElement(indexedElement, parserContext, nurbs);

            typedObject->SetNurbs(nurbs);
            
            
        }
        
        int ShapeXmlParser::SubElementNurbsParser::GetMinOccur() 
        {
            return 0;
        }

        int ShapeXmlParser::SubElementNurbsParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ShapeXmlParser::SubElementNurbsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__NURBS ;
        }

        std::vector<std::string> ShapeXmlParser::SubElementNurbsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__NURBS
                    };
        }
  
        ShapeXmlParser::ShapeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SimulationTimeConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SimulationTimeConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> SimulationTimeConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeRule: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SimulationTimeConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            typedObject->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (Rule::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  Rule::GetDeprecatedVersion(kResult) +"'. " + Rule::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SimulationTimeConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SimulationTimeConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        SimulationTimeConditionXmlParser::SimulationTimeConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SpeedActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SpeedActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> SpeedActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SpeedActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementSpeedActionDynamicsParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementSpeedActionTargetParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        SpeedActionXmlParser::SubElementSpeedActionDynamicsParser::SubElementSpeedActionDynamicsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _transitionDynamicsXmlParser = std::make_shared<TransitionDynamicsXmlParser>(messageLogger, filename, parserOptions);
        }

        void SpeedActionXmlParser::SubElementSpeedActionDynamicsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto speedActionDynamics = std::make_shared<TransitionDynamicsImpl>();
            auto typedObject = std::static_pointer_cast<SpeedActionImpl>(object);                    
            // Setting the parent
            speedActionDynamics->SetParent(object);
            _transitionDynamicsXmlParser->ParseElement(indexedElement, parserContext, speedActionDynamics);

            typedObject->SetSpeedActionDynamics(speedActionDynamics);
            
            
        }
        
        int SpeedActionXmlParser::SubElementSpeedActionDynamicsParser::GetMinOccur() 
        {
            return 1;
        }

        int SpeedActionXmlParser::SubElementSpeedActionDynamicsParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SpeedActionXmlParser::SubElementSpeedActionDynamicsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SPEED_ACTION_DYNAMICS ;
        }

        std::vector<std::string> SpeedActionXmlParser::SubElementSpeedActionDynamicsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SPEED_ACTION_DYNAMICS
                    };
        }
        SpeedActionXmlParser::SubElementSpeedActionTargetParser::SubElementSpeedActionTargetParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _speedActionTargetXmlParser = std::make_shared<SpeedActionTargetXmlParser>(messageLogger, filename, parserOptions);
        }

        void SpeedActionXmlParser::SubElementSpeedActionTargetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto speedActionTarget = std::make_shared<SpeedActionTargetImpl>();
            auto typedObject = std::static_pointer_cast<SpeedActionImpl>(object);                    
            // Setting the parent
            speedActionTarget->SetParent(object);
            _speedActionTargetXmlParser->ParseElement(indexedElement, parserContext, speedActionTarget);

            typedObject->SetSpeedActionTarget(speedActionTarget);
            
            
        }
        
        int SpeedActionXmlParser::SubElementSpeedActionTargetParser::GetMinOccur() 
        {
            return 1;
        }

        int SpeedActionXmlParser::SubElementSpeedActionTargetParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SpeedActionXmlParser::SubElementSpeedActionTargetParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SPEED_ACTION_TARGET ;
        }

        std::vector<std::string> SpeedActionXmlParser::SubElementSpeedActionTargetParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SPEED_ACTION_TARGET
                    };
        }
  
        SpeedActionXmlParser::SpeedActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SpeedActionTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SpeedActionTargetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> SpeedActionTargetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SpeedActionTargetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementRelativeTargetSpeedParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementAbsoluteTargetSpeedParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::SubElementRelativeTargetSpeedParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _relativeTargetSpeedXmlParser = std::make_shared<RelativeTargetSpeedXmlParser>(messageLogger, filename, parserOptions);
        }

        void SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto relativeTargetSpeed = std::make_shared<RelativeTargetSpeedImpl>();
            auto typedObject = std::static_pointer_cast<SpeedActionTargetImpl>(object);                    
            // Setting the parent
            relativeTargetSpeed->SetParent(object);
            _relativeTargetSpeedXmlParser->ParseElement(indexedElement, parserContext, relativeTargetSpeed);

            typedObject->SetRelativeTargetSpeed(relativeTargetSpeed);
            
            
        }
        
        int SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::GetMinOccur() 
        {
            return 0;
        }

        int SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_SPEED ;
        }

        std::vector<std::string> SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_SPEED
                    };
        }
        SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::SubElementAbsoluteTargetSpeedParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _absoluteTargetSpeedXmlParser = std::make_shared<AbsoluteTargetSpeedXmlParser>(messageLogger, filename, parserOptions);
        }

        void SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto absoluteTargetSpeed = std::make_shared<AbsoluteTargetSpeedImpl>();
            auto typedObject = std::static_pointer_cast<SpeedActionTargetImpl>(object);                    
            // Setting the parent
            absoluteTargetSpeed->SetParent(object);
            _absoluteTargetSpeedXmlParser->ParseElement(indexedElement, parserContext, absoluteTargetSpeed);

            typedObject->SetAbsoluteTargetSpeed(absoluteTargetSpeed);
            
            
        }
        
        int SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::GetMinOccur() 
        {
            return 0;
        }

        int SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_SPEED ;
        }

        std::vector<std::string> SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_SPEED
                    };
        }
  
        SpeedActionTargetXmlParser::SpeedActionTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SpeedConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SpeedConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> SpeedConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDirection: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDirection(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SpeedConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = DirectionalDimension::GetFromLiteral(attributeValue);
                        if (kResult != DirectionalDimension::UNKNOWN)
                        {
                            typedObject->SetDirection(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (DirectionalDimension::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  DirectionalDimension::GetDeprecatedVersion(kResult) +"'. " + DirectionalDimension::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, std::make_shared<AttributeDirection>(_messageLogger, _filename, _parserOptions)));
            class AttributeRule: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SpeedConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            typedObject->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (Rule::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  Rule::GetDeprecatedVersion(kResult) +"'. " + Rule::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename, _parserOptions)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SpeedConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SpeedConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        SpeedConditionXmlParser::SpeedConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SpeedProfileActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SpeedProfileActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> SpeedProfileActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SpeedProfileActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename, _parserOptions)));
            class AttributeFollowingMode: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeFollowingMode(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SpeedProfileActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = FollowingMode::GetFromLiteral(attributeValue);
                        if (kResult != FollowingMode::UNKNOWN)
                        {
                            typedObject->SetFollowingMode(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (FollowingMode::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  FollowingMode::GetDeprecatedVersion(kResult) +"'. " + FollowingMode::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, std::make_shared<AttributeFollowingMode>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SpeedProfileActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementDynamicConstraintsParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementSpeedProfileEntryParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        SpeedProfileActionXmlParser::SubElementDynamicConstraintsParser::SubElementDynamicConstraintsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _dynamicConstraintsXmlParser = std::make_shared<DynamicConstraintsXmlParser>(messageLogger, filename, parserOptions);
        }

        void SpeedProfileActionXmlParser::SubElementDynamicConstraintsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto dynamicConstraints = std::make_shared<DynamicConstraintsImpl>();
            auto typedObject = std::static_pointer_cast<SpeedProfileActionImpl>(object);                    
            // Setting the parent
            dynamicConstraints->SetParent(object);
            _dynamicConstraintsXmlParser->ParseElement(indexedElement, parserContext, dynamicConstraints);

            typedObject->SetDynamicConstraints(dynamicConstraints);
            
            
        }
        
        int SpeedProfileActionXmlParser::SubElementDynamicConstraintsParser::GetMinOccur() 
        {
            return 0;
        }

        int SpeedProfileActionXmlParser::SubElementDynamicConstraintsParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SpeedProfileActionXmlParser::SubElementDynamicConstraintsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS ;
        }

        std::vector<std::string> SpeedProfileActionXmlParser::SubElementDynamicConstraintsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS
                    };
        }
        SpeedProfileActionXmlParser::SubElementSpeedProfileEntryParser::SubElementSpeedProfileEntryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _speedProfileEntryXmlParser = std::make_shared<SpeedProfileEntryXmlParser>(messageLogger, filename, parserOptions);
        }

        void SpeedProfileActionXmlParser::SubElementSpeedProfileEntryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto speedProfileEntry = std::make_shared<SpeedProfileEntryImpl>();
            auto typedObject = std::static_pointer_cast<SpeedProfileActionImpl>(object);                    
            // Setting the parent
            speedProfileEntry->SetParent(object);
            _speedProfileEntryXmlParser->ParseElement(indexedElement, parserContext, speedProfileEntry);
            auto speedProfileEntryList = typedObject->GetWriterSpeedProfileEntry();
            speedProfileEntryList.push_back(speedProfileEntry);
            typedObject->SetSpeedProfileEntry(speedProfileEntryList);
            
            
        }
        
        int SpeedProfileActionXmlParser::SubElementSpeedProfileEntryParser::GetMinOccur() 
        {
            return 1;
        }

        int SpeedProfileActionXmlParser::SubElementSpeedProfileEntryParser::GetMaxOccur() 
        {
            return -1;
        }

        bool SpeedProfileActionXmlParser::SubElementSpeedProfileEntryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SPEED_PROFILE_ENTRY ;
        }

        std::vector<std::string> SpeedProfileActionXmlParser::SubElementSpeedProfileEntryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SPEED_PROFILE_ENTRY
                    };
        }
  
        SpeedProfileActionXmlParser::SpeedProfileActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SpeedProfileEntryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SpeedProfileEntryXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> SpeedProfileEntryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeSpeed: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeSpeed(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SpeedProfileEntryImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SPEED, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SPEED, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetSpeed(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SPEED, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SPEED, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SPEED, std::make_shared<AttributeSpeed>(_messageLogger, _filename, _parserOptions)));
            class AttributeTime: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTime(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SpeedProfileEntryImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TIME, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TIME, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetTime(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<AttributeTime>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SpeedProfileEntryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        SpeedProfileEntryXmlParser::SpeedProfileEntryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StandStillConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StandStillConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> StandStillConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDuration: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDuration(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<StandStillConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DURATION, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DURATION, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDuration(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<AttributeDuration>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> StandStillConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        StandStillConditionXmlParser::StandStillConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SteadyStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SteadyStateXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}



        std::vector<std::shared_ptr<IElementParser>> SteadyStateXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementTargetDistanceSteadyStateParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTargetTimeSteadyStateParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        SteadyStateXmlParser::SubElementTargetDistanceSteadyStateParser::SubElementTargetDistanceSteadyStateParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _targetDistanceSteadyStateXmlParser = std::make_shared<TargetDistanceSteadyStateXmlParser>(messageLogger, filename, parserOptions);
        }

        void SteadyStateXmlParser::SubElementTargetDistanceSteadyStateParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto targetDistanceSteadyState = std::make_shared<TargetDistanceSteadyStateImpl>();
            auto typedObject = std::static_pointer_cast<SteadyStateImpl>(object);                    
            // Setting the parent
            targetDistanceSteadyState->SetParent(object);
            _targetDistanceSteadyStateXmlParser->ParseElement(indexedElement, parserContext, targetDistanceSteadyState);

            typedObject->SetTargetDistanceSteadyState(targetDistanceSteadyState);
            
            
        }
        
        int SteadyStateXmlParser::SubElementTargetDistanceSteadyStateParser::GetMinOccur() 
        {
            return 1;
        }

        int SteadyStateXmlParser::SubElementTargetDistanceSteadyStateParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SteadyStateXmlParser::SubElementTargetDistanceSteadyStateParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TARGET_DISTANCE_STEADY_STATE ;
        }

        std::vector<std::string> SteadyStateXmlParser::SubElementTargetDistanceSteadyStateParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TARGET_DISTANCE_STEADY_STATE
                    };
        }
        SteadyStateXmlParser::SubElementTargetTimeSteadyStateParser::SubElementTargetTimeSteadyStateParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _targetTimeSteadyStateXmlParser = std::make_shared<TargetTimeSteadyStateXmlParser>(messageLogger, filename, parserOptions);
        }

        void SteadyStateXmlParser::SubElementTargetTimeSteadyStateParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto targetTimeSteadyState = std::make_shared<TargetTimeSteadyStateImpl>();
            auto typedObject = std::static_pointer_cast<SteadyStateImpl>(object);                    
            // Setting the parent
            targetTimeSteadyState->SetParent(object);
            _targetTimeSteadyStateXmlParser->ParseElement(indexedElement, parserContext, targetTimeSteadyState);

            typedObject->SetTargetTimeSteadyState(targetTimeSteadyState);
            
            
        }
        
        int SteadyStateXmlParser::SubElementTargetTimeSteadyStateParser::GetMinOccur() 
        {
            return 1;
        }

        int SteadyStateXmlParser::SubElementTargetTimeSteadyStateParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SteadyStateXmlParser::SubElementTargetTimeSteadyStateParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TARGET_TIME_STEADY_STATE ;
        }

        std::vector<std::string> SteadyStateXmlParser::SubElementTargetTimeSteadyStateParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TARGET_TIME_STEADY_STATE
                    };
        }
  
        SteadyStateXmlParser::SteadyStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlGroupParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StochasticImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StochasticXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> StochasticXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeNumberOfTestRuns: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeNumberOfTestRuns(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<StochasticImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_TEST_RUNS, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype unsignedInt
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_TEST_RUNS, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetNumberOfTestRuns(ParseUnsignedInt(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_TEST_RUNS, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_TEST_RUNS, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_TEST_RUNS, std::make_shared<AttributeNumberOfTestRuns>(_messageLogger, _filename, _parserOptions)));
            class AttributeRandomSeed: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRandomSeed(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<StochasticImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RANDOM_SEED, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RANDOM_SEED, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetRandomSeed(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RANDOM_SEED, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RANDOM_SEED, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RANDOM_SEED, std::make_shared<AttributeRandomSeed>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> StochasticXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementStochasticDistributionsParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        StochasticXmlParser::SubElementStochasticDistributionsParser::SubElementStochasticDistributionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _stochasticDistributionXmlParser = std::make_shared<StochasticDistributionXmlParser>(messageLogger, filename, parserOptions);
        }

        void StochasticXmlParser::SubElementStochasticDistributionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto stochasticDistributions = std::make_shared<StochasticDistributionImpl>();
            auto typedObject = std::static_pointer_cast<StochasticImpl>(object);                    
            // Setting the parent
            stochasticDistributions->SetParent(object);
            _stochasticDistributionXmlParser->ParseElement(indexedElement, parserContext, stochasticDistributions);
            auto stochasticDistributionsList = typedObject->GetWriterStochasticDistributions();
            stochasticDistributionsList.push_back(stochasticDistributions);
            typedObject->SetStochasticDistributions(stochasticDistributionsList);
            
            
        }
        
        int StochasticXmlParser::SubElementStochasticDistributionsParser::GetMinOccur() 
        {
            return 1;
        }

        int StochasticXmlParser::SubElementStochasticDistributionsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool StochasticXmlParser::SubElementStochasticDistributionsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__STOCHASTIC_DISTRIBUTION ;
        }

        std::vector<std::string> StochasticXmlParser::SubElementStochasticDistributionsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__STOCHASTIC_DISTRIBUTION
                    };
        }
  
        StochasticXmlParser::StochasticXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StochasticDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StochasticDistributionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> StochasticDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeParameterName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeParameterName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<StochasticDistributionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetParameterName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME, std::make_shared<AttributeParameterName>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> StochasticDistributionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementStochasticDistributionTypeParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        StochasticDistributionXmlParser::SubElementStochasticDistributionTypeParser::SubElementStochasticDistributionTypeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _stochasticDistributionTypeXmlParser = std::make_shared<StochasticDistributionTypeXmlParser>(messageLogger, filename, parserOptions);
        }

        void StochasticDistributionXmlParser::SubElementStochasticDistributionTypeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto stochasticDistributionType = std::make_shared<StochasticDistributionTypeImpl>();
            auto typedObject = std::static_pointer_cast<StochasticDistributionImpl>(object);                    
            // Setting the parent
            stochasticDistributionType->SetParent(object);
            _stochasticDistributionTypeXmlParser->ParseElement(indexedElement, parserContext, stochasticDistributionType);

            typedObject->SetStochasticDistributionType(stochasticDistributionType);
            
            
        }
        
        int StochasticDistributionXmlParser::SubElementStochasticDistributionTypeParser::GetMinOccur() 
        {
            return 1;
        }

        int StochasticDistributionXmlParser::SubElementStochasticDistributionTypeParser::GetMaxOccur() 
        {
            return 1;
        }

        bool StochasticDistributionXmlParser::SubElementStochasticDistributionTypeParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PROBABILITY_DISTRIBUTION_SET || 
                elementName == OSC_CONSTANTS::ELEMENT__NORMAL_DISTRIBUTION || 
                elementName == OSC_CONSTANTS::ELEMENT__UNIFORM_DISTRIBUTION || 
                elementName == OSC_CONSTANTS::ELEMENT__POISSON_DISTRIBUTION || 
                elementName == OSC_CONSTANTS::ELEMENT__HISTOGRAM || 
                elementName == OSC_CONSTANTS::ELEMENT__USER_DEFINED_DISTRIBUTION ;
        }

        std::vector<std::string> StochasticDistributionXmlParser::SubElementStochasticDistributionTypeParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PROBABILITY_DISTRIBUTION_SET,
                OSC_CONSTANTS::ELEMENT__NORMAL_DISTRIBUTION,
                OSC_CONSTANTS::ELEMENT__UNIFORM_DISTRIBUTION,
                OSC_CONSTANTS::ELEMENT__POISSON_DISTRIBUTION,
                OSC_CONSTANTS::ELEMENT__HISTOGRAM,
                OSC_CONSTANTS::ELEMENT__USER_DEFINED_DISTRIBUTION
                    };
        }
  
        StochasticDistributionXmlParser::StochasticDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StochasticDistributionTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StochasticDistributionTypeXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlChoiceParser(messageLogger, filename, parserOptions) {}



        std::vector<std::shared_ptr<IElementParser>> StochasticDistributionTypeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementProbabilityDistributionSetParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementNormalDistributionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementUniformDistributionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementPoissonDistributionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementHistogramParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementUserDefinedDistributionParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        StochasticDistributionTypeXmlParser::SubElementProbabilityDistributionSetParser::SubElementProbabilityDistributionSetParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _probabilityDistributionSetXmlParser = std::make_shared<ProbabilityDistributionSetXmlParser>(messageLogger, filename, parserOptions);
        }

        void StochasticDistributionTypeXmlParser::SubElementProbabilityDistributionSetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto probabilityDistributionSet = std::make_shared<ProbabilityDistributionSetImpl>();
            auto typedObject = std::static_pointer_cast<StochasticDistributionTypeImpl>(object);                    
            // Setting the parent
            probabilityDistributionSet->SetParent(object);
            _probabilityDistributionSetXmlParser->ParseElement(indexedElement, parserContext, probabilityDistributionSet);

            typedObject->SetProbabilityDistributionSet(probabilityDistributionSet);
            
            
        }
        
        int StochasticDistributionTypeXmlParser::SubElementProbabilityDistributionSetParser::GetMinOccur() 
        {
            return 1;
        }

        int StochasticDistributionTypeXmlParser::SubElementProbabilityDistributionSetParser::GetMaxOccur() 
        {
            return 1;
        }

        bool StochasticDistributionTypeXmlParser::SubElementProbabilityDistributionSetParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PROBABILITY_DISTRIBUTION_SET ;
        }

        std::vector<std::string> StochasticDistributionTypeXmlParser::SubElementProbabilityDistributionSetParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PROBABILITY_DISTRIBUTION_SET
                    };
        }
        StochasticDistributionTypeXmlParser::SubElementNormalDistributionParser::SubElementNormalDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _normalDistributionXmlParser = std::make_shared<NormalDistributionXmlParser>(messageLogger, filename, parserOptions);
        }

        void StochasticDistributionTypeXmlParser::SubElementNormalDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto normalDistribution = std::make_shared<NormalDistributionImpl>();
            auto typedObject = std::static_pointer_cast<StochasticDistributionTypeImpl>(object);                    
            // Setting the parent
            normalDistribution->SetParent(object);
            _normalDistributionXmlParser->ParseElement(indexedElement, parserContext, normalDistribution);

            typedObject->SetNormalDistribution(normalDistribution);
            
            
        }
        
        int StochasticDistributionTypeXmlParser::SubElementNormalDistributionParser::GetMinOccur() 
        {
            return 1;
        }

        int StochasticDistributionTypeXmlParser::SubElementNormalDistributionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool StochasticDistributionTypeXmlParser::SubElementNormalDistributionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__NORMAL_DISTRIBUTION ;
        }

        std::vector<std::string> StochasticDistributionTypeXmlParser::SubElementNormalDistributionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__NORMAL_DISTRIBUTION
                    };
        }
        StochasticDistributionTypeXmlParser::SubElementUniformDistributionParser::SubElementUniformDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _uniformDistributionXmlParser = std::make_shared<UniformDistributionXmlParser>(messageLogger, filename, parserOptions);
        }

        void StochasticDistributionTypeXmlParser::SubElementUniformDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto uniformDistribution = std::make_shared<UniformDistributionImpl>();
            auto typedObject = std::static_pointer_cast<StochasticDistributionTypeImpl>(object);                    
            // Setting the parent
            uniformDistribution->SetParent(object);
            _uniformDistributionXmlParser->ParseElement(indexedElement, parserContext, uniformDistribution);

            typedObject->SetUniformDistribution(uniformDistribution);
            
            
        }
        
        int StochasticDistributionTypeXmlParser::SubElementUniformDistributionParser::GetMinOccur() 
        {
            return 1;
        }

        int StochasticDistributionTypeXmlParser::SubElementUniformDistributionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool StochasticDistributionTypeXmlParser::SubElementUniformDistributionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__UNIFORM_DISTRIBUTION ;
        }

        std::vector<std::string> StochasticDistributionTypeXmlParser::SubElementUniformDistributionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__UNIFORM_DISTRIBUTION
                    };
        }
        StochasticDistributionTypeXmlParser::SubElementPoissonDistributionParser::SubElementPoissonDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _poissonDistributionXmlParser = std::make_shared<PoissonDistributionXmlParser>(messageLogger, filename, parserOptions);
        }

        void StochasticDistributionTypeXmlParser::SubElementPoissonDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto poissonDistribution = std::make_shared<PoissonDistributionImpl>();
            auto typedObject = std::static_pointer_cast<StochasticDistributionTypeImpl>(object);                    
            // Setting the parent
            poissonDistribution->SetParent(object);
            _poissonDistributionXmlParser->ParseElement(indexedElement, parserContext, poissonDistribution);

            typedObject->SetPoissonDistribution(poissonDistribution);
            
            
        }
        
        int StochasticDistributionTypeXmlParser::SubElementPoissonDistributionParser::GetMinOccur() 
        {
            return 1;
        }

        int StochasticDistributionTypeXmlParser::SubElementPoissonDistributionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool StochasticDistributionTypeXmlParser::SubElementPoissonDistributionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POISSON_DISTRIBUTION ;
        }

        std::vector<std::string> StochasticDistributionTypeXmlParser::SubElementPoissonDistributionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POISSON_DISTRIBUTION
                    };
        }
        StochasticDistributionTypeXmlParser::SubElementHistogramParser::SubElementHistogramParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _histogramXmlParser = std::make_shared<HistogramXmlParser>(messageLogger, filename, parserOptions);
        }

        void StochasticDistributionTypeXmlParser::SubElementHistogramParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto histogram = std::make_shared<HistogramImpl>();
            auto typedObject = std::static_pointer_cast<StochasticDistributionTypeImpl>(object);                    
            // Setting the parent
            histogram->SetParent(object);
            _histogramXmlParser->ParseElement(indexedElement, parserContext, histogram);

            typedObject->SetHistogram(histogram);
            
            
        }
        
        int StochasticDistributionTypeXmlParser::SubElementHistogramParser::GetMinOccur() 
        {
            return 1;
        }

        int StochasticDistributionTypeXmlParser::SubElementHistogramParser::GetMaxOccur() 
        {
            return 1;
        }

        bool StochasticDistributionTypeXmlParser::SubElementHistogramParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__HISTOGRAM ;
        }

        std::vector<std::string> StochasticDistributionTypeXmlParser::SubElementHistogramParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__HISTOGRAM
                    };
        }
        StochasticDistributionTypeXmlParser::SubElementUserDefinedDistributionParser::SubElementUserDefinedDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _userDefinedDistributionXmlParser = std::make_shared<UserDefinedDistributionXmlParser>(messageLogger, filename, parserOptions);
        }

        void StochasticDistributionTypeXmlParser::SubElementUserDefinedDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto userDefinedDistribution = std::make_shared<UserDefinedDistributionImpl>();
            auto typedObject = std::static_pointer_cast<StochasticDistributionTypeImpl>(object);                    
            // Setting the parent
            userDefinedDistribution->SetParent(object);
            _userDefinedDistributionXmlParser->ParseElement(indexedElement, parserContext, userDefinedDistribution);

            typedObject->SetUserDefinedDistribution(userDefinedDistribution);
            
            
        }
        
        int StochasticDistributionTypeXmlParser::SubElementUserDefinedDistributionParser::GetMinOccur() 
        {
            return 1;
        }

        int StochasticDistributionTypeXmlParser::SubElementUserDefinedDistributionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool StochasticDistributionTypeXmlParser::SubElementUserDefinedDistributionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__USER_DEFINED_DISTRIBUTION ;
        }

        std::vector<std::string> StochasticDistributionTypeXmlParser::SubElementUserDefinedDistributionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__USER_DEFINED_DISTRIBUTION
                    };
        }
  
        StochasticDistributionTypeXmlParser::StochasticDistributionTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlGroupParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StoryXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> StoryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<StoryImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype string
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> StoryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename, _parserOptions), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS, _parserOptions) );
            result.push_back(std::make_shared<SubElementActsParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        StoryXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename, parserOptions);
        }

        void StoryXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            auto typedObject = std::static_pointer_cast<StoryImpl>(object);                    
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = typedObject->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            typedObject->SetParameterDeclarations(parameterDeclarationsList);
            
            
        }
        
        int StoryXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int StoryXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool StoryXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> StoryXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        StoryXmlParser::SubElementActsParser::SubElementActsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _actXmlParser = std::make_shared<ActXmlParser>(messageLogger, filename, parserOptions);
        }

        void StoryXmlParser::SubElementActsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto acts = std::make_shared<ActImpl>();
            auto typedObject = std::static_pointer_cast<StoryImpl>(object);                    
            // Setting the parent
            acts->SetParent(object);
            _actXmlParser->ParseElement(indexedElement, parserContext, acts);
            auto actsList = typedObject->GetWriterActs();
            actsList.push_back(acts);
            typedObject->SetActs(actsList);
            
            
        }
        
        int StoryXmlParser::SubElementActsParser::GetMinOccur() 
        {
            return 1;
        }

        int StoryXmlParser::SubElementActsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool StoryXmlParser::SubElementActsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ACT ;
        }

        std::vector<std::string> StoryXmlParser::SubElementActsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ACT
                    };
        }
  
        StoryXmlParser::StoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StoryboardImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StoryboardXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> StoryboardXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> StoryboardXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementInitParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementStoriesParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementStopTriggerParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        StoryboardXmlParser::SubElementInitParser::SubElementInitParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _initXmlParser = std::make_shared<InitXmlParser>(messageLogger, filename, parserOptions);
        }

        void StoryboardXmlParser::SubElementInitParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto init = std::make_shared<InitImpl>();
            auto typedObject = std::static_pointer_cast<StoryboardImpl>(object);                    
            // Setting the parent
            init->SetParent(object);
            _initXmlParser->ParseElement(indexedElement, parserContext, init);

            typedObject->SetInit(init);
            
            
        }
        
        int StoryboardXmlParser::SubElementInitParser::GetMinOccur() 
        {
            return 1;
        }

        int StoryboardXmlParser::SubElementInitParser::GetMaxOccur() 
        {
            return 1;
        }

        bool StoryboardXmlParser::SubElementInitParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__INIT ;
        }

        std::vector<std::string> StoryboardXmlParser::SubElementInitParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__INIT
                    };
        }
        StoryboardXmlParser::SubElementStoriesParser::SubElementStoriesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _storyXmlParser = std::make_shared<StoryXmlParser>(messageLogger, filename, parserOptions);
        }

        void StoryboardXmlParser::SubElementStoriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto stories = std::make_shared<StoryImpl>();
            auto typedObject = std::static_pointer_cast<StoryboardImpl>(object);                    
            // Setting the parent
            stories->SetParent(object);
            _storyXmlParser->ParseElement(indexedElement, parserContext, stories);
            auto storiesList = typedObject->GetWriterStories();
            storiesList.push_back(stories);
            typedObject->SetStories(storiesList);
            
            
        }
        
        int StoryboardXmlParser::SubElementStoriesParser::GetMinOccur() 
        {
            return 0;
        }

        int StoryboardXmlParser::SubElementStoriesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool StoryboardXmlParser::SubElementStoriesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__STORY ;
        }

        std::vector<std::string> StoryboardXmlParser::SubElementStoriesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__STORY
                    };
        }
        StoryboardXmlParser::SubElementStopTriggerParser::SubElementStopTriggerParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _triggerXmlParser = std::make_shared<TriggerXmlParser>(messageLogger, filename, parserOptions);
        }

        void StoryboardXmlParser::SubElementStopTriggerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto stopTrigger = std::make_shared<TriggerImpl>();
            auto typedObject = std::static_pointer_cast<StoryboardImpl>(object);                    
            // Setting the parent
            stopTrigger->SetParent(object);
            _triggerXmlParser->ParseElement(indexedElement, parserContext, stopTrigger);

            typedObject->SetStopTrigger(stopTrigger);
            
            
        }
        
        int StoryboardXmlParser::SubElementStopTriggerParser::GetMinOccur() 
        {
            return 1;
        }

        int StoryboardXmlParser::SubElementStopTriggerParser::GetMaxOccur() 
        {
            return 1;
        }

        bool StoryboardXmlParser::SubElementStopTriggerParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__STOP_TRIGGER ;
        }

        std::vector<std::string> StoryboardXmlParser::SubElementStopTriggerParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__STOP_TRIGGER
                    };
        }
  
        StoryboardXmlParser::StoryboardXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StoryboardElementStateConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StoryboardElementStateConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> StoryboardElementStateConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeState: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeState(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<StoryboardElementStateConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STATE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = StoryboardElementState::GetFromLiteral(attributeValue);
                        if (kResult != StoryboardElementState::UNKNOWN)
                        {
                            typedObject->SetState(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (StoryboardElementState::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  StoryboardElementState::GetDeprecatedVersion(kResult) +"'. " + StoryboardElementState::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<AttributeState>(_messageLogger, _filename, _parserOptions)));
            class AttributeStoryboardElementRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeStoryboardElementRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<StoryboardElementStateConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IStoryboardElement>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetStoryboardElementRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, std::make_shared<AttributeStoryboardElementRef>(_messageLogger, _filename, _parserOptions)));
            class AttributeStoryboardElementType: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeStoryboardElementType(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<StoryboardElementStateConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = StoryboardElementType::GetFromLiteral(attributeValue);
                        if (kResult != StoryboardElementType::UNKNOWN)
                        {
                            typedObject->SetStoryboardElementType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        if (StoryboardElementType::IsDeprecated(kResult) && !_parserOptions.IsOptionSetSupressDeprecationWarnings())
				    	{
							auto msg = FileContentMessage("Enumeration literal '" + attributeValue + "' is deprecated since standard version '" +  StoryboardElementType::GetDeprecatedVersion(kResult) +"'. " + StoryboardElementType::GetDeprecatedComment(kResult) + "'.", WARNING, Textmarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), this->_filename));
							this->_messageLogger.LogMessage(msg);
				    	}
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, std::make_shared<AttributeStoryboardElementType>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> StoryboardElementStateConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        StoryboardElementStateConditionXmlParser::StoryboardElementStateConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SunImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SunXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlSequenceParser(messageLogger, filename, parserOptions) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> SunXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeAzimuth: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeAzimuth(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SunImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetAzimuth(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, std::make_shared<AttributeAzimuth>(_messageLogger, _filename, _parserOptions)));
            class AttributeElevation: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeElevation(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SunImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetElevation(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, std::make_shared<AttributeElevation>(_messageLogger, _filename, _parserOptions)));
            class AttributeIlluminance: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeIlluminance(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SunImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ILLUMINANCE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ILLUMINANCE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetIlluminance(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ILLUMINANCE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ILLUMINANCE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ILLUMINANCE, std::make_shared<AttributeIlluminance>(_messageLogger, _filename, _parserOptions)));
            class AttributeIntensity: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeIntensity(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SunImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetIntensity(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<Textmarker>(endMarker));
                     
                    
					if (!_parserOptions.IsOptionSetSupressDeprecationWarnings())
					{
						// This element is deprecated
						auto msg = FileContentMessage("Attribute '" + attributeName + "' is deprecated since standard version '1.2'. Comment: 'Use illuminance instead.'.", WARNING, Textmarker(startPosition.GetLine(), startPosition.GetColumn(), this->_filename));
						this->_messageLogger.LogMessage(msg);
					}
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<AttributeIntensity>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SunXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        SunXmlParser::SunXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SynchronizeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SynchronizeActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlAllParser(messageLogger, filename, parserOptions) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> SynchronizeActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeMasterEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMasterEntityRef(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SynchronizeActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->SetMasterEntityRef(proxy);
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, std::make_shared<AttributeMasterEntityRef>(_messageLogger, _filename, _parserOptions)));
            class AttributeTargetTolerance: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTargetTolerance(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SynchronizeActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetTargetTolerance(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE, std::make_shared<AttributeTargetTolerance>(_messageLogger, _filename, _parserOptions)));
            class AttributeTargetToleranceMaster: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTargetToleranceMaster(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions):XmlParserBase(messageLogger, filename, parserOptions) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<SynchronizeActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE_MASTER, attributeValue, startValueMarker); 
                    }
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype double
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE_MASTER, attributeValue, startValueMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetTargetToleranceMaster(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE_MASTER, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE_MASTER, std::make_shared<Textmarker>(endMarker));
                     
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE_MASTER, std::make_shared<AttributeTargetToleranceMaster>(_messageLogger, _filename, _parserOptions)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> SynchronizeActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementTargetPositionMasterParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementTargetPositionParser>(_messageLogger, _filename, _parserOptions));
            result.push_back(std::make_shared<SubElementFinalSpeedParser>(_messageLogger, _filename, _parserOptions));
            return result;
        }

        SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::SubElementTargetPositionMasterParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto targetPositionMaster = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<SynchronizeActionImpl>(object);                    
            // Setting the parent
            targetPositionMaster->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, targetPositionMaster);

            typedObject->SetTargetPositionMaster(targetPositionMaster);
            
            
        }
        
        int SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::GetMinOccur() 
        {
            return 1;
        }

        int SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TARGET_POSITION_MASTER ;
        }

        std::vector<std::string> SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TARGET_POSITION_MASTER
                    };
        }
        SynchronizeActionXmlParser::SubElementTargetPositionParser::SubElementTargetPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename, parserOptions);
        }

        void SynchronizeActionXmlParser::SubElementTargetPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto targetPosition = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<SynchronizeActionImpl>(object);                    
            // Setting the parent
            targetPosition->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, targetPosition);

            typedObject->SetTargetPosition(targetPosition);
            
            
        }
        
        int SynchronizeActionXmlParser::SubElementTargetPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int SynchronizeActionXmlParser::SubElementTargetPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SynchronizeActionXmlParser::SubElementTargetPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TARGET_POSITION ;
        }

        std::vector<std::string> SynchronizeActionXmlParser::SubElementTargetPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TARGET_POSITION
                    };
        }
        SynchronizeActionXmlParser::SubElementFinalSpeedParser::SubElementFinalSpeedParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions)
        {
            _finalSpeedXmlParser = std::make_shared<FinalSpeedXmlParser>(messageLogger, filename, parserOptions);
        }

        void SynchronizeActionXmlParser::SubElementFinalSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto finalSpeed = std::make_shared<FinalSpeedImpl>();
            auto typedObject = std::static_pointer_cast<SynchronizeActionImpl>(object);                    
            // Setting the parent
            finalSpeed->SetParent(object);
            _finalSpeedXmlParser->ParseElement(indexedElement, parserContext, finalSpeed);

            typedObject->SetFinalSpeed(finalSpeed);
            
            
        }
        
        int SynchronizeActionXmlParser::SubElementFinalSpeedParser::GetMinOccur() 
        {
            return 0;
        }

        int SynchronizeActionXmlParser::SubElementFinalSpeedParser::GetMaxOccur() 
        {
            return 1;
        }

        bool SynchronizeActionXmlParser::SubElementFinalSpeedParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__FINAL_SPEED ;
        }

        std::vector<std::string> SynchronizeActionXmlParser::SubElementFinalSpeedParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__FINAL_SPEED
                    };
        }
  
        SynchronizeActionXmlParser::SynchronizeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): 
        XmlComplexTypeParser(messageLogger, filename, parserOptions)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename, parserOptions);
        }
        

    
    }
}
