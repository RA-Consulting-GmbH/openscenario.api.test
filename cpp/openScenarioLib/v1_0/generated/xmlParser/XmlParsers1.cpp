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
         * Filling a AbsoluteSpeedImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteSpeedImpl>>> AbsoluteSpeedXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteSpeedImpl>>> result;

            class AttributeValue: public IAttributeParser<AbsoluteSpeedImpl>, public XmlParserBase<AbsoluteSpeedImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AbsoluteSpeedImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<AbsoluteSpeedImpl>>> AbsoluteSpeedXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<AbsoluteSpeedImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AbsoluteTargetLaneImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetLaneImpl>>> AbsoluteTargetLaneXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetLaneImpl>>> result;

            class AttributeValue: public IAttributeParser<AbsoluteTargetLaneImpl>, public XmlParserBase<AbsoluteTargetLaneImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AbsoluteTargetLaneImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<AbsoluteTargetLaneImpl>>> AbsoluteTargetLaneXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<AbsoluteTargetLaneImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AbsoluteTargetLaneOffsetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetLaneOffsetImpl>>> AbsoluteTargetLaneOffsetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetLaneOffsetImpl>>> result;

            class AttributeValue: public IAttributeParser<AbsoluteTargetLaneOffsetImpl>, public XmlParserBase<AbsoluteTargetLaneOffsetImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AbsoluteTargetLaneOffsetImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<AbsoluteTargetLaneOffsetImpl>>> AbsoluteTargetLaneOffsetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<AbsoluteTargetLaneOffsetImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AbsoluteTargetSpeedImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetSpeedImpl>>> AbsoluteTargetSpeedXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetSpeedImpl>>> result;

            class AttributeValue: public IAttributeParser<AbsoluteTargetSpeedImpl>, public XmlParserBase<AbsoluteTargetSpeedImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AbsoluteTargetSpeedImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<AbsoluteTargetSpeedImpl>>> AbsoluteTargetSpeedXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<AbsoluteTargetSpeedImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AccelerationConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<AccelerationConditionImpl>>> AccelerationConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<AccelerationConditionImpl>>> result;

            class AttributeValue: public IAttributeParser<AccelerationConditionImpl>, public XmlParserBase<AccelerationConditionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AccelerationConditionImpl>& object) override
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
            class AttributeRule: public IAttributeParser<AccelerationConditionImpl>, public XmlParserBase<AccelerationConditionImpl>
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AccelerationConditionImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<AccelerationConditionImpl>>> AccelerationConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<AccelerationConditionImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AcquirePositionActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<AcquirePositionActionImpl>>> AcquirePositionActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<AcquirePositionActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<AcquirePositionActionImpl>>> AcquirePositionActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<AcquirePositionActionImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        AcquirePositionActionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void AcquirePositionActionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AcquirePositionActionImpl>& object)
        {
            auto position = std::make_shared<PositionImpl>();
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            object->SetPosition(position);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ActImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ActImpl>>> ActXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ActImpl>>> result;

            class AttributeName: public IAttributeParser<ActImpl>, public XmlParserBase<ActImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ActImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<ActImpl>>> ActXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ActImpl>>> result;
            result.push_back(std::make_shared<SubElementManeuverGroupsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementStartTriggerParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementStopTriggerParser>(_messageLogger, _filename));
            return result;
        }

        ActXmlParser::SubElementManeuverGroupsParser::SubElementManeuverGroupsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _maneuverGroupXmlParser = std::make_shared<ManeuverGroupXmlParser>(messageLogger, filename);
        }

        void ActXmlParser::SubElementManeuverGroupsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActImpl>& object)
        {
            auto maneuverGroups = std::make_shared<ManeuverGroupImpl>();
            // Setting the parent
            maneuverGroups->SetParent(object);
            _maneuverGroupXmlParser->ParseElement(indexedElement, parserContext, maneuverGroups);
            auto maneuverGroupsList = object->GetManeuverGroups();
            maneuverGroupsList.push_back(maneuverGroups);
            object->SetManeuverGroups(maneuverGroupsList);
        }
        ActXmlParser::SubElementStartTriggerParser::SubElementStartTriggerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _triggerXmlParser = std::make_shared<TriggerXmlParser>(messageLogger, filename);
        }

        void ActXmlParser::SubElementStartTriggerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActImpl>& object)
        {
            auto startTrigger = std::make_shared<TriggerImpl>();
            // Setting the parent
            startTrigger->SetParent(object);
            _triggerXmlParser->ParseElement(indexedElement, parserContext, startTrigger);

            object->SetStartTrigger(startTrigger);
        }
        ActXmlParser::SubElementStopTriggerParser::SubElementStopTriggerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _triggerXmlParser = std::make_shared<TriggerXmlParser>(messageLogger, filename);
        }

        void ActXmlParser::SubElementStopTriggerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActImpl>& object)
        {
            auto stopTrigger = std::make_shared<TriggerImpl>();
            // Setting the parent
            stopTrigger->SetParent(object);
            _triggerXmlParser->ParseElement(indexedElement, parserContext, stopTrigger);

            object->SetStopTrigger(stopTrigger);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ActionImpl>>> ActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ActionImpl>>> result;

            class AttributeName: public IAttributeParser<ActionImpl>, public XmlParserBase<ActionImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ActionImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<ActionImpl>>> ActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ActionImpl>>> result;
            result.push_back(std::make_shared<SubElementGlobalActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementUserDefinedActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPrivateActionParser>(_messageLogger, _filename));
            return result;
        }

        ActionXmlParser::SubElementGlobalActionParser::SubElementGlobalActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _globalActionXmlParser = std::make_shared<GlobalActionXmlParser>(messageLogger, filename);
        }

        void ActionXmlParser::SubElementGlobalActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActionImpl>& object)
        {
            auto globalAction = std::make_shared<GlobalActionImpl>();
            // Setting the parent
            globalAction->SetParent(object);
            _globalActionXmlParser->ParseElement(indexedElement, parserContext, globalAction);

            object->SetGlobalAction(globalAction);
        }
        ActionXmlParser::SubElementUserDefinedActionParser::SubElementUserDefinedActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _userDefinedActionXmlParser = std::make_shared<UserDefinedActionXmlParser>(messageLogger, filename);
        }

        void ActionXmlParser::SubElementUserDefinedActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActionImpl>& object)
        {
            auto userDefinedAction = std::make_shared<UserDefinedActionImpl>();
            // Setting the parent
            userDefinedAction->SetParent(object);
            _userDefinedActionXmlParser->ParseElement(indexedElement, parserContext, userDefinedAction);

            object->SetUserDefinedAction(userDefinedAction);
        }
        ActionXmlParser::SubElementPrivateActionParser::SubElementPrivateActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _privateActionXmlParser = std::make_shared<PrivateActionXmlParser>(messageLogger, filename);
        }

        void ActionXmlParser::SubElementPrivateActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActionImpl>& object)
        {
            auto privateAction = std::make_shared<PrivateActionImpl>();
            // Setting the parent
            privateAction->SetParent(object);
            _privateActionXmlParser->ParseElement(indexedElement, parserContext, privateAction);

            object->SetPrivateAction(privateAction);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ActivateControllerActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ActivateControllerActionImpl>>> ActivateControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ActivateControllerActionImpl>>> result;

            class AttributeLateral: public IAttributeParser<ActivateControllerActionImpl>, public XmlParserBase<ActivateControllerActionImpl>
            {
            public:
                AttributeLateral(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ActivateControllerActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LATERAL, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetLateral(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LATERAL, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LATERAL, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LATERAL, std::make_shared<AttributeLateral>(_messageLogger, _filename)));
            class AttributeLongitudinal: public IAttributeParser<ActivateControllerActionImpl>, public XmlParserBase<ActivateControllerActionImpl>
            {
            public:
                AttributeLongitudinal(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ActivateControllerActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LONGITUDINAL, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetLongitudinal(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LONGITUDINAL, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LONGITUDINAL, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LONGITUDINAL, std::make_shared<AttributeLongitudinal>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ActivateControllerActionImpl>>> ActivateControllerActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ActivateControllerActionImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ActorsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ActorsImpl>>> ActorsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ActorsImpl>>> result;

            class AttributeSelectTriggeringEntities: public IAttributeParser<ActorsImpl>, public XmlParserBase<ActorsImpl>
            {
            public:
                AttributeSelectTriggeringEntities(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ActorsImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetSelectTriggeringEntities(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, std::make_shared<AttributeSelectTriggeringEntities>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ActorsImpl>>> ActorsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ActorsImpl>>> result;
            result.push_back(std::make_shared<SubElementEntityRefsParser>(_messageLogger, _filename));
            return result;
        }

        ActorsXmlParser::SubElementEntityRefsParser::SubElementEntityRefsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entityRefXmlParser = std::make_shared<EntityRefXmlParser>(messageLogger, filename);
        }

        void ActorsXmlParser::SubElementEntityRefsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActorsImpl>& object)
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
         * Filling a AddEntityActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<AddEntityActionImpl>>> AddEntityActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<AddEntityActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<AddEntityActionImpl>>> AddEntityActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<AddEntityActionImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        AddEntityActionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void AddEntityActionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AddEntityActionImpl>& object)
        {
            auto position = std::make_shared<PositionImpl>();
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            object->SetPosition(position);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AssignControllerActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<AssignControllerActionImpl>>> AssignControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<AssignControllerActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<AssignControllerActionImpl>>> AssignControllerActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<AssignControllerActionImpl>>> result;
            result.push_back(std::make_shared<SubElementControllerParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            return result;
        }

        AssignControllerActionXmlParser::SubElementControllerParser::SubElementControllerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerXmlParser = std::make_shared<ControllerXmlParser>(messageLogger, filename);
        }

        void AssignControllerActionXmlParser::SubElementControllerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignControllerActionImpl>& object)
        {
            auto controller = std::make_shared<ControllerImpl>();
            // Setting the parent
            controller->SetParent(object);
            _controllerXmlParser->ParseElement(indexedElement, parserContext, controller);

            object->SetController(controller);
        }
        AssignControllerActionXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void AssignControllerActionXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignControllerActionImpl>& object)
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
         * Filling a AssignRouteActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<AssignRouteActionImpl>>> AssignRouteActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<AssignRouteActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<AssignRouteActionImpl>>> AssignRouteActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<AssignRouteActionImpl>>> result;
            result.push_back(std::make_shared<SubElementRouteParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            return result;
        }

        AssignRouteActionXmlParser::SubElementRouteParser::SubElementRouteParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _routeXmlParser = std::make_shared<RouteXmlParser>(messageLogger, filename);
        }

        void AssignRouteActionXmlParser::SubElementRouteParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignRouteActionImpl>& object)
        {
            auto route = std::make_shared<RouteImpl>();
            // Setting the parent
            route->SetParent(object);
            _routeXmlParser->ParseElement(indexedElement, parserContext, route);

            object->SetRoute(route);
        }
        AssignRouteActionXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void AssignRouteActionXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignRouteActionImpl>& object)
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
         * Filling a AxleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<AxleImpl>>> AxleXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<AxleImpl>>> result;

            class AttributeMaxSteering: public IAttributeParser<AxleImpl>, public XmlParserBase<AxleImpl>
            {
            public:
                AttributeMaxSteering(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AxleImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetMaxSteering(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING, std::make_shared<AttributeMaxSteering>(_messageLogger, _filename)));
            class AttributeWheelDiameter: public IAttributeParser<AxleImpl>, public XmlParserBase<AxleImpl>
            {
            public:
                AttributeWheelDiameter(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AxleImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetWheelDiameter(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER, std::make_shared<AttributeWheelDiameter>(_messageLogger, _filename)));
            class AttributeTrackWidth: public IAttributeParser<AxleImpl>, public XmlParserBase<AxleImpl>
            {
            public:
                AttributeTrackWidth(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AxleImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetTrackWidth(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH, std::make_shared<AttributeTrackWidth>(_messageLogger, _filename)));
            class AttributePositionX: public IAttributeParser<AxleImpl>, public XmlParserBase<AxleImpl>
            {
            public:
                AttributePositionX(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AxleImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__POSITION_X, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetPositionX(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__POSITION_X, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__POSITION_X, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__POSITION_X, std::make_shared<AttributePositionX>(_messageLogger, _filename)));
            class AttributePositionZ: public IAttributeParser<AxleImpl>, public XmlParserBase<AxleImpl>
            {
            public:
                AttributePositionZ(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AxleImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetPositionZ(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z, std::make_shared<AttributePositionZ>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<AxleImpl>>> AxleXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<AxleImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AxlesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<AxlesImpl>>> AxlesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<AxlesImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<AxlesImpl>>> AxlesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<AxlesImpl>>> result;
            result.push_back(std::make_shared<SubElementFrontAxleParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRearAxleParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementAdditionalAxlesParser>(_messageLogger, _filename));
            return result;
        }

        AxlesXmlParser::SubElementFrontAxleParser::SubElementFrontAxleParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _axleXmlParser = std::make_shared<AxleXmlParser>(messageLogger, filename);
        }

        void AxlesXmlParser::SubElementFrontAxleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxlesImpl>& object)
        {
            auto frontAxle = std::make_shared<AxleImpl>();
            // Setting the parent
            frontAxle->SetParent(object);
            _axleXmlParser->ParseElement(indexedElement, parserContext, frontAxle);

            object->SetFrontAxle(frontAxle);
        }
        AxlesXmlParser::SubElementRearAxleParser::SubElementRearAxleParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _axleXmlParser = std::make_shared<AxleXmlParser>(messageLogger, filename);
        }

        void AxlesXmlParser::SubElementRearAxleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxlesImpl>& object)
        {
            auto rearAxle = std::make_shared<AxleImpl>();
            // Setting the parent
            rearAxle->SetParent(object);
            _axleXmlParser->ParseElement(indexedElement, parserContext, rearAxle);

            object->SetRearAxle(rearAxle);
        }
        AxlesXmlParser::SubElementAdditionalAxlesParser::SubElementAdditionalAxlesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _axleXmlParser = std::make_shared<AxleXmlParser>(messageLogger, filename);
        }

        void AxlesXmlParser::SubElementAdditionalAxlesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxlesImpl>& object)
        {
            auto additionalAxles = std::make_shared<AxleImpl>();
            // Setting the parent
            additionalAxles->SetParent(object);
            _axleXmlParser->ParseElement(indexedElement, parserContext, additionalAxles);
            auto additionalAxlesList = object->GetAdditionalAxles();
            additionalAxlesList.push_back(additionalAxles);
            object->SetAdditionalAxles(additionalAxlesList);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a BoundingBoxImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<BoundingBoxImpl>>> BoundingBoxXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<BoundingBoxImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<BoundingBoxImpl>>> BoundingBoxXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<BoundingBoxImpl>>> result;
            result.push_back(std::make_shared<SubElementCenterParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementDimensionsParser>(_messageLogger, _filename));
            return result;
        }

        BoundingBoxXmlParser::SubElementCenterParser::SubElementCenterParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _centerXmlParser = std::make_shared<CenterXmlParser>(messageLogger, filename);
        }

        void BoundingBoxXmlParser::SubElementCenterParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BoundingBoxImpl>& object)
        {
            auto center = std::make_shared<CenterImpl>();
            // Setting the parent
            center->SetParent(object);
            _centerXmlParser->ParseElement(indexedElement, parserContext, center);

            object->SetCenter(center);
        }
        BoundingBoxXmlParser::SubElementDimensionsParser::SubElementDimensionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _dimensionsXmlParser = std::make_shared<DimensionsXmlParser>(messageLogger, filename);
        }

        void BoundingBoxXmlParser::SubElementDimensionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BoundingBoxImpl>& object)
        {
            auto dimensions = std::make_shared<DimensionsImpl>();
            // Setting the parent
            dimensions->SetParent(object);
            _dimensionsXmlParser->ParseElement(indexedElement, parserContext, dimensions);

            object->SetDimensions(dimensions);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ByEntityConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ByEntityConditionImpl>>> ByEntityConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ByEntityConditionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ByEntityConditionImpl>>> ByEntityConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ByEntityConditionImpl>>> result;
            result.push_back(std::make_shared<SubElementTriggeringEntitiesParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementEntityConditionParser>(_messageLogger, _filename));
            return result;
        }

        ByEntityConditionXmlParser::SubElementTriggeringEntitiesParser::SubElementTriggeringEntitiesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _triggeringEntitiesXmlParser = std::make_shared<TriggeringEntitiesXmlParser>(messageLogger, filename);
        }

        void ByEntityConditionXmlParser::SubElementTriggeringEntitiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByEntityConditionImpl>& object)
        {
            auto triggeringEntities = std::make_shared<TriggeringEntitiesImpl>();
            // Setting the parent
            triggeringEntities->SetParent(object);
            _triggeringEntitiesXmlParser->ParseElement(indexedElement, parserContext, triggeringEntities);

            object->SetTriggeringEntities(triggeringEntities);
        }
        ByEntityConditionXmlParser::SubElementEntityConditionParser::SubElementEntityConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entityConditionXmlParser = std::make_shared<EntityConditionXmlParser>(messageLogger, filename);
        }

        void ByEntityConditionXmlParser::SubElementEntityConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByEntityConditionImpl>& object)
        {
            auto entityCondition = std::make_shared<EntityConditionImpl>();
            // Setting the parent
            entityCondition->SetParent(object);
            _entityConditionXmlParser->ParseElement(indexedElement, parserContext, entityCondition);

            object->SetEntityCondition(entityCondition);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ByObjectTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ByObjectTypeImpl>>> ByObjectTypeXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ByObjectTypeImpl>>> result;

            class AttributeType: public IAttributeParser<ByObjectTypeImpl>, public XmlParserBase<ByObjectTypeImpl>
            {
            public:
                AttributeType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ByObjectTypeImpl>& object) override
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
                        // Enumeration Type
                        const auto kResult = ObjectType::GetFromLiteral(attributeValue);
                        if (kResult != ObjectType::UNKNOWN)
                        {
                            object->SetType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
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

        std::vector<std::shared_ptr<IElementParser<ByObjectTypeImpl>>> ByObjectTypeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ByObjectTypeImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ByTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ByTypeImpl>>> ByTypeXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ByTypeImpl>>> result;

            class AttributeObjectType: public IAttributeParser<ByTypeImpl>, public XmlParserBase<ByTypeImpl>
            {
            public:
                AttributeObjectType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ByTypeImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = ObjectType::GetFromLiteral(attributeValue);
                        if (kResult != ObjectType::UNKNOWN)
                        {
                            object->SetObjectType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE, std::make_shared<AttributeObjectType>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ByTypeImpl>>> ByTypeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ByTypeImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ByValueConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ByValueConditionImpl>>> ByValueConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ByValueConditionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ByValueConditionImpl>>> ByValueConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ByValueConditionImpl>>> result;
            result.push_back(std::make_shared<SubElementParameterConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTimeOfDayConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementSimulationTimeConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementStoryboardElementStateConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementUserDefinedValueConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrafficSignalConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrafficSignalControllerConditionParser>(_messageLogger, _filename));
            return result;
        }

        ByValueConditionXmlParser::SubElementParameterConditionParser::SubElementParameterConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterConditionXmlParser = std::make_shared<ParameterConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementParameterConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
        {
            auto parameterCondition = std::make_shared<ParameterConditionImpl>();
            // Setting the parent
            parameterCondition->SetParent(object);
            _parameterConditionXmlParser->ParseElement(indexedElement, parserContext, parameterCondition);

            object->SetParameterCondition(parameterCondition);
        }
        ByValueConditionXmlParser::SubElementTimeOfDayConditionParser::SubElementTimeOfDayConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _timeOfDayConditionXmlParser = std::make_shared<TimeOfDayConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementTimeOfDayConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
        {
            auto timeOfDayCondition = std::make_shared<TimeOfDayConditionImpl>();
            // Setting the parent
            timeOfDayCondition->SetParent(object);
            _timeOfDayConditionXmlParser->ParseElement(indexedElement, parserContext, timeOfDayCondition);

            object->SetTimeOfDayCondition(timeOfDayCondition);
        }
        ByValueConditionXmlParser::SubElementSimulationTimeConditionParser::SubElementSimulationTimeConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _simulationTimeConditionXmlParser = std::make_shared<SimulationTimeConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementSimulationTimeConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
        {
            auto simulationTimeCondition = std::make_shared<SimulationTimeConditionImpl>();
            // Setting the parent
            simulationTimeCondition->SetParent(object);
            _simulationTimeConditionXmlParser->ParseElement(indexedElement, parserContext, simulationTimeCondition);

            object->SetSimulationTimeCondition(simulationTimeCondition);
        }
        ByValueConditionXmlParser::SubElementStoryboardElementStateConditionParser::SubElementStoryboardElementStateConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _storyboardElementStateConditionXmlParser = std::make_shared<StoryboardElementStateConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementStoryboardElementStateConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
        {
            auto storyboardElementStateCondition = std::make_shared<StoryboardElementStateConditionImpl>();
            // Setting the parent
            storyboardElementStateCondition->SetParent(object);
            _storyboardElementStateConditionXmlParser->ParseElement(indexedElement, parserContext, storyboardElementStateCondition);

            object->SetStoryboardElementStateCondition(storyboardElementStateCondition);
        }
        ByValueConditionXmlParser::SubElementUserDefinedValueConditionParser::SubElementUserDefinedValueConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _userDefinedValueConditionXmlParser = std::make_shared<UserDefinedValueConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementUserDefinedValueConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
        {
            auto userDefinedValueCondition = std::make_shared<UserDefinedValueConditionImpl>();
            // Setting the parent
            userDefinedValueCondition->SetParent(object);
            _userDefinedValueConditionXmlParser->ParseElement(indexedElement, parserContext, userDefinedValueCondition);

            object->SetUserDefinedValueCondition(userDefinedValueCondition);
        }
        ByValueConditionXmlParser::SubElementTrafficSignalConditionParser::SubElementTrafficSignalConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSignalConditionXmlParser = std::make_shared<TrafficSignalConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementTrafficSignalConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
        {
            auto trafficSignalCondition = std::make_shared<TrafficSignalConditionImpl>();
            // Setting the parent
            trafficSignalCondition->SetParent(object);
            _trafficSignalConditionXmlParser->ParseElement(indexedElement, parserContext, trafficSignalCondition);

            object->SetTrafficSignalCondition(trafficSignalCondition);
        }
        ByValueConditionXmlParser::SubElementTrafficSignalControllerConditionParser::SubElementTrafficSignalControllerConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSignalControllerConditionXmlParser = std::make_shared<TrafficSignalControllerConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementTrafficSignalControllerConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
        {
            auto trafficSignalControllerCondition = std::make_shared<TrafficSignalControllerConditionImpl>();
            // Setting the parent
            trafficSignalControllerCondition->SetParent(object);
            _trafficSignalControllerConditionXmlParser->ParseElement(indexedElement, parserContext, trafficSignalControllerCondition);

            object->SetTrafficSignalControllerCondition(trafficSignalControllerCondition);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CatalogImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<CatalogImpl>>> CatalogXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<CatalogImpl>>> result;

            class AttributeName: public IAttributeParser<CatalogImpl>, public XmlParserBase<CatalogImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CatalogImpl>& object) override
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
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<CatalogImpl>>> CatalogXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<CatalogImpl>>> result;
            result.push_back(std::make_shared<SubElementVehiclesParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementControllersParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPedestriansParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementMiscObjectsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementEnvironmentsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementManeuversParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrajectoriesParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRoutesParser>(_messageLogger, _filename));
            return result;
        }

        CatalogXmlParser::SubElementVehiclesParser::SubElementVehiclesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _vehicleXmlParser = std::make_shared<VehicleXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementVehiclesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
        {
            auto vehicles = std::make_shared<VehicleImpl>();
            // Setting the parent
            vehicles->SetParent(object);
            _vehicleXmlParser->ParseElement(indexedElement, parserContext, vehicles);
            auto vehiclesList = object->GetVehicles();
            vehiclesList.push_back(vehicles);
            object->SetVehicles(vehiclesList);
        }
        CatalogXmlParser::SubElementControllersParser::SubElementControllersParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerXmlParser = std::make_shared<ControllerXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementControllersParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
        {
            auto controllers = std::make_shared<ControllerImpl>();
            // Setting the parent
            controllers->SetParent(object);
            _controllerXmlParser->ParseElement(indexedElement, parserContext, controllers);
            auto controllersList = object->GetControllers();
            controllersList.push_back(controllers);
            object->SetControllers(controllersList);
        }
        CatalogXmlParser::SubElementPedestriansParser::SubElementPedestriansParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _pedestrianXmlParser = std::make_shared<PedestrianXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementPedestriansParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
        {
            auto pedestrians = std::make_shared<PedestrianImpl>();
            // Setting the parent
            pedestrians->SetParent(object);
            _pedestrianXmlParser->ParseElement(indexedElement, parserContext, pedestrians);
            auto pedestriansList = object->GetPedestrians();
            pedestriansList.push_back(pedestrians);
            object->SetPedestrians(pedestriansList);
        }
        CatalogXmlParser::SubElementMiscObjectsParser::SubElementMiscObjectsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _miscObjectXmlParser = std::make_shared<MiscObjectXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementMiscObjectsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
        {
            auto miscObjects = std::make_shared<MiscObjectImpl>();
            // Setting the parent
            miscObjects->SetParent(object);
            _miscObjectXmlParser->ParseElement(indexedElement, parserContext, miscObjects);
            auto miscObjectsList = object->GetMiscObjects();
            miscObjectsList.push_back(miscObjects);
            object->SetMiscObjects(miscObjectsList);
        }
        CatalogXmlParser::SubElementEnvironmentsParser::SubElementEnvironmentsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _environmentXmlParser = std::make_shared<EnvironmentXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementEnvironmentsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
        {
            auto environments = std::make_shared<EnvironmentImpl>();
            // Setting the parent
            environments->SetParent(object);
            _environmentXmlParser->ParseElement(indexedElement, parserContext, environments);
            auto environmentsList = object->GetEnvironments();
            environmentsList.push_back(environments);
            object->SetEnvironments(environmentsList);
        }
        CatalogXmlParser::SubElementManeuversParser::SubElementManeuversParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _maneuverXmlParser = std::make_shared<ManeuverXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementManeuversParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
        {
            auto maneuvers = std::make_shared<ManeuverImpl>();
            // Setting the parent
            maneuvers->SetParent(object);
            _maneuverXmlParser->ParseElement(indexedElement, parserContext, maneuvers);
            auto maneuversList = object->GetManeuvers();
            maneuversList.push_back(maneuvers);
            object->SetManeuvers(maneuversList);
        }
        CatalogXmlParser::SubElementTrajectoriesParser::SubElementTrajectoriesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trajectoryXmlParser = std::make_shared<TrajectoryXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementTrajectoriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
        {
            auto trajectories = std::make_shared<TrajectoryImpl>();
            // Setting the parent
            trajectories->SetParent(object);
            _trajectoryXmlParser->ParseElement(indexedElement, parserContext, trajectories);
            auto trajectoriesList = object->GetTrajectories();
            trajectoriesList.push_back(trajectories);
            object->SetTrajectories(trajectoriesList);
        }
        CatalogXmlParser::SubElementRoutesParser::SubElementRoutesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _routeXmlParser = std::make_shared<RouteXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementRoutesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
        {
            auto routes = std::make_shared<RouteImpl>();
            // Setting the parent
            routes->SetParent(object);
            _routeXmlParser->ParseElement(indexedElement, parserContext, routes);
            auto routesList = object->GetRoutes();
            routesList.push_back(routes);
            object->SetRoutes(routesList);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CatalogDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */

        std::vector<std::shared_ptr<IElementParser<CatalogDefinitionImpl>>> CatalogDefinitionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<CatalogDefinitionImpl>>> result;
            result.push_back(std::make_shared<SubElementCatalogParser>(_messageLogger, _filename));
            return result;
        }

        CatalogDefinitionXmlParser::SubElementCatalogParser::SubElementCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogXmlParser = std::make_shared<CatalogXmlParser>(messageLogger, filename);
        }

        void CatalogDefinitionXmlParser::SubElementCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogDefinitionImpl>& object)
        {
            auto catalog = std::make_shared<CatalogImpl>();
            // Setting the parent
            catalog->SetParent(object);
            _catalogXmlParser->ParseElement(indexedElement, parserContext, catalog);

            object->SetCatalog(catalog);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CatalogLocationsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<CatalogLocationsImpl>>> CatalogLocationsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<CatalogLocationsImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<CatalogLocationsImpl>>> CatalogLocationsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<CatalogLocationsImpl>>> result;
            result.push_back(std::make_shared<SubElementVehicleCatalogParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementControllerCatalogParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPedestrianCatalogParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementMiscObjectCatalogParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementEnvironmentCatalogParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementManeuverCatalogParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrajectoryCatalogParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRouteCatalogParser>(_messageLogger, _filename));
            return result;
        }

        CatalogLocationsXmlParser::SubElementVehicleCatalogParser::SubElementVehicleCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _vehicleCatalogLocationXmlParser = std::make_shared<VehicleCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementVehicleCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
        {
            auto vehicleCatalog = std::make_shared<VehicleCatalogLocationImpl>();
            // Setting the parent
            vehicleCatalog->SetParent(object);
            _vehicleCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, vehicleCatalog);

            object->SetVehicleCatalog(vehicleCatalog);
        }
        CatalogLocationsXmlParser::SubElementControllerCatalogParser::SubElementControllerCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerCatalogLocationXmlParser = std::make_shared<ControllerCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementControllerCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
        {
            auto controllerCatalog = std::make_shared<ControllerCatalogLocationImpl>();
            // Setting the parent
            controllerCatalog->SetParent(object);
            _controllerCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, controllerCatalog);

            object->SetControllerCatalog(controllerCatalog);
        }
        CatalogLocationsXmlParser::SubElementPedestrianCatalogParser::SubElementPedestrianCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _pedestrianCatalogLocationXmlParser = std::make_shared<PedestrianCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementPedestrianCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
        {
            auto pedestrianCatalog = std::make_shared<PedestrianCatalogLocationImpl>();
            // Setting the parent
            pedestrianCatalog->SetParent(object);
            _pedestrianCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, pedestrianCatalog);

            object->SetPedestrianCatalog(pedestrianCatalog);
        }
        CatalogLocationsXmlParser::SubElementMiscObjectCatalogParser::SubElementMiscObjectCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _miscObjectCatalogLocationXmlParser = std::make_shared<MiscObjectCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementMiscObjectCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
        {
            auto miscObjectCatalog = std::make_shared<MiscObjectCatalogLocationImpl>();
            // Setting the parent
            miscObjectCatalog->SetParent(object);
            _miscObjectCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, miscObjectCatalog);

            object->SetMiscObjectCatalog(miscObjectCatalog);
        }
        CatalogLocationsXmlParser::SubElementEnvironmentCatalogParser::SubElementEnvironmentCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _environmentCatalogLocationXmlParser = std::make_shared<EnvironmentCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementEnvironmentCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
        {
            auto environmentCatalog = std::make_shared<EnvironmentCatalogLocationImpl>();
            // Setting the parent
            environmentCatalog->SetParent(object);
            _environmentCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, environmentCatalog);

            object->SetEnvironmentCatalog(environmentCatalog);
        }
        CatalogLocationsXmlParser::SubElementManeuverCatalogParser::SubElementManeuverCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _maneuverCatalogLocationXmlParser = std::make_shared<ManeuverCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementManeuverCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
        {
            auto maneuverCatalog = std::make_shared<ManeuverCatalogLocationImpl>();
            // Setting the parent
            maneuverCatalog->SetParent(object);
            _maneuverCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, maneuverCatalog);

            object->SetManeuverCatalog(maneuverCatalog);
        }
        CatalogLocationsXmlParser::SubElementTrajectoryCatalogParser::SubElementTrajectoryCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trajectoryCatalogLocationXmlParser = std::make_shared<TrajectoryCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementTrajectoryCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
        {
            auto trajectoryCatalog = std::make_shared<TrajectoryCatalogLocationImpl>();
            // Setting the parent
            trajectoryCatalog->SetParent(object);
            _trajectoryCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, trajectoryCatalog);

            object->SetTrajectoryCatalog(trajectoryCatalog);
        }
        CatalogLocationsXmlParser::SubElementRouteCatalogParser::SubElementRouteCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _routeCatalogLocationXmlParser = std::make_shared<RouteCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementRouteCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
        {
            auto routeCatalog = std::make_shared<RouteCatalogLocationImpl>();
            // Setting the parent
            routeCatalog->SetParent(object);
            _routeCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, routeCatalog);

            object->SetRouteCatalog(routeCatalog);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CatalogReferenceImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<CatalogReferenceImpl>>> CatalogReferenceXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<CatalogReferenceImpl>>> result;

            class AttributeCatalogName: public IAttributeParser<CatalogReferenceImpl>, public XmlParserBase<CatalogReferenceImpl>
            {
            public:
                AttributeCatalogName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CatalogReferenceImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetCatalogName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME, std::make_shared<AttributeCatalogName>(_messageLogger, _filename)));
            class AttributeEntryName: public IAttributeParser<CatalogReferenceImpl>, public XmlParserBase<CatalogReferenceImpl>
            {
            public:
                AttributeEntryName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CatalogReferenceImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetEntryName(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME, std::make_shared<AttributeEntryName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<CatalogReferenceImpl>>> CatalogReferenceXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<CatalogReferenceImpl>>> result;
            result.push_back(std::make_shared<WrappedListParser<CatalogReferenceImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterAssignmentsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENTS) );
            return result;
        }

        CatalogReferenceXmlParser::SubElementParameterAssignmentsParser::SubElementParameterAssignmentsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterAssignmentXmlParser = std::make_shared<ParameterAssignmentXmlParser>(messageLogger, filename);
        }

        void CatalogReferenceXmlParser::SubElementParameterAssignmentsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogReferenceImpl>& object)
        {
            auto parameterAssignments = std::make_shared<ParameterAssignmentImpl>();
            // Setting the parent
            parameterAssignments->SetParent(object);
            _parameterAssignmentXmlParser->ParseElement(indexedElement, parserContext, parameterAssignments);
            auto parameterAssignmentsList = object->GetParameterAssignments();
            parameterAssignmentsList.push_back(parameterAssignments);
            object->SetParameterAssignments(parameterAssignmentsList);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CenterImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<CenterImpl>>> CenterXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<CenterImpl>>> result;

            class AttributeX: public IAttributeParser<CenterImpl>, public XmlParserBase<CenterImpl>
            {
            public:
                AttributeX(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CenterImpl>& object) override
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
            class AttributeY: public IAttributeParser<CenterImpl>, public XmlParserBase<CenterImpl>
            {
            public:
                AttributeY(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CenterImpl>& object) override
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
            class AttributeZ: public IAttributeParser<CenterImpl>, public XmlParserBase<CenterImpl>
            {
            public:
                AttributeZ(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CenterImpl>& object) override
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
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__Z, std::make_shared<AttributeZ>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<CenterImpl>>> CenterXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<CenterImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CentralSwarmObjectImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<CentralSwarmObjectImpl>>> CentralSwarmObjectXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<CentralSwarmObjectImpl>>> result;

            class AttributeEntityRef: public IAttributeParser<CentralSwarmObjectImpl>, public XmlParserBase<CentralSwarmObjectImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CentralSwarmObjectImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<CentralSwarmObjectImpl>>> CentralSwarmObjectXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<CentralSwarmObjectImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ClothoidImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ClothoidImpl>>> ClothoidXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ClothoidImpl>>> result;

            class AttributeCurvature: public IAttributeParser<ClothoidImpl>, public XmlParserBase<ClothoidImpl>
            {
            public:
                AttributeCurvature(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ClothoidImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CURVATURE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetCurvature(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CURVATURE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CURVATURE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CURVATURE, std::make_shared<AttributeCurvature>(_messageLogger, _filename)));
            class AttributeCurvatureDot: public IAttributeParser<ClothoidImpl>, public XmlParserBase<ClothoidImpl>
            {
            public:
                AttributeCurvatureDot(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ClothoidImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetCurvatureDot(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT, std::make_shared<AttributeCurvatureDot>(_messageLogger, _filename)));
            class AttributeLength: public IAttributeParser<ClothoidImpl>, public XmlParserBase<ClothoidImpl>
            {
            public:
                AttributeLength(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ClothoidImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LENGTH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetLength(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LENGTH, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LENGTH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LENGTH, std::make_shared<AttributeLength>(_messageLogger, _filename)));
            class AttributeStartTime: public IAttributeParser<ClothoidImpl>, public XmlParserBase<ClothoidImpl>
            {
            public:
                AttributeStartTime(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ClothoidImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__START_TIME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetStartTime(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__START_TIME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__START_TIME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__START_TIME, std::make_shared<AttributeStartTime>(_messageLogger, _filename)));
            class AttributeStopTime: public IAttributeParser<ClothoidImpl>, public XmlParserBase<ClothoidImpl>
            {
            public:
                AttributeStopTime(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ClothoidImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STOP_TIME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetStopTime(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STOP_TIME, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STOP_TIME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STOP_TIME, std::make_shared<AttributeStopTime>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ClothoidImpl>>> ClothoidXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ClothoidImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        ClothoidXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void ClothoidXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ClothoidImpl>& object)
        {
            auto position = std::make_shared<PositionImpl>();
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            object->SetPosition(position);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CollisionConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<CollisionConditionImpl>>> CollisionConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<CollisionConditionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<CollisionConditionImpl>>> CollisionConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<CollisionConditionImpl>>> result;
            result.push_back(std::make_shared<SubElementEntityRefParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementByTypeParser>(_messageLogger, _filename));
            return result;
        }

        CollisionConditionXmlParser::SubElementEntityRefParser::SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entityRefXmlParser = std::make_shared<EntityRefXmlParser>(messageLogger, filename);
        }

        void CollisionConditionXmlParser::SubElementEntityRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CollisionConditionImpl>& object)
        {
            auto entityRef = std::make_shared<EntityRefImpl>();
            // Setting the parent
            entityRef->SetParent(object);
            _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRef);

            object->SetEntityRef(entityRef);
        }
        CollisionConditionXmlParser::SubElementByTypeParser::SubElementByTypeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _byObjectTypeXmlParser = std::make_shared<ByObjectTypeXmlParser>(messageLogger, filename);
        }

        void CollisionConditionXmlParser::SubElementByTypeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CollisionConditionImpl>& object)
        {
            auto byType = std::make_shared<ByObjectTypeImpl>();
            // Setting the parent
            byType->SetParent(object);
            _byObjectTypeXmlParser->ParseElement(indexedElement, parserContext, byType);

            object->SetByType(byType);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ConditionImpl>>> ConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ConditionImpl>>> result;

            class AttributeName: public IAttributeParser<ConditionImpl>, public XmlParserBase<ConditionImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ConditionImpl>& object) override
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
            class AttributeDelay: public IAttributeParser<ConditionImpl>, public XmlParserBase<ConditionImpl>
            {
            public:
                AttributeDelay(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ConditionImpl>& object) override
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
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DELAY, std::make_shared<AttributeDelay>(_messageLogger, _filename)));
            class AttributeConditionEdge: public IAttributeParser<ConditionImpl>, public XmlParserBase<ConditionImpl>
            {
            public:
                AttributeConditionEdge(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ConditionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = ConditionEdge::GetFromLiteral(attributeValue);
                        if (kResult != ConditionEdge::UNKNOWN)
                        {
                            object->SetConditionEdge(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE, std::make_shared<AttributeConditionEdge>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ConditionImpl>>> ConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ConditionImpl>>> result;
            result.push_back(std::make_shared<SubElementByEntityConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementByValueConditionParser>(_messageLogger, _filename));
            return result;
        }

        ConditionXmlParser::SubElementByEntityConditionParser::SubElementByEntityConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _byEntityConditionXmlParser = std::make_shared<ByEntityConditionXmlParser>(messageLogger, filename);
        }

        void ConditionXmlParser::SubElementByEntityConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ConditionImpl>& object)
        {
            auto byEntityCondition = std::make_shared<ByEntityConditionImpl>();
            // Setting the parent
            byEntityCondition->SetParent(object);
            _byEntityConditionXmlParser->ParseElement(indexedElement, parserContext, byEntityCondition);

            object->SetByEntityCondition(byEntityCondition);
        }
        ConditionXmlParser::SubElementByValueConditionParser::SubElementByValueConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _byValueConditionXmlParser = std::make_shared<ByValueConditionXmlParser>(messageLogger, filename);
        }

        void ConditionXmlParser::SubElementByValueConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ConditionImpl>& object)
        {
            auto byValueCondition = std::make_shared<ByValueConditionImpl>();
            // Setting the parent
            byValueCondition->SetParent(object);
            _byValueConditionXmlParser->ParseElement(indexedElement, parserContext, byValueCondition);

            object->SetByValueCondition(byValueCondition);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ConditionGroupImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ConditionGroupImpl>>> ConditionGroupXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ConditionGroupImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ConditionGroupImpl>>> ConditionGroupXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ConditionGroupImpl>>> result;
            result.push_back(std::make_shared<SubElementConditionsParser>(_messageLogger, _filename));
            return result;
        }

        ConditionGroupXmlParser::SubElementConditionsParser::SubElementConditionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _conditionXmlParser = std::make_shared<ConditionXmlParser>(messageLogger, filename);
        }

        void ConditionGroupXmlParser::SubElementConditionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ConditionGroupImpl>& object)
        {
            auto conditions = std::make_shared<ConditionImpl>();
            // Setting the parent
            conditions->SetParent(object);
            _conditionXmlParser->ParseElement(indexedElement, parserContext, conditions);
            auto conditionsList = object->GetConditions();
            conditionsList.push_back(conditions);
            object->SetConditions(conditionsList);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ControlPointImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ControlPointImpl>>> ControlPointXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ControlPointImpl>>> result;

            class AttributeTime: public IAttributeParser<ControlPointImpl>, public XmlParserBase<ControlPointImpl>
            {
            public:
                AttributeTime(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ControlPointImpl>& object) override
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
            class AttributeWeight: public IAttributeParser<ControlPointImpl>, public XmlParserBase<ControlPointImpl>
            {
            public:
                AttributeWeight(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ControlPointImpl>& object) override
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
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<AttributeWeight>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ControlPointImpl>>> ControlPointXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ControlPointImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        ControlPointXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void ControlPointXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControlPointImpl>& object)
        {
            auto position = std::make_shared<PositionImpl>();
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            object->SetPosition(position);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ControllerImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerImpl>>> ControllerXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ControllerImpl>>> result;

            class AttributeName: public IAttributeParser<ControllerImpl>, public XmlParserBase<ControllerImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ControllerImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<ControllerImpl>>> ControllerXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ControllerImpl>>> result;
            result.push_back(std::make_shared<WrappedListParser<ControllerImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementPropertiesParser>(_messageLogger, _filename));
            return result;
        }

        ControllerXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void ControllerXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerImpl>& object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = object->GetParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
        }
        ControllerXmlParser::SubElementPropertiesParser::SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _propertiesXmlParser = std::make_shared<PropertiesXmlParser>(messageLogger, filename);
        }

        void ControllerXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerImpl>& object)
        {
            auto properties = std::make_shared<PropertiesImpl>();
            // Setting the parent
            properties->SetParent(object);
            _propertiesXmlParser->ParseElement(indexedElement, parserContext, properties);

            object->SetProperties(properties);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ControllerActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerActionImpl>>> ControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ControllerActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ControllerActionImpl>>> ControllerActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ControllerActionImpl>>> result;
            result.push_back(std::make_shared<SubElementAssignControllerActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementOverrideControllerValueActionParser>(_messageLogger, _filename));
            return result;
        }

        ControllerActionXmlParser::SubElementAssignControllerActionParser::SubElementAssignControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _assignControllerActionXmlParser = std::make_shared<AssignControllerActionXmlParser>(messageLogger, filename);
        }

        void ControllerActionXmlParser::SubElementAssignControllerActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerActionImpl>& object)
        {
            auto assignControllerAction = std::make_shared<AssignControllerActionImpl>();
            // Setting the parent
            assignControllerAction->SetParent(object);
            _assignControllerActionXmlParser->ParseElement(indexedElement, parserContext, assignControllerAction);

            object->SetAssignControllerAction(assignControllerAction);
        }
        ControllerActionXmlParser::SubElementOverrideControllerValueActionParser::SubElementOverrideControllerValueActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideControllerValueActionXmlParser = std::make_shared<OverrideControllerValueActionXmlParser>(messageLogger, filename);
        }

        void ControllerActionXmlParser::SubElementOverrideControllerValueActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerActionImpl>& object)
        {
            auto overrideControllerValueAction = std::make_shared<OverrideControllerValueActionImpl>();
            // Setting the parent
            overrideControllerValueAction->SetParent(object);
            _overrideControllerValueActionXmlParser->ParseElement(indexedElement, parserContext, overrideControllerValueAction);

            object->SetOverrideControllerValueAction(overrideControllerValueAction);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ControllerCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerCatalogLocationImpl>>> ControllerCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ControllerCatalogLocationImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ControllerCatalogLocationImpl>>> ControllerCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ControllerCatalogLocationImpl>>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename));
            return result;
        }

        ControllerCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename);
        }

        void ControllerCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerCatalogLocationImpl>& object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            object->SetDirectory(directory);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ControllerDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerDistributionImpl>>> ControllerDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ControllerDistributionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ControllerDistributionImpl>>> ControllerDistributionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ControllerDistributionImpl>>> result;
            result.push_back(std::make_shared<SubElementControllerDistributionEntriesParser>(_messageLogger, _filename));
            return result;
        }

        ControllerDistributionXmlParser::SubElementControllerDistributionEntriesParser::SubElementControllerDistributionEntriesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerDistributionEntryXmlParser = std::make_shared<ControllerDistributionEntryXmlParser>(messageLogger, filename);
        }

        void ControllerDistributionXmlParser::SubElementControllerDistributionEntriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionImpl>& object)
        {
            auto controllerDistributionEntries = std::make_shared<ControllerDistributionEntryImpl>();
            // Setting the parent
            controllerDistributionEntries->SetParent(object);
            _controllerDistributionEntryXmlParser->ParseElement(indexedElement, parserContext, controllerDistributionEntries);
            auto controllerDistributionEntriesList = object->GetControllerDistributionEntries();
            controllerDistributionEntriesList.push_back(controllerDistributionEntries);
            object->SetControllerDistributionEntries(controllerDistributionEntriesList);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ControllerDistributionEntryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerDistributionEntryImpl>>> ControllerDistributionEntryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ControllerDistributionEntryImpl>>> result;

            class AttributeWeight: public IAttributeParser<ControllerDistributionEntryImpl>, public XmlParserBase<ControllerDistributionEntryImpl>
            {
            public:
                AttributeWeight(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ControllerDistributionEntryImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<ControllerDistributionEntryImpl>>> ControllerDistributionEntryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ControllerDistributionEntryImpl>>> result;
            result.push_back(std::make_shared<SubElementControllerParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            return result;
        }

        ControllerDistributionEntryXmlParser::SubElementControllerParser::SubElementControllerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerXmlParser = std::make_shared<ControllerXmlParser>(messageLogger, filename);
        }

        void ControllerDistributionEntryXmlParser::SubElementControllerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionEntryImpl>& object)
        {
            auto controller = std::make_shared<ControllerImpl>();
            // Setting the parent
            controller->SetParent(object);
            _controllerXmlParser->ParseElement(indexedElement, parserContext, controller);

            object->SetController(controller);
        }
        ControllerDistributionEntryXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void ControllerDistributionEntryXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionEntryImpl>& object)
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
         * Filling a CustomCommandActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<CustomCommandActionImpl>>> CustomCommandActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<CustomCommandActionImpl>>> result;

            class AttributeType: public IAttributeParser<CustomCommandActionImpl>, public XmlParserBase<CustomCommandActionImpl>
            {
            public:
                AttributeType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CustomCommandActionImpl>& object) override
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
        void CustomCommandActionXmlParser::SetContentProperty(const std::string content, std::shared_ptr<CustomCommandActionImpl>& object)
        {
            object->SetContent(content);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a DeleteEntityActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<DeleteEntityActionImpl>>> DeleteEntityActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<DeleteEntityActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<DeleteEntityActionImpl>>> DeleteEntityActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<DeleteEntityActionImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a DimensionsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<DimensionsImpl>>> DimensionsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<DimensionsImpl>>> result;

            class AttributeWidth: public IAttributeParser<DimensionsImpl>, public XmlParserBase<DimensionsImpl>
            {
            public:
                AttributeWidth(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DimensionsImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__WIDTH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetWidth(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__WIDTH, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__WIDTH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__WIDTH, std::make_shared<AttributeWidth>(_messageLogger, _filename)));
            class AttributeLength: public IAttributeParser<DimensionsImpl>, public XmlParserBase<DimensionsImpl>
            {
            public:
                AttributeLength(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DimensionsImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LENGTH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetLength(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LENGTH, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LENGTH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LENGTH, std::make_shared<AttributeLength>(_messageLogger, _filename)));
            class AttributeHeight: public IAttributeParser<DimensionsImpl>, public XmlParserBase<DimensionsImpl>
            {
            public:
                AttributeHeight(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DimensionsImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__HEIGHT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetHeight(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__HEIGHT, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__HEIGHT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__HEIGHT, std::make_shared<AttributeHeight>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<DimensionsImpl>>> DimensionsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<DimensionsImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a DirectoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<DirectoryImpl>>> DirectoryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<DirectoryImpl>>> result;

            class AttributePath: public IAttributeParser<DirectoryImpl>, public XmlParserBase<DirectoryImpl>
            {
            public:
                AttributePath(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DirectoryImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PATH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetPath(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PATH, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PATH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PATH, std::make_shared<AttributePath>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<DirectoryImpl>>> DirectoryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<DirectoryImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a DistanceConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<DistanceConditionImpl>>> DistanceConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<DistanceConditionImpl>>> result;

            class AttributeValue: public IAttributeParser<DistanceConditionImpl>, public XmlParserBase<DistanceConditionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DistanceConditionImpl>& object) override
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
            class AttributeFreespace: public IAttributeParser<DistanceConditionImpl>, public XmlParserBase<DistanceConditionImpl>
            {
            public:
                AttributeFreespace(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DistanceConditionImpl>& object) override
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
            class AttributeAlongRoute: public IAttributeParser<DistanceConditionImpl>, public XmlParserBase<DistanceConditionImpl>
            {
            public:
                AttributeAlongRoute(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DistanceConditionImpl>& object) override
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
            class AttributeRule: public IAttributeParser<DistanceConditionImpl>, public XmlParserBase<DistanceConditionImpl>
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DistanceConditionImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<DistanceConditionImpl>>> DistanceConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<DistanceConditionImpl>>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        DistanceConditionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void DistanceConditionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<DistanceConditionImpl>& object)
        {
            auto position = std::make_shared<PositionImpl>();
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            object->SetPosition(position);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a DynamicConstraintsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<DynamicConstraintsImpl>>> DynamicConstraintsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<DynamicConstraintsImpl>>> result;

            class AttributeMaxAcceleration: public IAttributeParser<DynamicConstraintsImpl>, public XmlParserBase<DynamicConstraintsImpl>
            {
            public:
                AttributeMaxAcceleration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DynamicConstraintsImpl>& object) override
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
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, std::make_shared<AttributeMaxAcceleration>(_messageLogger, _filename)));
            class AttributeMaxDeceleration: public IAttributeParser<DynamicConstraintsImpl>, public XmlParserBase<DynamicConstraintsImpl>
            {
            public:
                AttributeMaxDeceleration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DynamicConstraintsImpl>& object) override
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
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, std::make_shared<AttributeMaxDeceleration>(_messageLogger, _filename)));
            class AttributeMaxSpeed: public IAttributeParser<DynamicConstraintsImpl>, public XmlParserBase<DynamicConstraintsImpl>
            {
            public:
                AttributeMaxSpeed(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DynamicConstraintsImpl>& object) override
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
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, std::make_shared<AttributeMaxSpeed>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<DynamicConstraintsImpl>>> DynamicConstraintsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<DynamicConstraintsImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EndOfRoadConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<EndOfRoadConditionImpl>>> EndOfRoadConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<EndOfRoadConditionImpl>>> result;

            class AttributeDuration: public IAttributeParser<EndOfRoadConditionImpl>, public XmlParserBase<EndOfRoadConditionImpl>
            {
            public:
                AttributeDuration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EndOfRoadConditionImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<EndOfRoadConditionImpl>>> EndOfRoadConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<EndOfRoadConditionImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EntitiesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<EntitiesImpl>>> EntitiesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<EntitiesImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<EntitiesImpl>>> EntitiesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<EntitiesImpl>>> result;
            result.push_back(std::make_shared<SubElementScenarioObjectsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementEntitySelectionsParser>(_messageLogger, _filename));
            return result;
        }

        EntitiesXmlParser::SubElementScenarioObjectsParser::SubElementScenarioObjectsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _scenarioObjectXmlParser = std::make_shared<ScenarioObjectXmlParser>(messageLogger, filename);
        }

        void EntitiesXmlParser::SubElementScenarioObjectsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntitiesImpl>& object)
        {
            auto scenarioObjects = std::make_shared<ScenarioObjectImpl>();
            // Setting the parent
            scenarioObjects->SetParent(object);
            _scenarioObjectXmlParser->ParseElement(indexedElement, parserContext, scenarioObjects);
            auto scenarioObjectsList = object->GetScenarioObjects();
            scenarioObjectsList.push_back(scenarioObjects);
            object->SetScenarioObjects(scenarioObjectsList);
        }
        EntitiesXmlParser::SubElementEntitySelectionsParser::SubElementEntitySelectionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entitySelectionXmlParser = std::make_shared<EntitySelectionXmlParser>(messageLogger, filename);
        }

        void EntitiesXmlParser::SubElementEntitySelectionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntitiesImpl>& object)
        {
            auto entitySelections = std::make_shared<EntitySelectionImpl>();
            // Setting the parent
            entitySelections->SetParent(object);
            _entitySelectionXmlParser->ParseElement(indexedElement, parserContext, entitySelections);
            auto entitySelectionsList = object->GetEntitySelections();
            entitySelectionsList.push_back(entitySelections);
            object->SetEntitySelections(entitySelectionsList);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EntityActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<EntityActionImpl>>> EntityActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<EntityActionImpl>>> result;

            class AttributeEntityRef: public IAttributeParser<EntityActionImpl>, public XmlParserBase<EntityActionImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EntityActionImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<EntityActionImpl>>> EntityActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<EntityActionImpl>>> result;
            result.push_back(std::make_shared<SubElementAddEntityActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementDeleteEntityActionParser>(_messageLogger, _filename));
            return result;
        }

        EntityActionXmlParser::SubElementAddEntityActionParser::SubElementAddEntityActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _addEntityActionXmlParser = std::make_shared<AddEntityActionXmlParser>(messageLogger, filename);
        }

        void EntityActionXmlParser::SubElementAddEntityActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityActionImpl>& object)
        {
            auto addEntityAction = std::make_shared<AddEntityActionImpl>();
            // Setting the parent
            addEntityAction->SetParent(object);
            _addEntityActionXmlParser->ParseElement(indexedElement, parserContext, addEntityAction);

            object->SetAddEntityAction(addEntityAction);
        }
        EntityActionXmlParser::SubElementDeleteEntityActionParser::SubElementDeleteEntityActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _deleteEntityActionXmlParser = std::make_shared<DeleteEntityActionXmlParser>(messageLogger, filename);
        }

        void EntityActionXmlParser::SubElementDeleteEntityActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityActionImpl>& object)
        {
            auto deleteEntityAction = std::make_shared<DeleteEntityActionImpl>();
            // Setting the parent
            deleteEntityAction->SetParent(object);
            _deleteEntityActionXmlParser->ParseElement(indexedElement, parserContext, deleteEntityAction);

            object->SetDeleteEntityAction(deleteEntityAction);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EntityConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<EntityConditionImpl>>> EntityConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<EntityConditionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<EntityConditionImpl>>> EntityConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<EntityConditionImpl>>> result;
            result.push_back(std::make_shared<SubElementEndOfRoadConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCollisionConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementOffroadConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTimeHeadwayConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTimeToCollisionConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementAccelerationConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementStandStillConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementSpeedConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRelativeSpeedConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTraveledDistanceConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementReachPositionConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementDistanceConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRelativeDistanceConditionParser>(_messageLogger, _filename));
            return result;
        }

        EntityConditionXmlParser::SubElementEndOfRoadConditionParser::SubElementEndOfRoadConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _endOfRoadConditionXmlParser = std::make_shared<EndOfRoadConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementEndOfRoadConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto endOfRoadCondition = std::make_shared<EndOfRoadConditionImpl>();
            // Setting the parent
            endOfRoadCondition->SetParent(object);
            _endOfRoadConditionXmlParser->ParseElement(indexedElement, parserContext, endOfRoadCondition);

            object->SetEndOfRoadCondition(endOfRoadCondition);
        }
        EntityConditionXmlParser::SubElementCollisionConditionParser::SubElementCollisionConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _collisionConditionXmlParser = std::make_shared<CollisionConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementCollisionConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto collisionCondition = std::make_shared<CollisionConditionImpl>();
            // Setting the parent
            collisionCondition->SetParent(object);
            _collisionConditionXmlParser->ParseElement(indexedElement, parserContext, collisionCondition);

            object->SetCollisionCondition(collisionCondition);
        }
        EntityConditionXmlParser::SubElementOffroadConditionParser::SubElementOffroadConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _offroadConditionXmlParser = std::make_shared<OffroadConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementOffroadConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto offroadCondition = std::make_shared<OffroadConditionImpl>();
            // Setting the parent
            offroadCondition->SetParent(object);
            _offroadConditionXmlParser->ParseElement(indexedElement, parserContext, offroadCondition);

            object->SetOffroadCondition(offroadCondition);
        }
        EntityConditionXmlParser::SubElementTimeHeadwayConditionParser::SubElementTimeHeadwayConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _timeHeadwayConditionXmlParser = std::make_shared<TimeHeadwayConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementTimeHeadwayConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto timeHeadwayCondition = std::make_shared<TimeHeadwayConditionImpl>();
            // Setting the parent
            timeHeadwayCondition->SetParent(object);
            _timeHeadwayConditionXmlParser->ParseElement(indexedElement, parserContext, timeHeadwayCondition);

            object->SetTimeHeadwayCondition(timeHeadwayCondition);
        }
        EntityConditionXmlParser::SubElementTimeToCollisionConditionParser::SubElementTimeToCollisionConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _timeToCollisionConditionXmlParser = std::make_shared<TimeToCollisionConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementTimeToCollisionConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto timeToCollisionCondition = std::make_shared<TimeToCollisionConditionImpl>();
            // Setting the parent
            timeToCollisionCondition->SetParent(object);
            _timeToCollisionConditionXmlParser->ParseElement(indexedElement, parserContext, timeToCollisionCondition);

            object->SetTimeToCollisionCondition(timeToCollisionCondition);
        }
        EntityConditionXmlParser::SubElementAccelerationConditionParser::SubElementAccelerationConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _accelerationConditionXmlParser = std::make_shared<AccelerationConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementAccelerationConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto accelerationCondition = std::make_shared<AccelerationConditionImpl>();
            // Setting the parent
            accelerationCondition->SetParent(object);
            _accelerationConditionXmlParser->ParseElement(indexedElement, parserContext, accelerationCondition);

            object->SetAccelerationCondition(accelerationCondition);
        }
        EntityConditionXmlParser::SubElementStandStillConditionParser::SubElementStandStillConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _standStillConditionXmlParser = std::make_shared<StandStillConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementStandStillConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto standStillCondition = std::make_shared<StandStillConditionImpl>();
            // Setting the parent
            standStillCondition->SetParent(object);
            _standStillConditionXmlParser->ParseElement(indexedElement, parserContext, standStillCondition);

            object->SetStandStillCondition(standStillCondition);
        }
        EntityConditionXmlParser::SubElementSpeedConditionParser::SubElementSpeedConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _speedConditionXmlParser = std::make_shared<SpeedConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementSpeedConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto speedCondition = std::make_shared<SpeedConditionImpl>();
            // Setting the parent
            speedCondition->SetParent(object);
            _speedConditionXmlParser->ParseElement(indexedElement, parserContext, speedCondition);

            object->SetSpeedCondition(speedCondition);
        }
        EntityConditionXmlParser::SubElementRelativeSpeedConditionParser::SubElementRelativeSpeedConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeSpeedConditionXmlParser = std::make_shared<RelativeSpeedConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementRelativeSpeedConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto relativeSpeedCondition = std::make_shared<RelativeSpeedConditionImpl>();
            // Setting the parent
            relativeSpeedCondition->SetParent(object);
            _relativeSpeedConditionXmlParser->ParseElement(indexedElement, parserContext, relativeSpeedCondition);

            object->SetRelativeSpeedCondition(relativeSpeedCondition);
        }
        EntityConditionXmlParser::SubElementTraveledDistanceConditionParser::SubElementTraveledDistanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _traveledDistanceConditionXmlParser = std::make_shared<TraveledDistanceConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementTraveledDistanceConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto traveledDistanceCondition = std::make_shared<TraveledDistanceConditionImpl>();
            // Setting the parent
            traveledDistanceCondition->SetParent(object);
            _traveledDistanceConditionXmlParser->ParseElement(indexedElement, parserContext, traveledDistanceCondition);

            object->SetTraveledDistanceCondition(traveledDistanceCondition);
        }
        EntityConditionXmlParser::SubElementReachPositionConditionParser::SubElementReachPositionConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _reachPositionConditionXmlParser = std::make_shared<ReachPositionConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementReachPositionConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto reachPositionCondition = std::make_shared<ReachPositionConditionImpl>();
            // Setting the parent
            reachPositionCondition->SetParent(object);
            _reachPositionConditionXmlParser->ParseElement(indexedElement, parserContext, reachPositionCondition);

            object->SetReachPositionCondition(reachPositionCondition);
        }
        EntityConditionXmlParser::SubElementDistanceConditionParser::SubElementDistanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _distanceConditionXmlParser = std::make_shared<DistanceConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementDistanceConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto distanceCondition = std::make_shared<DistanceConditionImpl>();
            // Setting the parent
            distanceCondition->SetParent(object);
            _distanceConditionXmlParser->ParseElement(indexedElement, parserContext, distanceCondition);

            object->SetDistanceCondition(distanceCondition);
        }
        EntityConditionXmlParser::SubElementRelativeDistanceConditionParser::SubElementRelativeDistanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeDistanceConditionXmlParser = std::make_shared<RelativeDistanceConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementRelativeDistanceConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
        {
            auto relativeDistanceCondition = std::make_shared<RelativeDistanceConditionImpl>();
            // Setting the parent
            relativeDistanceCondition->SetParent(object);
            _relativeDistanceConditionXmlParser->ParseElement(indexedElement, parserContext, relativeDistanceCondition);

            object->SetRelativeDistanceCondition(relativeDistanceCondition);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EntityObjectImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */

        std::vector<std::shared_ptr<IElementParser<EntityObjectImpl>>> EntityObjectXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<EntityObjectImpl>>> result;
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementVehicleParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPedestrianParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementMiscObjectParser>(_messageLogger, _filename));
            return result;
        }

        EntityObjectXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void EntityObjectXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            object->SetCatalogReference(catalogReference);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(catalogReference);
        }
        EntityObjectXmlParser::SubElementVehicleParser::SubElementVehicleParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _vehicleXmlParser = std::make_shared<VehicleXmlParser>(messageLogger, filename);
        }

        void EntityObjectXmlParser::SubElementVehicleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object)
        {
            auto vehicle = std::make_shared<VehicleImpl>();
            // Setting the parent
            vehicle->SetParent(object);
            _vehicleXmlParser->ParseElement(indexedElement, parserContext, vehicle);

            object->SetVehicle(vehicle);
        }
        EntityObjectXmlParser::SubElementPedestrianParser::SubElementPedestrianParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _pedestrianXmlParser = std::make_shared<PedestrianXmlParser>(messageLogger, filename);
        }

        void EntityObjectXmlParser::SubElementPedestrianParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object)
        {
            auto pedestrian = std::make_shared<PedestrianImpl>();
            // Setting the parent
            pedestrian->SetParent(object);
            _pedestrianXmlParser->ParseElement(indexedElement, parserContext, pedestrian);

            object->SetPedestrian(pedestrian);
        }
        EntityObjectXmlParser::SubElementMiscObjectParser::SubElementMiscObjectParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _miscObjectXmlParser = std::make_shared<MiscObjectXmlParser>(messageLogger, filename);
        }

        void EntityObjectXmlParser::SubElementMiscObjectParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object)
        {
            auto miscObject = std::make_shared<MiscObjectImpl>();
            // Setting the parent
            miscObject->SetParent(object);
            _miscObjectXmlParser->ParseElement(indexedElement, parserContext, miscObject);

            object->SetMiscObject(miscObject);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EntityRefImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<EntityRefImpl>>> EntityRefXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<EntityRefImpl>>> result;

            class AttributeEntityRef: public IAttributeParser<EntityRefImpl>, public XmlParserBase<EntityRefImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EntityRefImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<EntityRefImpl>>> EntityRefXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<EntityRefImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EntitySelectionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<EntitySelectionImpl>>> EntitySelectionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<EntitySelectionImpl>>> result;

            class AttributeName: public IAttributeParser<EntitySelectionImpl>, public XmlParserBase<EntitySelectionImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EntitySelectionImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<EntitySelectionImpl>>> EntitySelectionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<EntitySelectionImpl>>> result;
            result.push_back(std::make_shared<SubElementMembersParser>(_messageLogger, _filename));
            return result;
        }

        EntitySelectionXmlParser::SubElementMembersParser::SubElementMembersParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _selectedEntitiesXmlParser = std::make_shared<SelectedEntitiesXmlParser>(messageLogger, filename);
        }

        void EntitySelectionXmlParser::SubElementMembersParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntitySelectionImpl>& object)
        {
            auto members = std::make_shared<SelectedEntitiesImpl>();
            // Setting the parent
            members->SetParent(object);
            _selectedEntitiesXmlParser->ParseElement(indexedElement, parserContext, members);

            object->SetMembers(members);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EnvironmentImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentImpl>>> EnvironmentXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentImpl>>> result;

            class AttributeName: public IAttributeParser<EnvironmentImpl>, public XmlParserBase<EnvironmentImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EnvironmentImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<EnvironmentImpl>>> EnvironmentXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<EnvironmentImpl>>> result;
            result.push_back(std::make_shared<WrappedListParser<EnvironmentImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementTimeOfDayParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementWeatherParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRoadConditionParser>(_messageLogger, _filename));
            return result;
        }

        EnvironmentXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void EnvironmentXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = object->GetParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
        }
        EnvironmentXmlParser::SubElementTimeOfDayParser::SubElementTimeOfDayParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _timeOfDayXmlParser = std::make_shared<TimeOfDayXmlParser>(messageLogger, filename);
        }

        void EnvironmentXmlParser::SubElementTimeOfDayParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object)
        {
            auto timeOfDay = std::make_shared<TimeOfDayImpl>();
            // Setting the parent
            timeOfDay->SetParent(object);
            _timeOfDayXmlParser->ParseElement(indexedElement, parserContext, timeOfDay);

            object->SetTimeOfDay(timeOfDay);
        }
        EnvironmentXmlParser::SubElementWeatherParser::SubElementWeatherParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _weatherXmlParser = std::make_shared<WeatherXmlParser>(messageLogger, filename);
        }

        void EnvironmentXmlParser::SubElementWeatherParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object)
        {
            auto weather = std::make_shared<WeatherImpl>();
            // Setting the parent
            weather->SetParent(object);
            _weatherXmlParser->ParseElement(indexedElement, parserContext, weather);

            object->SetWeather(weather);
        }
        EnvironmentXmlParser::SubElementRoadConditionParser::SubElementRoadConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _roadConditionXmlParser = std::make_shared<RoadConditionXmlParser>(messageLogger, filename);
        }

        void EnvironmentXmlParser::SubElementRoadConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object)
        {
            auto roadCondition = std::make_shared<RoadConditionImpl>();
            // Setting the parent
            roadCondition->SetParent(object);
            _roadConditionXmlParser->ParseElement(indexedElement, parserContext, roadCondition);

            object->SetRoadCondition(roadCondition);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EnvironmentActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentActionImpl>>> EnvironmentActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<EnvironmentActionImpl>>> EnvironmentActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<EnvironmentActionImpl>>> result;
            result.push_back(std::make_shared<SubElementEnvironmentParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            return result;
        }

        EnvironmentActionXmlParser::SubElementEnvironmentParser::SubElementEnvironmentParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _environmentXmlParser = std::make_shared<EnvironmentXmlParser>(messageLogger, filename);
        }

        void EnvironmentActionXmlParser::SubElementEnvironmentParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentActionImpl>& object)
        {
            auto environment = std::make_shared<EnvironmentImpl>();
            // Setting the parent
            environment->SetParent(object);
            _environmentXmlParser->ParseElement(indexedElement, parserContext, environment);

            object->SetEnvironment(environment);
        }
        EnvironmentActionXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void EnvironmentActionXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentActionImpl>& object)
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
         * Filling a EnvironmentCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentCatalogLocationImpl>>> EnvironmentCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentCatalogLocationImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<EnvironmentCatalogLocationImpl>>> EnvironmentCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<EnvironmentCatalogLocationImpl>>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename));
            return result;
        }

        EnvironmentCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename);
        }

        void EnvironmentCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentCatalogLocationImpl>& object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            object->SetDirectory(directory);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EventImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<EventImpl>>> EventXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<EventImpl>>> result;

            class AttributePriority: public IAttributeParser<EventImpl>, public XmlParserBase<EventImpl>
            {
            public:
                AttributePriority(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EventImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PRIORITY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Priority::GetFromLiteral(attributeValue);
                        if (kResult != Priority::UNKNOWN)
                        {
                            object->SetPriority(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PRIORITY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PRIORITY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PRIORITY, std::make_shared<AttributePriority>(_messageLogger, _filename)));
            class AttributeMaximumExecutionCount: public IAttributeParser<EventImpl>, public XmlParserBase<EventImpl>
            {
            public:
                AttributeMaximumExecutionCount(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EventImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetMaximumExecutionCount(ParseUnsignedInt(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, std::make_shared<AttributeMaximumExecutionCount>(_messageLogger, _filename)));
            class AttributeName: public IAttributeParser<EventImpl>, public XmlParserBase<EventImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EventImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<EventImpl>>> EventXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<EventImpl>>> result;
            result.push_back(std::make_shared<SubElementActionsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementStartTriggerParser>(_messageLogger, _filename));
            return result;
        }

        EventXmlParser::SubElementActionsParser::SubElementActionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _actionXmlParser = std::make_shared<ActionXmlParser>(messageLogger, filename);
        }

        void EventXmlParser::SubElementActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EventImpl>& object)
        {
            auto actions = std::make_shared<ActionImpl>();
            // Setting the parent
            actions->SetParent(object);
            _actionXmlParser->ParseElement(indexedElement, parserContext, actions);
            auto actionsList = object->GetActions();
            actionsList.push_back(actions);
            object->SetActions(actionsList);
        }
        EventXmlParser::SubElementStartTriggerParser::SubElementStartTriggerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _triggerXmlParser = std::make_shared<TriggerXmlParser>(messageLogger, filename);
        }

        void EventXmlParser::SubElementStartTriggerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EventImpl>& object)
        {
            auto startTrigger = std::make_shared<TriggerImpl>();
            // Setting the parent
            startTrigger->SetParent(object);
            _triggerXmlParser->ParseElement(indexedElement, parserContext, startTrigger);

            object->SetStartTrigger(startTrigger);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a FileImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<FileImpl>>> FileXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<FileImpl>>> result;

            class AttributeFilepath: public IAttributeParser<FileImpl>, public XmlParserBase<FileImpl>
            {
            public:
                AttributeFilepath(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FileImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FILEPATH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetFilepath(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FILEPATH, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FILEPATH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FILEPATH, std::make_shared<AttributeFilepath>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<FileImpl>>> FileXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<FileImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a FileHeaderImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<FileHeaderImpl>>> FileHeaderXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<FileHeaderImpl>>> result;

            class AttributeRevMajor: public IAttributeParser<FileHeaderImpl>, public XmlParserBase<FileHeaderImpl>
            {
            public:
                AttributeRevMajor(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FileHeaderImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetRevMajor(ParseUnsignedShort(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR, std::make_shared<AttributeRevMajor>(_messageLogger, _filename)));
            class AttributeRevMinor: public IAttributeParser<FileHeaderImpl>, public XmlParserBase<FileHeaderImpl>
            {
            public:
                AttributeRevMinor(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FileHeaderImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetRevMinor(ParseUnsignedShort(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR, std::make_shared<AttributeRevMinor>(_messageLogger, _filename)));
            class AttributeDate: public IAttributeParser<FileHeaderImpl>, public XmlParserBase<FileHeaderImpl>
            {
            public:
                AttributeDate(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FileHeaderImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDate(ParseDateTime(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DATE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DATE, std::make_shared<AttributeDate>(_messageLogger, _filename)));
            class AttributeDescription: public IAttributeParser<FileHeaderImpl>, public XmlParserBase<FileHeaderImpl>
            {
            public:
                AttributeDescription(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FileHeaderImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetDescription(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION, std::make_shared<AttributeDescription>(_messageLogger, _filename)));
            class AttributeAuthor: public IAttributeParser<FileHeaderImpl>, public XmlParserBase<FileHeaderImpl>
            {
            public:
                AttributeAuthor(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FileHeaderImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__AUTHOR, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetAuthor(ParseString(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__AUTHOR, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__AUTHOR, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__AUTHOR, std::make_shared<AttributeAuthor>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<FileHeaderImpl>>> FileHeaderXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<FileHeaderImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a FinalSpeedImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<FinalSpeedImpl>>> FinalSpeedXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<FinalSpeedImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<FinalSpeedImpl>>> FinalSpeedXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<FinalSpeedImpl>>> result;
            result.push_back(std::make_shared<SubElementAbsoluteSpeedParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRelativeSpeedToMasterParser>(_messageLogger, _filename));
            return result;
        }

        FinalSpeedXmlParser::SubElementAbsoluteSpeedParser::SubElementAbsoluteSpeedParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _absoluteSpeedXmlParser = std::make_shared<AbsoluteSpeedXmlParser>(messageLogger, filename);
        }

        void FinalSpeedXmlParser::SubElementAbsoluteSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FinalSpeedImpl>& object)
        {
            auto absoluteSpeed = std::make_shared<AbsoluteSpeedImpl>();
            // Setting the parent
            absoluteSpeed->SetParent(object);
            _absoluteSpeedXmlParser->ParseElement(indexedElement, parserContext, absoluteSpeed);

            object->SetAbsoluteSpeed(absoluteSpeed);
        }
        FinalSpeedXmlParser::SubElementRelativeSpeedToMasterParser::SubElementRelativeSpeedToMasterParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeSpeedToMasterXmlParser = std::make_shared<RelativeSpeedToMasterXmlParser>(messageLogger, filename);
        }

        void FinalSpeedXmlParser::SubElementRelativeSpeedToMasterParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FinalSpeedImpl>& object)
        {
            auto relativeSpeedToMaster = std::make_shared<RelativeSpeedToMasterImpl>();
            // Setting the parent
            relativeSpeedToMaster->SetParent(object);
            _relativeSpeedToMasterXmlParser->ParseElement(indexedElement, parserContext, relativeSpeedToMaster);

            object->SetRelativeSpeedToMaster(relativeSpeedToMaster);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a FogImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<FogImpl>>> FogXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<FogImpl>>> result;

            class AttributeVisualRange: public IAttributeParser<FogImpl>, public XmlParserBase<FogImpl>
            {
            public:
                AttributeVisualRange(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FogImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetVisualRange(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE, std::make_shared<AttributeVisualRange>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<FogImpl>>> FogXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<FogImpl>>> result;
            result.push_back(std::make_shared<SubElementBoundingBoxParser>(_messageLogger, _filename));
            return result;
        }

        FogXmlParser::SubElementBoundingBoxParser::SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _boundingBoxXmlParser = std::make_shared<BoundingBoxXmlParser>(messageLogger, filename);
        }

        void FogXmlParser::SubElementBoundingBoxParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FogImpl>& object)
        {
            auto boundingBox = std::make_shared<BoundingBoxImpl>();
            // Setting the parent
            boundingBox->SetParent(object);
            _boundingBoxXmlParser->ParseElement(indexedElement, parserContext, boundingBox);

            object->SetBoundingBox(boundingBox);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a FollowTrajectoryActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<FollowTrajectoryActionImpl>>> FollowTrajectoryActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<FollowTrajectoryActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<FollowTrajectoryActionImpl>>> FollowTrajectoryActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<FollowTrajectoryActionImpl>>> result;
            result.push_back(std::make_shared<SubElementTrajectoryParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTimeReferenceParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrajectoryFollowingModeParser>(_messageLogger, _filename));
            return result;
        }

        FollowTrajectoryActionXmlParser::SubElementTrajectoryParser::SubElementTrajectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trajectoryXmlParser = std::make_shared<TrajectoryXmlParser>(messageLogger, filename);
        }

        void FollowTrajectoryActionXmlParser::SubElementTrajectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object)
        {
            auto trajectory = std::make_shared<TrajectoryImpl>();
            // Setting the parent
            trajectory->SetParent(object);
            _trajectoryXmlParser->ParseElement(indexedElement, parserContext, trajectory);

            object->SetTrajectory(trajectory);
        }
        FollowTrajectoryActionXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void FollowTrajectoryActionXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            object->SetCatalogReference(catalogReference);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(catalogReference);
        }
        FollowTrajectoryActionXmlParser::SubElementTimeReferenceParser::SubElementTimeReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _timeReferenceXmlParser = std::make_shared<TimeReferenceXmlParser>(messageLogger, filename);
        }

        void FollowTrajectoryActionXmlParser::SubElementTimeReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object)
        {
            auto timeReference = std::make_shared<TimeReferenceImpl>();
            // Setting the parent
            timeReference->SetParent(object);
            _timeReferenceXmlParser->ParseElement(indexedElement, parserContext, timeReference);

            object->SetTimeReference(timeReference);
        }
        FollowTrajectoryActionXmlParser::SubElementTrajectoryFollowingModeParser::SubElementTrajectoryFollowingModeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trajectoryFollowingModeXmlParser = std::make_shared<TrajectoryFollowingModeXmlParser>(messageLogger, filename);
        }

        void FollowTrajectoryActionXmlParser::SubElementTrajectoryFollowingModeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object)
        {
            auto trajectoryFollowingMode = std::make_shared<TrajectoryFollowingModeImpl>();
            // Setting the parent
            trajectoryFollowingMode->SetParent(object);
            _trajectoryFollowingModeXmlParser->ParseElement(indexedElement, parserContext, trajectoryFollowingMode);

            object->SetTrajectoryFollowingMode(trajectoryFollowingMode);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a GlobalActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<GlobalActionImpl>>> GlobalActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<GlobalActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<GlobalActionImpl>>> GlobalActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<GlobalActionImpl>>> result;
            result.push_back(std::make_shared<SubElementEnvironmentActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementEntityActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementParameterActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementInfrastructureActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementTrafficActionParser>(_messageLogger, _filename));
            return result;
        }

        GlobalActionXmlParser::SubElementEnvironmentActionParser::SubElementEnvironmentActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _environmentActionXmlParser = std::make_shared<EnvironmentActionXmlParser>(messageLogger, filename);
        }

        void GlobalActionXmlParser::SubElementEnvironmentActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object)
        {
            auto environmentAction = std::make_shared<EnvironmentActionImpl>();
            // Setting the parent
            environmentAction->SetParent(object);
            _environmentActionXmlParser->ParseElement(indexedElement, parserContext, environmentAction);

            object->SetEnvironmentAction(environmentAction);
        }
        GlobalActionXmlParser::SubElementEntityActionParser::SubElementEntityActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entityActionXmlParser = std::make_shared<EntityActionXmlParser>(messageLogger, filename);
        }

        void GlobalActionXmlParser::SubElementEntityActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object)
        {
            auto entityAction = std::make_shared<EntityActionImpl>();
            // Setting the parent
            entityAction->SetParent(object);
            _entityActionXmlParser->ParseElement(indexedElement, parserContext, entityAction);

            object->SetEntityAction(entityAction);
        }
        GlobalActionXmlParser::SubElementParameterActionParser::SubElementParameterActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterActionXmlParser = std::make_shared<ParameterActionXmlParser>(messageLogger, filename);
        }

        void GlobalActionXmlParser::SubElementParameterActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object)
        {
            auto parameterAction = std::make_shared<ParameterActionImpl>();
            // Setting the parent
            parameterAction->SetParent(object);
            _parameterActionXmlParser->ParseElement(indexedElement, parserContext, parameterAction);

            object->SetParameterAction(parameterAction);
        }
        GlobalActionXmlParser::SubElementInfrastructureActionParser::SubElementInfrastructureActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _infrastructureActionXmlParser = std::make_shared<InfrastructureActionXmlParser>(messageLogger, filename);
        }

        void GlobalActionXmlParser::SubElementInfrastructureActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object)
        {
            auto infrastructureAction = std::make_shared<InfrastructureActionImpl>();
            // Setting the parent
            infrastructureAction->SetParent(object);
            _infrastructureActionXmlParser->ParseElement(indexedElement, parserContext, infrastructureAction);

            object->SetInfrastructureAction(infrastructureAction);
        }
        GlobalActionXmlParser::SubElementTrafficActionParser::SubElementTrafficActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficActionXmlParser = std::make_shared<TrafficActionXmlParser>(messageLogger, filename);
        }

        void GlobalActionXmlParser::SubElementTrafficActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object)
        {
            auto trafficAction = std::make_shared<TrafficActionImpl>();
            // Setting the parent
            trafficAction->SetParent(object);
            _trafficActionXmlParser->ParseElement(indexedElement, parserContext, trafficAction);

            object->SetTrafficAction(trafficAction);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a InRoutePositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<InRoutePositionImpl>>> InRoutePositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<InRoutePositionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<InRoutePositionImpl>>> InRoutePositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<InRoutePositionImpl>>> result;
            result.push_back(std::make_shared<SubElementFromCurrentEntityParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementFromRoadCoordinatesParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementFromLaneCoordinatesParser>(_messageLogger, _filename));
            return result;
        }

        InRoutePositionXmlParser::SubElementFromCurrentEntityParser::SubElementFromCurrentEntityParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionOfCurrentEntityXmlParser = std::make_shared<PositionOfCurrentEntityXmlParser>(messageLogger, filename);
        }

        void InRoutePositionXmlParser::SubElementFromCurrentEntityParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InRoutePositionImpl>& object)
        {
            auto fromCurrentEntity = std::make_shared<PositionOfCurrentEntityImpl>();
            // Setting the parent
            fromCurrentEntity->SetParent(object);
            _positionOfCurrentEntityXmlParser->ParseElement(indexedElement, parserContext, fromCurrentEntity);

            object->SetFromCurrentEntity(fromCurrentEntity);
        }
        InRoutePositionXmlParser::SubElementFromRoadCoordinatesParser::SubElementFromRoadCoordinatesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionInRoadCoordinatesXmlParser = std::make_shared<PositionInRoadCoordinatesXmlParser>(messageLogger, filename);
        }

        void InRoutePositionXmlParser::SubElementFromRoadCoordinatesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InRoutePositionImpl>& object)
        {
            auto fromRoadCoordinates = std::make_shared<PositionInRoadCoordinatesImpl>();
            // Setting the parent
            fromRoadCoordinates->SetParent(object);
            _positionInRoadCoordinatesXmlParser->ParseElement(indexedElement, parserContext, fromRoadCoordinates);

            object->SetFromRoadCoordinates(fromRoadCoordinates);
        }
        InRoutePositionXmlParser::SubElementFromLaneCoordinatesParser::SubElementFromLaneCoordinatesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionInLaneCoordinatesXmlParser = std::make_shared<PositionInLaneCoordinatesXmlParser>(messageLogger, filename);
        }

        void InRoutePositionXmlParser::SubElementFromLaneCoordinatesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InRoutePositionImpl>& object)
        {
            auto fromLaneCoordinates = std::make_shared<PositionInLaneCoordinatesImpl>();
            // Setting the parent
            fromLaneCoordinates->SetParent(object);
            _positionInLaneCoordinatesXmlParser->ParseElement(indexedElement, parserContext, fromLaneCoordinates);

            object->SetFromLaneCoordinates(fromLaneCoordinates);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a InfrastructureActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<InfrastructureActionImpl>>> InfrastructureActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<InfrastructureActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<InfrastructureActionImpl>>> InfrastructureActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<InfrastructureActionImpl>>> result;
            result.push_back(std::make_shared<SubElementTrafficSignalActionParser>(_messageLogger, _filename));
            return result;
        }

        InfrastructureActionXmlParser::SubElementTrafficSignalActionParser::SubElementTrafficSignalActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSignalActionXmlParser = std::make_shared<TrafficSignalActionXmlParser>(messageLogger, filename);
        }

        void InfrastructureActionXmlParser::SubElementTrafficSignalActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InfrastructureActionImpl>& object)
        {
            auto trafficSignalAction = std::make_shared<TrafficSignalActionImpl>();
            // Setting the parent
            trafficSignalAction->SetParent(object);
            _trafficSignalActionXmlParser->ParseElement(indexedElement, parserContext, trafficSignalAction);

            object->SetTrafficSignalAction(trafficSignalAction);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a InitImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<InitImpl>>> InitXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<InitImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<InitImpl>>> InitXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<InitImpl>>> result;
            result.push_back(std::make_shared<SubElementActionsParser>(_messageLogger, _filename));
            return result;
        }

        InitXmlParser::SubElementActionsParser::SubElementActionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _initActionsXmlParser = std::make_shared<InitActionsXmlParser>(messageLogger, filename);
        }

        void InitXmlParser::SubElementActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitImpl>& object)
        {
            auto actions = std::make_shared<InitActionsImpl>();
            // Setting the parent
            actions->SetParent(object);
            _initActionsXmlParser->ParseElement(indexedElement, parserContext, actions);

            object->SetActions(actions);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a InitActionsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<InitActionsImpl>>> InitActionsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<InitActionsImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<InitActionsImpl>>> InitActionsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<InitActionsImpl>>> result;
            result.push_back(std::make_shared<SubElementGlobalActionsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementUserDefinedActionsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPrivatesParser>(_messageLogger, _filename));
            return result;
        }

        InitActionsXmlParser::SubElementGlobalActionsParser::SubElementGlobalActionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _globalActionXmlParser = std::make_shared<GlobalActionXmlParser>(messageLogger, filename);
        }

        void InitActionsXmlParser::SubElementGlobalActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitActionsImpl>& object)
        {
            auto globalActions = std::make_shared<GlobalActionImpl>();
            // Setting the parent
            globalActions->SetParent(object);
            _globalActionXmlParser->ParseElement(indexedElement, parserContext, globalActions);
            auto globalActionsList = object->GetGlobalActions();
            globalActionsList.push_back(globalActions);
            object->SetGlobalActions(globalActionsList);
        }
        InitActionsXmlParser::SubElementUserDefinedActionsParser::SubElementUserDefinedActionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _userDefinedActionXmlParser = std::make_shared<UserDefinedActionXmlParser>(messageLogger, filename);
        }

        void InitActionsXmlParser::SubElementUserDefinedActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitActionsImpl>& object)
        {
            auto userDefinedActions = std::make_shared<UserDefinedActionImpl>();
            // Setting the parent
            userDefinedActions->SetParent(object);
            _userDefinedActionXmlParser->ParseElement(indexedElement, parserContext, userDefinedActions);
            auto userDefinedActionsList = object->GetUserDefinedActions();
            userDefinedActionsList.push_back(userDefinedActions);
            object->SetUserDefinedActions(userDefinedActionsList);
        }
        InitActionsXmlParser::SubElementPrivatesParser::SubElementPrivatesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _privateXmlParser = std::make_shared<PrivateXmlParser>(messageLogger, filename);
        }

        void InitActionsXmlParser::SubElementPrivatesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitActionsImpl>& object)
        {
            auto privates = std::make_shared<PrivateImpl>();
            // Setting the parent
            privates->SetParent(object);
            _privateXmlParser->ParseElement(indexedElement, parserContext, privates);
            auto privatesList = object->GetPrivates();
            privatesList.push_back(privates);
            object->SetPrivates(privatesList);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a KnotImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<KnotImpl>>> KnotXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<KnotImpl>>> result;

            class AttributeValue: public IAttributeParser<KnotImpl>, public XmlParserBase<KnotImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<KnotImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<KnotImpl>>> KnotXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<KnotImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LaneChangeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneChangeActionImpl>>> LaneChangeActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<LaneChangeActionImpl>>> result;

            class AttributeTargetLaneOffset: public IAttributeParser<LaneChangeActionImpl>, public XmlParserBase<LaneChangeActionImpl>
            {
            public:
                AttributeTargetLaneOffset(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LaneChangeActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TARGET_LANE_OFFSET, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetTargetLaneOffset(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TARGET_LANE_OFFSET, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TARGET_LANE_OFFSET, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TARGET_LANE_OFFSET, std::make_shared<AttributeTargetLaneOffset>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<LaneChangeActionImpl>>> LaneChangeActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<LaneChangeActionImpl>>> result;
            result.push_back(std::make_shared<SubElementLaneChangeActionDynamicsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementLaneChangeTargetParser>(_messageLogger, _filename));
            return result;
        }

        LaneChangeActionXmlParser::SubElementLaneChangeActionDynamicsParser::SubElementLaneChangeActionDynamicsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _transitionDynamicsXmlParser = std::make_shared<TransitionDynamicsXmlParser>(messageLogger, filename);
        }

        void LaneChangeActionXmlParser::SubElementLaneChangeActionDynamicsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeActionImpl>& object)
        {
            auto laneChangeActionDynamics = std::make_shared<TransitionDynamicsImpl>();
            // Setting the parent
            laneChangeActionDynamics->SetParent(object);
            _transitionDynamicsXmlParser->ParseElement(indexedElement, parserContext, laneChangeActionDynamics);

            object->SetLaneChangeActionDynamics(laneChangeActionDynamics);
        }
        LaneChangeActionXmlParser::SubElementLaneChangeTargetParser::SubElementLaneChangeTargetParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _laneChangeTargetXmlParser = std::make_shared<LaneChangeTargetXmlParser>(messageLogger, filename);
        }

        void LaneChangeActionXmlParser::SubElementLaneChangeTargetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeActionImpl>& object)
        {
            auto laneChangeTarget = std::make_shared<LaneChangeTargetImpl>();
            // Setting the parent
            laneChangeTarget->SetParent(object);
            _laneChangeTargetXmlParser->ParseElement(indexedElement, parserContext, laneChangeTarget);

            object->SetLaneChangeTarget(laneChangeTarget);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LaneChangeTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneChangeTargetImpl>>> LaneChangeTargetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<LaneChangeTargetImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<LaneChangeTargetImpl>>> LaneChangeTargetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<LaneChangeTargetImpl>>> result;
            result.push_back(std::make_shared<SubElementRelativeTargetLaneParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementAbsoluteTargetLaneParser>(_messageLogger, _filename));
            return result;
        }

        LaneChangeTargetXmlParser::SubElementRelativeTargetLaneParser::SubElementRelativeTargetLaneParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeTargetLaneXmlParser = std::make_shared<RelativeTargetLaneXmlParser>(messageLogger, filename);
        }

        void LaneChangeTargetXmlParser::SubElementRelativeTargetLaneParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeTargetImpl>& object)
        {
            auto relativeTargetLane = std::make_shared<RelativeTargetLaneImpl>();
            // Setting the parent
            relativeTargetLane->SetParent(object);
            _relativeTargetLaneXmlParser->ParseElement(indexedElement, parserContext, relativeTargetLane);

            object->SetRelativeTargetLane(relativeTargetLane);
        }
        LaneChangeTargetXmlParser::SubElementAbsoluteTargetLaneParser::SubElementAbsoluteTargetLaneParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _absoluteTargetLaneXmlParser = std::make_shared<AbsoluteTargetLaneXmlParser>(messageLogger, filename);
        }

        void LaneChangeTargetXmlParser::SubElementAbsoluteTargetLaneParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeTargetImpl>& object)
        {
            auto absoluteTargetLane = std::make_shared<AbsoluteTargetLaneImpl>();
            // Setting the parent
            absoluteTargetLane->SetParent(object);
            _absoluteTargetLaneXmlParser->ParseElement(indexedElement, parserContext, absoluteTargetLane);

            object->SetAbsoluteTargetLane(absoluteTargetLane);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LaneOffsetActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetActionImpl>>> LaneOffsetActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetActionImpl>>> result;

            class AttributeContinuous: public IAttributeParser<LaneOffsetActionImpl>, public XmlParserBase<LaneOffsetActionImpl>
            {
            public:
                AttributeContinuous(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LaneOffsetActionImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<LaneOffsetActionImpl>>> LaneOffsetActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<LaneOffsetActionImpl>>> result;
            result.push_back(std::make_shared<SubElementLaneOffsetActionDynamicsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementLaneOffsetTargetParser>(_messageLogger, _filename));
            return result;
        }

        LaneOffsetActionXmlParser::SubElementLaneOffsetActionDynamicsParser::SubElementLaneOffsetActionDynamicsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _laneOffsetActionDynamicsXmlParser = std::make_shared<LaneOffsetActionDynamicsXmlParser>(messageLogger, filename);
        }

        void LaneOffsetActionXmlParser::SubElementLaneOffsetActionDynamicsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetActionImpl>& object)
        {
            auto laneOffsetActionDynamics = std::make_shared<LaneOffsetActionDynamicsImpl>();
            // Setting the parent
            laneOffsetActionDynamics->SetParent(object);
            _laneOffsetActionDynamicsXmlParser->ParseElement(indexedElement, parserContext, laneOffsetActionDynamics);

            object->SetLaneOffsetActionDynamics(laneOffsetActionDynamics);
        }
        LaneOffsetActionXmlParser::SubElementLaneOffsetTargetParser::SubElementLaneOffsetTargetParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _laneOffsetTargetXmlParser = std::make_shared<LaneOffsetTargetXmlParser>(messageLogger, filename);
        }

        void LaneOffsetActionXmlParser::SubElementLaneOffsetTargetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetActionImpl>& object)
        {
            auto laneOffsetTarget = std::make_shared<LaneOffsetTargetImpl>();
            // Setting the parent
            laneOffsetTarget->SetParent(object);
            _laneOffsetTargetXmlParser->ParseElement(indexedElement, parserContext, laneOffsetTarget);

            object->SetLaneOffsetTarget(laneOffsetTarget);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LaneOffsetActionDynamicsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetActionDynamicsImpl>>> LaneOffsetActionDynamicsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetActionDynamicsImpl>>> result;

            class AttributeMaxLateralAcc: public IAttributeParser<LaneOffsetActionDynamicsImpl>, public XmlParserBase<LaneOffsetActionDynamicsImpl>
            {
            public:
                AttributeMaxLateralAcc(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LaneOffsetActionDynamicsImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetMaxLateralAcc(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC, std::make_shared<AttributeMaxLateralAcc>(_messageLogger, _filename)));
            class AttributeDynamicsShape: public IAttributeParser<LaneOffsetActionDynamicsImpl>, public XmlParserBase<LaneOffsetActionDynamicsImpl>
            {
            public:
                AttributeDynamicsShape(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LaneOffsetActionDynamicsImpl>& object) override
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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<LaneOffsetActionDynamicsImpl>>> LaneOffsetActionDynamicsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<LaneOffsetActionDynamicsImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LaneOffsetTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetTargetImpl>>> LaneOffsetTargetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetTargetImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<LaneOffsetTargetImpl>>> LaneOffsetTargetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<LaneOffsetTargetImpl>>> result;
            result.push_back(std::make_shared<SubElementRelativeTargetLaneOffsetParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementAbsoluteTargetLaneOffsetParser>(_messageLogger, _filename));
            return result;
        }

        LaneOffsetTargetXmlParser::SubElementRelativeTargetLaneOffsetParser::SubElementRelativeTargetLaneOffsetParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeTargetLaneOffsetXmlParser = std::make_shared<RelativeTargetLaneOffsetXmlParser>(messageLogger, filename);
        }

        void LaneOffsetTargetXmlParser::SubElementRelativeTargetLaneOffsetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetTargetImpl>& object)
        {
            auto relativeTargetLaneOffset = std::make_shared<RelativeTargetLaneOffsetImpl>();
            // Setting the parent
            relativeTargetLaneOffset->SetParent(object);
            _relativeTargetLaneOffsetXmlParser->ParseElement(indexedElement, parserContext, relativeTargetLaneOffset);

            object->SetRelativeTargetLaneOffset(relativeTargetLaneOffset);
        }
        LaneOffsetTargetXmlParser::SubElementAbsoluteTargetLaneOffsetParser::SubElementAbsoluteTargetLaneOffsetParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _absoluteTargetLaneOffsetXmlParser = std::make_shared<AbsoluteTargetLaneOffsetXmlParser>(messageLogger, filename);
        }

        void LaneOffsetTargetXmlParser::SubElementAbsoluteTargetLaneOffsetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetTargetImpl>& object)
        {
            auto absoluteTargetLaneOffset = std::make_shared<AbsoluteTargetLaneOffsetImpl>();
            // Setting the parent
            absoluteTargetLaneOffset->SetParent(object);
            _absoluteTargetLaneOffsetXmlParser->ParseElement(indexedElement, parserContext, absoluteTargetLaneOffset);

            object->SetAbsoluteTargetLaneOffset(absoluteTargetLaneOffset);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LanePositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<LanePositionImpl>>> LanePositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<LanePositionImpl>>> result;

            class AttributeRoadId: public IAttributeParser<LanePositionImpl>, public XmlParserBase<LanePositionImpl>
            {
            public:
                AttributeRoadId(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LanePositionImpl>& object) override
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
            class AttributeLaneId: public IAttributeParser<LanePositionImpl>, public XmlParserBase<LanePositionImpl>
            {
            public:
                AttributeLaneId(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LanePositionImpl>& object) override
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
            class AttributeOffset: public IAttributeParser<LanePositionImpl>, public XmlParserBase<LanePositionImpl>
            {
            public:
                AttributeOffset(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LanePositionImpl>& object) override
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
            class AttributeS: public IAttributeParser<LanePositionImpl>, public XmlParserBase<LanePositionImpl>
            {
            public:
                AttributeS(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LanePositionImpl>& object) override
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
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<LanePositionImpl>>> LanePositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<LanePositionImpl>>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename));
            return result;
        }

        LanePositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename);
        }

        void LanePositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LanePositionImpl>& object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            object->SetOrientation(orientation);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LateralActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<LateralActionImpl>>> LateralActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<LateralActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<LateralActionImpl>>> LateralActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<LateralActionImpl>>> result;
            result.push_back(std::make_shared<SubElementLaneChangeActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementLaneOffsetActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementLateralDistanceActionParser>(_messageLogger, _filename));
            return result;
        }

        LateralActionXmlParser::SubElementLaneChangeActionParser::SubElementLaneChangeActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _laneChangeActionXmlParser = std::make_shared<LaneChangeActionXmlParser>(messageLogger, filename);
        }

        void LateralActionXmlParser::SubElementLaneChangeActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralActionImpl>& object)
        {
            auto laneChangeAction = std::make_shared<LaneChangeActionImpl>();
            // Setting the parent
            laneChangeAction->SetParent(object);
            _laneChangeActionXmlParser->ParseElement(indexedElement, parserContext, laneChangeAction);

            object->SetLaneChangeAction(laneChangeAction);
        }
        LateralActionXmlParser::SubElementLaneOffsetActionParser::SubElementLaneOffsetActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _laneOffsetActionXmlParser = std::make_shared<LaneOffsetActionXmlParser>(messageLogger, filename);
        }

        void LateralActionXmlParser::SubElementLaneOffsetActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralActionImpl>& object)
        {
            auto laneOffsetAction = std::make_shared<LaneOffsetActionImpl>();
            // Setting the parent
            laneOffsetAction->SetParent(object);
            _laneOffsetActionXmlParser->ParseElement(indexedElement, parserContext, laneOffsetAction);

            object->SetLaneOffsetAction(laneOffsetAction);
        }
        LateralActionXmlParser::SubElementLateralDistanceActionParser::SubElementLateralDistanceActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _lateralDistanceActionXmlParser = std::make_shared<LateralDistanceActionXmlParser>(messageLogger, filename);
        }

        void LateralActionXmlParser::SubElementLateralDistanceActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralActionImpl>& object)
        {
            auto lateralDistanceAction = std::make_shared<LateralDistanceActionImpl>();
            // Setting the parent
            lateralDistanceAction->SetParent(object);
            _lateralDistanceActionXmlParser->ParseElement(indexedElement, parserContext, lateralDistanceAction);

            object->SetLateralDistanceAction(lateralDistanceAction);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LateralDistanceActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<LateralDistanceActionImpl>>> LateralDistanceActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<LateralDistanceActionImpl>>> result;

            class AttributeEntityRef: public IAttributeParser<LateralDistanceActionImpl>, public XmlParserBase<LateralDistanceActionImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LateralDistanceActionImpl>& object) override
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
            class AttributeDistance: public IAttributeParser<LateralDistanceActionImpl>, public XmlParserBase<LateralDistanceActionImpl>
            {
            public:
                AttributeDistance(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LateralDistanceActionImpl>& object) override
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
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, std::make_shared<AttributeDistance>(_messageLogger, _filename)));
            class AttributeFreespace: public IAttributeParser<LateralDistanceActionImpl>, public XmlParserBase<LateralDistanceActionImpl>
            {
            public:
                AttributeFreespace(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LateralDistanceActionImpl>& object) override
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
            class AttributeContinuous: public IAttributeParser<LateralDistanceActionImpl>, public XmlParserBase<LateralDistanceActionImpl>
            {
            public:
                AttributeContinuous(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LateralDistanceActionImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<LateralDistanceActionImpl>>> LateralDistanceActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<LateralDistanceActionImpl>>> result;
            result.push_back(std::make_shared<SubElementDynamicConstraintsParser>(_messageLogger, _filename));
            return result;
        }

        LateralDistanceActionXmlParser::SubElementDynamicConstraintsParser::SubElementDynamicConstraintsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _dynamicConstraintsXmlParser = std::make_shared<DynamicConstraintsXmlParser>(messageLogger, filename);
        }

        void LateralDistanceActionXmlParser::SubElementDynamicConstraintsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralDistanceActionImpl>& object)
        {
            auto dynamicConstraints = std::make_shared<DynamicConstraintsImpl>();
            // Setting the parent
            dynamicConstraints->SetParent(object);
            _dynamicConstraintsXmlParser->ParseElement(indexedElement, parserContext, dynamicConstraints);

            object->SetDynamicConstraints(dynamicConstraints);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LongitudinalActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<LongitudinalActionImpl>>> LongitudinalActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<LongitudinalActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<LongitudinalActionImpl>>> LongitudinalActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<LongitudinalActionImpl>>> result;
            result.push_back(std::make_shared<SubElementSpeedActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementLongitudinalDistanceActionParser>(_messageLogger, _filename));
            return result;
        }

        LongitudinalActionXmlParser::SubElementSpeedActionParser::SubElementSpeedActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _speedActionXmlParser = std::make_shared<SpeedActionXmlParser>(messageLogger, filename);
        }

        void LongitudinalActionXmlParser::SubElementSpeedActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LongitudinalActionImpl>& object)
        {
            auto speedAction = std::make_shared<SpeedActionImpl>();
            // Setting the parent
            speedAction->SetParent(object);
            _speedActionXmlParser->ParseElement(indexedElement, parserContext, speedAction);

            object->SetSpeedAction(speedAction);
        }
        LongitudinalActionXmlParser::SubElementLongitudinalDistanceActionParser::SubElementLongitudinalDistanceActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _longitudinalDistanceActionXmlParser = std::make_shared<LongitudinalDistanceActionXmlParser>(messageLogger, filename);
        }

        void LongitudinalActionXmlParser::SubElementLongitudinalDistanceActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LongitudinalActionImpl>& object)
        {
            auto longitudinalDistanceAction = std::make_shared<LongitudinalDistanceActionImpl>();
            // Setting the parent
            longitudinalDistanceAction->SetParent(object);
            _longitudinalDistanceActionXmlParser->ParseElement(indexedElement, parserContext, longitudinalDistanceAction);

            object->SetLongitudinalDistanceAction(longitudinalDistanceAction);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LongitudinalDistanceActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<LongitudinalDistanceActionImpl>>> LongitudinalDistanceActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<LongitudinalDistanceActionImpl>>> result;

            class AttributeEntityRef: public IAttributeParser<LongitudinalDistanceActionImpl>, public XmlParserBase<LongitudinalDistanceActionImpl>
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LongitudinalDistanceActionImpl>& object) override
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
            class AttributeDistance: public IAttributeParser<LongitudinalDistanceActionImpl>, public XmlParserBase<LongitudinalDistanceActionImpl>
            {
            public:
                AttributeDistance(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LongitudinalDistanceActionImpl>& object) override
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
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, std::make_shared<AttributeDistance>(_messageLogger, _filename)));
            class AttributeTimeGap: public IAttributeParser<LongitudinalDistanceActionImpl>, public XmlParserBase<LongitudinalDistanceActionImpl>
            {
            public:
                AttributeTimeGap(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LongitudinalDistanceActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TIME_GAP, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetTimeGap(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TIME_GAP, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TIME_GAP, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TIME_GAP, std::make_shared<AttributeTimeGap>(_messageLogger, _filename)));
            class AttributeFreespace: public IAttributeParser<LongitudinalDistanceActionImpl>, public XmlParserBase<LongitudinalDistanceActionImpl>
            {
            public:
                AttributeFreespace(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LongitudinalDistanceActionImpl>& object) override
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
            class AttributeContinuous: public IAttributeParser<LongitudinalDistanceActionImpl>, public XmlParserBase<LongitudinalDistanceActionImpl>
            {
            public:
                AttributeContinuous(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LongitudinalDistanceActionImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<LongitudinalDistanceActionImpl>>> LongitudinalDistanceActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<LongitudinalDistanceActionImpl>>> result;
            result.push_back(std::make_shared<SubElementDynamicConstraintsParser>(_messageLogger, _filename));
            return result;
        }

        LongitudinalDistanceActionXmlParser::SubElementDynamicConstraintsParser::SubElementDynamicConstraintsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _dynamicConstraintsXmlParser = std::make_shared<DynamicConstraintsXmlParser>(messageLogger, filename);
        }

        void LongitudinalDistanceActionXmlParser::SubElementDynamicConstraintsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LongitudinalDistanceActionImpl>& object)
        {
            auto dynamicConstraints = std::make_shared<DynamicConstraintsImpl>();
            // Setting the parent
            dynamicConstraints->SetParent(object);
            _dynamicConstraintsXmlParser->ParseElement(indexedElement, parserContext, dynamicConstraints);

            object->SetDynamicConstraints(dynamicConstraints);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ManeuverImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverImpl>>> ManeuverXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverImpl>>> result;

            class AttributeName: public IAttributeParser<ManeuverImpl>, public XmlParserBase<ManeuverImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ManeuverImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<ManeuverImpl>>> ManeuverXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ManeuverImpl>>> result;
            result.push_back(std::make_shared<WrappedListParser<ManeuverImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementEventsParser>(_messageLogger, _filename));
            return result;
        }

        ManeuverXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void ManeuverXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverImpl>& object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = object->GetParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
        }
        ManeuverXmlParser::SubElementEventsParser::SubElementEventsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _eventXmlParser = std::make_shared<EventXmlParser>(messageLogger, filename);
        }

        void ManeuverXmlParser::SubElementEventsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverImpl>& object)
        {
            auto events = std::make_shared<EventImpl>();
            // Setting the parent
            events->SetParent(object);
            _eventXmlParser->ParseElement(indexedElement, parserContext, events);
            auto eventsList = object->GetEvents();
            eventsList.push_back(events);
            object->SetEvents(eventsList);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ManeuverCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverCatalogLocationImpl>>> ManeuverCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverCatalogLocationImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ManeuverCatalogLocationImpl>>> ManeuverCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ManeuverCatalogLocationImpl>>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename));
            return result;
        }

        ManeuverCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename);
        }

        void ManeuverCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverCatalogLocationImpl>& object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            object->SetDirectory(directory);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ManeuverGroupImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverGroupImpl>>> ManeuverGroupXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverGroupImpl>>> result;

            class AttributeMaximumExecutionCount: public IAttributeParser<ManeuverGroupImpl>, public XmlParserBase<ManeuverGroupImpl>
            {
            public:
                AttributeMaximumExecutionCount(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ManeuverGroupImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetMaximumExecutionCount(ParseUnsignedInt(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, std::make_shared<AttributeMaximumExecutionCount>(_messageLogger, _filename)));
            class AttributeName: public IAttributeParser<ManeuverGroupImpl>, public XmlParserBase<ManeuverGroupImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ManeuverGroupImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<ManeuverGroupImpl>>> ManeuverGroupXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ManeuverGroupImpl>>> result;
            result.push_back(std::make_shared<SubElementActorsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferencesParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementManeuversParser>(_messageLogger, _filename));
            return result;
        }

        ManeuverGroupXmlParser::SubElementActorsParser::SubElementActorsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _actorsXmlParser = std::make_shared<ActorsXmlParser>(messageLogger, filename);
        }

        void ManeuverGroupXmlParser::SubElementActorsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverGroupImpl>& object)
        {
            auto actors = std::make_shared<ActorsImpl>();
            // Setting the parent
            actors->SetParent(object);
            _actorsXmlParser->ParseElement(indexedElement, parserContext, actors);

            object->SetActors(actors);
        }
        ManeuverGroupXmlParser::SubElementCatalogReferencesParser::SubElementCatalogReferencesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void ManeuverGroupXmlParser::SubElementCatalogReferencesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverGroupImpl>& object)
        {
            auto catalogReferences = std::make_shared<CatalogReferenceImpl>();
            // Setting the parent
            catalogReferences->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReferences);
            auto catalogReferencesList = object->GetCatalogReferences();
            catalogReferencesList.push_back(catalogReferences);
            object->SetCatalogReferences(catalogReferencesList);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(catalogReferences);
        }
        ManeuverGroupXmlParser::SubElementManeuversParser::SubElementManeuversParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _maneuverXmlParser = std::make_shared<ManeuverXmlParser>(messageLogger, filename);
        }

        void ManeuverGroupXmlParser::SubElementManeuversParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverGroupImpl>& object)
        {
            auto maneuvers = std::make_shared<ManeuverImpl>();
            // Setting the parent
            maneuvers->SetParent(object);
            _maneuverXmlParser->ParseElement(indexedElement, parserContext, maneuvers);
            auto maneuversList = object->GetManeuvers();
            maneuversList.push_back(maneuvers);
            object->SetManeuvers(maneuversList);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a MiscObjectImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<MiscObjectImpl>>> MiscObjectXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<MiscObjectImpl>>> result;

            class AttributeMiscObjectCategory: public IAttributeParser<MiscObjectImpl>, public XmlParserBase<MiscObjectImpl>
            {
            public:
                AttributeMiscObjectCategory(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<MiscObjectImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Enumeration Type
                        const auto kResult = MiscObjectCategory::GetFromLiteral(attributeValue);
                        if (kResult != MiscObjectCategory::UNKNOWN)
                        {
                            object->SetMiscObjectCategory(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY, std::make_shared<AttributeMiscObjectCategory>(_messageLogger, _filename)));
            class AttributeMass: public IAttributeParser<MiscObjectImpl>, public XmlParserBase<MiscObjectImpl>
            {
            public:
                AttributeMass(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<MiscObjectImpl>& object) override
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
            class AttributeName: public IAttributeParser<MiscObjectImpl>, public XmlParserBase<MiscObjectImpl>
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<MiscObjectImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<MiscObjectImpl>>> MiscObjectXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<MiscObjectImpl>>> result;
            result.push_back(std::make_shared<WrappedListParser<MiscObjectImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementBoundingBoxParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPropertiesParser>(_messageLogger, _filename));
            return result;
        }

        MiscObjectXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void MiscObjectXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectImpl>& object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = object->GetParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            object->SetParameterDeclarations(parameterDeclarationsList);
        }
        MiscObjectXmlParser::SubElementBoundingBoxParser::SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _boundingBoxXmlParser = std::make_shared<BoundingBoxXmlParser>(messageLogger, filename);
        }

        void MiscObjectXmlParser::SubElementBoundingBoxParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectImpl>& object)
        {
            auto boundingBox = std::make_shared<BoundingBoxImpl>();
            // Setting the parent
            boundingBox->SetParent(object);
            _boundingBoxXmlParser->ParseElement(indexedElement, parserContext, boundingBox);

            object->SetBoundingBox(boundingBox);
        }
        MiscObjectXmlParser::SubElementPropertiesParser::SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _propertiesXmlParser = std::make_shared<PropertiesXmlParser>(messageLogger, filename);
        }

        void MiscObjectXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectImpl>& object)
        {
            auto properties = std::make_shared<PropertiesImpl>();
            // Setting the parent
            properties->SetParent(object);
            _propertiesXmlParser->ParseElement(indexedElement, parserContext, properties);

            object->SetProperties(properties);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a MiscObjectCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<MiscObjectCatalogLocationImpl>>> MiscObjectCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<MiscObjectCatalogLocationImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<MiscObjectCatalogLocationImpl>>> MiscObjectCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<MiscObjectCatalogLocationImpl>>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename));
            return result;
        }

        MiscObjectCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename);
        }

        void MiscObjectCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectCatalogLocationImpl>& object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            object->SetDirectory(directory);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ModifyRuleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ModifyRuleImpl>>> ModifyRuleXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ModifyRuleImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ModifyRuleImpl>>> ModifyRuleXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ModifyRuleImpl>>> result;
            result.push_back(std::make_shared<SubElementAddValueParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementMultiplyByValueParser>(_messageLogger, _filename));
            return result;
        }

        ModifyRuleXmlParser::SubElementAddValueParser::SubElementAddValueParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterAddValueRuleXmlParser = std::make_shared<ParameterAddValueRuleXmlParser>(messageLogger, filename);
        }

        void ModifyRuleXmlParser::SubElementAddValueParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ModifyRuleImpl>& object)
        {
            auto addValue = std::make_shared<ParameterAddValueRuleImpl>();
            // Setting the parent
            addValue->SetParent(object);
            _parameterAddValueRuleXmlParser->ParseElement(indexedElement, parserContext, addValue);

            object->SetAddValue(addValue);
        }
        ModifyRuleXmlParser::SubElementMultiplyByValueParser::SubElementMultiplyByValueParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterMultiplyByValueRuleXmlParser = std::make_shared<ParameterMultiplyByValueRuleXmlParser>(messageLogger, filename);
        }

        void ModifyRuleXmlParser::SubElementMultiplyByValueParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ModifyRuleImpl>& object)
        {
            auto multiplyByValue = std::make_shared<ParameterMultiplyByValueRuleImpl>();
            // Setting the parent
            multiplyByValue->SetParent(object);
            _parameterMultiplyByValueRuleXmlParser->ParseElement(indexedElement, parserContext, multiplyByValue);

            object->SetMultiplyByValue(multiplyByValue);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a NoneImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<NoneImpl>>> NoneXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<NoneImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<NoneImpl>>> NoneXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<NoneImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a NurbsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<NurbsImpl>>> NurbsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<NurbsImpl>>> result;

            class AttributeOrder: public IAttributeParser<NurbsImpl>, public XmlParserBase<NurbsImpl>
            {
            public:
                AttributeOrder(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<NurbsImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ORDER, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetOrder(ParseUnsignedInt(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ORDER, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ORDER, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ORDER, std::make_shared<AttributeOrder>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<NurbsImpl>>> NurbsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<NurbsImpl>>> result;
            result.push_back(std::make_shared<SubElementControlPointsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementKnotsParser>(_messageLogger, _filename));
            return result;
        }

        NurbsXmlParser::SubElementControlPointsParser::SubElementControlPointsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controlPointXmlParser = std::make_shared<ControlPointXmlParser>(messageLogger, filename);
        }

        void NurbsXmlParser::SubElementControlPointsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<NurbsImpl>& object)
        {
            auto controlPoints = std::make_shared<ControlPointImpl>();
            // Setting the parent
            controlPoints->SetParent(object);
            _controlPointXmlParser->ParseElement(indexedElement, parserContext, controlPoints);
            auto controlPointsList = object->GetControlPoints();
            controlPointsList.push_back(controlPoints);
            object->SetControlPoints(controlPointsList);
        }
        NurbsXmlParser::SubElementKnotsParser::SubElementKnotsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _knotXmlParser = std::make_shared<KnotXmlParser>(messageLogger, filename);
        }

        void NurbsXmlParser::SubElementKnotsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<NurbsImpl>& object)
        {
            auto knots = std::make_shared<KnotImpl>();
            // Setting the parent
            knots->SetParent(object);
            _knotXmlParser->ParseElement(indexedElement, parserContext, knots);
            auto knotsList = object->GetKnots();
            knotsList.push_back(knots);
            object->SetKnots(knotsList);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ObjectControllerImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<ObjectControllerImpl>>> ObjectControllerXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<ObjectControllerImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<ObjectControllerImpl>>> ObjectControllerXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<ObjectControllerImpl>>> result;
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementControllerParser>(_messageLogger, _filename));
            return result;
        }

        ObjectControllerXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void ObjectControllerXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ObjectControllerImpl>& object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            object->SetCatalogReference(catalogReference);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(catalogReference);
        }
        ObjectControllerXmlParser::SubElementControllerParser::SubElementControllerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerXmlParser = std::make_shared<ControllerXmlParser>(messageLogger, filename);
        }

        void ObjectControllerXmlParser::SubElementControllerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ObjectControllerImpl>& object)
        {
            auto controller = std::make_shared<ControllerImpl>();
            // Setting the parent
            controller->SetParent(object);
            _controllerXmlParser->ParseElement(indexedElement, parserContext, controller);

            object->SetController(controller);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OffroadConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<OffroadConditionImpl>>> OffroadConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<OffroadConditionImpl>>> result;

            class AttributeDuration: public IAttributeParser<OffroadConditionImpl>, public XmlParserBase<OffroadConditionImpl>
            {
            public:
                AttributeDuration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OffroadConditionImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<OffroadConditionImpl>>> OffroadConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<OffroadConditionImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OpenScenarioImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<OpenScenarioImpl>>> OpenScenarioXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<OpenScenarioImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<OpenScenarioImpl>>> OpenScenarioXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<OpenScenarioImpl>>> result;
            result.push_back(std::make_shared<SubElementFileHeaderParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementOpenScenarioCategoryParser>(_messageLogger, _filename));
            return result;
        }

        OpenScenarioXmlParser::SubElementFileHeaderParser::SubElementFileHeaderParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _fileHeaderXmlParser = std::make_shared<FileHeaderXmlParser>(messageLogger, filename);
        }

        void OpenScenarioXmlParser::SubElementFileHeaderParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioImpl>& object)
        {
            auto fileHeader = std::make_shared<FileHeaderImpl>();
            // Setting the parent
            fileHeader->SetParent(object);
            _fileHeaderXmlParser->ParseElement(indexedElement, parserContext, fileHeader);

            object->SetFileHeader(fileHeader);
        }
        OpenScenarioXmlParser::SubElementOpenScenarioCategoryParser::SubElementOpenScenarioCategoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _openScenarioCategoryXmlParser = std::make_shared<OpenScenarioCategoryXmlParser>(messageLogger, filename);
        }

        void OpenScenarioXmlParser::SubElementOpenScenarioCategoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioImpl>& object)
        {
            auto openScenarioCategory = std::make_shared<OpenScenarioCategoryImpl>();
            // Setting the parent
            openScenarioCategory->SetParent(object);
            _openScenarioCategoryXmlParser->ParseElement(indexedElement, parserContext, openScenarioCategory);

            object->SetOpenScenarioCategory(openScenarioCategory);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OpenScenarioCategoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */

        std::vector<std::shared_ptr<IElementParser<OpenScenarioCategoryImpl>>> OpenScenarioCategoryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<OpenScenarioCategoryImpl>>> result;
            result.push_back(std::make_shared<SubElementScenarioDefinitionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogDefinitionParser>(_messageLogger, _filename));
            return result;
        }

        OpenScenarioCategoryXmlParser::SubElementScenarioDefinitionParser::SubElementScenarioDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _scenarioDefinitionXmlParser = std::make_shared<ScenarioDefinitionXmlParser>(messageLogger, filename);
        }

        void OpenScenarioCategoryXmlParser::SubElementScenarioDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioCategoryImpl>& object)
        {
            auto scenarioDefinition = std::make_shared<ScenarioDefinitionImpl>();
            // Setting the parent
            scenarioDefinition->SetParent(object);
            _scenarioDefinitionXmlParser->ParseElement(indexedElement, parserContext, scenarioDefinition);

            object->SetScenarioDefinition(scenarioDefinition);
        }
        OpenScenarioCategoryXmlParser::SubElementCatalogDefinitionParser::SubElementCatalogDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogDefinitionXmlParser = std::make_shared<CatalogDefinitionXmlParser>(messageLogger, filename);
        }

        void OpenScenarioCategoryXmlParser::SubElementCatalogDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioCategoryImpl>& object)
        {
            auto catalogDefinition = std::make_shared<CatalogDefinitionImpl>();
            // Setting the parent
            catalogDefinition->SetParent(object);
            _catalogDefinitionXmlParser->ParseElement(indexedElement, parserContext, catalogDefinition);

            object->SetCatalogDefinition(catalogDefinition);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OrientationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<OrientationImpl>>> OrientationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<OrientationImpl>>> result;

            class AttributeType: public IAttributeParser<OrientationImpl>, public XmlParserBase<OrientationImpl>
            {
            public:
                AttributeType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OrientationImpl>& object) override
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
                        // Enumeration Type
                        const auto kResult = ReferenceContext::GetFromLiteral(attributeValue);
                        if (kResult != ReferenceContext::UNKNOWN)
                        {
                            object->SetType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<AttributeType>(_messageLogger, _filename)));
            class AttributeH: public IAttributeParser<OrientationImpl>, public XmlParserBase<OrientationImpl>
            {
            public:
                AttributeH(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OrientationImpl>& object) override
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
            class AttributeP: public IAttributeParser<OrientationImpl>, public XmlParserBase<OrientationImpl>
            {
            public:
                AttributeP(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OrientationImpl>& object) override
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
            class AttributeR: public IAttributeParser<OrientationImpl>, public XmlParserBase<OrientationImpl>
            {
            public:
                AttributeR(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OrientationImpl>& object) override
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

        std::vector<std::shared_ptr<IElementParser<OrientationImpl>>> OrientationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<OrientationImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideBrakeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideBrakeActionImpl>>> OverrideBrakeActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<OverrideBrakeActionImpl>>> result;

            class AttributeValue: public IAttributeParser<OverrideBrakeActionImpl>, public XmlParserBase<OverrideBrakeActionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideBrakeActionImpl>& object) override
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
            class AttributeActive: public IAttributeParser<OverrideBrakeActionImpl>, public XmlParserBase<OverrideBrakeActionImpl>
            {
            public:
                AttributeActive(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideBrakeActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetActive(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<AttributeActive>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<OverrideBrakeActionImpl>>> OverrideBrakeActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<OverrideBrakeActionImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideClutchActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideClutchActionImpl>>> OverrideClutchActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<OverrideClutchActionImpl>>> result;

            class AttributeValue: public IAttributeParser<OverrideClutchActionImpl>, public XmlParserBase<OverrideClutchActionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideClutchActionImpl>& object) override
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
            class AttributeActive: public IAttributeParser<OverrideClutchActionImpl>, public XmlParserBase<OverrideClutchActionImpl>
            {
            public:
                AttributeActive(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideClutchActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetActive(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<AttributeActive>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<OverrideClutchActionImpl>>> OverrideClutchActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<OverrideClutchActionImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideControllerValueActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideControllerValueActionImpl>>> OverrideControllerValueActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<OverrideControllerValueActionImpl>>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser<OverrideControllerValueActionImpl>>> OverrideControllerValueActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<OverrideControllerValueActionImpl>>> result;
            result.push_back(std::make_shared<SubElementThrottleParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementBrakeParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementClutchParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementParkingBrakeParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementSteeringWheelParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementGearParser>(_messageLogger, _filename));
            return result;
        }

        OverrideControllerValueActionXmlParser::SubElementThrottleParser::SubElementThrottleParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideThrottleActionXmlParser = std::make_shared<OverrideThrottleActionXmlParser>(messageLogger, filename);
        }

        void OverrideControllerValueActionXmlParser::SubElementThrottleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object)
        {
            auto throttle = std::make_shared<OverrideThrottleActionImpl>();
            // Setting the parent
            throttle->SetParent(object);
            _overrideThrottleActionXmlParser->ParseElement(indexedElement, parserContext, throttle);

            object->SetThrottle(throttle);
        }
        OverrideControllerValueActionXmlParser::SubElementBrakeParser::SubElementBrakeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideBrakeActionXmlParser = std::make_shared<OverrideBrakeActionXmlParser>(messageLogger, filename);
        }

        void OverrideControllerValueActionXmlParser::SubElementBrakeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object)
        {
            auto brake = std::make_shared<OverrideBrakeActionImpl>();
            // Setting the parent
            brake->SetParent(object);
            _overrideBrakeActionXmlParser->ParseElement(indexedElement, parserContext, brake);

            object->SetBrake(brake);
        }
        OverrideControllerValueActionXmlParser::SubElementClutchParser::SubElementClutchParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideClutchActionXmlParser = std::make_shared<OverrideClutchActionXmlParser>(messageLogger, filename);
        }

        void OverrideControllerValueActionXmlParser::SubElementClutchParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object)
        {
            auto clutch = std::make_shared<OverrideClutchActionImpl>();
            // Setting the parent
            clutch->SetParent(object);
            _overrideClutchActionXmlParser->ParseElement(indexedElement, parserContext, clutch);

            object->SetClutch(clutch);
        }
        OverrideControllerValueActionXmlParser::SubElementParkingBrakeParser::SubElementParkingBrakeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideParkingBrakeActionXmlParser = std::make_shared<OverrideParkingBrakeActionXmlParser>(messageLogger, filename);
        }

        void OverrideControllerValueActionXmlParser::SubElementParkingBrakeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object)
        {
            auto parkingBrake = std::make_shared<OverrideParkingBrakeActionImpl>();
            // Setting the parent
            parkingBrake->SetParent(object);
            _overrideParkingBrakeActionXmlParser->ParseElement(indexedElement, parserContext, parkingBrake);

            object->SetParkingBrake(parkingBrake);
        }
        OverrideControllerValueActionXmlParser::SubElementSteeringWheelParser::SubElementSteeringWheelParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideSteeringWheelActionXmlParser = std::make_shared<OverrideSteeringWheelActionXmlParser>(messageLogger, filename);
        }

        void OverrideControllerValueActionXmlParser::SubElementSteeringWheelParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object)
        {
            auto steeringWheel = std::make_shared<OverrideSteeringWheelActionImpl>();
            // Setting the parent
            steeringWheel->SetParent(object);
            _overrideSteeringWheelActionXmlParser->ParseElement(indexedElement, parserContext, steeringWheel);

            object->SetSteeringWheel(steeringWheel);
        }
        OverrideControllerValueActionXmlParser::SubElementGearParser::SubElementGearParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideGearActionXmlParser = std::make_shared<OverrideGearActionXmlParser>(messageLogger, filename);
        }

        void OverrideControllerValueActionXmlParser::SubElementGearParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object)
        {
            auto gear = std::make_shared<OverrideGearActionImpl>();
            // Setting the parent
            gear->SetParent(object);
            _overrideGearActionXmlParser->ParseElement(indexedElement, parserContext, gear);

            object->SetGear(gear);
        }

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideGearActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideGearActionImpl>>> OverrideGearActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<OverrideGearActionImpl>>> result;

            class AttributeNumber: public IAttributeParser<OverrideGearActionImpl>, public XmlParserBase<OverrideGearActionImpl>
            {
            public:
                AttributeNumber(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideGearActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NUMBER, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetNumber(ParseDouble(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NUMBER, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NUMBER, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NUMBER, std::make_shared<AttributeNumber>(_messageLogger, _filename)));
            class AttributeActive: public IAttributeParser<OverrideGearActionImpl>, public XmlParserBase<OverrideGearActionImpl>
            {
            public:
                AttributeActive(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideGearActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetActive(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<AttributeActive>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<OverrideGearActionImpl>>> OverrideGearActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<OverrideGearActionImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideParkingBrakeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideParkingBrakeActionImpl>>> OverrideParkingBrakeActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<OverrideParkingBrakeActionImpl>>> result;

            class AttributeValue: public IAttributeParser<OverrideParkingBrakeActionImpl>, public XmlParserBase<OverrideParkingBrakeActionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideParkingBrakeActionImpl>& object) override
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
            class AttributeActive: public IAttributeParser<OverrideParkingBrakeActionImpl>, public XmlParserBase<OverrideParkingBrakeActionImpl>
            {
            public:
                AttributeActive(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideParkingBrakeActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetActive(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<AttributeActive>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<OverrideParkingBrakeActionImpl>>> OverrideParkingBrakeActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<OverrideParkingBrakeActionImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideSteeringWheelActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideSteeringWheelActionImpl>>> OverrideSteeringWheelActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<OverrideSteeringWheelActionImpl>>> result;

            class AttributeValue: public IAttributeParser<OverrideSteeringWheelActionImpl>, public XmlParserBase<OverrideSteeringWheelActionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideSteeringWheelActionImpl>& object) override
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
            class AttributeActive: public IAttributeParser<OverrideSteeringWheelActionImpl>, public XmlParserBase<OverrideSteeringWheelActionImpl>
            {
            public:
                AttributeActive(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideSteeringWheelActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetActive(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<AttributeActive>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<OverrideSteeringWheelActionImpl>>> OverrideSteeringWheelActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<OverrideSteeringWheelActionImpl>>> result;
            return result;
        }


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideThrottleActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideThrottleActionImpl>>> OverrideThrottleActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<OverrideThrottleActionImpl>>> result;

            class AttributeValue: public IAttributeParser<OverrideThrottleActionImpl>, public XmlParserBase<OverrideThrottleActionImpl>
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideThrottleActionImpl>& object) override
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
            class AttributeActive: public IAttributeParser<OverrideThrottleActionImpl>, public XmlParserBase<OverrideThrottleActionImpl>
            {
            public:
                AttributeActive(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideThrottleActionImpl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        // Simple type
                        object->SetActive(ParseBoolean(attributeValue, startMarker));
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<AttributeActive>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser<OverrideThrottleActionImpl>>> OverrideThrottleActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<OverrideThrottleActionImpl>>> result;
            return result;
        }


    }
}
