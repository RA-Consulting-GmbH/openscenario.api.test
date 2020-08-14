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
 
#include "XmlParsers.h"
#include "NamedReferenceProxy.h"
#include "FileContentMessage.h"
#include "Position.h"
#include "Textmarker.h"
#include "ErrorLevel.h"
#include "WrappedListParser.h"
#include "CatalogReferenceParserContext.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace V_1_0
    {

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void ParameterActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing ParameterAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing ParameterAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterActionImpl>>> ParameterActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ParameterActionImpl>>> result;

            class AttributeParameterRef: public IAttributeParser<ParameterActionImpl>, public XmlParserBase<ParameterActionImpl>
            {
            public:
                AttributeParameterRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        NamedReferenceProxy<IParameterDeclaration> proxy(attributeValue);
                        proxy.SetParent(object);
                        object->SetParameterRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, std::make_shared<AttributeParameterRef>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ParameterActionImpl>>> ParameterActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ParameterActionImpl>>> result;
            result.push_back(std::make_shared<SubElementSetActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementModifyActionParser>(_messageLogger, _filename));
            return result;
        }

        ParameterActionXmlParser::SubElementSetActionParser::SubElementSetActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterSetActionXmlParser = std::make_shared<ParameterSetActionXmlParser>(messageLogger, filename);
        }

        void ParameterActionXmlParser::SubElementSetActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterActionImpl>& object)
        {
            auto setAction = std::make_shared<ParameterSetActionImpl>();
            // Setting the parent
            setAction->SetParent(object);
            _parameterSetActionXmlParser->ParseElement(indexedElement, parserContext, setAction);

            object->SetSetAction(setAction);
        }
        ParameterActionXmlParser::SubElementModifyActionParser::SubElementModifyActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterModifyActionXmlParser = std::make_shared<ParameterModifyActionXmlParser>(messageLogger, filename);
        }

        void ParameterActionXmlParser::SubElementModifyActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterActionImpl>& object)
        {
            auto modifyAction = std::make_shared<ParameterModifyActionImpl>();
            // Setting the parent
            modifyAction->SetParent(object);
            _parameterModifyActionXmlParser->ParseElement(indexedElement, parserContext, modifyAction);

            object->SetModifyAction(modifyAction);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterAddValueRuleImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void ParameterAddValueRuleXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterAddValueRuleImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing ParameterAddValueRule", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing ParameterAddValueRule", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterAddValueRuleImpl>>> ParameterAddValueRuleXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ParameterAddValueRuleImpl>>> result;

            class AttributeValue: public IAttributeParser<ParameterAddValueRuleImpl>, public XmlParserBase<ParameterAddValueRuleImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterAddValueRuleImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<ParameterAddValueRuleImpl>>> ParameterAddValueRuleXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ParameterAddValueRuleImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterAssignmentImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void ParameterAssignmentXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterAssignmentImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing ParameterAssignment", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing ParameterAssignment", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterAssignmentImpl>>> ParameterAssignmentXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ParameterAssignmentImpl>>> result;

            class AttributeParameterRef: public IAttributeParser<ParameterAssignmentImpl>, public XmlParserBase<ParameterAssignmentImpl>
            {
            public:
                AttributeParameterRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterAssignmentImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    // This is a special case for ParameterDeclaration.name or ParamterAssignment.parameterRef
                    // Proxy
                    NamedReferenceProxy<IParameterDeclaration> proxy(StripDollarSign(attributeValue));
                    proxy.SetParent(object);
                    object->SetParameterRef(proxy);
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, std::make_shared<AttributeParameterRef>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<ParameterAssignmentImpl>, public XmlParserBase<ParameterAssignmentImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterAssignmentImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<ParameterAssignmentImpl>>> ParameterAssignmentXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ParameterAssignmentImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void ParameterConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing ParameterCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing ParameterCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterConditionImpl>>> ParameterConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ParameterConditionImpl>>> result;

            class AttributeParameterRef: public IAttributeParser<ParameterConditionImpl>, public XmlParserBase<ParameterConditionImpl>
            {
            public:
                AttributeParameterRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Proxy
                        NamedReferenceProxy<IParameterDeclaration> proxy(attributeValue);
                        proxy.SetParent(object);
                        object->SetParameterRef(proxy);
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, std::make_shared<AttributeParameterRef>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser<ParameterConditionImpl>, public XmlParserBase<ParameterConditionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterConditionImpl>& object) override
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
            class AttributeRule: public IAttributeParser<ParameterConditionImpl>, public XmlParserBase<ParameterConditionImpl>
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterConditionImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<ParameterConditionImpl>>> ParameterConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ParameterConditionImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterDeclarationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void ParameterDeclarationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterDeclarationImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing ParameterDeclaration", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing ParameterDeclaration", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterModifyActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void ParameterModifyActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterModifyActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing ParameterModifyAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing ParameterModifyAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterMultiplyByValueRuleImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void ParameterMultiplyByValueRuleXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterMultiplyByValueRuleImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing ParameterMultiplyByValueRule", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing ParameterMultiplyByValueRule", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterSetActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void ParameterSetActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterSetActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing ParameterSetAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing ParameterSetAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PedestrianImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PedestrianXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Pedestrian", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Pedestrian", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<PedestrianImpl>>> PedestrianXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PedestrianImpl>>> result;

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
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MODEL, std::make_shared<AttributeModel>(_messageLogger, _filename)));
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
            auto parameterDeclarationsList = object->GetParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PedestrianCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PedestrianCatalogLocationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianCatalogLocationImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing PedestrianCatalogLocation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing PedestrianCatalogLocation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PerformanceImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PerformanceXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PerformanceImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Performance", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Performance", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<PerformanceImpl>>> PerformanceXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PerformanceImpl>>> result;

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PerformanceImpl>>> PerformanceXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PerformanceImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PhaseImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PhaseXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PhaseImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Phase", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Phase", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<PhaseImpl>>> PhaseXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PhaseImpl>>> result;

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
            auto trafficSignalStatesList = object->GetTrafficSignalStates();
            trafficSignalStatesList.push_back(trafficSignalStates);
            object->SetTrafficSignalStates(trafficSignalStatesList);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PolylineImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PolylineXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PolylineImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Polyline", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Polyline", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            auto verticesList = object->GetVertices();
            verticesList.push_back(vertices);
            object->SetVertices(verticesList);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Position", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Position", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PositionInLaneCoordinatesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PositionInLaneCoordinatesXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionInLaneCoordinatesImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing PositionInLaneCoordinates", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing PositionInLaneCoordinates", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<PositionInLaneCoordinatesImpl>>> PositionInLaneCoordinatesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PositionInLaneCoordinatesImpl>>> result;

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PositionInLaneCoordinatesImpl>>> PositionInLaneCoordinatesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PositionInLaneCoordinatesImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PositionInRoadCoordinatesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PositionInRoadCoordinatesXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionInRoadCoordinatesImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing PositionInRoadCoordinates", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing PositionInRoadCoordinates", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PositionOfCurrentEntityImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PositionOfCurrentEntityXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionOfCurrentEntityImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing PositionOfCurrentEntity", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing PositionOfCurrentEntity", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PrecipitationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PrecipitationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrecipitationImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Precipitation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Precipitation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<PrecipitationImpl>>> PrecipitationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<PrecipitationImpl>>> result;

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
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::make_shared<AttributeIntensity>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<PrecipitationImpl>>> PrecipitationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<PrecipitationImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PrivateImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PrivateXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Private", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Private", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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
            auto privateActionsList = object->GetPrivateActions();
            privateActionsList.push_back(privateActions);
            object->SetPrivateActions(privateActionsList);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PrivateActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PrivateActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing PrivateAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing PrivateAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PropertiesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PropertiesXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PropertiesImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Properties", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Properties", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            auto propertiesList = object->GetProperties();
            propertiesList.push_back(properties);
            object->SetProperties(propertiesList);
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
            auto filesList = object->GetFiles();
            filesList.push_back(files);
            object->SetFiles(filesList);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PropertyImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void PropertyXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PropertyImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Property", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Property", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ReachPositionConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void ReachPositionConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ReachPositionConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing ReachPositionCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing ReachPositionCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeDistanceConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RelativeDistanceConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeDistanceConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RelativeDistanceCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RelativeDistanceCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeDistanceConditionImpl>>> RelativeDistanceConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeDistanceConditionImpl>>> result;

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeDistanceConditionImpl>>> RelativeDistanceConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeDistanceConditionImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeLanePositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RelativeLanePositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeLanePositionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RelativeLanePosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RelativeLanePosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeLanePositionImpl>>> RelativeLanePositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeLanePositionImpl>>> result;

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DS, std::make_shared<AttributeDs>(_messageLogger, _filename)));
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeObjectPositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RelativeObjectPositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeObjectPositionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RelativeObjectPosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RelativeObjectPosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeObjectPositionImpl>>> RelativeObjectPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeObjectPositionImpl>>> result;

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeRoadPositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RelativeRoadPositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeRoadPositionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RelativeRoadPosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RelativeRoadPosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeRoadPositionImpl>>> RelativeRoadPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeRoadPositionImpl>>> result;

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeSpeedConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RelativeSpeedConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeSpeedConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RelativeSpeedCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RelativeSpeedCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeSpeedConditionImpl>>> RelativeSpeedConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeSpeedConditionImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeSpeedToMasterImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RelativeSpeedToMasterXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeSpeedToMasterImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RelativeSpeedToMaster", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RelativeSpeedToMaster", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeSpeedToMasterImpl>>> RelativeSpeedToMasterXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeSpeedToMasterImpl>>> result;

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeSpeedToMasterImpl>>> RelativeSpeedToMasterXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeSpeedToMasterImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeTargetLaneImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RelativeTargetLaneXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeTargetLaneImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RelativeTargetLane", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RelativeTargetLane", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeTargetLaneOffsetImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RelativeTargetLaneOffsetXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeTargetLaneOffsetImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RelativeTargetLaneOffset", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RelativeTargetLaneOffset", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeTargetSpeedImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RelativeTargetSpeedXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeTargetSpeedImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RelativeTargetSpeed", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RelativeTargetSpeed", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetSpeedImpl>>> RelativeTargetSpeedXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetSpeedImpl>>> result;

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<RelativeTargetSpeedImpl>>> RelativeTargetSpeedXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<RelativeTargetSpeedImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeWorldPositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RelativeWorldPositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeWorldPositionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RelativeWorldPosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RelativeWorldPosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeWorldPositionImpl>>> RelativeWorldPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RelativeWorldPositionImpl>>> result;

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoadConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RoadConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RoadCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RoadCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoadNetworkImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RoadNetworkXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RoadNetwork", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RoadNetwork", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            auto trafficSignalsList = object->GetTrafficSignals();
            trafficSignalsList.push_back(trafficSignals);
            object->SetTrafficSignals(trafficSignalsList);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoadPositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RoadPositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadPositionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RoadPosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RoadPosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RouteImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RouteXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Route", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Route", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<RouteImpl>>> RouteXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<RouteImpl>>> result;

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
            auto parameterDeclarationsList = object->GetParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
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
            auto waypointsList = object->GetWaypoints();
            waypointsList.push_back(waypoints);
            object->SetWaypoints(waypointsList);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RouteCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RouteCatalogLocationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteCatalogLocationImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RouteCatalogLocation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RouteCatalogLocation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoutePositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RoutePositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutePositionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RoutePosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RoutePosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RouteRefImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RouteRefXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteRefImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RouteRef", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RouteRef", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(catalogReference);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoutingActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void RoutingActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutingActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing RoutingAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing RoutingAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ScenarioDefinitionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void ScenarioDefinitionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing ScenarioDefinition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlGroupParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing ScenarioDefinition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */


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
            auto parameterDeclarationsList = object->GetParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ScenarioObjectImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void ScenarioObjectXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioObjectImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing ScenarioObject", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing ScenarioObject", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SelectedEntitiesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void SelectedEntitiesXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SelectedEntitiesImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing SelectedEntities", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing SelectedEntities", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            auto entityRefList = object->GetEntityRef();
            entityRefList.push_back(entityRef);
            object->SetEntityRef(entityRefList);
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
            auto byTypeList = object->GetByType();
            byTypeList.push_back(byType);
            object->SetByType(byTypeList);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ShapeImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void ShapeXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ShapeImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Shape", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Shape", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SimulationTimeConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void SimulationTimeConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SimulationTimeConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing SimulationTimeCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing SimulationTimeCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<SimulationTimeConditionImpl>>> SimulationTimeConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<SimulationTimeConditionImpl>>> result;

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<SimulationTimeConditionImpl>>> SimulationTimeConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<SimulationTimeConditionImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SpeedActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void SpeedActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing SpeedAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing SpeedAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SpeedActionTargetImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void SpeedActionTargetXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionTargetImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing SpeedActionTarget", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing SpeedActionTarget", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SpeedConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void SpeedConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing SpeedCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing SpeedCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<SpeedConditionImpl>>> SpeedConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<SpeedConditionImpl>>> result;

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<SpeedConditionImpl>>> SpeedConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<SpeedConditionImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a StandStillConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void StandStillConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StandStillConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing StandStillCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing StandStillCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a StoryImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void StoryXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Story", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Story", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            auto parameterDeclarationsList = object->GetParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
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
            auto actsList = object->GetActs();
            actsList.push_back(acts);
            object->SetActs(actsList);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a StoryboardImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void StoryboardXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Storyboard", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Storyboard", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            auto storiesList = object->GetStories();
            storiesList.push_back(stories);
            object->SetStories(storiesList);
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a StoryboardElementStateConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void StoryboardElementStateConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardElementStateConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing StoryboardElementStateCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing StoryboardElementStateCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<StoryboardElementStateConditionImpl>>> StoryboardElementStateConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<StoryboardElementStateConditionImpl>>> result;

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
                        NamedReferenceProxy<IStoryboardElement> proxy(attributeValue);
                        proxy.SetParent(object);
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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<StoryboardElementStateConditionImpl>>> StoryboardElementStateConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<StoryboardElementStateConditionImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SunImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void SunXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SunImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Sun", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Sun", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<SunImpl>>> SunXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<SunImpl>>> result;

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<SunImpl>>> SunXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<SunImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SynchronizeActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void SynchronizeActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SynchronizeActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing SynchronizeAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing SynchronizeAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TeleportActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TeleportActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TeleportActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TeleportAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TeleportAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeHeadwayConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TimeHeadwayConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeHeadwayConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TimeHeadwayCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TimeHeadwayCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TimeHeadwayConditionImpl>>> TimeHeadwayConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TimeHeadwayConditionImpl>>> result;

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
                        NamedReferenceProxy<IEntity> proxy(attributeValue);
                        proxy.SetParent(object);
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
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<AttributeAlongRoute>(_messageLogger, _filename)));
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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TimeHeadwayConditionImpl>>> TimeHeadwayConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TimeHeadwayConditionImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeOfDayImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TimeOfDayXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeOfDayImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TimeOfDay", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TimeOfDay", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeOfDayConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TimeOfDayConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeOfDayConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TimeOfDayCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TimeOfDayCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TimeOfDayConditionImpl>>> TimeOfDayConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TimeOfDayConditionImpl>>> result;

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TimeOfDayConditionImpl>>> TimeOfDayConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TimeOfDayConditionImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeReferenceImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TimeReferenceXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeReferenceImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TimeReference", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TimeReference", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeToCollisionConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TimeToCollisionConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TimeToCollisionCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TimeToCollisionCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TimeToCollisionConditionImpl>>> TimeToCollisionConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TimeToCollisionConditionImpl>>> result;

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
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<AttributeAlongRoute>(_messageLogger, _filename)));
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeToCollisionConditionTargetImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TimeToCollisionConditionTargetXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionTargetImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TimeToCollisionConditionTarget", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TimeToCollisionConditionTarget", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimingImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TimingXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimingImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Timing", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Timing", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TimingImpl>>> TimingXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TimingImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrafficActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrafficAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrafficAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficActionImpl>>> TrafficActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficActionImpl>>> TrafficActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficActionImpl>>> result;
            result.push_back(std::make_shared<SubElementTrafficSourceActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrafficSinkActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrafficSwarmActionParser>(_messageLogger, _filename));
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficDefinitionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrafficDefinitionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficDefinitionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrafficDefinition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrafficDefinition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrafficSignalActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrafficSignalAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrafficSignalAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrafficSignalConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrafficSignalCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrafficSignalCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalControllerImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrafficSignalControllerXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalControllerImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrafficSignalController", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrafficSignalController", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerImpl>>> TrafficSignalControllerXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerImpl>>> result;

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
            auto phasesList = object->GetPhases();
            phasesList.push_back(phases);
            object->SetPhases(phasesList);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalControllerActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrafficSignalControllerActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalControllerActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrafficSignalControllerAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrafficSignalControllerAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerActionImpl>>> TrafficSignalControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerActionImpl>>> result;

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
                        NamedReferenceProxy<ITrafficSignalController> proxy(attributeValue);
                        proxy.SetParent(object);
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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerActionImpl>>> TrafficSignalControllerActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerActionImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalControllerConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrafficSignalControllerConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalControllerConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrafficSignalControllerCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrafficSignalControllerCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerConditionImpl>>> TrafficSignalControllerConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerConditionImpl>>> result;

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
                        NamedReferenceProxy<ITrafficSignalController> proxy(attributeValue);
                        proxy.SetParent(object);
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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerConditionImpl>>> TrafficSignalControllerConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerConditionImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalStateImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrafficSignalStateXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalStateImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrafficSignalState", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrafficSignalState", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalStateImpl>>> TrafficSignalStateXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalStateImpl>>> result;

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TrafficSignalStateImpl>>> TrafficSignalStateXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TrafficSignalStateImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalStateActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrafficSignalStateActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalStateActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrafficSignalStateAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrafficSignalStateAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSinkActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrafficSinkActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSinkActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrafficSinkAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrafficSinkAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSinkActionImpl>>> TrafficSinkActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSinkActionImpl>>> result;

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSourceActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrafficSourceActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSourceActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrafficSourceAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrafficSourceAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSourceActionImpl>>> TrafficSourceActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSourceActionImpl>>> result;

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSwarmActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrafficSwarmActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSwarmActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrafficSwarmAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrafficSwarmAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSwarmActionImpl>>> TrafficSwarmActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSwarmActionImpl>>> result;

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrajectoryImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrajectoryXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Trajectory", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Trajectory", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryImpl>>> TrajectoryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryImpl>>> result;

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
            auto parameterDeclarationsList = object->GetParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrajectoryCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrajectoryCatalogLocationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryCatalogLocationImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrajectoryCatalogLocation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrajectoryCatalogLocation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrajectoryFollowingModeImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TrajectoryFollowingModeXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryFollowingModeImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TrajectoryFollowingMode", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TrajectoryFollowingMode", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TransitionDynamicsImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TransitionDynamicsXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TransitionDynamicsImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TransitionDynamics", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TransitionDynamics", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<TransitionDynamicsImpl>>> TransitionDynamicsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<TransitionDynamicsImpl>>> result;

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<TransitionDynamicsImpl>>> TransitionDynamicsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<TransitionDynamicsImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TraveledDistanceConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TraveledDistanceConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TraveledDistanceConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TraveledDistanceCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TraveledDistanceCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TriggerImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TriggerXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TriggerImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Trigger", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Trigger", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            auto conditionGroupsList = object->GetConditionGroups();
            conditionGroupsList.push_back(conditionGroups);
            object->SetConditionGroups(conditionGroupsList);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TriggeringEntitiesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void TriggeringEntitiesXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TriggeringEntitiesImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing TriggeringEntities", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing TriggeringEntities", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            auto entityRefsList = object->GetEntityRefs();
            entityRefsList.push_back(entityRefs);
            object->SetEntityRefs(entityRefsList);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a UserDefinedActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void UserDefinedActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<UserDefinedActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing UserDefinedAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing UserDefinedAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a UserDefinedValueConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void UserDefinedValueConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<UserDefinedValueConditionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing UserDefinedValueCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing UserDefinedValueCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<UserDefinedValueConditionImpl>>> UserDefinedValueConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<UserDefinedValueConditionImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void VehicleXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Vehicle", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Vehicle", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleImpl>>> VehicleXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<VehicleImpl>>> result;

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
            auto parameterDeclarationsList = object->GetParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void VehicleCatalogLocationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCatalogLocationImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing VehicleCatalogLocation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing VehicleCatalogLocation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleCategoryDistributionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void VehicleCategoryDistributionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCategoryDistributionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing VehicleCategoryDistribution", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing VehicleCategoryDistribution", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            auto vehicleCategoryDistributionEntriesList = object->GetVehicleCategoryDistributionEntries();
            vehicleCategoryDistributionEntriesList.push_back(vehicleCategoryDistributionEntries);
            object->SetVehicleCategoryDistributionEntries(vehicleCategoryDistributionEntriesList);
        }

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleCategoryDistributionEntryImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void VehicleCategoryDistributionEntryXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCategoryDistributionEntryImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing VehicleCategoryDistributionEntry", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing VehicleCategoryDistributionEntry", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VertexImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void VertexXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VertexImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Vertex", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Vertex", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
                    return 1;
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VisibilityActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void VisibilityActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VisibilityActionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing VisibilityAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing VisibilityAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<VisibilityActionImpl>>> VisibilityActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<VisibilityActionImpl>>> result;
            return result;
        }


    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a WaypointImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void WaypointXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WaypointImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Waypoint", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Waypoint", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a WeatherImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void WeatherXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WeatherImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing Weather", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing Weather", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<WeatherImpl>>> WeatherXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<WeatherImpl>>> result;

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
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE, std::make_shared<AttributeCloudState>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<WeatherImpl>>> WeatherXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<WeatherImpl>>> result;
            result.push_back(std::make_shared<SubElementSunParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementFogParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPrecipitationParser>(_messageLogger, _filename));
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

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a WorldPositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

		/*
        void WorldPositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WorldPositionImpl>& object)
        {
            auto msg = FileContentMessage("Start Parsing WorldPosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
            XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
            msg = FileContentMessage("End Parsing WorldPosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
            _messageLogger.LogMessage(msg);
        }
        */

        std::map<std::string, std::shared_ptr<IAttributeParser<WorldPositionImpl>>> WorldPositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<WorldPositionImpl>>> result;

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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<WorldPositionImpl>>> WorldPositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<WorldPositionImpl>>> result;
            return result;
        }


    }
}
