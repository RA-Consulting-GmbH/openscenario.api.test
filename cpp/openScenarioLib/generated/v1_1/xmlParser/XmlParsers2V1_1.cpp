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
 
#include "XmlParsersV1_1.h"
#include "NamedReferenceProxy.h"
#include "FileContentMessage.h"
#include "Position.h"
#include "Textmarker.h"
#include "ErrorLevel.h"
#include "WrappedListParser.h"
#include "CatalogReferenceParserContextV1_1.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ParameterDeclarationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ParameterDeclarationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterDeclarationImpl>>> ParameterDeclarationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ParameterDeclarationImpl>>> result;

            class AttributeName: public IAttributeParser<ParameterDeclarationImpl>, public XmlParserBase<ParameterDeclarationImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterDeclarationImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    // This is a special case for ParameterDeclaration.name or ParamterAssignment.parameterRef
                    // Simple type
                    object->SetName(ParseString(StripDollarSign(attributeValue), startMarker));
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            class AttributeParameterType: public IAttributeParser<ParameterDeclarationImpl>, public XmlParserBase<ParameterDeclarationImpl>
            {
            public:
                AttributeParameterType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterDeclarationImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = ParameterType::GetFromLiteral(attributeValue);
                        if (kResult != ParameterType::UNKNOWN)
                        {
                            object->SetParameterType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_TYPE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_TYPE, std::make_shared<AttributeParameterType>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<ParameterDeclarationImpl>, public XmlParserBase<ParameterDeclarationImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterDeclarationImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ParameterDeclarationImpl>>> ParameterDeclarationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ParameterDeclarationImpl>>> result;
            result.push_back(std::make_shared<SubElementConstraintGroupsParser>(_messageLogger, _filename));
            return result;
        }

        ParameterDeclarationXmlParser::SubElementConstraintGroupsParser::SubElementConstraintGroupsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _valueConstraintGroupXmlParser = std::make_shared<ValueConstraintGroupXmlParser>(messageLogger, filename);
        }

        void ParameterDeclarationXmlParser::SubElementConstraintGroupsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterDeclarationImpl>& object)
        {
            auto constraintGroups = std::make_shared<ValueConstraintGroupImpl>();
            // Setting the parent
            constraintGroups->SetParent(object);
            _valueConstraintGroupXmlParser->ParseElement(indexedElement, parserContext, constraintGroups);
            auto constraintGroupsList = object->GetWriterConstraintGroups();
            constraintGroupsList.push_back(constraintGroups);
            object->SetConstraintGroups(constraintGroupsList);
        }
        
        int ParameterDeclarationXmlParser::SubElementConstraintGroupsParser::GetMinOccur() 
        {
            return 0;
        }

        int ParameterDeclarationXmlParser::SubElementConstraintGroupsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ParameterDeclarationXmlParser::SubElementConstraintGroupsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONSTRAINT_GROUP ;
        }

        std::vector<std::string> ParameterDeclarationXmlParser::SubElementConstraintGroupsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONSTRAINT_GROUP
                    };
        }
  
        ParameterDeclarationXmlParser::ParameterDeclarationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ParameterModifyActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ParameterModifyActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterModifyActionImpl>>> ParameterModifyActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ParameterModifyActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ParameterModifyActionImpl>>> ParameterModifyActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ParameterModifyActionImpl>>> result;
            result.push_back(std::make_shared<SubElementRuleParser>(_messageLogger, _filename));
            return result;
        }

        ParameterModifyActionXmlParser::SubElementRuleParser::SubElementRuleParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _modifyRuleXmlParser = std::make_shared<ModifyRuleXmlParser>(messageLogger, filename);
        }

        void ParameterModifyActionXmlParser::SubElementRuleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterModifyActionImpl>& object)
        {
            auto rule = std::make_shared<ModifyRuleImpl>();
            // Setting the parent
            rule->SetParent(object);
            _modifyRuleXmlParser->ParseElement(indexedElement, parserContext, rule);

            object->SetRule(rule);
        }
        
        int ParameterModifyActionXmlParser::SubElementRuleParser::GetMinOccur() 
        {
            return 1;
        }

        int ParameterModifyActionXmlParser::SubElementRuleParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ParameterModifyActionXmlParser::SubElementRuleParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RULE ;
        }

        std::vector<std::string> ParameterModifyActionXmlParser::SubElementRuleParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RULE
                    };
        }
  
        ParameterModifyActionXmlParser::ParameterModifyActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ParameterMultiplyByValueRuleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ParameterMultiplyByValueRuleXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterMultiplyByValueRuleImpl>>> ParameterMultiplyByValueRuleXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ParameterMultiplyByValueRuleImpl>>> result;

            class AttributeValue: public IAttributeParser<ParameterMultiplyByValueRuleImpl>, public XmlParserBase<ParameterMultiplyByValueRuleImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterMultiplyByValueRuleImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ParameterMultiplyByValueRuleImpl>>> ParameterMultiplyByValueRuleXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ParameterMultiplyByValueRuleImpl>>> result;
            return result;
        }

  
        ParameterMultiplyByValueRuleXmlParser::ParameterMultiplyByValueRuleXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ParameterSetActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ParameterSetActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterSetActionImpl>>> ParameterSetActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ParameterSetActionImpl>>> result;

            class AttributeValue: public IAttributeParser<ParameterSetActionImpl>, public XmlParserBase<ParameterSetActionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterSetActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ParameterSetActionImpl>>> ParameterSetActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ParameterSetActionImpl>>> result;
            return result;
        }

  
        ParameterSetActionXmlParser::ParameterSetActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ParameterValueDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ParameterValueDistributionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterValueDistributionImpl>>> ParameterValueDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ParameterValueDistributionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ParameterValueDistributionImpl>>> ParameterValueDistributionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ParameterValueDistributionImpl>>> result;
            result.push_back(std::make_shared<SubElementScenarioFileParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementDistributionDefinitionParser>(_messageLogger, _filename));
            return result;
        }

        ParameterValueDistributionXmlParser::SubElementScenarioFileParser::SubElementScenarioFileParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _fileXmlParser = std::make_shared<FileXmlParser>(messageLogger, filename);
        }

        void ParameterValueDistributionXmlParser::SubElementScenarioFileParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterValueDistributionImpl>& object)
        {
            auto scenarioFile = std::make_shared<FileImpl>();
            // Setting the parent
            scenarioFile->SetParent(object);
            _fileXmlParser->ParseElement(indexedElement, parserContext, scenarioFile);

            object->SetScenarioFile(scenarioFile);
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
        ParameterValueDistributionXmlParser::SubElementDistributionDefinitionParser::SubElementDistributionDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _distributionDefinitionXmlParser = std::make_shared<DistributionDefinitionXmlParser>(messageLogger, filename);
        }

        void ParameterValueDistributionXmlParser::SubElementDistributionDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterValueDistributionImpl>& object)
        {
            auto distributionDefinition = std::make_shared<DistributionDefinitionImpl>();
            // Setting the parent
            distributionDefinition->SetParent(object);
            _distributionDefinitionXmlParser->ParseElement(indexedElement, parserContext, distributionDefinition);

            object->SetDistributionDefinition(distributionDefinition);
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
  
        ParameterValueDistributionXmlParser::ParameterValueDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ParameterValueDistributionDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ParameterValueDistributionDefinitionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}


        std::vector<std::shared_ptr<IElementParser<ParameterValueDistributionDefinitionImpl>>> ParameterValueDistributionDefinitionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ParameterValueDistributionDefinitionImpl>>> result;
            result.push_back(std::make_shared<SubElementParameterValueDistributionParser>(_messageLogger, _filename));
            return result;
        }

        ParameterValueDistributionDefinitionXmlParser::SubElementParameterValueDistributionParser::SubElementParameterValueDistributionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterValueDistributionXmlParser = std::make_shared<ParameterValueDistributionXmlParser>(messageLogger, filename);
        }

        void ParameterValueDistributionDefinitionXmlParser::SubElementParameterValueDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterValueDistributionDefinitionImpl>& object)
        {
            auto parameterValueDistribution = std::make_shared<ParameterValueDistributionImpl>();
            // Setting the parent
            parameterValueDistribution->SetParent(object);
            _parameterValueDistributionXmlParser->ParseElement(indexedElement, parserContext, parameterValueDistribution);

            object->SetParameterValueDistribution(parameterValueDistribution);
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
  
        ParameterValueDistributionDefinitionXmlParser::ParameterValueDistributionDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlGroupParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ParameterValueSetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ParameterValueSetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterValueSetImpl>>> ParameterValueSetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ParameterValueSetImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ParameterValueSetImpl>>> ParameterValueSetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ParameterValueSetImpl>>> result;
            result.push_back(std::make_shared<SubElementParameterAssignmentsParser>(_messageLogger, _filename));
            return result;
        }

        ParameterValueSetXmlParser::SubElementParameterAssignmentsParser::SubElementParameterAssignmentsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterAssignmentXmlParser = std::make_shared<ParameterAssignmentXmlParser>(messageLogger, filename);
        }

        void ParameterValueSetXmlParser::SubElementParameterAssignmentsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterValueSetImpl>& object)
        {
            auto parameterAssignments = std::make_shared<ParameterAssignmentImpl>();
            // Setting the parent
            parameterAssignments->SetParent(object);
            _parameterAssignmentXmlParser->ParseElement(indexedElement, parserContext, parameterAssignments);
            auto parameterAssignmentsList = object->GetWriterParameterAssignments();
            parameterAssignmentsList.push_back(parameterAssignments);
            object->SetParameterAssignments(parameterAssignmentsList);
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
  
        ParameterValueSetXmlParser::ParameterValueSetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PedestrianImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PedestrianXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<PedestrianImpl>>> PedestrianXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PedestrianImpl>>> result;

            class AttributeMass: public IAttributeParser<PedestrianImpl>, public XmlParserBase<PedestrianImpl>
            {
            public:
                AttributeMass(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PedestrianImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MASS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetMass(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MASS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MASS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MASS, std::make_shared<AttributeMass>(_messageLogger, _filename)));
            class AttributeModel: public IAttributeParser<PedestrianImpl>, public XmlParserBase<PedestrianImpl>
            {
            public:
                AttributeModel(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PedestrianImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MODEL, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetModel(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MODEL, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MODEL, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MODEL, std::make_shared<AttributeModel>(_messageLogger, _filename)));
            class AttributeModel3d: public IAttributeParser<PedestrianImpl>, public XmlParserBase<PedestrianImpl>
            {
            public:
                AttributeModel3d(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PedestrianImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetModel3d(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, std::make_shared<AttributeModel3d>(_messageLogger, _filename)));
            class AttributeName: public IAttributeParser<PedestrianImpl>, public XmlParserBase<PedestrianImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PedestrianImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            class AttributePedestrianCategory: public IAttributeParser<PedestrianImpl>, public XmlParserBase<PedestrianImpl>
            {
            public:
                AttributePedestrianCategory(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PedestrianImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = PedestrianCategory::GetFromLiteral(attributeValue);
                        if (kResult != PedestrianCategory::UNKNOWN)
                        {
                            object->SetPedestrianCategory(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY, std::make_shared<AttributePedestrianCategory>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PedestrianImpl>>> PedestrianXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PedestrianImpl>>> result;
            result.push_back(std::make_shared<WrappedListParser<PedestrianImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementBoundingBoxParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPropertiesParser>(_messageLogger, _filename));
            return result;
        }

        PedestrianXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void PedestrianXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianImpl>& object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = object->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
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
        PedestrianXmlParser::SubElementBoundingBoxParser::SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _boundingBoxXmlParser = std::make_shared<BoundingBoxXmlParser>(messageLogger, filename);
        }

        void PedestrianXmlParser::SubElementBoundingBoxParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianImpl>& object)
        {
            auto boundingBox = std::make_shared<BoundingBoxImpl>();
            // Setting the parent
            boundingBox->SetParent(object);
            _boundingBoxXmlParser->ParseElement(indexedElement, parserContext, boundingBox);

            object->SetBoundingBox(boundingBox);
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
        PedestrianXmlParser::SubElementPropertiesParser::SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _propertiesXmlParser = std::make_shared<PropertiesXmlParser>(messageLogger, filename);
        }

        void PedestrianXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianImpl>& object)
        {
            auto properties = std::make_shared<PropertiesImpl>();
            // Setting the parent
            properties->SetParent(object);
            _propertiesXmlParser->ParseElement(indexedElement, parserContext, properties);

            object->SetProperties(properties);
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
  
        PedestrianXmlParser::PedestrianXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PedestrianCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PedestrianCatalogLocationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<PedestrianCatalogLocationImpl>>> PedestrianCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PedestrianCatalogLocationImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PedestrianCatalogLocationImpl>>> PedestrianCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PedestrianCatalogLocationImpl>>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename));
            return result;
        }

        PedestrianCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename);
        }

        void PedestrianCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianCatalogLocationImpl>& object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            object->SetDirectory(directory);
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
  
        PedestrianCatalogLocationXmlParser::PedestrianCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PerformanceImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PerformanceXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<PerformanceImpl>>> PerformanceXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PerformanceImpl>>> result;

            class AttributeMaxAcceleration: public IAttributeParser<PerformanceImpl>, public XmlParserBase<PerformanceImpl>
            {
            public:
                AttributeMaxAcceleration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PerformanceImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetMaxAcceleration(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, std::make_shared<AttributeMaxAcceleration>(_messageLogger, _filename)));
            class AttributeMaxDeceleration: public IAttributeParser<PerformanceImpl>, public XmlParserBase<PerformanceImpl>
            {
            public:
                AttributeMaxDeceleration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PerformanceImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetMaxDeceleration(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, std::make_shared<AttributeMaxDeceleration>(_messageLogger, _filename)));
            class AttributeMaxSpeed: public IAttributeParser<PerformanceImpl>, public XmlParserBase<PerformanceImpl>
            {
            public:
                AttributeMaxSpeed(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PerformanceImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetMaxSpeed(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, std::make_shared<AttributeMaxSpeed>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PerformanceImpl>>> PerformanceXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PerformanceImpl>>> result;
            return result;
        }

  
        PerformanceXmlParser::PerformanceXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PhaseImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PhaseXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<PhaseImpl>>> PhaseXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PhaseImpl>>> result;

            class AttributeDuration: public IAttributeParser<PhaseImpl>, public XmlParserBase<PhaseImpl>
            {
            public:
                AttributeDuration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PhaseImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DURATION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDuration(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<AttributeDuration>(_messageLogger, _filename)));
            class AttributeName: public IAttributeParser<PhaseImpl>, public XmlParserBase<PhaseImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PhaseImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PhaseImpl>>> PhaseXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PhaseImpl>>> result;
            result.push_back(std::make_shared<SubElementTrafficSignalStatesParser>(_messageLogger, _filename));
            return result;
        }

        PhaseXmlParser::SubElementTrafficSignalStatesParser::SubElementTrafficSignalStatesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSignalStateXmlParser = std::make_shared<TrafficSignalStateXmlParser>(messageLogger, filename);
        }

        void PhaseXmlParser::SubElementTrafficSignalStatesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PhaseImpl>& object)
        {
            auto trafficSignalStates = std::make_shared<TrafficSignalStateImpl>();
            // Setting the parent
            trafficSignalStates->SetParent(object);
            _trafficSignalStateXmlParser->ParseElement(indexedElement, parserContext, trafficSignalStates);
            auto trafficSignalStatesList = object->GetWriterTrafficSignalStates();
            trafficSignalStatesList.push_back(trafficSignalStates);
            object->SetTrafficSignalStates(trafficSignalStatesList);
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
  
        PhaseXmlParser::PhaseXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PoissonDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PoissonDistributionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<PoissonDistributionImpl>>> PoissonDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PoissonDistributionImpl>>> result;

            class AttributeExpectedValue: public IAttributeParser<PoissonDistributionImpl>, public XmlParserBase<PoissonDistributionImpl>
            {
            public:
                AttributeExpectedValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PoissonDistributionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetExpectedValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE, std::make_shared<AttributeExpectedValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PoissonDistributionImpl>>> PoissonDistributionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PoissonDistributionImpl>>> result;
            result.push_back(std::make_shared<SubElementRangeParser>(_messageLogger, _filename));
            return result;
        }

        PoissonDistributionXmlParser::SubElementRangeParser::SubElementRangeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _rangeXmlParser = std::make_shared<RangeXmlParser>(messageLogger, filename);
        }

        void PoissonDistributionXmlParser::SubElementRangeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PoissonDistributionImpl>& object)
        {
            auto range = std::make_shared<RangeImpl>();
            // Setting the parent
            range->SetParent(object);
            _rangeXmlParser->ParseElement(indexedElement, parserContext, range);

            object->SetRange(range);
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
  
        PoissonDistributionXmlParser::PoissonDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PolylineImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PolylineXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<PolylineImpl>>> PolylineXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PolylineImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PolylineImpl>>> PolylineXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PolylineImpl>>> result;
            result.push_back(std::make_shared<SubElementVerticesParser>(_messageLogger, _filename));
            return result;
        }

        PolylineXmlParser::SubElementVerticesParser::SubElementVerticesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _vertexXmlParser = std::make_shared<VertexXmlParser>(messageLogger, filename);
        }

        void PolylineXmlParser::SubElementVerticesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PolylineImpl>& object)
        {
            auto vertices = std::make_shared<VertexImpl>();
            // Setting the parent
            vertices->SetParent(object);
            _vertexXmlParser->ParseElement(indexedElement, parserContext, vertices);
            auto verticesList = object->GetWriterVertices();
            verticesList.push_back(vertices);
            object->SetVertices(verticesList);
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
  
        PolylineXmlParser::PolylineXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<PositionImpl>>> PositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PositionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PositionImpl>>> PositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PositionImpl>>> result;
            result.push_back(std::make_shared<SubElementWorldPositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRelativeWorldPositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRelativeObjectPositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRoadPositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRelativeRoadPositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementLanePositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRelativeLanePositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRoutePositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementGeoPositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrajectoryPositionParser>(_messageLogger, _filename));
            return result;
        }

        PositionXmlParser::SubElementWorldPositionParser::SubElementWorldPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _worldPositionXmlParser = std::make_shared<WorldPositionXmlParser>(messageLogger, filename);
        }

        void PositionXmlParser::SubElementWorldPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
        {
            auto worldPosition = std::make_shared<WorldPositionImpl>();
            // Setting the parent
            worldPosition->SetParent(object);
            _worldPositionXmlParser->ParseElement(indexedElement, parserContext, worldPosition);

            object->SetWorldPosition(worldPosition);
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
        PositionXmlParser::SubElementRelativeWorldPositionParser::SubElementRelativeWorldPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeWorldPositionXmlParser = std::make_shared<RelativeWorldPositionXmlParser>(messageLogger, filename);
        }

        void PositionXmlParser::SubElementRelativeWorldPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
        {
            auto relativeWorldPosition = std::make_shared<RelativeWorldPositionImpl>();
            // Setting the parent
            relativeWorldPosition->SetParent(object);
            _relativeWorldPositionXmlParser->ParseElement(indexedElement, parserContext, relativeWorldPosition);

            object->SetRelativeWorldPosition(relativeWorldPosition);
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
        PositionXmlParser::SubElementRelativeObjectPositionParser::SubElementRelativeObjectPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeObjectPositionXmlParser = std::make_shared<RelativeObjectPositionXmlParser>(messageLogger, filename);
        }

        void PositionXmlParser::SubElementRelativeObjectPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
        {
            auto relativeObjectPosition = std::make_shared<RelativeObjectPositionImpl>();
            // Setting the parent
            relativeObjectPosition->SetParent(object);
            _relativeObjectPositionXmlParser->ParseElement(indexedElement, parserContext, relativeObjectPosition);

            object->SetRelativeObjectPosition(relativeObjectPosition);
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
        PositionXmlParser::SubElementRoadPositionParser::SubElementRoadPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _roadPositionXmlParser = std::make_shared<RoadPositionXmlParser>(messageLogger, filename);
        }

        void PositionXmlParser::SubElementRoadPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
        {
            auto roadPosition = std::make_shared<RoadPositionImpl>();
            // Setting the parent
            roadPosition->SetParent(object);
            _roadPositionXmlParser->ParseElement(indexedElement, parserContext, roadPosition);

            object->SetRoadPosition(roadPosition);
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
        PositionXmlParser::SubElementRelativeRoadPositionParser::SubElementRelativeRoadPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeRoadPositionXmlParser = std::make_shared<RelativeRoadPositionXmlParser>(messageLogger, filename);
        }

        void PositionXmlParser::SubElementRelativeRoadPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
        {
            auto relativeRoadPosition = std::make_shared<RelativeRoadPositionImpl>();
            // Setting the parent
            relativeRoadPosition->SetParent(object);
            _relativeRoadPositionXmlParser->ParseElement(indexedElement, parserContext, relativeRoadPosition);

            object->SetRelativeRoadPosition(relativeRoadPosition);
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
        PositionXmlParser::SubElementLanePositionParser::SubElementLanePositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _lanePositionXmlParser = std::make_shared<LanePositionXmlParser>(messageLogger, filename);
        }

        void PositionXmlParser::SubElementLanePositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
        {
            auto lanePosition = std::make_shared<LanePositionImpl>();
            // Setting the parent
            lanePosition->SetParent(object);
            _lanePositionXmlParser->ParseElement(indexedElement, parserContext, lanePosition);

            object->SetLanePosition(lanePosition);
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
        PositionXmlParser::SubElementRelativeLanePositionParser::SubElementRelativeLanePositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeLanePositionXmlParser = std::make_shared<RelativeLanePositionXmlParser>(messageLogger, filename);
        }

        void PositionXmlParser::SubElementRelativeLanePositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
        {
            auto relativeLanePosition = std::make_shared<RelativeLanePositionImpl>();
            // Setting the parent
            relativeLanePosition->SetParent(object);
            _relativeLanePositionXmlParser->ParseElement(indexedElement, parserContext, relativeLanePosition);

            object->SetRelativeLanePosition(relativeLanePosition);
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
        PositionXmlParser::SubElementRoutePositionParser::SubElementRoutePositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _routePositionXmlParser = std::make_shared<RoutePositionXmlParser>(messageLogger, filename);
        }

        void PositionXmlParser::SubElementRoutePositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
        {
            auto routePosition = std::make_shared<RoutePositionImpl>();
            // Setting the parent
            routePosition->SetParent(object);
            _routePositionXmlParser->ParseElement(indexedElement, parserContext, routePosition);

            object->SetRoutePosition(routePosition);
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
        PositionXmlParser::SubElementGeoPositionParser::SubElementGeoPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _geoPositionXmlParser = std::make_shared<GeoPositionXmlParser>(messageLogger, filename);
        }

        void PositionXmlParser::SubElementGeoPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
        {
            auto geoPosition = std::make_shared<GeoPositionImpl>();
            // Setting the parent
            geoPosition->SetParent(object);
            _geoPositionXmlParser->ParseElement(indexedElement, parserContext, geoPosition);

            object->SetGeoPosition(geoPosition);
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
        PositionXmlParser::SubElementTrajectoryPositionParser::SubElementTrajectoryPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trajectoryPositionXmlParser = std::make_shared<TrajectoryPositionXmlParser>(messageLogger, filename);
        }

        void PositionXmlParser::SubElementTrajectoryPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
        {
            auto trajectoryPosition = std::make_shared<TrajectoryPositionImpl>();
            // Setting the parent
            trajectoryPosition->SetParent(object);
            _trajectoryPositionXmlParser->ParseElement(indexedElement, parserContext, trajectoryPosition);

            object->SetTrajectoryPosition(trajectoryPosition);
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
  
        PositionXmlParser::PositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PositionInLaneCoordinatesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PositionInLaneCoordinatesXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<PositionInLaneCoordinatesImpl>>> PositionInLaneCoordinatesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PositionInLaneCoordinatesImpl>>> result;

            class AttributeLaneId: public IAttributeParser<PositionInLaneCoordinatesImpl>, public XmlParserBase<PositionInLaneCoordinatesImpl>
            {
            public:
                AttributeLaneId(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PositionInLaneCoordinatesImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetLaneId(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, std::make_shared<AttributeLaneId>(_messageLogger, _filename)));
            class AttributeLaneOffset: public IAttributeParser<PositionInLaneCoordinatesImpl>, public XmlParserBase<PositionInLaneCoordinatesImpl>
            {
            public:
                AttributeLaneOffset(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PositionInLaneCoordinatesImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetLaneOffset(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET, std::make_shared<AttributeLaneOffset>(_messageLogger, _filename)));
            class AttributePathS: public IAttributeParser<PositionInLaneCoordinatesImpl>, public XmlParserBase<PositionInLaneCoordinatesImpl>
            {
            public:
                AttributePathS(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PositionInLaneCoordinatesImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PATH_S, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetPathS(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PATH_S, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PATH_S, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PATH_S, std::make_shared<AttributePathS>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PositionInLaneCoordinatesImpl>>> PositionInLaneCoordinatesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PositionInLaneCoordinatesImpl>>> result;
            return result;
        }

  
        PositionInLaneCoordinatesXmlParser::PositionInLaneCoordinatesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PositionInRoadCoordinatesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PositionInRoadCoordinatesXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<PositionInRoadCoordinatesImpl>>> PositionInRoadCoordinatesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PositionInRoadCoordinatesImpl>>> result;

            class AttributePathS: public IAttributeParser<PositionInRoadCoordinatesImpl>, public XmlParserBase<PositionInRoadCoordinatesImpl>
            {
            public:
                AttributePathS(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PositionInRoadCoordinatesImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PATH_S, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetPathS(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PATH_S, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PATH_S, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PATH_S, std::make_shared<AttributePathS>(_messageLogger, _filename)));
            class AttributeT: public IAttributeParser<PositionInRoadCoordinatesImpl>, public XmlParserBase<PositionInRoadCoordinatesImpl>
            {
            public:
                AttributeT(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PositionInRoadCoordinatesImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__T, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetT(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<AttributeT>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PositionInRoadCoordinatesImpl>>> PositionInRoadCoordinatesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PositionInRoadCoordinatesImpl>>> result;
            return result;
        }

  
        PositionInRoadCoordinatesXmlParser::PositionInRoadCoordinatesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PositionOfCurrentEntityImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PositionOfCurrentEntityXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<PositionOfCurrentEntityImpl>>> PositionOfCurrentEntityXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PositionOfCurrentEntityImpl>>> result;

            class AttributeEntityRef: public IAttributeParser<PositionOfCurrentEntityImpl>, public XmlParserBase<PositionOfCurrentEntityImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PositionOfCurrentEntityImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PositionOfCurrentEntityImpl>>> PositionOfCurrentEntityXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PositionOfCurrentEntityImpl>>> result;
            return result;
        }

  
        PositionOfCurrentEntityXmlParser::PositionOfCurrentEntityXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PrecipitationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PrecipitationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<PrecipitationImpl>>> PrecipitationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PrecipitationImpl>>> result;

            class AttributeIntensity: public IAttributeParser<PrecipitationImpl>, public XmlParserBase<PrecipitationImpl>
            {
            public:
                AttributeIntensity(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PrecipitationImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetIntensity(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<AttributeIntensity>(_messageLogger, _filename)));
            class AttributePrecipitationIntensity: public IAttributeParser<PrecipitationImpl>, public XmlParserBase<PrecipitationImpl>
            {
            public:
                AttributePrecipitationIntensity(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PrecipitationImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_INTENSITY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetPrecipitationIntensity(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_INTENSITY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_INTENSITY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_INTENSITY, std::make_shared<AttributePrecipitationIntensity>(_messageLogger, _filename)));
            class AttributePrecipitationType: public IAttributeParser<PrecipitationImpl>, public XmlParserBase<PrecipitationImpl>
            {
            public:
                AttributePrecipitationType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PrecipitationImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = PrecipitationType::GetFromLiteral(attributeValue);
                        if (kResult != PrecipitationType::UNKNOWN)
                        {
                            object->SetPrecipitationType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE, std::make_shared<AttributePrecipitationType>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PrecipitationImpl>>> PrecipitationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PrecipitationImpl>>> result;
            return result;
        }

  
        PrecipitationXmlParser::PrecipitationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PrivateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PrivateXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<PrivateImpl>>> PrivateXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PrivateImpl>>> result;

            class AttributeEntityRef: public IAttributeParser<PrivateImpl>, public XmlParserBase<PrivateImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PrivateImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PrivateImpl>>> PrivateXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PrivateImpl>>> result;
            result.push_back(std::make_shared<SubElementPrivateActionsParser>(_messageLogger, _filename));
            return result;
        }

        PrivateXmlParser::SubElementPrivateActionsParser::SubElementPrivateActionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _privateActionXmlParser = std::make_shared<PrivateActionXmlParser>(messageLogger, filename);
        }

        void PrivateXmlParser::SubElementPrivateActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateImpl>& object)
        {
            auto privateActions = std::make_shared<PrivateActionImpl>();
            // Setting the parent
            privateActions->SetParent(object);
            _privateActionXmlParser->ParseElement(indexedElement, parserContext, privateActions);
            auto privateActionsList = object->GetWriterPrivateActions();
            privateActionsList.push_back(privateActions);
            object->SetPrivateActions(privateActionsList);
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
  
        PrivateXmlParser::PrivateXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PrivateActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PrivateActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<PrivateActionImpl>>> PrivateActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PrivateActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PrivateActionImpl>>> PrivateActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PrivateActionImpl>>> result;
            result.push_back(std::make_shared<SubElementLongitudinalActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementLateralActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementVisibilityActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementSynchronizeActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementActivateControllerActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementControllerActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTeleportActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRoutingActionParser>(_messageLogger, _filename));
            return result;
        }

        PrivateActionXmlParser::SubElementLongitudinalActionParser::SubElementLongitudinalActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _longitudinalActionXmlParser = std::make_shared<LongitudinalActionXmlParser>(messageLogger, filename);
        }

        void PrivateActionXmlParser::SubElementLongitudinalActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
        {
            auto longitudinalAction = std::make_shared<LongitudinalActionImpl>();
            // Setting the parent
            longitudinalAction->SetParent(object);
            _longitudinalActionXmlParser->ParseElement(indexedElement, parserContext, longitudinalAction);

            object->SetLongitudinalAction(longitudinalAction);
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
        PrivateActionXmlParser::SubElementLateralActionParser::SubElementLateralActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _lateralActionXmlParser = std::make_shared<LateralActionXmlParser>(messageLogger, filename);
        }

        void PrivateActionXmlParser::SubElementLateralActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
        {
            auto lateralAction = std::make_shared<LateralActionImpl>();
            // Setting the parent
            lateralAction->SetParent(object);
            _lateralActionXmlParser->ParseElement(indexedElement, parserContext, lateralAction);

            object->SetLateralAction(lateralAction);
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
        PrivateActionXmlParser::SubElementVisibilityActionParser::SubElementVisibilityActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _visibilityActionXmlParser = std::make_shared<VisibilityActionXmlParser>(messageLogger, filename);
        }

        void PrivateActionXmlParser::SubElementVisibilityActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
        {
            auto visibilityAction = std::make_shared<VisibilityActionImpl>();
            // Setting the parent
            visibilityAction->SetParent(object);
            _visibilityActionXmlParser->ParseElement(indexedElement, parserContext, visibilityAction);

            object->SetVisibilityAction(visibilityAction);
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
        PrivateActionXmlParser::SubElementSynchronizeActionParser::SubElementSynchronizeActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _synchronizeActionXmlParser = std::make_shared<SynchronizeActionXmlParser>(messageLogger, filename);
        }

        void PrivateActionXmlParser::SubElementSynchronizeActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
        {
            auto synchronizeAction = std::make_shared<SynchronizeActionImpl>();
            // Setting the parent
            synchronizeAction->SetParent(object);
            _synchronizeActionXmlParser->ParseElement(indexedElement, parserContext, synchronizeAction);

            object->SetSynchronizeAction(synchronizeAction);
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
        PrivateActionXmlParser::SubElementActivateControllerActionParser::SubElementActivateControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _activateControllerActionXmlParser = std::make_shared<ActivateControllerActionXmlParser>(messageLogger, filename);
        }

        void PrivateActionXmlParser::SubElementActivateControllerActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
        {
            auto activateControllerAction = std::make_shared<ActivateControllerActionImpl>();
            // Setting the parent
            activateControllerAction->SetParent(object);
            _activateControllerActionXmlParser->ParseElement(indexedElement, parserContext, activateControllerAction);

            object->SetActivateControllerAction(activateControllerAction);
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
        PrivateActionXmlParser::SubElementControllerActionParser::SubElementControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerActionXmlParser = std::make_shared<ControllerActionXmlParser>(messageLogger, filename);
        }

        void PrivateActionXmlParser::SubElementControllerActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
        {
            auto controllerAction = std::make_shared<ControllerActionImpl>();
            // Setting the parent
            controllerAction->SetParent(object);
            _controllerActionXmlParser->ParseElement(indexedElement, parserContext, controllerAction);

            object->SetControllerAction(controllerAction);
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
        PrivateActionXmlParser::SubElementTeleportActionParser::SubElementTeleportActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _teleportActionXmlParser = std::make_shared<TeleportActionXmlParser>(messageLogger, filename);
        }

        void PrivateActionXmlParser::SubElementTeleportActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
        {
            auto teleportAction = std::make_shared<TeleportActionImpl>();
            // Setting the parent
            teleportAction->SetParent(object);
            _teleportActionXmlParser->ParseElement(indexedElement, parserContext, teleportAction);

            object->SetTeleportAction(teleportAction);
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
        PrivateActionXmlParser::SubElementRoutingActionParser::SubElementRoutingActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _routingActionXmlParser = std::make_shared<RoutingActionXmlParser>(messageLogger, filename);
        }

        void PrivateActionXmlParser::SubElementRoutingActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
        {
            auto routingAction = std::make_shared<RoutingActionImpl>();
            // Setting the parent
            routingAction->SetParent(object);
            _routingActionXmlParser->ParseElement(indexedElement, parserContext, routingAction);

            object->SetRoutingAction(routingAction);
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
  
        PrivateActionXmlParser::PrivateActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ProbabilityDistributionSetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ProbabilityDistributionSetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<ProbabilityDistributionSetImpl>>> ProbabilityDistributionSetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ProbabilityDistributionSetImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ProbabilityDistributionSetImpl>>> ProbabilityDistributionSetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ProbabilityDistributionSetImpl>>> result;
            result.push_back(std::make_shared<SubElementElementsParser>(_messageLogger, _filename));
            return result;
        }

        ProbabilityDistributionSetXmlParser::SubElementElementsParser::SubElementElementsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _probabilityDistributionSetElementXmlParser = std::make_shared<ProbabilityDistributionSetElementXmlParser>(messageLogger, filename);
        }

        void ProbabilityDistributionSetXmlParser::SubElementElementsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ProbabilityDistributionSetImpl>& object)
        {
            auto elements = std::make_shared<ProbabilityDistributionSetElementImpl>();
            // Setting the parent
            elements->SetParent(object);
            _probabilityDistributionSetElementXmlParser->ParseElement(indexedElement, parserContext, elements);
            auto elementsList = object->GetWriterElements();
            elementsList.push_back(elements);
            object->SetElements(elementsList);
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
  
        ProbabilityDistributionSetXmlParser::ProbabilityDistributionSetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ProbabilityDistributionSetElementImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ProbabilityDistributionSetElementXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<ProbabilityDistributionSetElementImpl>>> ProbabilityDistributionSetElementXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ProbabilityDistributionSetElementImpl>>> result;

            class AttributeValue: public IAttributeParser<ProbabilityDistributionSetElementImpl>, public XmlParserBase<ProbabilityDistributionSetElementImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ProbabilityDistributionSetElementImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            class AttributeWeight: public IAttributeParser<ProbabilityDistributionSetElementImpl>, public XmlParserBase<ProbabilityDistributionSetElementImpl>
            {
            public:
                AttributeWeight(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ProbabilityDistributionSetElementImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetWeight(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<AttributeWeight>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ProbabilityDistributionSetElementImpl>>> ProbabilityDistributionSetElementXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ProbabilityDistributionSetElementImpl>>> result;
            return result;
        }

  
        ProbabilityDistributionSetElementXmlParser::ProbabilityDistributionSetElementXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PropertiesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PropertiesXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<PropertiesImpl>>> PropertiesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PropertiesImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PropertiesImpl>>> PropertiesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PropertiesImpl>>> result;
            result.push_back(std::make_shared<SubElementPropertiesParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementFilesParser>(_messageLogger, _filename));
            return result;
        }

        PropertiesXmlParser::SubElementPropertiesParser::SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _propertyXmlParser = std::make_shared<PropertyXmlParser>(messageLogger, filename);
        }

        void PropertiesXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PropertiesImpl>& object)
        {
            auto properties = std::make_shared<PropertyImpl>();
            // Setting the parent
            properties->SetParent(object);
            _propertyXmlParser->ParseElement(indexedElement, parserContext, properties);
            auto propertiesList = object->GetWriterProperties();
            propertiesList.push_back(properties);
            object->SetProperties(propertiesList);
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
        PropertiesXmlParser::SubElementFilesParser::SubElementFilesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _fileXmlParser = std::make_shared<FileXmlParser>(messageLogger, filename);
        }

        void PropertiesXmlParser::SubElementFilesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PropertiesImpl>& object)
        {
            auto files = std::make_shared<FileImpl>();
            // Setting the parent
            files->SetParent(object);
            _fileXmlParser->ParseElement(indexedElement, parserContext, files);
            auto filesList = object->GetWriterFiles();
            filesList.push_back(files);
            object->SetFiles(filesList);
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
  
        PropertiesXmlParser::PropertiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a PropertyImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            PropertyXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<PropertyImpl>>> PropertyXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PropertyImpl>>> result;

            class AttributeName: public IAttributeParser<PropertyImpl>, public XmlParserBase<PropertyImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PropertyImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<PropertyImpl>, public XmlParserBase<PropertyImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PropertyImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PropertyImpl>>> PropertyXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PropertyImpl>>> result;
            return result;
        }

  
        PropertyXmlParser::PropertyXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RangeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RangeXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<RangeImpl>>> RangeXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RangeImpl>>> result;

            class AttributeLowerLimit: public IAttributeParser<RangeImpl>, public XmlParserBase<RangeImpl>
            {
            public:
                AttributeLowerLimit(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RangeImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LOWER_LIMIT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetLowerLimit(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LOWER_LIMIT, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LOWER_LIMIT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LOWER_LIMIT, std::make_shared<AttributeLowerLimit>(_messageLogger, _filename)));
            class AttributeUpperLimit: public IAttributeParser<RangeImpl>, public XmlParserBase<RangeImpl>
            {
            public:
                AttributeUpperLimit(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RangeImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__UPPER_LIMIT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetUpperLimit(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__UPPER_LIMIT, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__UPPER_LIMIT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__UPPER_LIMIT, std::make_shared<AttributeUpperLimit>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RangeImpl>>> RangeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RangeImpl>>> result;
            return result;
        }

  
        RangeXmlParser::RangeXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ReachPositionConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ReachPositionConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<ReachPositionConditionImpl>>> ReachPositionConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ReachPositionConditionImpl>>> result;

            class AttributeTolerance: public IAttributeParser<ReachPositionConditionImpl>, public XmlParserBase<ReachPositionConditionImpl>
            {
            public:
                AttributeTolerance(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ReachPositionConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetTolerance(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE, std::make_shared<AttributeTolerance>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ReachPositionConditionImpl>>> ReachPositionConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ReachPositionConditionImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        ReachPositionConditionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void ReachPositionConditionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ReachPositionConditionImpl>& object)
        {
            auto position = std::make_shared<PositionImpl>();
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            object->SetPosition(position);
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
  
        ReachPositionConditionXmlParser::ReachPositionConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RelativeDistanceConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeDistanceConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeDistanceConditionImpl>>> RelativeDistanceConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeDistanceConditionImpl>>> result;

            class AttributeCoordinateSystem: public IAttributeParser<RelativeDistanceConditionImpl>, public XmlParserBase<RelativeDistanceConditionImpl>
            {
            public:
                AttributeCoordinateSystem(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeDistanceConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = CoordinateSystem::GetFromLiteral(attributeValue);
                        if (kResult != CoordinateSystem::UNKNOWN)
                        {
                            object->SetCoordinateSystem(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, std::make_shared<AttributeCoordinateSystem>(_messageLogger, _filename)));
            class AttributeEntityRef: public IAttributeParser<RelativeDistanceConditionImpl>, public XmlParserBase<RelativeDistanceConditionImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeDistanceConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            class AttributeFreespace: public IAttributeParser<RelativeDistanceConditionImpl>, public XmlParserBase<RelativeDistanceConditionImpl>
            {
            public:
                AttributeFreespace(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeDistanceConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetFreespace(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<AttributeFreespace>(_messageLogger, _filename)));
            class AttributeRelativeDistanceType: public IAttributeParser<RelativeDistanceConditionImpl>, public XmlParserBase<RelativeDistanceConditionImpl>
            {
            public:
                AttributeRelativeDistanceType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeDistanceConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = RelativeDistanceType::GetFromLiteral(attributeValue);
                        if (kResult != RelativeDistanceType::UNKNOWN)
                        {
                            object->SetRelativeDistanceType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, std::make_shared<AttributeRelativeDistanceType>(_messageLogger, _filename)));
            class AttributeRule: public IAttributeParser<RelativeDistanceConditionImpl>, public XmlParserBase<RelativeDistanceConditionImpl>
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeDistanceConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            object->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<RelativeDistanceConditionImpl>, public XmlParserBase<RelativeDistanceConditionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeDistanceConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeDistanceConditionImpl>>> RelativeDistanceConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeDistanceConditionImpl>>> result;
            return result;
        }

  
        RelativeDistanceConditionXmlParser::RelativeDistanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RelativeLanePositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeLanePositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeLanePositionImpl>>> RelativeLanePositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeLanePositionImpl>>> result;

            class AttributeDLane: public IAttributeParser<RelativeLanePositionImpl>, public XmlParserBase<RelativeLanePositionImpl>
            {
            public:
                AttributeDLane(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeLanePositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__D_LANE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDLane(ParseInt(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__D_LANE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__D_LANE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__D_LANE, std::make_shared<AttributeDLane>(_messageLogger, _filename)));
            class AttributeDs: public IAttributeParser<RelativeLanePositionImpl>, public XmlParserBase<RelativeLanePositionImpl>
            {
            public:
                AttributeDs(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeLanePositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDs(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<AttributeDs>(_messageLogger, _filename)));
            class AttributeDsLane: public IAttributeParser<RelativeLanePositionImpl>, public XmlParserBase<RelativeLanePositionImpl>
            {
            public:
                AttributeDsLane(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeLanePositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DS_LANE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDsLane(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DS_LANE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DS_LANE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DS_LANE, std::make_shared<AttributeDsLane>(_messageLogger, _filename)));
            class AttributeEntityRef: public IAttributeParser<RelativeLanePositionImpl>, public XmlParserBase<RelativeLanePositionImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeLanePositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            class AttributeOffset: public IAttributeParser<RelativeLanePositionImpl>, public XmlParserBase<RelativeLanePositionImpl>
            {
            public:
                AttributeOffset(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeLanePositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__OFFSET, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetOffset(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<AttributeOffset>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeLanePositionImpl>>> RelativeLanePositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeLanePositionImpl>>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename));
            return result;
        }

        RelativeLanePositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename);
        }

        void RelativeLanePositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeLanePositionImpl>& object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            object->SetOrientation(orientation);
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
  
        RelativeLanePositionXmlParser::RelativeLanePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RelativeObjectPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeObjectPositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeObjectPositionImpl>>> RelativeObjectPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeObjectPositionImpl>>> result;

            class AttributeDx: public IAttributeParser<RelativeObjectPositionImpl>, public XmlParserBase<RelativeObjectPositionImpl>
            {
            public:
                AttributeDx(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeObjectPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DX, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDx(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DX, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DX, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DX, std::make_shared<AttributeDx>(_messageLogger, _filename)));
            class AttributeDy: public IAttributeParser<RelativeObjectPositionImpl>, public XmlParserBase<RelativeObjectPositionImpl>
            {
            public:
                AttributeDy(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeObjectPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDy(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DY, std::make_shared<AttributeDy>(_messageLogger, _filename)));
            class AttributeDz: public IAttributeParser<RelativeObjectPositionImpl>, public XmlParserBase<RelativeObjectPositionImpl>
            {
            public:
                AttributeDz(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeObjectPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DZ, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDz(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DZ, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DZ, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DZ, std::make_shared<AttributeDz>(_messageLogger, _filename)));
            class AttributeEntityRef: public IAttributeParser<RelativeObjectPositionImpl>, public XmlParserBase<RelativeObjectPositionImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeObjectPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeObjectPositionImpl>>> RelativeObjectPositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeObjectPositionImpl>>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename));
            return result;
        }

        RelativeObjectPositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename);
        }

        void RelativeObjectPositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeObjectPositionImpl>& object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            object->SetOrientation(orientation);
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
  
        RelativeObjectPositionXmlParser::RelativeObjectPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RelativeRoadPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeRoadPositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeRoadPositionImpl>>> RelativeRoadPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeRoadPositionImpl>>> result;

            class AttributeDs: public IAttributeParser<RelativeRoadPositionImpl>, public XmlParserBase<RelativeRoadPositionImpl>
            {
            public:
                AttributeDs(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeRoadPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDs(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<AttributeDs>(_messageLogger, _filename)));
            class AttributeDt: public IAttributeParser<RelativeRoadPositionImpl>, public XmlParserBase<RelativeRoadPositionImpl>
            {
            public:
                AttributeDt(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeRoadPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDt(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DT, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DT, std::make_shared<AttributeDt>(_messageLogger, _filename)));
            class AttributeEntityRef: public IAttributeParser<RelativeRoadPositionImpl>, public XmlParserBase<RelativeRoadPositionImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeRoadPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeRoadPositionImpl>>> RelativeRoadPositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeRoadPositionImpl>>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename));
            return result;
        }

        RelativeRoadPositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename);
        }

        void RelativeRoadPositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeRoadPositionImpl>& object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            object->SetOrientation(orientation);
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
  
        RelativeRoadPositionXmlParser::RelativeRoadPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RelativeSpeedConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeSpeedConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeSpeedConditionImpl>>> RelativeSpeedConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeSpeedConditionImpl>>> result;

            class AttributeEntityRef: public IAttributeParser<RelativeSpeedConditionImpl>, public XmlParserBase<RelativeSpeedConditionImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeSpeedConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            class AttributeRule: public IAttributeParser<RelativeSpeedConditionImpl>, public XmlParserBase<RelativeSpeedConditionImpl>
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeSpeedConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            object->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<RelativeSpeedConditionImpl>, public XmlParserBase<RelativeSpeedConditionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeSpeedConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeSpeedConditionImpl>>> RelativeSpeedConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeSpeedConditionImpl>>> result;
            return result;
        }

  
        RelativeSpeedConditionXmlParser::RelativeSpeedConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RelativeSpeedToMasterImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeSpeedToMasterXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeSpeedToMasterImpl>>> RelativeSpeedToMasterXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeSpeedToMasterImpl>>> result;

            class AttributeSpeedTargetValueType: public IAttributeParser<RelativeSpeedToMasterImpl>, public XmlParserBase<RelativeSpeedToMasterImpl>
            {
            public:
                AttributeSpeedTargetValueType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeSpeedToMasterImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = SpeedTargetValueType::GetFromLiteral(attributeValue);
                        if (kResult != SpeedTargetValueType::UNKNOWN)
                        {
                            object->SetSpeedTargetValueType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, std::make_shared<AttributeSpeedTargetValueType>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<RelativeSpeedToMasterImpl>, public XmlParserBase<RelativeSpeedToMasterImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeSpeedToMasterImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeSpeedToMasterImpl>>> RelativeSpeedToMasterXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeSpeedToMasterImpl>>> result;
            result.push_back(std::make_shared<SubElementSteadyStateParser>(_messageLogger, _filename));
            return result;
        }

        RelativeSpeedToMasterXmlParser::SubElementSteadyStateParser::SubElementSteadyStateParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _steadyStateXmlParser = std::make_shared<SteadyStateXmlParser>(messageLogger, filename);
        }

        void RelativeSpeedToMasterXmlParser::SubElementSteadyStateParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeSpeedToMasterImpl>& object)
        {
            auto steadyState = std::make_shared<SteadyStateImpl>();
            // Setting the parent
            steadyState->SetParent(object);
            _steadyStateXmlParser->ParseElement(indexedElement, parserContext, steadyState);

            object->SetSteadyState(steadyState);
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
  
        RelativeSpeedToMasterXmlParser::RelativeSpeedToMasterXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RelativeTargetLaneImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeTargetLaneXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetLaneImpl>>> RelativeTargetLaneXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetLaneImpl>>> result;

            class AttributeEntityRef: public IAttributeParser<RelativeTargetLaneImpl>, public XmlParserBase<RelativeTargetLaneImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetLaneImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<RelativeTargetLaneImpl>, public XmlParserBase<RelativeTargetLaneImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetLaneImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseInt(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeTargetLaneImpl>>> RelativeTargetLaneXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeTargetLaneImpl>>> result;
            return result;
        }

  
        RelativeTargetLaneXmlParser::RelativeTargetLaneXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RelativeTargetLaneOffsetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeTargetLaneOffsetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetLaneOffsetImpl>>> RelativeTargetLaneOffsetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetLaneOffsetImpl>>> result;

            class AttributeEntityRef: public IAttributeParser<RelativeTargetLaneOffsetImpl>, public XmlParserBase<RelativeTargetLaneOffsetImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetLaneOffsetImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<RelativeTargetLaneOffsetImpl>, public XmlParserBase<RelativeTargetLaneOffsetImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetLaneOffsetImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeTargetLaneOffsetImpl>>> RelativeTargetLaneOffsetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeTargetLaneOffsetImpl>>> result;
            return result;
        }

  
        RelativeTargetLaneOffsetXmlParser::RelativeTargetLaneOffsetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RelativeTargetSpeedImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeTargetSpeedXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetSpeedImpl>>> RelativeTargetSpeedXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetSpeedImpl>>> result;

            class AttributeContinuous: public IAttributeParser<RelativeTargetSpeedImpl>, public XmlParserBase<RelativeTargetSpeedImpl>
            {
            public:
                AttributeContinuous(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetSpeedImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetContinuous(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, std::make_shared<AttributeContinuous>(_messageLogger, _filename)));
            class AttributeEntityRef: public IAttributeParser<RelativeTargetSpeedImpl>, public XmlParserBase<RelativeTargetSpeedImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetSpeedImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            class AttributeSpeedTargetValueType: public IAttributeParser<RelativeTargetSpeedImpl>, public XmlParserBase<RelativeTargetSpeedImpl>
            {
            public:
                AttributeSpeedTargetValueType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetSpeedImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = SpeedTargetValueType::GetFromLiteral(attributeValue);
                        if (kResult != SpeedTargetValueType::UNKNOWN)
                        {
                            object->SetSpeedTargetValueType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, std::make_shared<AttributeSpeedTargetValueType>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<RelativeTargetSpeedImpl>, public XmlParserBase<RelativeTargetSpeedImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetSpeedImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeTargetSpeedImpl>>> RelativeTargetSpeedXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeTargetSpeedImpl>>> result;
            return result;
        }

  
        RelativeTargetSpeedXmlParser::RelativeTargetSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RelativeWorldPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RelativeWorldPositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeWorldPositionImpl>>> RelativeWorldPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeWorldPositionImpl>>> result;

            class AttributeDx: public IAttributeParser<RelativeWorldPositionImpl>, public XmlParserBase<RelativeWorldPositionImpl>
            {
            public:
                AttributeDx(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeWorldPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DX, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDx(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DX, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DX, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DX, std::make_shared<AttributeDx>(_messageLogger, _filename)));
            class AttributeDy: public IAttributeParser<RelativeWorldPositionImpl>, public XmlParserBase<RelativeWorldPositionImpl>
            {
            public:
                AttributeDy(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeWorldPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDy(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DY, std::make_shared<AttributeDy>(_messageLogger, _filename)));
            class AttributeDz: public IAttributeParser<RelativeWorldPositionImpl>, public XmlParserBase<RelativeWorldPositionImpl>
            {
            public:
                AttributeDz(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeWorldPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DZ, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDz(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DZ, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DZ, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DZ, std::make_shared<AttributeDz>(_messageLogger, _filename)));
            class AttributeEntityRef: public IAttributeParser<RelativeWorldPositionImpl>, public XmlParserBase<RelativeWorldPositionImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeWorldPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeWorldPositionImpl>>> RelativeWorldPositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeWorldPositionImpl>>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename));
            return result;
        }

        RelativeWorldPositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename);
        }

        void RelativeWorldPositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeWorldPositionImpl>& object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            object->SetOrientation(orientation);
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
  
        RelativeWorldPositionXmlParser::RelativeWorldPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RoadConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RoadConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<RoadConditionImpl>>> RoadConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RoadConditionImpl>>> result;

            class AttributeFrictionScaleFactor: public IAttributeParser<RoadConditionImpl>, public XmlParserBase<RoadConditionImpl>
            {
            public:
                AttributeFrictionScaleFactor(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RoadConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetFrictionScaleFactor(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR, std::make_shared<AttributeFrictionScaleFactor>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RoadConditionImpl>>> RoadConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RoadConditionImpl>>> result;
            result.push_back(std::make_shared<SubElementPropertiesParser>(_messageLogger, _filename));
            return result;
        }

        RoadConditionXmlParser::SubElementPropertiesParser::SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _propertiesXmlParser = std::make_shared<PropertiesXmlParser>(messageLogger, filename);
        }

        void RoadConditionXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadConditionImpl>& object)
        {
            auto properties = std::make_shared<PropertiesImpl>();
            // Setting the parent
            properties->SetParent(object);
            _propertiesXmlParser->ParseElement(indexedElement, parserContext, properties);

            object->SetProperties(properties);
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
  
        RoadConditionXmlParser::RoadConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RoadNetworkImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RoadNetworkXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<RoadNetworkImpl>>> RoadNetworkXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RoadNetworkImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RoadNetworkImpl>>> RoadNetworkXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RoadNetworkImpl>>> result;
            result.push_back(std::make_shared<SubElementLogicFileParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementSceneGraphFileParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<WrappedListParser<RoadNetworkImpl>>(_messageLogger, _filename, std::make_shared<SubElementTrafficSignalsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNALS) );
            result.push_back(std::make_shared<SubElementUsedAreaParser>(_messageLogger, _filename));
            return result;
        }

        RoadNetworkXmlParser::SubElementLogicFileParser::SubElementLogicFileParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _fileXmlParser = std::make_shared<FileXmlParser>(messageLogger, filename);
        }

        void RoadNetworkXmlParser::SubElementLogicFileParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object)
        {
            auto logicFile = std::make_shared<FileImpl>();
            // Setting the parent
            logicFile->SetParent(object);
            _fileXmlParser->ParseElement(indexedElement, parserContext, logicFile);

            object->SetLogicFile(logicFile);
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
        RoadNetworkXmlParser::SubElementSceneGraphFileParser::SubElementSceneGraphFileParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _fileXmlParser = std::make_shared<FileXmlParser>(messageLogger, filename);
        }

        void RoadNetworkXmlParser::SubElementSceneGraphFileParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object)
        {
            auto sceneGraphFile = std::make_shared<FileImpl>();
            // Setting the parent
            sceneGraphFile->SetParent(object);
            _fileXmlParser->ParseElement(indexedElement, parserContext, sceneGraphFile);

            object->SetSceneGraphFile(sceneGraphFile);
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
        RoadNetworkXmlParser::SubElementTrafficSignalsParser::SubElementTrafficSignalsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSignalControllerXmlParser = std::make_shared<TrafficSignalControllerXmlParser>(messageLogger, filename);
        }

        void RoadNetworkXmlParser::SubElementTrafficSignalsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object)
        {
            auto trafficSignals = std::make_shared<TrafficSignalControllerImpl>();
            // Setting the parent
            trafficSignals->SetParent(object);
            _trafficSignalControllerXmlParser->ParseElement(indexedElement, parserContext, trafficSignals);
            auto trafficSignalsList = object->GetWriterTrafficSignals();
            trafficSignalsList.push_back(trafficSignals);
            object->SetTrafficSignals(trafficSignalsList);
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
        RoadNetworkXmlParser::SubElementUsedAreaParser::SubElementUsedAreaParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _usedAreaXmlParser = std::make_shared<UsedAreaXmlParser>(messageLogger, filename);
        }

        void RoadNetworkXmlParser::SubElementUsedAreaParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object)
        {
            auto usedArea = std::make_shared<UsedAreaImpl>();
            // Setting the parent
            usedArea->SetParent(object);
            _usedAreaXmlParser->ParseElement(indexedElement, parserContext, usedArea);

            object->SetUsedArea(usedArea);
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
  
        RoadNetworkXmlParser::RoadNetworkXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RoadPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RoadPositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<RoadPositionImpl>>> RoadPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RoadPositionImpl>>> result;

            class AttributeRoadId: public IAttributeParser<RoadPositionImpl>, public XmlParserBase<RoadPositionImpl>
            {
            public:
                AttributeRoadId(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RoadPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetRoadId(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, std::make_shared<AttributeRoadId>(_messageLogger, _filename)));
            class AttributeS: public IAttributeParser<RoadPositionImpl>, public XmlParserBase<RoadPositionImpl>
            {
            public:
                AttributeS(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RoadPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__S, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetS(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__S, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__S, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__S, std::make_shared<AttributeS>(_messageLogger, _filename)));
            class AttributeT: public IAttributeParser<RoadPositionImpl>, public XmlParserBase<RoadPositionImpl>
            {
            public:
                AttributeT(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RoadPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__T, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetT(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<AttributeT>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RoadPositionImpl>>> RoadPositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RoadPositionImpl>>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename));
            return result;
        }

        RoadPositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename);
        }

        void RoadPositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadPositionImpl>& object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            object->SetOrientation(orientation);
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
  
        RoadPositionXmlParser::RoadPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RouteImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RouteXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<RouteImpl>>> RouteXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RouteImpl>>> result;

            class AttributeClosed: public IAttributeParser<RouteImpl>, public XmlParserBase<RouteImpl>
            {
            public:
                AttributeClosed(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RouteImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CLOSED, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetClosed(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CLOSED, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CLOSED, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CLOSED, std::make_shared<AttributeClosed>(_messageLogger, _filename)));
            class AttributeName: public IAttributeParser<RouteImpl>, public XmlParserBase<RouteImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RouteImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RouteImpl>>> RouteXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RouteImpl>>> result;
            result.push_back(std::make_shared<WrappedListParser<RouteImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementWaypointsParser>(_messageLogger, _filename));
            return result;
        }

        RouteXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void RouteXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteImpl>& object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = object->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
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
        RouteXmlParser::SubElementWaypointsParser::SubElementWaypointsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _waypointXmlParser = std::make_shared<WaypointXmlParser>(messageLogger, filename);
        }

        void RouteXmlParser::SubElementWaypointsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteImpl>& object)
        {
            auto waypoints = std::make_shared<WaypointImpl>();
            // Setting the parent
            waypoints->SetParent(object);
            _waypointXmlParser->ParseElement(indexedElement, parserContext, waypoints);
            auto waypointsList = object->GetWriterWaypoints();
            waypointsList.push_back(waypoints);
            object->SetWaypoints(waypointsList);
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
  
        RouteXmlParser::RouteXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RouteCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RouteCatalogLocationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<RouteCatalogLocationImpl>>> RouteCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RouteCatalogLocationImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RouteCatalogLocationImpl>>> RouteCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RouteCatalogLocationImpl>>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename));
            return result;
        }

        RouteCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename);
        }

        void RouteCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteCatalogLocationImpl>& object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            object->SetDirectory(directory);
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
  
        RouteCatalogLocationXmlParser::RouteCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RoutePositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RoutePositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<RoutePositionImpl>>> RoutePositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RoutePositionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RoutePositionImpl>>> RoutePositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RoutePositionImpl>>> result;
            result.push_back(std::make_shared<SubElementRouteRefParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementInRoutePositionParser>(_messageLogger, _filename));
            return result;
        }

        RoutePositionXmlParser::SubElementRouteRefParser::SubElementRouteRefParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _routeRefXmlParser = std::make_shared<RouteRefXmlParser>(messageLogger, filename);
        }

        void RoutePositionXmlParser::SubElementRouteRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutePositionImpl>& object)
        {
            auto routeRef = std::make_shared<RouteRefImpl>();
            // Setting the parent
            routeRef->SetParent(object);
            _routeRefXmlParser->ParseElement(indexedElement, parserContext, routeRef);

            object->SetRouteRef(routeRef);
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
        RoutePositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename);
        }

        void RoutePositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutePositionImpl>& object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            object->SetOrientation(orientation);
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
        RoutePositionXmlParser::SubElementInRoutePositionParser::SubElementInRoutePositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _inRoutePositionXmlParser = std::make_shared<InRoutePositionXmlParser>(messageLogger, filename);
        }

        void RoutePositionXmlParser::SubElementInRoutePositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutePositionImpl>& object)
        {
            auto inRoutePosition = std::make_shared<InRoutePositionImpl>();
            // Setting the parent
            inRoutePosition->SetParent(object);
            _inRoutePositionXmlParser->ParseElement(indexedElement, parserContext, inRoutePosition);

            object->SetInRoutePosition(inRoutePosition);
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
  
        RoutePositionXmlParser::RoutePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RouteRefImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RouteRefXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<RouteRefImpl>>> RouteRefXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RouteRefImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RouteRefImpl>>> RouteRefXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RouteRefImpl>>> result;
            result.push_back(std::make_shared<SubElementRouteParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            return result;
        }

        RouteRefXmlParser::SubElementRouteParser::SubElementRouteParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _routeXmlParser = std::make_shared<RouteXmlParser>(messageLogger, filename);
        }

        void RouteRefXmlParser::SubElementRouteParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteRefImpl>& object)
        {
            auto route = std::make_shared<RouteImpl>();
            // Setting the parent
            route->SetParent(object);
            _routeXmlParser->ParseElement(indexedElement, parserContext, route);

            object->SetRoute(route);
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
        RouteRefXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void RouteRefXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteRefImpl>& object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            object->SetCatalogReference(catalogReference);
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
  
        RouteRefXmlParser::RouteRefXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a RoutingActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            RoutingActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<RoutingActionImpl>>> RoutingActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RoutingActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RoutingActionImpl>>> RoutingActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RoutingActionImpl>>> result;
            result.push_back(std::make_shared<SubElementAssignRouteActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementFollowTrajectoryActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementAcquirePositionActionParser>(_messageLogger, _filename));
            return result;
        }

        RoutingActionXmlParser::SubElementAssignRouteActionParser::SubElementAssignRouteActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _assignRouteActionXmlParser = std::make_shared<AssignRouteActionXmlParser>(messageLogger, filename);
        }

        void RoutingActionXmlParser::SubElementAssignRouteActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutingActionImpl>& object)
        {
            auto assignRouteAction = std::make_shared<AssignRouteActionImpl>();
            // Setting the parent
            assignRouteAction->SetParent(object);
            _assignRouteActionXmlParser->ParseElement(indexedElement, parserContext, assignRouteAction);

            object->SetAssignRouteAction(assignRouteAction);
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
        RoutingActionXmlParser::SubElementFollowTrajectoryActionParser::SubElementFollowTrajectoryActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _followTrajectoryActionXmlParser = std::make_shared<FollowTrajectoryActionXmlParser>(messageLogger, filename);
        }

        void RoutingActionXmlParser::SubElementFollowTrajectoryActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutingActionImpl>& object)
        {
            auto followTrajectoryAction = std::make_shared<FollowTrajectoryActionImpl>();
            // Setting the parent
            followTrajectoryAction->SetParent(object);
            _followTrajectoryActionXmlParser->ParseElement(indexedElement, parserContext, followTrajectoryAction);

            object->SetFollowTrajectoryAction(followTrajectoryAction);
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
        RoutingActionXmlParser::SubElementAcquirePositionActionParser::SubElementAcquirePositionActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _acquirePositionActionXmlParser = std::make_shared<AcquirePositionActionXmlParser>(messageLogger, filename);
        }

        void RoutingActionXmlParser::SubElementAcquirePositionActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutingActionImpl>& object)
        {
            auto acquirePositionAction = std::make_shared<AcquirePositionActionImpl>();
            // Setting the parent
            acquirePositionAction->SetParent(object);
            _acquirePositionActionXmlParser->ParseElement(indexedElement, parserContext, acquirePositionAction);

            object->SetAcquirePositionAction(acquirePositionAction);
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
  
        RoutingActionXmlParser::RoutingActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ScenarioDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ScenarioDefinitionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}


        std::vector<std::shared_ptr<IElementParser<ScenarioDefinitionImpl>>> ScenarioDefinitionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ScenarioDefinitionImpl>>> result;
            result.push_back(std::make_shared<WrappedListParser<ScenarioDefinitionImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementCatalogLocationsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRoadNetworkParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementEntitiesParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementStoryboardParser>(_messageLogger, _filename));
            return result;
        }

        ScenarioDefinitionXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void ScenarioDefinitionXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = object->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
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
        ScenarioDefinitionXmlParser::SubElementCatalogLocationsParser::SubElementCatalogLocationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogLocationsXmlParser = std::make_shared<CatalogLocationsXmlParser>(messageLogger, filename);
        }

        void ScenarioDefinitionXmlParser::SubElementCatalogLocationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object)
        {
            auto catalogLocations = std::make_shared<CatalogLocationsImpl>();
            // Setting the parent
            catalogLocations->SetParent(object);
            _catalogLocationsXmlParser->ParseElement(indexedElement, parserContext, catalogLocations);

            object->SetCatalogLocations(catalogLocations);
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
        ScenarioDefinitionXmlParser::SubElementRoadNetworkParser::SubElementRoadNetworkParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _roadNetworkXmlParser = std::make_shared<RoadNetworkXmlParser>(messageLogger, filename);
        }

        void ScenarioDefinitionXmlParser::SubElementRoadNetworkParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object)
        {
            auto roadNetwork = std::make_shared<RoadNetworkImpl>();
            // Setting the parent
            roadNetwork->SetParent(object);
            _roadNetworkXmlParser->ParseElement(indexedElement, parserContext, roadNetwork);

            object->SetRoadNetwork(roadNetwork);
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
        ScenarioDefinitionXmlParser::SubElementEntitiesParser::SubElementEntitiesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entitiesXmlParser = std::make_shared<EntitiesXmlParser>(messageLogger, filename);
        }

        void ScenarioDefinitionXmlParser::SubElementEntitiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object)
        {
            auto entities = std::make_shared<EntitiesImpl>();
            // Setting the parent
            entities->SetParent(object);
            _entitiesXmlParser->ParseElement(indexedElement, parserContext, entities);

            object->SetEntities(entities);
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
        ScenarioDefinitionXmlParser::SubElementStoryboardParser::SubElementStoryboardParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _storyboardXmlParser = std::make_shared<StoryboardXmlParser>(messageLogger, filename);
        }

        void ScenarioDefinitionXmlParser::SubElementStoryboardParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object)
        {
            auto storyboard = std::make_shared<StoryboardImpl>();
            // Setting the parent
            storyboard->SetParent(object);
            _storyboardXmlParser->ParseElement(indexedElement, parserContext, storyboard);

            object->SetStoryboard(storyboard);
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
  
        ScenarioDefinitionXmlParser::ScenarioDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlGroupParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ScenarioObjectImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ScenarioObjectXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<ScenarioObjectImpl>>> ScenarioObjectXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ScenarioObjectImpl>>> result;

            class AttributeName: public IAttributeParser<ScenarioObjectImpl>, public XmlParserBase<ScenarioObjectImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ScenarioObjectImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ScenarioObjectImpl>>> ScenarioObjectXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ScenarioObjectImpl>>> result;
            result.push_back(std::make_shared<SubElementEntityObjectParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementObjectControllerParser>(_messageLogger, _filename));
            return result;
        }

        ScenarioObjectXmlParser::SubElementEntityObjectParser::SubElementEntityObjectParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entityObjectXmlParser = std::make_shared<EntityObjectXmlParser>(messageLogger, filename);
        }

        void ScenarioObjectXmlParser::SubElementEntityObjectParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioObjectImpl>& object)
        {
            auto entityObject = std::make_shared<EntityObjectImpl>();
            // Setting the parent
            entityObject->SetParent(object);
            _entityObjectXmlParser->ParseElement(indexedElement, parserContext, entityObject);

            object->SetEntityObject(entityObject);
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
        ScenarioObjectXmlParser::SubElementObjectControllerParser::SubElementObjectControllerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _objectControllerXmlParser = std::make_shared<ObjectControllerXmlParser>(messageLogger, filename);
        }

        void ScenarioObjectXmlParser::SubElementObjectControllerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioObjectImpl>& object)
        {
            auto objectController = std::make_shared<ObjectControllerImpl>();
            // Setting the parent
            objectController->SetParent(object);
            _objectControllerXmlParser->ParseElement(indexedElement, parserContext, objectController);

            object->SetObjectController(objectController);
        }
        
        int ScenarioObjectXmlParser::SubElementObjectControllerParser::GetMinOccur() 
        {
            return 0;
        }

        int ScenarioObjectXmlParser::SubElementObjectControllerParser::GetMaxOccur() 
        {
            return 1;
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
  
        ScenarioObjectXmlParser::ScenarioObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a SelectedEntitiesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SelectedEntitiesXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<SelectedEntitiesImpl>>> SelectedEntitiesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<SelectedEntitiesImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<SelectedEntitiesImpl>>> SelectedEntitiesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<SelectedEntitiesImpl>>> result;
            result.push_back(std::make_shared<SubElementEntityRefParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementByTypeParser>(_messageLogger, _filename));
            return result;
        }

        SelectedEntitiesXmlParser::SubElementEntityRefParser::SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entityRefXmlParser = std::make_shared<EntityRefXmlParser>(messageLogger, filename);
        }

        void SelectedEntitiesXmlParser::SubElementEntityRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SelectedEntitiesImpl>& object)
        {
            auto entityRef = std::make_shared<EntityRefImpl>();
            // Setting the parent
            entityRef->SetParent(object);
            _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRef);
            auto entityRefList = object->GetWriterEntityRef();
            entityRefList.push_back(entityRef);
            object->SetEntityRef(entityRefList);
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
        SelectedEntitiesXmlParser::SubElementByTypeParser::SubElementByTypeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _byTypeXmlParser = std::make_shared<ByTypeXmlParser>(messageLogger, filename);
        }

        void SelectedEntitiesXmlParser::SubElementByTypeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SelectedEntitiesImpl>& object)
        {
            auto byType = std::make_shared<ByTypeImpl>();
            // Setting the parent
            byType->SetParent(object);
            _byTypeXmlParser->ParseElement(indexedElement, parserContext, byType);
            auto byTypeList = object->GetWriterByType();
            byTypeList.push_back(byType);
            object->SetByType(byTypeList);
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
  
        SelectedEntitiesXmlParser::SelectedEntitiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ShapeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ShapeXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<ShapeImpl>>> ShapeXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ShapeImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ShapeImpl>>> ShapeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ShapeImpl>>> result;
            result.push_back(std::make_shared<SubElementPolylineParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementClothoidParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementNurbsParser>(_messageLogger, _filename));
            return result;
        }

        ShapeXmlParser::SubElementPolylineParser::SubElementPolylineParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _polylineXmlParser = std::make_shared<PolylineXmlParser>(messageLogger, filename);
        }

        void ShapeXmlParser::SubElementPolylineParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ShapeImpl>& object)
        {
            auto polyline = std::make_shared<PolylineImpl>();
            // Setting the parent
            polyline->SetParent(object);
            _polylineXmlParser->ParseElement(indexedElement, parserContext, polyline);

            object->SetPolyline(polyline);
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
        ShapeXmlParser::SubElementClothoidParser::SubElementClothoidParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _clothoidXmlParser = std::make_shared<ClothoidXmlParser>(messageLogger, filename);
        }

        void ShapeXmlParser::SubElementClothoidParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ShapeImpl>& object)
        {
            auto clothoid = std::make_shared<ClothoidImpl>();
            // Setting the parent
            clothoid->SetParent(object);
            _clothoidXmlParser->ParseElement(indexedElement, parserContext, clothoid);

            object->SetClothoid(clothoid);
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
        ShapeXmlParser::SubElementNurbsParser::SubElementNurbsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _nurbsXmlParser = std::make_shared<NurbsXmlParser>(messageLogger, filename);
        }

        void ShapeXmlParser::SubElementNurbsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ShapeImpl>& object)
        {
            auto nurbs = std::make_shared<NurbsImpl>();
            // Setting the parent
            nurbs->SetParent(object);
            _nurbsXmlParser->ParseElement(indexedElement, parserContext, nurbs);

            object->SetNurbs(nurbs);
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
  
        ShapeXmlParser::ShapeXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a SimulationTimeConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SimulationTimeConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<SimulationTimeConditionImpl>>> SimulationTimeConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<SimulationTimeConditionImpl>>> result;

            class AttributeRule: public IAttributeParser<SimulationTimeConditionImpl>, public XmlParserBase<SimulationTimeConditionImpl>
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SimulationTimeConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            object->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<SimulationTimeConditionImpl>, public XmlParserBase<SimulationTimeConditionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SimulationTimeConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<SimulationTimeConditionImpl>>> SimulationTimeConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<SimulationTimeConditionImpl>>> result;
            return result;
        }

  
        SimulationTimeConditionXmlParser::SimulationTimeConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a SpeedActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SpeedActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<SpeedActionImpl>>> SpeedActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<SpeedActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<SpeedActionImpl>>> SpeedActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<SpeedActionImpl>>> result;
            result.push_back(std::make_shared<SubElementSpeedActionDynamicsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementSpeedActionTargetParser>(_messageLogger, _filename));
            return result;
        }

        SpeedActionXmlParser::SubElementSpeedActionDynamicsParser::SubElementSpeedActionDynamicsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _transitionDynamicsXmlParser = std::make_shared<TransitionDynamicsXmlParser>(messageLogger, filename);
        }

        void SpeedActionXmlParser::SubElementSpeedActionDynamicsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionImpl>& object)
        {
            auto speedActionDynamics = std::make_shared<TransitionDynamicsImpl>();
            // Setting the parent
            speedActionDynamics->SetParent(object);
            _transitionDynamicsXmlParser->ParseElement(indexedElement, parserContext, speedActionDynamics);

            object->SetSpeedActionDynamics(speedActionDynamics);
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
        SpeedActionXmlParser::SubElementSpeedActionTargetParser::SubElementSpeedActionTargetParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _speedActionTargetXmlParser = std::make_shared<SpeedActionTargetXmlParser>(messageLogger, filename);
        }

        void SpeedActionXmlParser::SubElementSpeedActionTargetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionImpl>& object)
        {
            auto speedActionTarget = std::make_shared<SpeedActionTargetImpl>();
            // Setting the parent
            speedActionTarget->SetParent(object);
            _speedActionTargetXmlParser->ParseElement(indexedElement, parserContext, speedActionTarget);

            object->SetSpeedActionTarget(speedActionTarget);
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
  
        SpeedActionXmlParser::SpeedActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a SpeedActionTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SpeedActionTargetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<SpeedActionTargetImpl>>> SpeedActionTargetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<SpeedActionTargetImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<SpeedActionTargetImpl>>> SpeedActionTargetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<SpeedActionTargetImpl>>> result;
            result.push_back(std::make_shared<SubElementRelativeTargetSpeedParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementAbsoluteTargetSpeedParser>(_messageLogger, _filename));
            return result;
        }

        SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::SubElementRelativeTargetSpeedParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeTargetSpeedXmlParser = std::make_shared<RelativeTargetSpeedXmlParser>(messageLogger, filename);
        }

        void SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionTargetImpl>& object)
        {
            auto relativeTargetSpeed = std::make_shared<RelativeTargetSpeedImpl>();
            // Setting the parent
            relativeTargetSpeed->SetParent(object);
            _relativeTargetSpeedXmlParser->ParseElement(indexedElement, parserContext, relativeTargetSpeed);

            object->SetRelativeTargetSpeed(relativeTargetSpeed);
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
        SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::SubElementAbsoluteTargetSpeedParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _absoluteTargetSpeedXmlParser = std::make_shared<AbsoluteTargetSpeedXmlParser>(messageLogger, filename);
        }

        void SpeedActionTargetXmlParser::SubElementAbsoluteTargetSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionTargetImpl>& object)
        {
            auto absoluteTargetSpeed = std::make_shared<AbsoluteTargetSpeedImpl>();
            // Setting the parent
            absoluteTargetSpeed->SetParent(object);
            _absoluteTargetSpeedXmlParser->ParseElement(indexedElement, parserContext, absoluteTargetSpeed);

            object->SetAbsoluteTargetSpeed(absoluteTargetSpeed);
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
  
        SpeedActionTargetXmlParser::SpeedActionTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a SpeedConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SpeedConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<SpeedConditionImpl>>> SpeedConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<SpeedConditionImpl>>> result;

            class AttributeRule: public IAttributeParser<SpeedConditionImpl>, public XmlParserBase<SpeedConditionImpl>
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SpeedConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            object->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<SpeedConditionImpl>, public XmlParserBase<SpeedConditionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SpeedConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<SpeedConditionImpl>>> SpeedConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<SpeedConditionImpl>>> result;
            return result;
        }

  
        SpeedConditionXmlParser::SpeedConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a StandStillConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StandStillConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<StandStillConditionImpl>>> StandStillConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<StandStillConditionImpl>>> result;

            class AttributeDuration: public IAttributeParser<StandStillConditionImpl>, public XmlParserBase<StandStillConditionImpl>
            {
            public:
                AttributeDuration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StandStillConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DURATION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDuration(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<AttributeDuration>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<StandStillConditionImpl>>> StandStillConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<StandStillConditionImpl>>> result;
            return result;
        }

  
        StandStillConditionXmlParser::StandStillConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a SteadyStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SteadyStateXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}



        std::vector<std::shared_ptr<IElementParser<SteadyStateImpl>>> SteadyStateXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<SteadyStateImpl>>> result;
            result.push_back(std::make_shared<SubElementTargetDistanceSteadyStateParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTargetTimeSteadyStateParser>(_messageLogger, _filename));
            return result;
        }

        SteadyStateXmlParser::SubElementTargetDistanceSteadyStateParser::SubElementTargetDistanceSteadyStateParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _targetDistanceSteadyStateXmlParser = std::make_shared<TargetDistanceSteadyStateXmlParser>(messageLogger, filename);
        }

        void SteadyStateXmlParser::SubElementTargetDistanceSteadyStateParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SteadyStateImpl>& object)
        {
            auto targetDistanceSteadyState = std::make_shared<TargetDistanceSteadyStateImpl>();
            // Setting the parent
            targetDistanceSteadyState->SetParent(object);
            _targetDistanceSteadyStateXmlParser->ParseElement(indexedElement, parserContext, targetDistanceSteadyState);

            object->SetTargetDistanceSteadyState(targetDistanceSteadyState);
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
        SteadyStateXmlParser::SubElementTargetTimeSteadyStateParser::SubElementTargetTimeSteadyStateParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _targetTimeSteadyStateXmlParser = std::make_shared<TargetTimeSteadyStateXmlParser>(messageLogger, filename);
        }

        void SteadyStateXmlParser::SubElementTargetTimeSteadyStateParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SteadyStateImpl>& object)
        {
            auto targetTimeSteadyState = std::make_shared<TargetTimeSteadyStateImpl>();
            // Setting the parent
            targetTimeSteadyState->SetParent(object);
            _targetTimeSteadyStateXmlParser->ParseElement(indexedElement, parserContext, targetTimeSteadyState);

            object->SetTargetTimeSteadyState(targetTimeSteadyState);
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
  
        SteadyStateXmlParser::SteadyStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlGroupParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a StochasticImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StochasticXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<StochasticImpl>>> StochasticXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<StochasticImpl>>> result;

            class AttributeNumberOfTestRuns: public IAttributeParser<StochasticImpl>, public XmlParserBase<StochasticImpl>
            {
            public:
                AttributeNumberOfTestRuns(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StochasticImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_TEST_RUNS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetNumberOfTestRuns(ParseUnsignedInt(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_TEST_RUNS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_TEST_RUNS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_TEST_RUNS, std::make_shared<AttributeNumberOfTestRuns>(_messageLogger, _filename)));
            class AttributeRandomSeed: public IAttributeParser<StochasticImpl>, public XmlParserBase<StochasticImpl>
            {
            public:
                AttributeRandomSeed(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StochasticImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RANDOM_SEED, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetRandomSeed(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RANDOM_SEED, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RANDOM_SEED, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RANDOM_SEED, std::make_shared<AttributeRandomSeed>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<StochasticImpl>>> StochasticXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<StochasticImpl>>> result;
            result.push_back(std::make_shared<SubElementStochasticDistributionsParser>(_messageLogger, _filename));
            return result;
        }

        StochasticXmlParser::SubElementStochasticDistributionsParser::SubElementStochasticDistributionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _stochasticDistributionXmlParser = std::make_shared<StochasticDistributionXmlParser>(messageLogger, filename);
        }

        void StochasticXmlParser::SubElementStochasticDistributionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StochasticImpl>& object)
        {
            auto stochasticDistributions = std::make_shared<StochasticDistributionImpl>();
            // Setting the parent
            stochasticDistributions->SetParent(object);
            _stochasticDistributionXmlParser->ParseElement(indexedElement, parserContext, stochasticDistributions);
            auto stochasticDistributionsList = object->GetWriterStochasticDistributions();
            stochasticDistributionsList.push_back(stochasticDistributions);
            object->SetStochasticDistributions(stochasticDistributionsList);
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
  
        StochasticXmlParser::StochasticXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a StochasticDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StochasticDistributionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<StochasticDistributionImpl>>> StochasticDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<StochasticDistributionImpl>>> result;

            class AttributeParameterName: public IAttributeParser<StochasticDistributionImpl>, public XmlParserBase<StochasticDistributionImpl>
            {
            public:
                AttributeParameterName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StochasticDistributionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetParameterName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME, std::make_shared<AttributeParameterName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<StochasticDistributionImpl>>> StochasticDistributionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<StochasticDistributionImpl>>> result;
            result.push_back(std::make_shared<SubElementStochasticDistributionTypeParser>(_messageLogger, _filename));
            return result;
        }

        StochasticDistributionXmlParser::SubElementStochasticDistributionTypeParser::SubElementStochasticDistributionTypeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _stochasticDistributionTypeXmlParser = std::make_shared<StochasticDistributionTypeXmlParser>(messageLogger, filename);
        }

        void StochasticDistributionXmlParser::SubElementStochasticDistributionTypeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StochasticDistributionImpl>& object)
        {
            auto stochasticDistributionType = std::make_shared<StochasticDistributionTypeImpl>();
            // Setting the parent
            stochasticDistributionType->SetParent(object);
            _stochasticDistributionTypeXmlParser->ParseElement(indexedElement, parserContext, stochasticDistributionType);

            object->SetStochasticDistributionType(stochasticDistributionType);
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
  
        StochasticDistributionXmlParser::StochasticDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a StochasticDistributionTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StochasticDistributionTypeXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}



        std::vector<std::shared_ptr<IElementParser<StochasticDistributionTypeImpl>>> StochasticDistributionTypeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<StochasticDistributionTypeImpl>>> result;
            result.push_back(std::make_shared<SubElementProbabilityDistributionSetParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementNormalDistributionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementUniformDistributionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPoissonDistributionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementHistogramParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementUserDefinedDistributionParser>(_messageLogger, _filename));
            return result;
        }

        StochasticDistributionTypeXmlParser::SubElementProbabilityDistributionSetParser::SubElementProbabilityDistributionSetParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _probabilityDistributionSetXmlParser = std::make_shared<ProbabilityDistributionSetXmlParser>(messageLogger, filename);
        }

        void StochasticDistributionTypeXmlParser::SubElementProbabilityDistributionSetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StochasticDistributionTypeImpl>& object)
        {
            auto probabilityDistributionSet = std::make_shared<ProbabilityDistributionSetImpl>();
            // Setting the parent
            probabilityDistributionSet->SetParent(object);
            _probabilityDistributionSetXmlParser->ParseElement(indexedElement, parserContext, probabilityDistributionSet);

            object->SetProbabilityDistributionSet(probabilityDistributionSet);
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
        StochasticDistributionTypeXmlParser::SubElementNormalDistributionParser::SubElementNormalDistributionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _normalDistributionXmlParser = std::make_shared<NormalDistributionXmlParser>(messageLogger, filename);
        }

        void StochasticDistributionTypeXmlParser::SubElementNormalDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StochasticDistributionTypeImpl>& object)
        {
            auto normalDistribution = std::make_shared<NormalDistributionImpl>();
            // Setting the parent
            normalDistribution->SetParent(object);
            _normalDistributionXmlParser->ParseElement(indexedElement, parserContext, normalDistribution);

            object->SetNormalDistribution(normalDistribution);
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
        StochasticDistributionTypeXmlParser::SubElementUniformDistributionParser::SubElementUniformDistributionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _uniformDistributionXmlParser = std::make_shared<UniformDistributionXmlParser>(messageLogger, filename);
        }

        void StochasticDistributionTypeXmlParser::SubElementUniformDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StochasticDistributionTypeImpl>& object)
        {
            auto uniformDistribution = std::make_shared<UniformDistributionImpl>();
            // Setting the parent
            uniformDistribution->SetParent(object);
            _uniformDistributionXmlParser->ParseElement(indexedElement, parserContext, uniformDistribution);

            object->SetUniformDistribution(uniformDistribution);
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
        StochasticDistributionTypeXmlParser::SubElementPoissonDistributionParser::SubElementPoissonDistributionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _poissonDistributionXmlParser = std::make_shared<PoissonDistributionXmlParser>(messageLogger, filename);
        }

        void StochasticDistributionTypeXmlParser::SubElementPoissonDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StochasticDistributionTypeImpl>& object)
        {
            auto poissonDistribution = std::make_shared<PoissonDistributionImpl>();
            // Setting the parent
            poissonDistribution->SetParent(object);
            _poissonDistributionXmlParser->ParseElement(indexedElement, parserContext, poissonDistribution);

            object->SetPoissonDistribution(poissonDistribution);
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
        StochasticDistributionTypeXmlParser::SubElementHistogramParser::SubElementHistogramParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _histogramXmlParser = std::make_shared<HistogramXmlParser>(messageLogger, filename);
        }

        void StochasticDistributionTypeXmlParser::SubElementHistogramParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StochasticDistributionTypeImpl>& object)
        {
            auto histogram = std::make_shared<HistogramImpl>();
            // Setting the parent
            histogram->SetParent(object);
            _histogramXmlParser->ParseElement(indexedElement, parserContext, histogram);

            object->SetHistogram(histogram);
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
        StochasticDistributionTypeXmlParser::SubElementUserDefinedDistributionParser::SubElementUserDefinedDistributionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _userDefinedDistributionXmlParser = std::make_shared<UserDefinedDistributionXmlParser>(messageLogger, filename);
        }

        void StochasticDistributionTypeXmlParser::SubElementUserDefinedDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StochasticDistributionTypeImpl>& object)
        {
            auto userDefinedDistribution = std::make_shared<UserDefinedDistributionImpl>();
            // Setting the parent
            userDefinedDistribution->SetParent(object);
            _userDefinedDistributionXmlParser->ParseElement(indexedElement, parserContext, userDefinedDistribution);

            object->SetUserDefinedDistribution(userDefinedDistribution);
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
  
        StochasticDistributionTypeXmlParser::StochasticDistributionTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlGroupParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a StoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StoryXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<StoryImpl>>> StoryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<StoryImpl>>> result;

            class AttributeName: public IAttributeParser<StoryImpl>, public XmlParserBase<StoryImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StoryImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<StoryImpl>>> StoryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<StoryImpl>>> result;
            result.push_back(std::make_shared<WrappedListParser<StoryImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementActsParser>(_messageLogger, _filename));
            return result;
        }

        StoryXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void StoryXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryImpl>& object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = object->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
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
        StoryXmlParser::SubElementActsParser::SubElementActsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _actXmlParser = std::make_shared<ActXmlParser>(messageLogger, filename);
        }

        void StoryXmlParser::SubElementActsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryImpl>& object)
        {
            auto acts = std::make_shared<ActImpl>();
            // Setting the parent
            acts->SetParent(object);
            _actXmlParser->ParseElement(indexedElement, parserContext, acts);
            auto actsList = object->GetWriterActs();
            actsList.push_back(acts);
            object->SetActs(actsList);
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
  
        StoryXmlParser::StoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a StoryboardImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StoryboardXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<StoryboardImpl>>> StoryboardXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<StoryboardImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<StoryboardImpl>>> StoryboardXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<StoryboardImpl>>> result;
            result.push_back(std::make_shared<SubElementInitParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementStoriesParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementStopTriggerParser>(_messageLogger, _filename));
            return result;
        }

        StoryboardXmlParser::SubElementInitParser::SubElementInitParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _initXmlParser = std::make_shared<InitXmlParser>(messageLogger, filename);
        }

        void StoryboardXmlParser::SubElementInitParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardImpl>& object)
        {
            auto init = std::make_shared<InitImpl>();
            // Setting the parent
            init->SetParent(object);
            _initXmlParser->ParseElement(indexedElement, parserContext, init);

            object->SetInit(init);
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
        StoryboardXmlParser::SubElementStoriesParser::SubElementStoriesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _storyXmlParser = std::make_shared<StoryXmlParser>(messageLogger, filename);
        }

        void StoryboardXmlParser::SubElementStoriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardImpl>& object)
        {
            auto stories = std::make_shared<StoryImpl>();
            // Setting the parent
            stories->SetParent(object);
            _storyXmlParser->ParseElement(indexedElement, parserContext, stories);
            auto storiesList = object->GetWriterStories();
            storiesList.push_back(stories);
            object->SetStories(storiesList);
        }
        
        int StoryboardXmlParser::SubElementStoriesParser::GetMinOccur() 
        {
            return 1;
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
        StoryboardXmlParser::SubElementStopTriggerParser::SubElementStopTriggerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _triggerXmlParser = std::make_shared<TriggerXmlParser>(messageLogger, filename);
        }

        void StoryboardXmlParser::SubElementStopTriggerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardImpl>& object)
        {
            auto stopTrigger = std::make_shared<TriggerImpl>();
            // Setting the parent
            stopTrigger->SetParent(object);
            _triggerXmlParser->ParseElement(indexedElement, parserContext, stopTrigger);

            object->SetStopTrigger(stopTrigger);
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
  
        StoryboardXmlParser::StoryboardXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a StoryboardElementStateConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            StoryboardElementStateConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<StoryboardElementStateConditionImpl>>> StoryboardElementStateConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<StoryboardElementStateConditionImpl>>> result;

            class AttributeState: public IAttributeParser<StoryboardElementStateConditionImpl>, public XmlParserBase<StoryboardElementStateConditionImpl>
            {
            public:
                AttributeState(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StoryboardElementStateConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = StoryboardElementState::GetFromLiteral(attributeValue);
                        if (kResult != StoryboardElementState::UNKNOWN)
                        {
                            object->SetState(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<AttributeState>(_messageLogger, _filename)));
            class AttributeStoryboardElementRef: public IAttributeParser<StoryboardElementStateConditionImpl>, public XmlParserBase<StoryboardElementStateConditionImpl>
            {
            public:
                AttributeStoryboardElementRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StoryboardElementStateConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IStoryboardElement>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetStoryboardElementRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, std::make_shared<AttributeStoryboardElementRef>(_messageLogger, _filename)));
            class AttributeStoryboardElementType: public IAttributeParser<StoryboardElementStateConditionImpl>, public XmlParserBase<StoryboardElementStateConditionImpl>
            {
            public:
                AttributeStoryboardElementType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StoryboardElementStateConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = StoryboardElementType::GetFromLiteral(attributeValue);
                        if (kResult != StoryboardElementType::UNKNOWN)
                        {
                            object->SetStoryboardElementType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, std::make_shared<AttributeStoryboardElementType>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<StoryboardElementStateConditionImpl>>> StoryboardElementStateConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<StoryboardElementStateConditionImpl>>> result;
            return result;
        }

  
        StoryboardElementStateConditionXmlParser::StoryboardElementStateConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a SunImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SunXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<SunImpl>>> SunXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<SunImpl>>> result;

            class AttributeAzimuth: public IAttributeParser<SunImpl>, public XmlParserBase<SunImpl>
            {
            public:
                AttributeAzimuth(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SunImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetAzimuth(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, std::make_shared<AttributeAzimuth>(_messageLogger, _filename)));
            class AttributeElevation: public IAttributeParser<SunImpl>, public XmlParserBase<SunImpl>
            {
            public:
                AttributeElevation(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SunImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetElevation(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, std::make_shared<AttributeElevation>(_messageLogger, _filename)));
            class AttributeIntensity: public IAttributeParser<SunImpl>, public XmlParserBase<SunImpl>
            {
            public:
                AttributeIntensity(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SunImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetIntensity(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<AttributeIntensity>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<SunImpl>>> SunXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<SunImpl>>> result;
            return result;
        }

  
        SunXmlParser::SunXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a SynchronizeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            SynchronizeActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<SynchronizeActionImpl>>> SynchronizeActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<SynchronizeActionImpl>>> result;

            class AttributeMasterEntityRef: public IAttributeParser<SynchronizeActionImpl>, public XmlParserBase<SynchronizeActionImpl>
            {
            public:
                AttributeMasterEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SynchronizeActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetMasterEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, std::make_shared<AttributeMasterEntityRef>(_messageLogger, _filename)));
            class AttributeTargetTolerance: public IAttributeParser<SynchronizeActionImpl>, public XmlParserBase<SynchronizeActionImpl>
            {
            public:
                AttributeTargetTolerance(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SynchronizeActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetTargetTolerance(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE, std::make_shared<AttributeTargetTolerance>(_messageLogger, _filename)));
            class AttributeTargetToleranceMaster: public IAttributeParser<SynchronizeActionImpl>, public XmlParserBase<SynchronizeActionImpl>
            {
            public:
                AttributeTargetToleranceMaster(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SynchronizeActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE_MASTER, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetTargetToleranceMaster(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE_MASTER, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE_MASTER, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TARGET_TOLERANCE_MASTER, std::make_shared<AttributeTargetToleranceMaster>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<SynchronizeActionImpl>>> SynchronizeActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<SynchronizeActionImpl>>> result;
            result.push_back(std::make_shared<SubElementTargetPositionMasterParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTargetPositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementFinalSpeedParser>(_messageLogger, _filename));
            return result;
        }

        SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::SubElementTargetPositionMasterParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SynchronizeActionImpl>& object)
        {
            auto targetPositionMaster = std::make_shared<PositionImpl>();
            // Setting the parent
            targetPositionMaster->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, targetPositionMaster);

            object->SetTargetPositionMaster(targetPositionMaster);
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
        SynchronizeActionXmlParser::SubElementTargetPositionParser::SubElementTargetPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void SynchronizeActionXmlParser::SubElementTargetPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SynchronizeActionImpl>& object)
        {
            auto targetPosition = std::make_shared<PositionImpl>();
            // Setting the parent
            targetPosition->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, targetPosition);

            object->SetTargetPosition(targetPosition);
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
        SynchronizeActionXmlParser::SubElementFinalSpeedParser::SubElementFinalSpeedParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _finalSpeedXmlParser = std::make_shared<FinalSpeedXmlParser>(messageLogger, filename);
        }

        void SynchronizeActionXmlParser::SubElementFinalSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SynchronizeActionImpl>& object)
        {
            auto finalSpeed = std::make_shared<FinalSpeedImpl>();
            // Setting the parent
            finalSpeed->SetParent(object);
            _finalSpeedXmlParser->ParseElement(indexedElement, parserContext, finalSpeed);

            object->SetFinalSpeed(finalSpeed);
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
  
        SynchronizeActionXmlParser::SynchronizeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TargetDistanceSteadyStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TargetDistanceSteadyStateXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TargetDistanceSteadyStateImpl>>> TargetDistanceSteadyStateXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TargetDistanceSteadyStateImpl>>> result;

            class AttributeDistance: public IAttributeParser<TargetDistanceSteadyStateImpl>, public XmlParserBase<TargetDistanceSteadyStateImpl>
            {
            public:
                AttributeDistance(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TargetDistanceSteadyStateImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDistance(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, std::make_shared<AttributeDistance>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TargetDistanceSteadyStateImpl>>> TargetDistanceSteadyStateXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TargetDistanceSteadyStateImpl>>> result;
            return result;
        }

  
        TargetDistanceSteadyStateXmlParser::TargetDistanceSteadyStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TargetTimeSteadyStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TargetTimeSteadyStateXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TargetTimeSteadyStateImpl>>> TargetTimeSteadyStateXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TargetTimeSteadyStateImpl>>> result;

            class AttributeTime: public IAttributeParser<TargetTimeSteadyStateImpl>, public XmlParserBase<TargetTimeSteadyStateImpl>
            {
            public:
                AttributeTime(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TargetTimeSteadyStateImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TIME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetTime(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<AttributeTime>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TargetTimeSteadyStateImpl>>> TargetTimeSteadyStateXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TargetTimeSteadyStateImpl>>> result;
            return result;
        }

  
        TargetTimeSteadyStateXmlParser::TargetTimeSteadyStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TeleportActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TeleportActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TeleportActionImpl>>> TeleportActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TeleportActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TeleportActionImpl>>> TeleportActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TeleportActionImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        TeleportActionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void TeleportActionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TeleportActionImpl>& object)
        {
            auto position = std::make_shared<PositionImpl>();
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            object->SetPosition(position);
        }
        
        int TeleportActionXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int TeleportActionXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TeleportActionXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> TeleportActionXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        TeleportActionXmlParser::TeleportActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TimeHeadwayConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimeHeadwayConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TimeHeadwayConditionImpl>>> TimeHeadwayConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TimeHeadwayConditionImpl>>> result;

            class AttributeAlongRoute: public IAttributeParser<TimeHeadwayConditionImpl>, public XmlParserBase<TimeHeadwayConditionImpl>
            {
            public:
                AttributeAlongRoute(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeHeadwayConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetAlongRoute(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<AttributeAlongRoute>(_messageLogger, _filename)));
            class AttributeCoordinateSystem: public IAttributeParser<TimeHeadwayConditionImpl>, public XmlParserBase<TimeHeadwayConditionImpl>
            {
            public:
                AttributeCoordinateSystem(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeHeadwayConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = CoordinateSystem::GetFromLiteral(attributeValue);
                        if (kResult != CoordinateSystem::UNKNOWN)
                        {
                            object->SetCoordinateSystem(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, std::make_shared<AttributeCoordinateSystem>(_messageLogger, _filename)));
            class AttributeEntityRef: public IAttributeParser<TimeHeadwayConditionImpl>, public XmlParserBase<TimeHeadwayConditionImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeHeadwayConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<IEntity>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetEntityRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            class AttributeFreespace: public IAttributeParser<TimeHeadwayConditionImpl>, public XmlParserBase<TimeHeadwayConditionImpl>
            {
            public:
                AttributeFreespace(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeHeadwayConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetFreespace(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<AttributeFreespace>(_messageLogger, _filename)));
            class AttributeRelativeDistanceType: public IAttributeParser<TimeHeadwayConditionImpl>, public XmlParserBase<TimeHeadwayConditionImpl>
            {
            public:
                AttributeRelativeDistanceType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeHeadwayConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = RelativeDistanceType::GetFromLiteral(attributeValue);
                        if (kResult != RelativeDistanceType::UNKNOWN)
                        {
                            object->SetRelativeDistanceType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, std::make_shared<AttributeRelativeDistanceType>(_messageLogger, _filename)));
            class AttributeRule: public IAttributeParser<TimeHeadwayConditionImpl>, public XmlParserBase<TimeHeadwayConditionImpl>
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeHeadwayConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            object->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<TimeHeadwayConditionImpl>, public XmlParserBase<TimeHeadwayConditionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeHeadwayConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TimeHeadwayConditionImpl>>> TimeHeadwayConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TimeHeadwayConditionImpl>>> result;
            return result;
        }

  
        TimeHeadwayConditionXmlParser::TimeHeadwayConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TimeOfDayImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimeOfDayXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TimeOfDayImpl>>> TimeOfDayXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TimeOfDayImpl>>> result;

            class AttributeAnimation: public IAttributeParser<TimeOfDayImpl>, public XmlParserBase<TimeOfDayImpl>
            {
            public:
                AttributeAnimation(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeOfDayImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ANIMATION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetAnimation(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ANIMATION, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ANIMATION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ANIMATION, std::make_shared<AttributeAnimation>(_messageLogger, _filename)));
            class AttributeDateTime: public IAttributeParser<TimeOfDayImpl>, public XmlParserBase<TimeOfDayImpl>
            {
            public:
                AttributeDateTime(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeOfDayImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDateTime(ParseDateTime(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, std::make_shared<AttributeDateTime>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TimeOfDayImpl>>> TimeOfDayXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TimeOfDayImpl>>> result;
            return result;
        }

  
        TimeOfDayXmlParser::TimeOfDayXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TimeOfDayConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimeOfDayConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TimeOfDayConditionImpl>>> TimeOfDayConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TimeOfDayConditionImpl>>> result;

            class AttributeDateTime: public IAttributeParser<TimeOfDayConditionImpl>, public XmlParserBase<TimeOfDayConditionImpl>
            {
            public:
                AttributeDateTime(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeOfDayConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDateTime(ParseDateTime(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, std::make_shared<AttributeDateTime>(_messageLogger, _filename)));
            class AttributeRule: public IAttributeParser<TimeOfDayConditionImpl>, public XmlParserBase<TimeOfDayConditionImpl>
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeOfDayConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            object->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TimeOfDayConditionImpl>>> TimeOfDayConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TimeOfDayConditionImpl>>> result;
            return result;
        }

  
        TimeOfDayConditionXmlParser::TimeOfDayConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TimeReferenceImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimeReferenceXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TimeReferenceImpl>>> TimeReferenceXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TimeReferenceImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TimeReferenceImpl>>> TimeReferenceXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TimeReferenceImpl>>> result;
            result.push_back(std::make_shared<SubElementNoneParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTimingParser>(_messageLogger, _filename));
            return result;
        }

        TimeReferenceXmlParser::SubElementNoneParser::SubElementNoneParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _noneXmlParser = std::make_shared<NoneXmlParser>(messageLogger, filename);
        }

        void TimeReferenceXmlParser::SubElementNoneParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeReferenceImpl>& object)
        {
            auto none = std::make_shared<NoneImpl>();
            // Setting the parent
            none->SetParent(object);
            _noneXmlParser->ParseElement(indexedElement, parserContext, none);

            object->SetNone(none);
        }
        
        int TimeReferenceXmlParser::SubElementNoneParser::GetMinOccur() 
        {
            return 0;
        }

        int TimeReferenceXmlParser::SubElementNoneParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TimeReferenceXmlParser::SubElementNoneParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__NONE ;
        }

        std::vector<std::string> TimeReferenceXmlParser::SubElementNoneParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__NONE
                    };
        }
        TimeReferenceXmlParser::SubElementTimingParser::SubElementTimingParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _timingXmlParser = std::make_shared<TimingXmlParser>(messageLogger, filename);
        }

        void TimeReferenceXmlParser::SubElementTimingParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeReferenceImpl>& object)
        {
            auto timing = std::make_shared<TimingImpl>();
            // Setting the parent
            timing->SetParent(object);
            _timingXmlParser->ParseElement(indexedElement, parserContext, timing);

            object->SetTiming(timing);
        }
        
        int TimeReferenceXmlParser::SubElementTimingParser::GetMinOccur() 
        {
            return 0;
        }

        int TimeReferenceXmlParser::SubElementTimingParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TimeReferenceXmlParser::SubElementTimingParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TIMING ;
        }

        std::vector<std::string> TimeReferenceXmlParser::SubElementTimingParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TIMING
                    };
        }
  
        TimeReferenceXmlParser::TimeReferenceXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TimeToCollisionConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimeToCollisionConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TimeToCollisionConditionImpl>>> TimeToCollisionConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TimeToCollisionConditionImpl>>> result;

            class AttributeAlongRoute: public IAttributeParser<TimeToCollisionConditionImpl>, public XmlParserBase<TimeToCollisionConditionImpl>
            {
            public:
                AttributeAlongRoute(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeToCollisionConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetAlongRoute(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<AttributeAlongRoute>(_messageLogger, _filename)));
            class AttributeCoordinateSystem: public IAttributeParser<TimeToCollisionConditionImpl>, public XmlParserBase<TimeToCollisionConditionImpl>
            {
            public:
                AttributeCoordinateSystem(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeToCollisionConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = CoordinateSystem::GetFromLiteral(attributeValue);
                        if (kResult != CoordinateSystem::UNKNOWN)
                        {
                            object->SetCoordinateSystem(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__COORDINATE_SYSTEM, std::make_shared<AttributeCoordinateSystem>(_messageLogger, _filename)));
            class AttributeFreespace: public IAttributeParser<TimeToCollisionConditionImpl>, public XmlParserBase<TimeToCollisionConditionImpl>
            {
            public:
                AttributeFreespace(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeToCollisionConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetFreespace(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<AttributeFreespace>(_messageLogger, _filename)));
            class AttributeRelativeDistanceType: public IAttributeParser<TimeToCollisionConditionImpl>, public XmlParserBase<TimeToCollisionConditionImpl>
            {
            public:
                AttributeRelativeDistanceType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeToCollisionConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = RelativeDistanceType::GetFromLiteral(attributeValue);
                        if (kResult != RelativeDistanceType::UNKNOWN)
                        {
                            object->SetRelativeDistanceType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, std::make_shared<AttributeRelativeDistanceType>(_messageLogger, _filename)));
            class AttributeRule: public IAttributeParser<TimeToCollisionConditionImpl>, public XmlParserBase<TimeToCollisionConditionImpl>
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeToCollisionConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            object->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<TimeToCollisionConditionImpl>, public XmlParserBase<TimeToCollisionConditionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeToCollisionConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TimeToCollisionConditionImpl>>> TimeToCollisionConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TimeToCollisionConditionImpl>>> result;
            result.push_back(std::make_shared<SubElementTimeToCollisionConditionTargetParser>(_messageLogger, _filename));
            return result;
        }

        TimeToCollisionConditionXmlParser::SubElementTimeToCollisionConditionTargetParser::SubElementTimeToCollisionConditionTargetParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _timeToCollisionConditionTargetXmlParser = std::make_shared<TimeToCollisionConditionTargetXmlParser>(messageLogger, filename);
        }

        void TimeToCollisionConditionXmlParser::SubElementTimeToCollisionConditionTargetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionImpl>& object)
        {
            auto timeToCollisionConditionTarget = std::make_shared<TimeToCollisionConditionTargetImpl>();
            // Setting the parent
            timeToCollisionConditionTarget->SetParent(object);
            _timeToCollisionConditionTargetXmlParser->ParseElement(indexedElement, parserContext, timeToCollisionConditionTarget);

            object->SetTimeToCollisionConditionTarget(timeToCollisionConditionTarget);
        }
        
        int TimeToCollisionConditionXmlParser::SubElementTimeToCollisionConditionTargetParser::GetMinOccur() 
        {
            return 1;
        }

        int TimeToCollisionConditionXmlParser::SubElementTimeToCollisionConditionTargetParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TimeToCollisionConditionXmlParser::SubElementTimeToCollisionConditionTargetParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION_TARGET ;
        }

        std::vector<std::string> TimeToCollisionConditionXmlParser::SubElementTimeToCollisionConditionTargetParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION_TARGET
                    };
        }
  
        TimeToCollisionConditionXmlParser::TimeToCollisionConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TimeToCollisionConditionTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimeToCollisionConditionTargetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TimeToCollisionConditionTargetImpl>>> TimeToCollisionConditionTargetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TimeToCollisionConditionTargetImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TimeToCollisionConditionTargetImpl>>> TimeToCollisionConditionTargetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TimeToCollisionConditionTargetImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementEntityRefParser>(_messageLogger, _filename));
            return result;
        }

        TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionTargetImpl>& object)
        {
            auto position = std::make_shared<PositionImpl>();
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            object->SetPosition(position);
        }
        
        int TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 0;
        }

        int TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
        TimeToCollisionConditionTargetXmlParser::SubElementEntityRefParser::SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entityRefXmlParser = std::make_shared<EntityRefXmlParser>(messageLogger, filename);
        }

        void TimeToCollisionConditionTargetXmlParser::SubElementEntityRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionTargetImpl>& object)
        {
            auto entityRef = std::make_shared<EntityRefImpl>();
            // Setting the parent
            entityRef->SetParent(object);
            _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRef);

            object->SetEntityRef(entityRef);
        }
        
        int TimeToCollisionConditionTargetXmlParser::SubElementEntityRefParser::GetMinOccur() 
        {
            return 0;
        }

        int TimeToCollisionConditionTargetXmlParser::SubElementEntityRefParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TimeToCollisionConditionTargetXmlParser::SubElementEntityRefParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
        }

        std::vector<std::string> TimeToCollisionConditionTargetXmlParser::SubElementEntityRefParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENTITY_REF
                    };
        }
  
        TimeToCollisionConditionTargetXmlParser::TimeToCollisionConditionTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TimingImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TimingXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TimingImpl>>> TimingXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TimingImpl>>> result;

            class AttributeDomainAbsoluteRelative: public IAttributeParser<TimingImpl>, public XmlParserBase<TimingImpl>
            {
            public:
                AttributeDomainAbsoluteRelative(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimingImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = ReferenceContext::GetFromLiteral(attributeValue);
                        if (kResult != ReferenceContext::UNKNOWN)
                        {
                            object->SetDomainAbsoluteRelative(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, std::make_shared<AttributeDomainAbsoluteRelative>(_messageLogger, _filename)));
            class AttributeOffset: public IAttributeParser<TimingImpl>, public XmlParserBase<TimingImpl>
            {
            public:
                AttributeOffset(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimingImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__OFFSET, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetOffset(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<AttributeOffset>(_messageLogger, _filename)));
            class AttributeScale: public IAttributeParser<TimingImpl>, public XmlParserBase<TimingImpl>
            {
            public:
                AttributeScale(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimingImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SCALE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetScale(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SCALE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SCALE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SCALE, std::make_shared<AttributeScale>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TimingImpl>>> TimingXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TimingImpl>>> result;
            return result;
        }

  
        TimingXmlParser::TimingXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficActionImpl>>> TrafficActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficActionImpl>>> result;

            class AttributeTrafficName: public IAttributeParser<TrafficActionImpl>, public XmlParserBase<TrafficActionImpl>
            {
            public:
                AttributeTrafficName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetTrafficName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_NAME, std::make_shared<AttributeTrafficName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficActionImpl>>> TrafficActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficActionImpl>>> result;
            result.push_back(std::make_shared<SubElementTrafficSourceActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrafficSinkActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrafficSwarmActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrafficStopActionParser>(_messageLogger, _filename));
            return result;
        }

        TrafficActionXmlParser::SubElementTrafficSourceActionParser::SubElementTrafficSourceActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSourceActionXmlParser = std::make_shared<TrafficSourceActionXmlParser>(messageLogger, filename);
        }

        void TrafficActionXmlParser::SubElementTrafficSourceActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficActionImpl>& object)
        {
            auto trafficSourceAction = std::make_shared<TrafficSourceActionImpl>();
            // Setting the parent
            trafficSourceAction->SetParent(object);
            _trafficSourceActionXmlParser->ParseElement(indexedElement, parserContext, trafficSourceAction);

            object->SetTrafficSourceAction(trafficSourceAction);
        }
        
        int TrafficActionXmlParser::SubElementTrafficSourceActionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficActionXmlParser::SubElementTrafficSourceActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficActionXmlParser::SubElementTrafficSourceActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SOURCE_ACTION ;
        }

        std::vector<std::string> TrafficActionXmlParser::SubElementTrafficSourceActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SOURCE_ACTION
                    };
        }
        TrafficActionXmlParser::SubElementTrafficSinkActionParser::SubElementTrafficSinkActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSinkActionXmlParser = std::make_shared<TrafficSinkActionXmlParser>(messageLogger, filename);
        }

        void TrafficActionXmlParser::SubElementTrafficSinkActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficActionImpl>& object)
        {
            auto trafficSinkAction = std::make_shared<TrafficSinkActionImpl>();
            // Setting the parent
            trafficSinkAction->SetParent(object);
            _trafficSinkActionXmlParser->ParseElement(indexedElement, parserContext, trafficSinkAction);

            object->SetTrafficSinkAction(trafficSinkAction);
        }
        
        int TrafficActionXmlParser::SubElementTrafficSinkActionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficActionXmlParser::SubElementTrafficSinkActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficActionXmlParser::SubElementTrafficSinkActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SINK_ACTION ;
        }

        std::vector<std::string> TrafficActionXmlParser::SubElementTrafficSinkActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SINK_ACTION
                    };
        }
        TrafficActionXmlParser::SubElementTrafficSwarmActionParser::SubElementTrafficSwarmActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSwarmActionXmlParser = std::make_shared<TrafficSwarmActionXmlParser>(messageLogger, filename);
        }

        void TrafficActionXmlParser::SubElementTrafficSwarmActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficActionImpl>& object)
        {
            auto trafficSwarmAction = std::make_shared<TrafficSwarmActionImpl>();
            // Setting the parent
            trafficSwarmAction->SetParent(object);
            _trafficSwarmActionXmlParser->ParseElement(indexedElement, parserContext, trafficSwarmAction);

            object->SetTrafficSwarmAction(trafficSwarmAction);
        }
        
        int TrafficActionXmlParser::SubElementTrafficSwarmActionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficActionXmlParser::SubElementTrafficSwarmActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficActionXmlParser::SubElementTrafficSwarmActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SWARM_ACTION ;
        }

        std::vector<std::string> TrafficActionXmlParser::SubElementTrafficSwarmActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SWARM_ACTION
                    };
        }
        TrafficActionXmlParser::SubElementTrafficStopActionParser::SubElementTrafficStopActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficStopActionXmlParser = std::make_shared<TrafficStopActionXmlParser>(messageLogger, filename);
        }

        void TrafficActionXmlParser::SubElementTrafficStopActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficActionImpl>& object)
        {
            auto trafficStopAction = std::make_shared<TrafficStopActionImpl>();
            // Setting the parent
            trafficStopAction->SetParent(object);
            _trafficStopActionXmlParser->ParseElement(indexedElement, parserContext, trafficStopAction);

            object->SetTrafficStopAction(trafficStopAction);
        }
        
        int TrafficActionXmlParser::SubElementTrafficStopActionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficActionXmlParser::SubElementTrafficStopActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficActionXmlParser::SubElementTrafficStopActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_STOP_ACTION ;
        }

        std::vector<std::string> TrafficActionXmlParser::SubElementTrafficStopActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_STOP_ACTION
                    };
        }
  
        TrafficActionXmlParser::TrafficActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficDefinitionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficDefinitionImpl>>> TrafficDefinitionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficDefinitionImpl>>> result;

            class AttributeName: public IAttributeParser<TrafficDefinitionImpl>, public XmlParserBase<TrafficDefinitionImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficDefinitionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficDefinitionImpl>>> TrafficDefinitionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficDefinitionImpl>>> result;
            result.push_back(std::make_shared<SubElementVehicleCategoryDistributionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementControllerDistributionParser>(_messageLogger, _filename));
            return result;
        }

        TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::SubElementVehicleCategoryDistributionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _vehicleCategoryDistributionXmlParser = std::make_shared<VehicleCategoryDistributionXmlParser>(messageLogger, filename);
        }

        void TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficDefinitionImpl>& object)
        {
            auto vehicleCategoryDistribution = std::make_shared<VehicleCategoryDistributionImpl>();
            // Setting the parent
            vehicleCategoryDistribution->SetParent(object);
            _vehicleCategoryDistributionXmlParser->ParseElement(indexedElement, parserContext, vehicleCategoryDistribution);

            object->SetVehicleCategoryDistribution(vehicleCategoryDistribution);
        }
        
        int TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION ;
        }

        std::vector<std::string> TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION
                    };
        }
        TrafficDefinitionXmlParser::SubElementControllerDistributionParser::SubElementControllerDistributionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerDistributionXmlParser = std::make_shared<ControllerDistributionXmlParser>(messageLogger, filename);
        }

        void TrafficDefinitionXmlParser::SubElementControllerDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficDefinitionImpl>& object)
        {
            auto controllerDistribution = std::make_shared<ControllerDistributionImpl>();
            // Setting the parent
            controllerDistribution->SetParent(object);
            _controllerDistributionXmlParser->ParseElement(indexedElement, parserContext, controllerDistribution);

            object->SetControllerDistribution(controllerDistribution);
        }
        
        int TrafficDefinitionXmlParser::SubElementControllerDistributionParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficDefinitionXmlParser::SubElementControllerDistributionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficDefinitionXmlParser::SubElementControllerDistributionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION ;
        }

        std::vector<std::string> TrafficDefinitionXmlParser::SubElementControllerDistributionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION
                    };
        }
  
        TrafficDefinitionXmlParser::TrafficDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficSignalActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalActionImpl>>> TrafficSignalActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSignalActionImpl>>> TrafficSignalActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSignalActionImpl>>> result;
            result.push_back(std::make_shared<SubElementTrafficSignalControllerActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrafficSignalStateActionParser>(_messageLogger, _filename));
            return result;
        }

        TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::SubElementTrafficSignalControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSignalControllerActionXmlParser = std::make_shared<TrafficSignalControllerActionXmlParser>(messageLogger, filename);
        }

        void TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalActionImpl>& object)
        {
            auto trafficSignalControllerAction = std::make_shared<TrafficSignalControllerActionImpl>();
            // Setting the parent
            trafficSignalControllerAction->SetParent(object);
            _trafficSignalControllerActionXmlParser->ParseElement(indexedElement, parserContext, trafficSignalControllerAction);

            object->SetTrafficSignalControllerAction(trafficSignalControllerAction);
        }
        
        int TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_ACTION ;
        }

        std::vector<std::string> TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_ACTION
                    };
        }
        TrafficSignalActionXmlParser::SubElementTrafficSignalStateActionParser::SubElementTrafficSignalStateActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSignalStateActionXmlParser = std::make_shared<TrafficSignalStateActionXmlParser>(messageLogger, filename);
        }

        void TrafficSignalActionXmlParser::SubElementTrafficSignalStateActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalActionImpl>& object)
        {
            auto trafficSignalStateAction = std::make_shared<TrafficSignalStateActionImpl>();
            // Setting the parent
            trafficSignalStateAction->SetParent(object);
            _trafficSignalStateActionXmlParser->ParseElement(indexedElement, parserContext, trafficSignalStateAction);

            object->SetTrafficSignalStateAction(trafficSignalStateAction);
        }
        
        int TrafficSignalActionXmlParser::SubElementTrafficSignalStateActionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficSignalActionXmlParser::SubElementTrafficSignalStateActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSignalActionXmlParser::SubElementTrafficSignalStateActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE_ACTION ;
        }

        std::vector<std::string> TrafficSignalActionXmlParser::SubElementTrafficSignalStateActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE_ACTION
                    };
        }
  
        TrafficSignalActionXmlParser::TrafficSignalActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficSignalConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalConditionImpl>>> TrafficSignalConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalConditionImpl>>> result;

            class AttributeName: public IAttributeParser<TrafficSignalConditionImpl>, public XmlParserBase<TrafficSignalConditionImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            class AttributeState: public IAttributeParser<TrafficSignalConditionImpl>, public XmlParserBase<TrafficSignalConditionImpl>
            {
            public:
                AttributeState(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetState(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<AttributeState>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSignalConditionImpl>>> TrafficSignalConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSignalConditionImpl>>> result;
            return result;
        }

  
        TrafficSignalConditionXmlParser::TrafficSignalConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficSignalControllerImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalControllerXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerImpl>>> TrafficSignalControllerXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerImpl>>> result;

            class AttributeDelay: public IAttributeParser<TrafficSignalControllerImpl>, public XmlParserBase<TrafficSignalControllerImpl>
            {
            public:
                AttributeDelay(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DELAY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDelay(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DELAY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DELAY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DELAY, std::make_shared<AttributeDelay>(_messageLogger, _filename)));
            class AttributeName: public IAttributeParser<TrafficSignalControllerImpl>, public XmlParserBase<TrafficSignalControllerImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            class AttributeReference: public IAttributeParser<TrafficSignalControllerImpl>, public XmlParserBase<TrafficSignalControllerImpl>
            {
            public:
                AttributeReference(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__REFERENCE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetReference(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__REFERENCE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__REFERENCE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__REFERENCE, std::make_shared<AttributeReference>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerImpl>>> TrafficSignalControllerXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerImpl>>> result;
            result.push_back(std::make_shared<SubElementPhasesParser>(_messageLogger, _filename));
            return result;
        }

        TrafficSignalControllerXmlParser::SubElementPhasesParser::SubElementPhasesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _phaseXmlParser = std::make_shared<PhaseXmlParser>(messageLogger, filename);
        }

        void TrafficSignalControllerXmlParser::SubElementPhasesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalControllerImpl>& object)
        {
            auto phases = std::make_shared<PhaseImpl>();
            // Setting the parent
            phases->SetParent(object);
            _phaseXmlParser->ParseElement(indexedElement, parserContext, phases);
            auto phasesList = object->GetWriterPhases();
            phasesList.push_back(phases);
            object->SetPhases(phasesList);
        }
        
        int TrafficSignalControllerXmlParser::SubElementPhasesParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficSignalControllerXmlParser::SubElementPhasesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool TrafficSignalControllerXmlParser::SubElementPhasesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PHASE ;
        }

        std::vector<std::string> TrafficSignalControllerXmlParser::SubElementPhasesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PHASE
                    };
        }
  
        TrafficSignalControllerXmlParser::TrafficSignalControllerXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficSignalControllerActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalControllerActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerActionImpl>>> TrafficSignalControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerActionImpl>>> result;

            class AttributePhase: public IAttributeParser<TrafficSignalControllerActionImpl>, public XmlParserBase<TrafficSignalControllerActionImpl>
            {
            public:
                AttributePhase(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PHASE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetPhase(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PHASE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PHASE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PHASE, std::make_shared<AttributePhase>(_messageLogger, _filename)));
            class AttributeTrafficSignalControllerRef: public IAttributeParser<TrafficSignalControllerActionImpl>, public XmlParserBase<TrafficSignalControllerActionImpl>
            {
            public:
                AttributeTrafficSignalControllerRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<ITrafficSignalController>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetTrafficSignalControllerRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, std::make_shared<AttributeTrafficSignalControllerRef>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerActionImpl>>> TrafficSignalControllerActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerActionImpl>>> result;
            return result;
        }

  
        TrafficSignalControllerActionXmlParser::TrafficSignalControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficSignalControllerConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalControllerConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerConditionImpl>>> TrafficSignalControllerConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerConditionImpl>>> result;

            class AttributePhase: public IAttributeParser<TrafficSignalControllerConditionImpl>, public XmlParserBase<TrafficSignalControllerConditionImpl>
            {
            public:
                AttributePhase(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PHASE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetPhase(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PHASE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PHASE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PHASE, std::make_shared<AttributePhase>(_messageLogger, _filename)));
            class AttributeTrafficSignalControllerRef: public IAttributeParser<TrafficSignalControllerConditionImpl>, public XmlParserBase<TrafficSignalControllerConditionImpl>
            {
            public:
                AttributeTrafficSignalControllerRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<ITrafficSignalController>>(attributeValue);
                        proxy->SetParent(object);
                        object->SetTrafficSignalControllerRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, std::make_shared<AttributeTrafficSignalControllerRef>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerConditionImpl>>> TrafficSignalControllerConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerConditionImpl>>> result;
            return result;
        }

  
        TrafficSignalControllerConditionXmlParser::TrafficSignalControllerConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficSignalStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalStateXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalStateImpl>>> TrafficSignalStateXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalStateImpl>>> result;

            class AttributeState: public IAttributeParser<TrafficSignalStateImpl>, public XmlParserBase<TrafficSignalStateImpl>
            {
            public:
                AttributeState(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalStateImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetState(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<AttributeState>(_messageLogger, _filename)));
            class AttributeTrafficSignalId: public IAttributeParser<TrafficSignalStateImpl>, public XmlParserBase<TrafficSignalStateImpl>
            {
            public:
                AttributeTrafficSignalId(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalStateImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetTrafficSignalId(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID, std::make_shared<AttributeTrafficSignalId>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSignalStateImpl>>> TrafficSignalStateXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSignalStateImpl>>> result;
            return result;
        }

  
        TrafficSignalStateXmlParser::TrafficSignalStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficSignalStateActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSignalStateActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalStateActionImpl>>> TrafficSignalStateActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalStateActionImpl>>> result;

            class AttributeName: public IAttributeParser<TrafficSignalStateActionImpl>, public XmlParserBase<TrafficSignalStateActionImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalStateActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            class AttributeState: public IAttributeParser<TrafficSignalStateActionImpl>, public XmlParserBase<TrafficSignalStateActionImpl>
            {
            public:
                AttributeState(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalStateActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetState(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STATE, std::make_shared<AttributeState>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSignalStateActionImpl>>> TrafficSignalStateActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSignalStateActionImpl>>> result;
            return result;
        }

  
        TrafficSignalStateActionXmlParser::TrafficSignalStateActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficSinkActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSinkActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSinkActionImpl>>> TrafficSinkActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSinkActionImpl>>> result;

            class AttributeRadius: public IAttributeParser<TrafficSinkActionImpl>, public XmlParserBase<TrafficSinkActionImpl>
            {
            public:
                AttributeRadius(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSinkActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RADIUS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetRadius(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RADIUS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RADIUS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RADIUS, std::make_shared<AttributeRadius>(_messageLogger, _filename)));
            class AttributeRate: public IAttributeParser<TrafficSinkActionImpl>, public XmlParserBase<TrafficSinkActionImpl>
            {
            public:
                AttributeRate(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSinkActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetRate(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RATE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RATE, std::make_shared<AttributeRate>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSinkActionImpl>>> TrafficSinkActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSinkActionImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrafficDefinitionParser>(_messageLogger, _filename));
            return result;
        }

        TrafficSinkActionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void TrafficSinkActionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSinkActionImpl>& object)
        {
            auto position = std::make_shared<PositionImpl>();
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            object->SetPosition(position);
        }
        
        int TrafficSinkActionXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficSinkActionXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSinkActionXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> TrafficSinkActionXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
        TrafficSinkActionXmlParser::SubElementTrafficDefinitionParser::SubElementTrafficDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficDefinitionXmlParser = std::make_shared<TrafficDefinitionXmlParser>(messageLogger, filename);
        }

        void TrafficSinkActionXmlParser::SubElementTrafficDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSinkActionImpl>& object)
        {
            auto trafficDefinition = std::make_shared<TrafficDefinitionImpl>();
            // Setting the parent
            trafficDefinition->SetParent(object);
            _trafficDefinitionXmlParser->ParseElement(indexedElement, parserContext, trafficDefinition);

            object->SetTrafficDefinition(trafficDefinition);
        }
        
        int TrafficSinkActionXmlParser::SubElementTrafficDefinitionParser::GetMinOccur() 
        {
            return 0;
        }

        int TrafficSinkActionXmlParser::SubElementTrafficDefinitionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSinkActionXmlParser::SubElementTrafficDefinitionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION ;
        }

        std::vector<std::string> TrafficSinkActionXmlParser::SubElementTrafficDefinitionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION
                    };
        }
  
        TrafficSinkActionXmlParser::TrafficSinkActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficSourceActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSourceActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSourceActionImpl>>> TrafficSourceActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSourceActionImpl>>> result;

            class AttributeRadius: public IAttributeParser<TrafficSourceActionImpl>, public XmlParserBase<TrafficSourceActionImpl>
            {
            public:
                AttributeRadius(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSourceActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RADIUS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetRadius(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RADIUS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RADIUS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RADIUS, std::make_shared<AttributeRadius>(_messageLogger, _filename)));
            class AttributeRate: public IAttributeParser<TrafficSourceActionImpl>, public XmlParserBase<TrafficSourceActionImpl>
            {
            public:
                AttributeRate(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSourceActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetRate(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RATE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RATE, std::make_shared<AttributeRate>(_messageLogger, _filename)));
            class AttributeVelocity: public IAttributeParser<TrafficSourceActionImpl>, public XmlParserBase<TrafficSourceActionImpl>
            {
            public:
                AttributeVelocity(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSourceActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetVelocity(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, std::make_shared<AttributeVelocity>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSourceActionImpl>>> TrafficSourceActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSourceActionImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrafficDefinitionParser>(_messageLogger, _filename));
            return result;
        }

        TrafficSourceActionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void TrafficSourceActionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSourceActionImpl>& object)
        {
            auto position = std::make_shared<PositionImpl>();
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            object->SetPosition(position);
        }
        
        int TrafficSourceActionXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficSourceActionXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSourceActionXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> TrafficSourceActionXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
        TrafficSourceActionXmlParser::SubElementTrafficDefinitionParser::SubElementTrafficDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficDefinitionXmlParser = std::make_shared<TrafficDefinitionXmlParser>(messageLogger, filename);
        }

        void TrafficSourceActionXmlParser::SubElementTrafficDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSourceActionImpl>& object)
        {
            auto trafficDefinition = std::make_shared<TrafficDefinitionImpl>();
            // Setting the parent
            trafficDefinition->SetParent(object);
            _trafficDefinitionXmlParser->ParseElement(indexedElement, parserContext, trafficDefinition);

            object->SetTrafficDefinition(trafficDefinition);
        }
        
        int TrafficSourceActionXmlParser::SubElementTrafficDefinitionParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficSourceActionXmlParser::SubElementTrafficDefinitionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSourceActionXmlParser::SubElementTrafficDefinitionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION ;
        }

        std::vector<std::string> TrafficSourceActionXmlParser::SubElementTrafficDefinitionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION
                    };
        }
  
        TrafficSourceActionXmlParser::TrafficSourceActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficStopActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficStopActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficStopActionImpl>>> TrafficStopActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficStopActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficStopActionImpl>>> TrafficStopActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficStopActionImpl>>> result;
            return result;
        }

  
        TrafficStopActionXmlParser::TrafficStopActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrafficSwarmActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrafficSwarmActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSwarmActionImpl>>> TrafficSwarmActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSwarmActionImpl>>> result;

            class AttributeInnerRadius: public IAttributeParser<TrafficSwarmActionImpl>, public XmlParserBase<TrafficSwarmActionImpl>
            {
            public:
                AttributeInnerRadius(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSwarmActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetInnerRadius(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS, std::make_shared<AttributeInnerRadius>(_messageLogger, _filename)));
            class AttributeNumberOfVehicles: public IAttributeParser<TrafficSwarmActionImpl>, public XmlParserBase<TrafficSwarmActionImpl>
            {
            public:
                AttributeNumberOfVehicles(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSwarmActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetNumberOfVehicles(ParseUnsignedInt(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES, std::make_shared<AttributeNumberOfVehicles>(_messageLogger, _filename)));
            class AttributeOffset: public IAttributeParser<TrafficSwarmActionImpl>, public XmlParserBase<TrafficSwarmActionImpl>
            {
            public:
                AttributeOffset(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSwarmActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__OFFSET, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetOffset(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<AttributeOffset>(_messageLogger, _filename)));
            class AttributeSemiMajorAxis: public IAttributeParser<TrafficSwarmActionImpl>, public XmlParserBase<TrafficSwarmActionImpl>
            {
            public:
                AttributeSemiMajorAxis(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSwarmActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetSemiMajorAxis(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS, std::make_shared<AttributeSemiMajorAxis>(_messageLogger, _filename)));
            class AttributeSemiMinorAxis: public IAttributeParser<TrafficSwarmActionImpl>, public XmlParserBase<TrafficSwarmActionImpl>
            {
            public:
                AttributeSemiMinorAxis(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSwarmActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetSemiMinorAxis(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS, std::make_shared<AttributeSemiMinorAxis>(_messageLogger, _filename)));
            class AttributeVelocity: public IAttributeParser<TrafficSwarmActionImpl>, public XmlParserBase<TrafficSwarmActionImpl>
            {
            public:
                AttributeVelocity(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSwarmActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetVelocity(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, std::make_shared<AttributeVelocity>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSwarmActionImpl>>> TrafficSwarmActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSwarmActionImpl>>> result;
            result.push_back(std::make_shared<SubElementCentralObjectParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrafficDefinitionParser>(_messageLogger, _filename));
            return result;
        }

        TrafficSwarmActionXmlParser::SubElementCentralObjectParser::SubElementCentralObjectParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _centralSwarmObjectXmlParser = std::make_shared<CentralSwarmObjectXmlParser>(messageLogger, filename);
        }

        void TrafficSwarmActionXmlParser::SubElementCentralObjectParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSwarmActionImpl>& object)
        {
            auto centralObject = std::make_shared<CentralSwarmObjectImpl>();
            // Setting the parent
            centralObject->SetParent(object);
            _centralSwarmObjectXmlParser->ParseElement(indexedElement, parserContext, centralObject);

            object->SetCentralObject(centralObject);
        }
        
        int TrafficSwarmActionXmlParser::SubElementCentralObjectParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficSwarmActionXmlParser::SubElementCentralObjectParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSwarmActionXmlParser::SubElementCentralObjectParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CENTRAL_OBJECT ;
        }

        std::vector<std::string> TrafficSwarmActionXmlParser::SubElementCentralObjectParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CENTRAL_OBJECT
                    };
        }
        TrafficSwarmActionXmlParser::SubElementTrafficDefinitionParser::SubElementTrafficDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficDefinitionXmlParser = std::make_shared<TrafficDefinitionXmlParser>(messageLogger, filename);
        }

        void TrafficSwarmActionXmlParser::SubElementTrafficDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSwarmActionImpl>& object)
        {
            auto trafficDefinition = std::make_shared<TrafficDefinitionImpl>();
            // Setting the parent
            trafficDefinition->SetParent(object);
            _trafficDefinitionXmlParser->ParseElement(indexedElement, parserContext, trafficDefinition);

            object->SetTrafficDefinition(trafficDefinition);
        }
        
        int TrafficSwarmActionXmlParser::SubElementTrafficDefinitionParser::GetMinOccur() 
        {
            return 1;
        }

        int TrafficSwarmActionXmlParser::SubElementTrafficDefinitionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrafficSwarmActionXmlParser::SubElementTrafficDefinitionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION ;
        }

        std::vector<std::string> TrafficSwarmActionXmlParser::SubElementTrafficDefinitionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION
                    };
        }
  
        TrafficSwarmActionXmlParser::TrafficSwarmActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrajectoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrajectoryXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryImpl>>> TrajectoryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryImpl>>> result;

            class AttributeClosed: public IAttributeParser<TrajectoryImpl>, public XmlParserBase<TrajectoryImpl>
            {
            public:
                AttributeClosed(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrajectoryImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CLOSED, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetClosed(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CLOSED, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CLOSED, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CLOSED, std::make_shared<AttributeClosed>(_messageLogger, _filename)));
            class AttributeName: public IAttributeParser<TrajectoryImpl>, public XmlParserBase<TrajectoryImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrajectoryImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrajectoryImpl>>> TrajectoryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrajectoryImpl>>> result;
            result.push_back(std::make_shared<WrappedListParser<TrajectoryImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementShapeParser>(_messageLogger, _filename));
            return result;
        }

        TrajectoryXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void TrajectoryXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryImpl>& object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = object->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
        }
        
        int TrajectoryXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int TrajectoryXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool TrajectoryXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> TrajectoryXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        TrajectoryXmlParser::SubElementShapeParser::SubElementShapeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _shapeXmlParser = std::make_shared<ShapeXmlParser>(messageLogger, filename);
        }

        void TrajectoryXmlParser::SubElementShapeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryImpl>& object)
        {
            auto shape = std::make_shared<ShapeImpl>();
            // Setting the parent
            shape->SetParent(object);
            _shapeXmlParser->ParseElement(indexedElement, parserContext, shape);

            object->SetShape(shape);
        }
        
        int TrajectoryXmlParser::SubElementShapeParser::GetMinOccur() 
        {
            return 1;
        }

        int TrajectoryXmlParser::SubElementShapeParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrajectoryXmlParser::SubElementShapeParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SHAPE ;
        }

        std::vector<std::string> TrajectoryXmlParser::SubElementShapeParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SHAPE
                    };
        }
  
        TrajectoryXmlParser::TrajectoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrajectoryCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrajectoryCatalogLocationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryCatalogLocationImpl>>> TrajectoryCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryCatalogLocationImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrajectoryCatalogLocationImpl>>> TrajectoryCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrajectoryCatalogLocationImpl>>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename));
            return result;
        }

        TrajectoryCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename);
        }

        void TrajectoryCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryCatalogLocationImpl>& object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            object->SetDirectory(directory);
        }
        
        int TrajectoryCatalogLocationXmlParser::SubElementDirectoryParser::GetMinOccur() 
        {
            return 1;
        }

        int TrajectoryCatalogLocationXmlParser::SubElementDirectoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrajectoryCatalogLocationXmlParser::SubElementDirectoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
        }

        std::vector<std::string> TrajectoryCatalogLocationXmlParser::SubElementDirectoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DIRECTORY
                    };
        }
  
        TrajectoryCatalogLocationXmlParser::TrajectoryCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrajectoryFollowingModeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrajectoryFollowingModeXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryFollowingModeImpl>>> TrajectoryFollowingModeXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryFollowingModeImpl>>> result;

            class AttributeFollowingMode: public IAttributeParser<TrajectoryFollowingModeImpl>, public XmlParserBase<TrajectoryFollowingModeImpl>
            {
            public:
                AttributeFollowingMode(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrajectoryFollowingModeImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = FollowingMode::GetFromLiteral(attributeValue);
                        if (kResult != FollowingMode::UNKNOWN)
                        {
                            object->SetFollowingMode(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, std::make_shared<AttributeFollowingMode>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrajectoryFollowingModeImpl>>> TrajectoryFollowingModeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrajectoryFollowingModeImpl>>> result;
            return result;
        }

  
        TrajectoryFollowingModeXmlParser::TrajectoryFollowingModeXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrajectoryPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrajectoryPositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryPositionImpl>>> TrajectoryPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryPositionImpl>>> result;

            class AttributeS: public IAttributeParser<TrajectoryPositionImpl>, public XmlParserBase<TrajectoryPositionImpl>
            {
            public:
                AttributeS(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrajectoryPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__S, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetS(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__S, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__S, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__S, std::make_shared<AttributeS>(_messageLogger, _filename)));
            class AttributeT: public IAttributeParser<TrajectoryPositionImpl>, public XmlParserBase<TrajectoryPositionImpl>
            {
            public:
                AttributeT(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrajectoryPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__T, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetT(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__T, std::make_shared<AttributeT>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrajectoryPositionImpl>>> TrajectoryPositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrajectoryPositionImpl>>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrajectoryRefParser>(_messageLogger, _filename));
            return result;
        }

        TrajectoryPositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename);
        }

        void TrajectoryPositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryPositionImpl>& object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            object->SetOrientation(orientation);
        }
        
        int TrajectoryPositionXmlParser::SubElementOrientationParser::GetMinOccur() 
        {
            return 0;
        }

        int TrajectoryPositionXmlParser::SubElementOrientationParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrajectoryPositionXmlParser::SubElementOrientationParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
        }

        std::vector<std::string> TrajectoryPositionXmlParser::SubElementOrientationParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ORIENTATION
                    };
        }
        TrajectoryPositionXmlParser::SubElementTrajectoryRefParser::SubElementTrajectoryRefParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trajectoryRefXmlParser = std::make_shared<TrajectoryRefXmlParser>(messageLogger, filename);
        }

        void TrajectoryPositionXmlParser::SubElementTrajectoryRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryPositionImpl>& object)
        {
            auto trajectoryRef = std::make_shared<TrajectoryRefImpl>();
            // Setting the parent
            trajectoryRef->SetParent(object);
            _trajectoryRefXmlParser->ParseElement(indexedElement, parserContext, trajectoryRef);

            object->SetTrajectoryRef(trajectoryRef);
        }
        
        int TrajectoryPositionXmlParser::SubElementTrajectoryRefParser::GetMinOccur() 
        {
            return 1;
        }

        int TrajectoryPositionXmlParser::SubElementTrajectoryRefParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrajectoryPositionXmlParser::SubElementTrajectoryRefParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAJECTORY_REF ;
        }

        std::vector<std::string> TrajectoryPositionXmlParser::SubElementTrajectoryRefParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAJECTORY_REF
                    };
        }
  
        TrajectoryPositionXmlParser::TrajectoryPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TrajectoryRefImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TrajectoryRefXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryRefImpl>>> TrajectoryRefXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryRefImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrajectoryRefImpl>>> TrajectoryRefXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrajectoryRefImpl>>> result;
            result.push_back(std::make_shared<SubElementTrajectoryParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            return result;
        }

        TrajectoryRefXmlParser::SubElementTrajectoryParser::SubElementTrajectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trajectoryXmlParser = std::make_shared<TrajectoryXmlParser>(messageLogger, filename);
        }

        void TrajectoryRefXmlParser::SubElementTrajectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryRefImpl>& object)
        {
            auto trajectory = std::make_shared<TrajectoryImpl>();
            // Setting the parent
            trajectory->SetParent(object);
            _trajectoryXmlParser->ParseElement(indexedElement, parserContext, trajectory);

            object->SetTrajectory(trajectory);
        }
        
        int TrajectoryRefXmlParser::SubElementTrajectoryParser::GetMinOccur() 
        {
            return 1;
        }

        int TrajectoryRefXmlParser::SubElementTrajectoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrajectoryRefXmlParser::SubElementTrajectoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAJECTORY ;
        }

        std::vector<std::string> TrajectoryRefXmlParser::SubElementTrajectoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAJECTORY
                    };
        }
        TrajectoryRefXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void TrajectoryRefXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryRefImpl>& object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            object->SetCatalogReference(catalogReference);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(std::dynamic_pointer_cast<ICatalogReference>(catalogReference));
        }
        
        int TrajectoryRefXmlParser::SubElementCatalogReferenceParser::GetMinOccur() 
        {
            return 1;
        }

        int TrajectoryRefXmlParser::SubElementCatalogReferenceParser::GetMaxOccur() 
        {
            return 1;
        }

        bool TrajectoryRefXmlParser::SubElementCatalogReferenceParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
        }

        std::vector<std::string> TrajectoryRefXmlParser::SubElementCatalogReferenceParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                    };
        }
  
        TrajectoryRefXmlParser::TrajectoryRefXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TransitionDynamicsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TransitionDynamicsXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TransitionDynamicsImpl>>> TransitionDynamicsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TransitionDynamicsImpl>>> result;

            class AttributeDynamicsDimension: public IAttributeParser<TransitionDynamicsImpl>, public XmlParserBase<TransitionDynamicsImpl>
            {
            public:
                AttributeDynamicsDimension(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TransitionDynamicsImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = DynamicsDimension::GetFromLiteral(attributeValue);
                        if (kResult != DynamicsDimension::UNKNOWN)
                        {
                            object->SetDynamicsDimension(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION, std::make_shared<AttributeDynamicsDimension>(_messageLogger, _filename)));
            class AttributeDynamicsShape: public IAttributeParser<TransitionDynamicsImpl>, public XmlParserBase<TransitionDynamicsImpl>
            {
            public:
                AttributeDynamicsShape(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TransitionDynamicsImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = DynamicsShape::GetFromLiteral(attributeValue);
                        if (kResult != DynamicsShape::UNKNOWN)
                        {
                            object->SetDynamicsShape(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, std::make_shared<AttributeDynamicsShape>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<TransitionDynamicsImpl>, public XmlParserBase<TransitionDynamicsImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TransitionDynamicsImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TransitionDynamicsImpl>>> TransitionDynamicsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TransitionDynamicsImpl>>> result;
            return result;
        }

  
        TransitionDynamicsXmlParser::TransitionDynamicsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TraveledDistanceConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TraveledDistanceConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TraveledDistanceConditionImpl>>> TraveledDistanceConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TraveledDistanceConditionImpl>>> result;

            class AttributeValue: public IAttributeParser<TraveledDistanceConditionImpl>, public XmlParserBase<TraveledDistanceConditionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TraveledDistanceConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TraveledDistanceConditionImpl>>> TraveledDistanceConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TraveledDistanceConditionImpl>>> result;
            return result;
        }

  
        TraveledDistanceConditionXmlParser::TraveledDistanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TriggerImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TriggerXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TriggerImpl>>> TriggerXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TriggerImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TriggerImpl>>> TriggerXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TriggerImpl>>> result;
            result.push_back(std::make_shared<SubElementConditionGroupsParser>(_messageLogger, _filename));
            return result;
        }

        TriggerXmlParser::SubElementConditionGroupsParser::SubElementConditionGroupsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _conditionGroupXmlParser = std::make_shared<ConditionGroupXmlParser>(messageLogger, filename);
        }

        void TriggerXmlParser::SubElementConditionGroupsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TriggerImpl>& object)
        {
            auto conditionGroups = std::make_shared<ConditionGroupImpl>();
            // Setting the parent
            conditionGroups->SetParent(object);
            _conditionGroupXmlParser->ParseElement(indexedElement, parserContext, conditionGroups);
            auto conditionGroupsList = object->GetWriterConditionGroups();
            conditionGroupsList.push_back(conditionGroups);
            object->SetConditionGroups(conditionGroupsList);
        }
        
        int TriggerXmlParser::SubElementConditionGroupsParser::GetMinOccur() 
        {
            return 0;
        }

        int TriggerXmlParser::SubElementConditionGroupsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool TriggerXmlParser::SubElementConditionGroupsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONDITION_GROUP ;
        }

        std::vector<std::string> TriggerXmlParser::SubElementConditionGroupsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONDITION_GROUP
                    };
        }
  
        TriggerXmlParser::TriggerXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a TriggeringEntitiesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            TriggeringEntitiesXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<TriggeringEntitiesImpl>>> TriggeringEntitiesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TriggeringEntitiesImpl>>> result;

            class AttributeTriggeringEntitiesRule: public IAttributeParser<TriggeringEntitiesImpl>, public XmlParserBase<TriggeringEntitiesImpl>
            {
            public:
                AttributeTriggeringEntitiesRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TriggeringEntitiesImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = TriggeringEntitiesRule::GetFromLiteral(attributeValue);
                        if (kResult != TriggeringEntitiesRule::UNKNOWN)
                        {
                            object->SetTriggeringEntitiesRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE, std::make_shared<AttributeTriggeringEntitiesRule>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TriggeringEntitiesImpl>>> TriggeringEntitiesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TriggeringEntitiesImpl>>> result;
            result.push_back(std::make_shared<SubElementEntityRefsParser>(_messageLogger, _filename));
            return result;
        }

        TriggeringEntitiesXmlParser::SubElementEntityRefsParser::SubElementEntityRefsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entityRefXmlParser = std::make_shared<EntityRefXmlParser>(messageLogger, filename);
        }

        void TriggeringEntitiesXmlParser::SubElementEntityRefsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TriggeringEntitiesImpl>& object)
        {
            auto entityRefs = std::make_shared<EntityRefImpl>();
            // Setting the parent
            entityRefs->SetParent(object);
            _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRefs);
            auto entityRefsList = object->GetWriterEntityRefs();
            entityRefsList.push_back(entityRefs);
            object->SetEntityRefs(entityRefsList);
        }
        
        int TriggeringEntitiesXmlParser::SubElementEntityRefsParser::GetMinOccur() 
        {
            return 1;
        }

        int TriggeringEntitiesXmlParser::SubElementEntityRefsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool TriggeringEntitiesXmlParser::SubElementEntityRefsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
        }

        std::vector<std::string> TriggeringEntitiesXmlParser::SubElementEntityRefsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENTITY_REF
                    };
        }
  
        TriggeringEntitiesXmlParser::TriggeringEntitiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a UniformDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            UniformDistributionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<UniformDistributionImpl>>> UniformDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<UniformDistributionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<UniformDistributionImpl>>> UniformDistributionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<UniformDistributionImpl>>> result;
            result.push_back(std::make_shared<SubElementRangeParser>(_messageLogger, _filename));
            return result;
        }

        UniformDistributionXmlParser::SubElementRangeParser::SubElementRangeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _rangeXmlParser = std::make_shared<RangeXmlParser>(messageLogger, filename);
        }

        void UniformDistributionXmlParser::SubElementRangeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<UniformDistributionImpl>& object)
        {
            auto range = std::make_shared<RangeImpl>();
            // Setting the parent
            range->SetParent(object);
            _rangeXmlParser->ParseElement(indexedElement, parserContext, range);

            object->SetRange(range);
        }
        
        int UniformDistributionXmlParser::SubElementRangeParser::GetMinOccur() 
        {
            return 1;
        }

        int UniformDistributionXmlParser::SubElementRangeParser::GetMaxOccur() 
        {
            return 1;
        }

        bool UniformDistributionXmlParser::SubElementRangeParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RANGE ;
        }

        std::vector<std::string> UniformDistributionXmlParser::SubElementRangeParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RANGE
                    };
        }
  
        UniformDistributionXmlParser::UniformDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a UsedAreaImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            UsedAreaXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<UsedAreaImpl>>> UsedAreaXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<UsedAreaImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<UsedAreaImpl>>> UsedAreaXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<UsedAreaImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionsParser>(_messageLogger, _filename));
            return result;
        }

        UsedAreaXmlParser::SubElementPositionsParser::SubElementPositionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void UsedAreaXmlParser::SubElementPositionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<UsedAreaImpl>& object)
        {
            auto positions = std::make_shared<PositionImpl>();
            // Setting the parent
            positions->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, positions);
            auto positionsList = object->GetWriterPositions();
            positionsList.push_back(positions);
            object->SetPositions(positionsList);
        }
        
        int UsedAreaXmlParser::SubElementPositionsParser::GetMinOccur() 
        {
            return 2;
        }

        int UsedAreaXmlParser::SubElementPositionsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool UsedAreaXmlParser::SubElementPositionsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> UsedAreaXmlParser::SubElementPositionsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        UsedAreaXmlParser::UsedAreaXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a UserDefinedActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            UserDefinedActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<UserDefinedActionImpl>>> UserDefinedActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<UserDefinedActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<UserDefinedActionImpl>>> UserDefinedActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<UserDefinedActionImpl>>> result;
            result.push_back(std::make_shared<SubElementCustomCommandActionParser>(_messageLogger, _filename));
            return result;
        }

        UserDefinedActionXmlParser::SubElementCustomCommandActionParser::SubElementCustomCommandActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _customCommandActionXmlParser = std::make_shared<CustomCommandActionXmlParser>(messageLogger, filename);
        }

        void UserDefinedActionXmlParser::SubElementCustomCommandActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<UserDefinedActionImpl>& object)
        {
            auto customCommandAction = std::make_shared<CustomCommandActionImpl>();
            // Setting the parent
            customCommandAction->SetParent(object);
            _customCommandActionXmlParser->ParseElement(indexedElement, parserContext, customCommandAction);

            object->SetCustomCommandAction(customCommandAction);
        }
        
        int UserDefinedActionXmlParser::SubElementCustomCommandActionParser::GetMinOccur() 
        {
            return 1;
        }

        int UserDefinedActionXmlParser::SubElementCustomCommandActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool UserDefinedActionXmlParser::SubElementCustomCommandActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CUSTOM_COMMAND_ACTION ;
        }

        std::vector<std::string> UserDefinedActionXmlParser::SubElementCustomCommandActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CUSTOM_COMMAND_ACTION
                    };
        }
  
        UserDefinedActionXmlParser::UserDefinedActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a UserDefinedDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        bool UserDefinedDistributionXmlParser::IsContentRequired()
        {
          return false;
        }

        std::map<std::string, std::shared_ptr<IAttributeParser<UserDefinedDistributionImpl>>> UserDefinedDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<UserDefinedDistributionImpl>>> result;

            class AttributeType: public IAttributeParser<UserDefinedDistributionImpl>, public XmlParserBase<UserDefinedDistributionImpl>
            {
            public:
                AttributeType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<UserDefinedDistributionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetType(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<AttributeType>(_messageLogger, _filename)));
            return result;
        }
        void UserDefinedDistributionXmlParser::SetContentProperty(const std::string content, std::shared_ptr<UserDefinedDistributionImpl>& object)
        {
            object->SetContent(content);
        }
  
        UserDefinedDistributionXmlParser::UserDefinedDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlSimpleContentParser(messageLogger, filename) {}
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a UserDefinedValueConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            UserDefinedValueConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<UserDefinedValueConditionImpl>>> UserDefinedValueConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<UserDefinedValueConditionImpl>>> result;

            class AttributeName: public IAttributeParser<UserDefinedValueConditionImpl>, public XmlParserBase<UserDefinedValueConditionImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<UserDefinedValueConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            class AttributeRule: public IAttributeParser<UserDefinedValueConditionImpl>, public XmlParserBase<UserDefinedValueConditionImpl>
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<UserDefinedValueConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            object->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<UserDefinedValueConditionImpl>, public XmlParserBase<UserDefinedValueConditionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<UserDefinedValueConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<UserDefinedValueConditionImpl>>> UserDefinedValueConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<UserDefinedValueConditionImpl>>> result;
            return result;
        }

  
        UserDefinedValueConditionXmlParser::UserDefinedValueConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ValueConstraintImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ValueConstraintXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<ValueConstraintImpl>>> ValueConstraintXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ValueConstraintImpl>>> result;

            class AttributeRule: public IAttributeParser<ValueConstraintImpl>, public XmlParserBase<ValueConstraintImpl>
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ValueConstraintImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Rule::GetFromLiteral(attributeValue);
                        if (kResult != Rule::UNKNOWN)
                        {
                            object->SetRule(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<ValueConstraintImpl>, public XmlParserBase<ValueConstraintImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ValueConstraintImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetValue(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ValueConstraintImpl>>> ValueConstraintXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ValueConstraintImpl>>> result;
            return result;
        }

  
        ValueConstraintXmlParser::ValueConstraintXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ValueConstraintGroupImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ValueConstraintGroupXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<ValueConstraintGroupImpl>>> ValueConstraintGroupXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ValueConstraintGroupImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ValueConstraintGroupImpl>>> ValueConstraintGroupXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ValueConstraintGroupImpl>>> result;
            result.push_back(std::make_shared<SubElementConstraintsParser>(_messageLogger, _filename));
            return result;
        }

        ValueConstraintGroupXmlParser::SubElementConstraintsParser::SubElementConstraintsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _valueConstraintXmlParser = std::make_shared<ValueConstraintXmlParser>(messageLogger, filename);
        }

        void ValueConstraintGroupXmlParser::SubElementConstraintsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ValueConstraintGroupImpl>& object)
        {
            auto constraints = std::make_shared<ValueConstraintImpl>();
            // Setting the parent
            constraints->SetParent(object);
            _valueConstraintXmlParser->ParseElement(indexedElement, parserContext, constraints);
            auto constraintsList = object->GetWriterConstraints();
            constraintsList.push_back(constraints);
            object->SetConstraints(constraintsList);
        }
        
        int ValueConstraintGroupXmlParser::SubElementConstraintsParser::GetMinOccur() 
        {
            return 1;
        }

        int ValueConstraintGroupXmlParser::SubElementConstraintsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ValueConstraintGroupXmlParser::SubElementConstraintsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__VALUE_CONSTRAINT ;
        }

        std::vector<std::string> ValueConstraintGroupXmlParser::SubElementConstraintsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__VALUE_CONSTRAINT
                    };
        }
  
        ValueConstraintGroupXmlParser::ValueConstraintGroupXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a ValueSetDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ValueSetDistributionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<ValueSetDistributionImpl>>> ValueSetDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ValueSetDistributionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ValueSetDistributionImpl>>> ValueSetDistributionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ValueSetDistributionImpl>>> result;
            result.push_back(std::make_shared<SubElementParameterValueSetsParser>(_messageLogger, _filename));
            return result;
        }

        ValueSetDistributionXmlParser::SubElementParameterValueSetsParser::SubElementParameterValueSetsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterValueSetXmlParser = std::make_shared<ParameterValueSetXmlParser>(messageLogger, filename);
        }

        void ValueSetDistributionXmlParser::SubElementParameterValueSetsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ValueSetDistributionImpl>& object)
        {
            auto parameterValueSets = std::make_shared<ParameterValueSetImpl>();
            // Setting the parent
            parameterValueSets->SetParent(object);
            _parameterValueSetXmlParser->ParseElement(indexedElement, parserContext, parameterValueSets);
            auto parameterValueSetsList = object->GetWriterParameterValueSets();
            parameterValueSetsList.push_back(parameterValueSets);
            object->SetParameterValueSets(parameterValueSetsList);
        }
        
        int ValueSetDistributionXmlParser::SubElementParameterValueSetsParser::GetMinOccur() 
        {
            return 1;
        }

        int ValueSetDistributionXmlParser::SubElementParameterValueSetsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ValueSetDistributionXmlParser::SubElementParameterValueSetsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_VALUE_SET ;
        }

        std::vector<std::string> ValueSetDistributionXmlParser::SubElementParameterValueSetsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PARAMETER_VALUE_SET
                    };
        }
  
        ValueSetDistributionXmlParser::ValueSetDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a VehicleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            VehicleXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleImpl>>> VehicleXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<VehicleImpl>>> result;

            class AttributeMass: public IAttributeParser<VehicleImpl>, public XmlParserBase<VehicleImpl>
            {
            public:
                AttributeMass(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VehicleImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MASS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetMass(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MASS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MASS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MASS, std::make_shared<AttributeMass>(_messageLogger, _filename)));
            class AttributeModel3d: public IAttributeParser<VehicleImpl>, public XmlParserBase<VehicleImpl>
            {
            public:
                AttributeModel3d(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VehicleImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetModel3d(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MODEL3D, std::make_shared<AttributeModel3d>(_messageLogger, _filename)));
            class AttributeName: public IAttributeParser<VehicleImpl>, public XmlParserBase<VehicleImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VehicleImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            class AttributeVehicleCategory: public IAttributeParser<VehicleImpl>, public XmlParserBase<VehicleImpl>
            {
            public:
                AttributeVehicleCategory(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VehicleImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = VehicleCategory::GetFromLiteral(attributeValue);
                        if (kResult != VehicleCategory::UNKNOWN)
                        {
                            object->SetVehicleCategory(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY, std::make_shared<AttributeVehicleCategory>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<VehicleImpl>>> VehicleXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<VehicleImpl>>> result;
            result.push_back(std::make_shared<WrappedListParser<VehicleImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementBoundingBoxParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPerformanceParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementAxlesParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPropertiesParser>(_messageLogger, _filename));
            return result;
        }

        VehicleXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void VehicleXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = object->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
        }
        
        int VehicleXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int VehicleXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool VehicleXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> VehicleXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        VehicleXmlParser::SubElementBoundingBoxParser::SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _boundingBoxXmlParser = std::make_shared<BoundingBoxXmlParser>(messageLogger, filename);
        }

        void VehicleXmlParser::SubElementBoundingBoxParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object)
        {
            auto boundingBox = std::make_shared<BoundingBoxImpl>();
            // Setting the parent
            boundingBox->SetParent(object);
            _boundingBoxXmlParser->ParseElement(indexedElement, parserContext, boundingBox);

            object->SetBoundingBox(boundingBox);
        }
        
        int VehicleXmlParser::SubElementBoundingBoxParser::GetMinOccur() 
        {
            return 1;
        }

        int VehicleXmlParser::SubElementBoundingBoxParser::GetMaxOccur() 
        {
            return 1;
        }

        bool VehicleXmlParser::SubElementBoundingBoxParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__BOUNDING_BOX ;
        }

        std::vector<std::string> VehicleXmlParser::SubElementBoundingBoxParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__BOUNDING_BOX
                    };
        }
        VehicleXmlParser::SubElementPerformanceParser::SubElementPerformanceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _performanceXmlParser = std::make_shared<PerformanceXmlParser>(messageLogger, filename);
        }

        void VehicleXmlParser::SubElementPerformanceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object)
        {
            auto performance = std::make_shared<PerformanceImpl>();
            // Setting the parent
            performance->SetParent(object);
            _performanceXmlParser->ParseElement(indexedElement, parserContext, performance);

            object->SetPerformance(performance);
        }
        
        int VehicleXmlParser::SubElementPerformanceParser::GetMinOccur() 
        {
            return 1;
        }

        int VehicleXmlParser::SubElementPerformanceParser::GetMaxOccur() 
        {
            return 1;
        }

        bool VehicleXmlParser::SubElementPerformanceParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PERFORMANCE ;
        }

        std::vector<std::string> VehicleXmlParser::SubElementPerformanceParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PERFORMANCE
                    };
        }
        VehicleXmlParser::SubElementAxlesParser::SubElementAxlesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _axlesXmlParser = std::make_shared<AxlesXmlParser>(messageLogger, filename);
        }

        void VehicleXmlParser::SubElementAxlesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object)
        {
            auto axles = std::make_shared<AxlesImpl>();
            // Setting the parent
            axles->SetParent(object);
            _axlesXmlParser->ParseElement(indexedElement, parserContext, axles);

            object->SetAxles(axles);
        }
        
        int VehicleXmlParser::SubElementAxlesParser::GetMinOccur() 
        {
            return 1;
        }

        int VehicleXmlParser::SubElementAxlesParser::GetMaxOccur() 
        {
            return 1;
        }

        bool VehicleXmlParser::SubElementAxlesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__AXLES ;
        }

        std::vector<std::string> VehicleXmlParser::SubElementAxlesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__AXLES
                    };
        }
        VehicleXmlParser::SubElementPropertiesParser::SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _propertiesXmlParser = std::make_shared<PropertiesXmlParser>(messageLogger, filename);
        }

        void VehicleXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object)
        {
            auto properties = std::make_shared<PropertiesImpl>();
            // Setting the parent
            properties->SetParent(object);
            _propertiesXmlParser->ParseElement(indexedElement, parserContext, properties);

            object->SetProperties(properties);
        }
        
        int VehicleXmlParser::SubElementPropertiesParser::GetMinOccur() 
        {
            return 1;
        }

        int VehicleXmlParser::SubElementPropertiesParser::GetMaxOccur() 
        {
            return 1;
        }

        bool VehicleXmlParser::SubElementPropertiesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PROPERTIES ;
        }

        std::vector<std::string> VehicleXmlParser::SubElementPropertiesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PROPERTIES
                    };
        }
  
        VehicleXmlParser::VehicleXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a VehicleCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            VehicleCatalogLocationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCatalogLocationImpl>>> VehicleCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCatalogLocationImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<VehicleCatalogLocationImpl>>> VehicleCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<VehicleCatalogLocationImpl>>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename));
            return result;
        }

        VehicleCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename);
        }

        void VehicleCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCatalogLocationImpl>& object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            object->SetDirectory(directory);
        }
        
        int VehicleCatalogLocationXmlParser::SubElementDirectoryParser::GetMinOccur() 
        {
            return 1;
        }

        int VehicleCatalogLocationXmlParser::SubElementDirectoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool VehicleCatalogLocationXmlParser::SubElementDirectoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
        }

        std::vector<std::string> VehicleCatalogLocationXmlParser::SubElementDirectoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DIRECTORY
                    };
        }
  
        VehicleCatalogLocationXmlParser::VehicleCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a VehicleCategoryDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            VehicleCategoryDistributionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCategoryDistributionImpl>>> VehicleCategoryDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCategoryDistributionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<VehicleCategoryDistributionImpl>>> VehicleCategoryDistributionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<VehicleCategoryDistributionImpl>>> result;
            result.push_back(std::make_shared<SubElementVehicleCategoryDistributionEntriesParser>(_messageLogger, _filename));
            return result;
        }

        VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::SubElementVehicleCategoryDistributionEntriesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _vehicleCategoryDistributionEntryXmlParser = std::make_shared<VehicleCategoryDistributionEntryXmlParser>(messageLogger, filename);
        }

        void VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCategoryDistributionImpl>& object)
        {
            auto vehicleCategoryDistributionEntries = std::make_shared<VehicleCategoryDistributionEntryImpl>();
            // Setting the parent
            vehicleCategoryDistributionEntries->SetParent(object);
            _vehicleCategoryDistributionEntryXmlParser->ParseElement(indexedElement, parserContext, vehicleCategoryDistributionEntries);
            auto vehicleCategoryDistributionEntriesList = object->GetWriterVehicleCategoryDistributionEntries();
            vehicleCategoryDistributionEntriesList.push_back(vehicleCategoryDistributionEntries);
            object->SetVehicleCategoryDistributionEntries(vehicleCategoryDistributionEntriesList);
        }
        
        int VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::GetMinOccur() 
        {
            return 1;
        }

        int VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION_ENTRY ;
        }

        std::vector<std::string> VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION_ENTRY
                    };
        }
  
        VehicleCategoryDistributionXmlParser::VehicleCategoryDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a VehicleCategoryDistributionEntryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            VehicleCategoryDistributionEntryXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCategoryDistributionEntryImpl>>> VehicleCategoryDistributionEntryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCategoryDistributionEntryImpl>>> result;

            class AttributeCategory: public IAttributeParser<VehicleCategoryDistributionEntryImpl>, public XmlParserBase<VehicleCategoryDistributionEntryImpl>
            {
            public:
                AttributeCategory(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VehicleCategoryDistributionEntryImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CATEGORY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = VehicleCategory::GetFromLiteral(attributeValue);
                        if (kResult != VehicleCategory::UNKNOWN)
                        {
                            object->SetCategory(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CATEGORY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CATEGORY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CATEGORY, std::make_shared<AttributeCategory>(_messageLogger, _filename)));
            class AttributeWeight: public IAttributeParser<VehicleCategoryDistributionEntryImpl>, public XmlParserBase<VehicleCategoryDistributionEntryImpl>
            {
            public:
                AttributeWeight(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VehicleCategoryDistributionEntryImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetWeight(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<AttributeWeight>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<VehicleCategoryDistributionEntryImpl>>> VehicleCategoryDistributionEntryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<VehicleCategoryDistributionEntryImpl>>> result;
            return result;
        }

  
        VehicleCategoryDistributionEntryXmlParser::VehicleCategoryDistributionEntryXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a VertexImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            VertexXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<VertexImpl>>> VertexXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<VertexImpl>>> result;

            class AttributeTime: public IAttributeParser<VertexImpl>, public XmlParserBase<VertexImpl>
            {
            public:
                AttributeTime(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VertexImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TIME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetTime(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<AttributeTime>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<VertexImpl>>> VertexXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<VertexImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        VertexXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void VertexXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VertexImpl>& object)
        {
            auto position = std::make_shared<PositionImpl>();
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            object->SetPosition(position);
        }
        
        int VertexXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int VertexXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool VertexXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> VertexXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        VertexXmlParser::VertexXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a VisibilityActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            VisibilityActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<VisibilityActionImpl>>> VisibilityActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<VisibilityActionImpl>>> result;

            class AttributeGraphics: public IAttributeParser<VisibilityActionImpl>, public XmlParserBase<VisibilityActionImpl>
            {
            public:
                AttributeGraphics(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VisibilityActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetGraphics(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS, std::make_shared<AttributeGraphics>(_messageLogger, _filename)));
            class AttributeSensors: public IAttributeParser<VisibilityActionImpl>, public XmlParserBase<VisibilityActionImpl>
            {
            public:
                AttributeSensors(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VisibilityActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SENSORS, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetSensors(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SENSORS, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SENSORS, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SENSORS, std::make_shared<AttributeSensors>(_messageLogger, _filename)));
            class AttributeTraffic: public IAttributeParser<VisibilityActionImpl>, public XmlParserBase<VisibilityActionImpl>
            {
            public:
                AttributeTraffic(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VisibilityActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetTraffic(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC, std::make_shared<AttributeTraffic>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<VisibilityActionImpl>>> VisibilityActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<VisibilityActionImpl>>> result;
            return result;
        }

  
        VisibilityActionXmlParser::VisibilityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a WaypointImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            WaypointXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<WaypointImpl>>> WaypointXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<WaypointImpl>>> result;

            class AttributeRouteStrategy: public IAttributeParser<WaypointImpl>, public XmlParserBase<WaypointImpl>
            {
            public:
                AttributeRouteStrategy(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WaypointImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = RouteStrategy::GetFromLiteral(attributeValue);
                        if (kResult != RouteStrategy::UNKNOWN)
                        {
                            object->SetRouteStrategy(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY, std::make_shared<AttributeRouteStrategy>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<WaypointImpl>>> WaypointXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<WaypointImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        WaypointXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void WaypointXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WaypointImpl>& object)
        {
            auto position = std::make_shared<PositionImpl>();
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            object->SetPosition(position);
        }
        
        int WaypointXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int WaypointXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool WaypointXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> WaypointXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        WaypointXmlParser::WaypointXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a WeatherImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            WeatherXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser<WeatherImpl>>> WeatherXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<WeatherImpl>>> result;

            class AttributeAtmosphericPressure: public IAttributeParser<WeatherImpl>, public XmlParserBase<WeatherImpl>
            {
            public:
                AttributeAtmosphericPressure(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WeatherImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetAtmosphericPressure(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE, std::make_shared<AttributeAtmosphericPressure>(_messageLogger, _filename)));
            class AttributeCloudState: public IAttributeParser<WeatherImpl>, public XmlParserBase<WeatherImpl>
            {
            public:
                AttributeCloudState(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WeatherImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = CloudState::GetFromLiteral(attributeValue);
                        if (kResult != CloudState::UNKNOWN)
                        {
                            object->SetCloudState(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE, std::make_shared<AttributeCloudState>(_messageLogger, _filename)));
            class AttributeTemperature: public IAttributeParser<WeatherImpl>, public XmlParserBase<WeatherImpl>
            {
            public:
                AttributeTemperature(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WeatherImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetTemperature(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE, std::make_shared<AttributeTemperature>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<WeatherImpl>>> WeatherXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<WeatherImpl>>> result;
            result.push_back(std::make_shared<SubElementSunParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementFogParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPrecipitationParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementWindParser>(_messageLogger, _filename));
            return result;
        }

        WeatherXmlParser::SubElementSunParser::SubElementSunParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _sunXmlParser = std::make_shared<SunXmlParser>(messageLogger, filename);
        }

        void WeatherXmlParser::SubElementSunParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WeatherImpl>& object)
        {
            auto sun = std::make_shared<SunImpl>();
            // Setting the parent
            sun->SetParent(object);
            _sunXmlParser->ParseElement(indexedElement, parserContext, sun);

            object->SetSun(sun);
        }
        
        int WeatherXmlParser::SubElementSunParser::GetMinOccur() 
        {
            return 0;
        }

        int WeatherXmlParser::SubElementSunParser::GetMaxOccur() 
        {
            return 1;
        }

        bool WeatherXmlParser::SubElementSunParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SUN ;
        }

        std::vector<std::string> WeatherXmlParser::SubElementSunParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SUN
                    };
        }
        WeatherXmlParser::SubElementFogParser::SubElementFogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _fogXmlParser = std::make_shared<FogXmlParser>(messageLogger, filename);
        }

        void WeatherXmlParser::SubElementFogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WeatherImpl>& object)
        {
            auto fog = std::make_shared<FogImpl>();
            // Setting the parent
            fog->SetParent(object);
            _fogXmlParser->ParseElement(indexedElement, parserContext, fog);

            object->SetFog(fog);
        }
        
        int WeatherXmlParser::SubElementFogParser::GetMinOccur() 
        {
            return 0;
        }

        int WeatherXmlParser::SubElementFogParser::GetMaxOccur() 
        {
            return 1;
        }

        bool WeatherXmlParser::SubElementFogParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__FOG ;
        }

        std::vector<std::string> WeatherXmlParser::SubElementFogParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__FOG
                    };
        }
        WeatherXmlParser::SubElementPrecipitationParser::SubElementPrecipitationParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _precipitationXmlParser = std::make_shared<PrecipitationXmlParser>(messageLogger, filename);
        }

        void WeatherXmlParser::SubElementPrecipitationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WeatherImpl>& object)
        {
            auto precipitation = std::make_shared<PrecipitationImpl>();
            // Setting the parent
            precipitation->SetParent(object);
            _precipitationXmlParser->ParseElement(indexedElement, parserContext, precipitation);

            object->SetPrecipitation(precipitation);
        }
        
        int WeatherXmlParser::SubElementPrecipitationParser::GetMinOccur() 
        {
            return 0;
        }

        int WeatherXmlParser::SubElementPrecipitationParser::GetMaxOccur() 
        {
            return 1;
        }

        bool WeatherXmlParser::SubElementPrecipitationParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PRECIPITATION ;
        }

        std::vector<std::string> WeatherXmlParser::SubElementPrecipitationParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PRECIPITATION
                    };
        }
        WeatherXmlParser::SubElementWindParser::SubElementWindParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _windXmlParser = std::make_shared<WindXmlParser>(messageLogger, filename);
        }

        void WeatherXmlParser::SubElementWindParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WeatherImpl>& object)
        {
            auto wind = std::make_shared<WindImpl>();
            // Setting the parent
            wind->SetParent(object);
            _windXmlParser->ParseElement(indexedElement, parserContext, wind);

            object->SetWind(wind);
        }
        
        int WeatherXmlParser::SubElementWindParser::GetMinOccur() 
        {
            return 0;
        }

        int WeatherXmlParser::SubElementWindParser::GetMaxOccur() 
        {
            return 1;
        }

        bool WeatherXmlParser::SubElementWindParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__WIND ;
        }

        std::vector<std::string> WeatherXmlParser::SubElementWindParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__WIND
                    };
        }
  
        WeatherXmlParser::WeatherXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a WindImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            WindXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<WindImpl>>> WindXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<WindImpl>>> result;

            class AttributeDirection: public IAttributeParser<WindImpl>, public XmlParserBase<WindImpl>
            {
            public:
                AttributeDirection(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WindImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDirection(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, std::make_shared<AttributeDirection>(_messageLogger, _filename)));
            class AttributeSpeed: public IAttributeParser<WindImpl>, public XmlParserBase<WindImpl>
            {
            public:
                AttributeSpeed(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WindImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SPEED, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetSpeed(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SPEED, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SPEED, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SPEED, std::make_shared<AttributeSpeed>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<WindImpl>>> WindXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<WindImpl>>> result;
            return result;
        }

  
        WindXmlParser::WindXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Filling a WorldPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            WorldPositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser<WorldPositionImpl>>> WorldPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<WorldPositionImpl>>> result;

            class AttributeH: public IAttributeParser<WorldPositionImpl>, public XmlParserBase<WorldPositionImpl>
            {
            public:
                AttributeH(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WorldPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__H, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetH(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__H, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__H, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__H, std::make_shared<AttributeH>(_messageLogger, _filename)));
            class AttributeP: public IAttributeParser<WorldPositionImpl>, public XmlParserBase<WorldPositionImpl>
            {
            public:
                AttributeP(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WorldPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__P, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetP(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__P, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__P, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__P, std::make_shared<AttributeP>(_messageLogger, _filename)));
            class AttributeR: public IAttributeParser<WorldPositionImpl>, public XmlParserBase<WorldPositionImpl>
            {
            public:
                AttributeR(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WorldPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__R, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetR(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__R, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__R, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__R, std::make_shared<AttributeR>(_messageLogger, _filename)));
            class AttributeX: public IAttributeParser<WorldPositionImpl>, public XmlParserBase<WorldPositionImpl>
            {
            public:
                AttributeX(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WorldPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__X, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetX(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__X, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__X, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__X, std::make_shared<AttributeX>(_messageLogger, _filename)));
            class AttributeY: public IAttributeParser<WorldPositionImpl>, public XmlParserBase<WorldPositionImpl>
            {
            public:
                AttributeY(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WorldPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__Y, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetY(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__Y, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__Y, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__Y, std::make_shared<AttributeY>(_messageLogger, _filename)));
            class AttributeZ: public IAttributeParser<WorldPositionImpl>, public XmlParserBase<WorldPositionImpl>
            {
            public:
                AttributeZ(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WorldPositionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__Z, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetZ(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__Z, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__Z, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__Z, std::make_shared<AttributeZ>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<WorldPositionImpl>>> WorldPositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<WorldPositionImpl>>> result;
            return result;
        }

  
        WorldPositionXmlParser::WorldPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

    
    }
}
