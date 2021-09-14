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
 
#include "XmlParsersV1_0.h"
#include "NamedReferenceProxy.h"
#include "FileContentMessage.h"
#include "Position.h"
#include "Textmarker.h"
#include "ErrorLevel.h"
#include "WrappedListParser.h"
#include "CatalogReferenceParserContextV1_0.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AbsoluteSpeedImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            AbsoluteSpeedXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> AbsoluteSpeedXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<AbsoluteSpeedImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> AbsoluteSpeedXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        AbsoluteSpeedXmlParser::AbsoluteSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AbsoluteTargetLaneImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            AbsoluteTargetLaneXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> AbsoluteTargetLaneXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<AbsoluteTargetLaneImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> AbsoluteTargetLaneXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        AbsoluteTargetLaneXmlParser::AbsoluteTargetLaneXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AbsoluteTargetLaneOffsetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            AbsoluteTargetLaneOffsetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> AbsoluteTargetLaneOffsetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<AbsoluteTargetLaneOffsetImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> AbsoluteTargetLaneOffsetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        AbsoluteTargetLaneOffsetXmlParser::AbsoluteTargetLaneOffsetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AbsoluteTargetSpeedImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            AbsoluteTargetSpeedXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> AbsoluteTargetSpeedXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<AbsoluteTargetSpeedImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> AbsoluteTargetSpeedXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        AbsoluteTargetSpeedXmlParser::AbsoluteTargetSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AccelerationConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            AccelerationConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> AccelerationConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeRule: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<AccelerationConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
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
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<AccelerationConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> AccelerationConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        AccelerationConditionXmlParser::AccelerationConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AcquirePositionActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            AcquirePositionActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> AcquirePositionActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> AcquirePositionActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        AcquirePositionActionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void AcquirePositionActionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto position = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<AcquirePositionActionImpl>(object);                    
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            typedObject->SetPosition(position);
        }
        
        int AcquirePositionActionXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int AcquirePositionActionXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool AcquirePositionActionXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> AcquirePositionActionXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        AcquirePositionActionXmlParser::AcquirePositionActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ActImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ActXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ActXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ActImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ActXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementManeuverGroupsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementStartTriggerParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementStopTriggerParser>(_messageLogger, _filename));
            return result;
        }

        ActXmlParser::SubElementManeuverGroupsParser::SubElementManeuverGroupsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _maneuverGroupXmlParser = std::make_shared<ManeuverGroupXmlParser>(messageLogger, filename);
        }

        void ActXmlParser::SubElementManeuverGroupsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto maneuverGroups = std::make_shared<ManeuverGroupImpl>();
            auto typedObject = std::static_pointer_cast<ActImpl>(object);                    
            // Setting the parent
            maneuverGroups->SetParent(object);
            _maneuverGroupXmlParser->ParseElement(indexedElement, parserContext, maneuverGroups);
            auto maneuverGroupsList = typedObject->GetWriterManeuverGroups();
            maneuverGroupsList.push_back(maneuverGroups);
            typedObject->SetManeuverGroups(maneuverGroupsList);
        }
        
        int ActXmlParser::SubElementManeuverGroupsParser::GetMinOccur() 
        {
            return 1;
        }

        int ActXmlParser::SubElementManeuverGroupsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ActXmlParser::SubElementManeuverGroupsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__MANEUVER_GROUP ;
        }

        std::vector<std::string> ActXmlParser::SubElementManeuverGroupsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__MANEUVER_GROUP
                    };
        }
        ActXmlParser::SubElementStartTriggerParser::SubElementStartTriggerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _triggerXmlParser = std::make_shared<TriggerXmlParser>(messageLogger, filename);
        }

        void ActXmlParser::SubElementStartTriggerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto startTrigger = std::make_shared<TriggerImpl>();
            auto typedObject = std::static_pointer_cast<ActImpl>(object);                    
            // Setting the parent
            startTrigger->SetParent(object);
            _triggerXmlParser->ParseElement(indexedElement, parserContext, startTrigger);

            typedObject->SetStartTrigger(startTrigger);
        }
        
        int ActXmlParser::SubElementStartTriggerParser::GetMinOccur() 
        {
            return 1;
        }

        int ActXmlParser::SubElementStartTriggerParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ActXmlParser::SubElementStartTriggerParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__START_TRIGGER ;
        }

        std::vector<std::string> ActXmlParser::SubElementStartTriggerParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__START_TRIGGER
                    };
        }
        ActXmlParser::SubElementStopTriggerParser::SubElementStopTriggerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _triggerXmlParser = std::make_shared<TriggerXmlParser>(messageLogger, filename);
        }

        void ActXmlParser::SubElementStopTriggerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto stopTrigger = std::make_shared<TriggerImpl>();
            auto typedObject = std::static_pointer_cast<ActImpl>(object);                    
            // Setting the parent
            stopTrigger->SetParent(object);
            _triggerXmlParser->ParseElement(indexedElement, parserContext, stopTrigger);

            typedObject->SetStopTrigger(stopTrigger);
        }
        
        int ActXmlParser::SubElementStopTriggerParser::GetMinOccur() 
        {
            return 0;
        }

        int ActXmlParser::SubElementStopTriggerParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ActXmlParser::SubElementStopTriggerParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__STOP_TRIGGER ;
        }

        std::vector<std::string> ActXmlParser::SubElementStopTriggerParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__STOP_TRIGGER
                    };
        }
  
        ActXmlParser::ActXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementGlobalActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementUserDefinedActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPrivateActionParser>(_messageLogger, _filename));
            return result;
        }

        ActionXmlParser::SubElementGlobalActionParser::SubElementGlobalActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _globalActionXmlParser = std::make_shared<GlobalActionXmlParser>(messageLogger, filename);
        }

        void ActionXmlParser::SubElementGlobalActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto globalAction = std::make_shared<GlobalActionImpl>();
            auto typedObject = std::static_pointer_cast<ActionImpl>(object);                    
            // Setting the parent
            globalAction->SetParent(object);
            _globalActionXmlParser->ParseElement(indexedElement, parserContext, globalAction);

            typedObject->SetGlobalAction(globalAction);
        }
        
        int ActionXmlParser::SubElementGlobalActionParser::GetMinOccur() 
        {
            return 0;
        }

        int ActionXmlParser::SubElementGlobalActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ActionXmlParser::SubElementGlobalActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__GLOBAL_ACTION ;
        }

        std::vector<std::string> ActionXmlParser::SubElementGlobalActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__GLOBAL_ACTION
                    };
        }
        ActionXmlParser::SubElementUserDefinedActionParser::SubElementUserDefinedActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _userDefinedActionXmlParser = std::make_shared<UserDefinedActionXmlParser>(messageLogger, filename);
        }

        void ActionXmlParser::SubElementUserDefinedActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto userDefinedAction = std::make_shared<UserDefinedActionImpl>();
            auto typedObject = std::static_pointer_cast<ActionImpl>(object);                    
            // Setting the parent
            userDefinedAction->SetParent(object);
            _userDefinedActionXmlParser->ParseElement(indexedElement, parserContext, userDefinedAction);

            typedObject->SetUserDefinedAction(userDefinedAction);
        }
        
        int ActionXmlParser::SubElementUserDefinedActionParser::GetMinOccur() 
        {
            return 0;
        }

        int ActionXmlParser::SubElementUserDefinedActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ActionXmlParser::SubElementUserDefinedActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__USER_DEFINED_ACTION ;
        }

        std::vector<std::string> ActionXmlParser::SubElementUserDefinedActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__USER_DEFINED_ACTION
                    };
        }
        ActionXmlParser::SubElementPrivateActionParser::SubElementPrivateActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _privateActionXmlParser = std::make_shared<PrivateActionXmlParser>(messageLogger, filename);
        }

        void ActionXmlParser::SubElementPrivateActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto privateAction = std::make_shared<PrivateActionImpl>();
            auto typedObject = std::static_pointer_cast<ActionImpl>(object);                    
            // Setting the parent
            privateAction->SetParent(object);
            _privateActionXmlParser->ParseElement(indexedElement, parserContext, privateAction);

            typedObject->SetPrivateAction(privateAction);
        }
        
        int ActionXmlParser::SubElementPrivateActionParser::GetMinOccur() 
        {
            return 0;
        }

        int ActionXmlParser::SubElementPrivateActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ActionXmlParser::SubElementPrivateActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION ;
        }

        std::vector<std::string> ActionXmlParser::SubElementPrivateActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION
                    };
        }
  
        ActionXmlParser::ActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ActivateControllerActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ActivateControllerActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ActivateControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeLateral: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeLateral(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ActivateControllerActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LATERAL, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetLateral(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LATERAL, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LATERAL, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LATERAL, std::make_shared<AttributeLateral>(_messageLogger, _filename)));
            class AttributeLongitudinal: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeLongitudinal(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ActivateControllerActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LONGITUDINAL, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetLongitudinal(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LONGITUDINAL, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LONGITUDINAL, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LONGITUDINAL, std::make_shared<AttributeLongitudinal>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ActivateControllerActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        ActivateControllerActionXmlParser::ActivateControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ActorsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ActorsXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ActorsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeSelectTriggeringEntities: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeSelectTriggeringEntities(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ActorsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetSelectTriggeringEntities(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, std::make_shared<AttributeSelectTriggeringEntities>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ActorsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementEntityRefsParser>(_messageLogger, _filename));
            return result;
        }

        ActorsXmlParser::SubElementEntityRefsParser::SubElementEntityRefsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entityRefXmlParser = std::make_shared<EntityRefXmlParser>(messageLogger, filename);
        }

        void ActorsXmlParser::SubElementEntityRefsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto entityRefs = std::make_shared<EntityRefImpl>();
            auto typedObject = std::static_pointer_cast<ActorsImpl>(object);                    
            // Setting the parent
            entityRefs->SetParent(object);
            _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRefs);
            auto entityRefsList = typedObject->GetWriterEntityRefs();
            entityRefsList.push_back(entityRefs);
            typedObject->SetEntityRefs(entityRefsList);
        }
        
        int ActorsXmlParser::SubElementEntityRefsParser::GetMinOccur() 
        {
            return 0;
        }

        int ActorsXmlParser::SubElementEntityRefsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ActorsXmlParser::SubElementEntityRefsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
        }

        std::vector<std::string> ActorsXmlParser::SubElementEntityRefsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENTITY_REF
                    };
        }
  
        ActorsXmlParser::ActorsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AddEntityActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            AddEntityActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> AddEntityActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> AddEntityActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        AddEntityActionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void AddEntityActionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto position = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<AddEntityActionImpl>(object);                    
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            typedObject->SetPosition(position);
        }
        
        int AddEntityActionXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int AddEntityActionXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool AddEntityActionXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> AddEntityActionXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        AddEntityActionXmlParser::AddEntityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AssignControllerActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            AssignControllerActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> AssignControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> AssignControllerActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementControllerParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            return result;
        }

        AssignControllerActionXmlParser::SubElementControllerParser::SubElementControllerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerXmlParser = std::make_shared<ControllerXmlParser>(messageLogger, filename);
        }

        void AssignControllerActionXmlParser::SubElementControllerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto controller = std::make_shared<ControllerImpl>();
            auto typedObject = std::static_pointer_cast<AssignControllerActionImpl>(object);                    
            // Setting the parent
            controller->SetParent(object);
            _controllerXmlParser->ParseElement(indexedElement, parserContext, controller);

            typedObject->SetController(controller);
        }
        
        int AssignControllerActionXmlParser::SubElementControllerParser::GetMinOccur() 
        {
            return 0;
        }

        int AssignControllerActionXmlParser::SubElementControllerParser::GetMaxOccur() 
        {
            return 1;
        }

        bool AssignControllerActionXmlParser::SubElementControllerParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER ;
        }

        std::vector<std::string> AssignControllerActionXmlParser::SubElementControllerParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONTROLLER
                    };
        }
        AssignControllerActionXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void AssignControllerActionXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            auto typedObject = std::static_pointer_cast<AssignControllerActionImpl>(object);                    
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            typedObject->SetCatalogReference(catalogReference);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(std::dynamic_pointer_cast<ICatalogReference>(catalogReference));
        }
        
        int AssignControllerActionXmlParser::SubElementCatalogReferenceParser::GetMinOccur() 
        {
            return 0;
        }

        int AssignControllerActionXmlParser::SubElementCatalogReferenceParser::GetMaxOccur() 
        {
            return 1;
        }

        bool AssignControllerActionXmlParser::SubElementCatalogReferenceParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
        }

        std::vector<std::string> AssignControllerActionXmlParser::SubElementCatalogReferenceParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                    };
        }
  
        AssignControllerActionXmlParser::AssignControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AssignRouteActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            AssignRouteActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> AssignRouteActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> AssignRouteActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementRouteParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            return result;
        }

        AssignRouteActionXmlParser::SubElementRouteParser::SubElementRouteParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _routeXmlParser = std::make_shared<RouteXmlParser>(messageLogger, filename);
        }

        void AssignRouteActionXmlParser::SubElementRouteParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto route = std::make_shared<RouteImpl>();
            auto typedObject = std::static_pointer_cast<AssignRouteActionImpl>(object);                    
            // Setting the parent
            route->SetParent(object);
            _routeXmlParser->ParseElement(indexedElement, parserContext, route);

            typedObject->SetRoute(route);
        }
        
        int AssignRouteActionXmlParser::SubElementRouteParser::GetMinOccur() 
        {
            return 0;
        }

        int AssignRouteActionXmlParser::SubElementRouteParser::GetMaxOccur() 
        {
            return 1;
        }

        bool AssignRouteActionXmlParser::SubElementRouteParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ROUTE ;
        }

        std::vector<std::string> AssignRouteActionXmlParser::SubElementRouteParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ROUTE
                    };
        }
        AssignRouteActionXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void AssignRouteActionXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            auto typedObject = std::static_pointer_cast<AssignRouteActionImpl>(object);                    
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            typedObject->SetCatalogReference(catalogReference);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(std::dynamic_pointer_cast<ICatalogReference>(catalogReference));
        }
        
        int AssignRouteActionXmlParser::SubElementCatalogReferenceParser::GetMinOccur() 
        {
            return 0;
        }

        int AssignRouteActionXmlParser::SubElementCatalogReferenceParser::GetMaxOccur() 
        {
            return 1;
        }

        bool AssignRouteActionXmlParser::SubElementCatalogReferenceParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
        }

        std::vector<std::string> AssignRouteActionXmlParser::SubElementCatalogReferenceParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                    };
        }
  
        AssignRouteActionXmlParser::AssignRouteActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AxleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            AxleXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> AxleXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeMaxSteering: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMaxSteering(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<AxleImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetMaxSteering(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING, std::make_shared<AttributeMaxSteering>(_messageLogger, _filename)));
            class AttributePositionX: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributePositionX(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<AxleImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__POSITION_X, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetPositionX(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__POSITION_X, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__POSITION_X, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__POSITION_X, std::make_shared<AttributePositionX>(_messageLogger, _filename)));
            class AttributePositionZ: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributePositionZ(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<AxleImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetPositionZ(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z, std::make_shared<AttributePositionZ>(_messageLogger, _filename)));
            class AttributeTrackWidth: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTrackWidth(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<AxleImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetTrackWidth(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH, std::make_shared<AttributeTrackWidth>(_messageLogger, _filename)));
            class AttributeWheelDiameter: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeWheelDiameter(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<AxleImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetWheelDiameter(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER, std::make_shared<AttributeWheelDiameter>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> AxleXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        AxleXmlParser::AxleXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a AxlesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            AxlesXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> AxlesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> AxlesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementFrontAxleParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRearAxleParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementAdditionalAxlesParser>(_messageLogger, _filename));
            return result;
        }

        AxlesXmlParser::SubElementFrontAxleParser::SubElementFrontAxleParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _axleXmlParser = std::make_shared<AxleXmlParser>(messageLogger, filename);
        }

        void AxlesXmlParser::SubElementFrontAxleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto frontAxle = std::make_shared<AxleImpl>();
            auto typedObject = std::static_pointer_cast<AxlesImpl>(object);                    
            // Setting the parent
            frontAxle->SetParent(object);
            _axleXmlParser->ParseElement(indexedElement, parserContext, frontAxle);

            typedObject->SetFrontAxle(frontAxle);
        }
        
        int AxlesXmlParser::SubElementFrontAxleParser::GetMinOccur() 
        {
            return 1;
        }

        int AxlesXmlParser::SubElementFrontAxleParser::GetMaxOccur() 
        {
            return 1;
        }

        bool AxlesXmlParser::SubElementFrontAxleParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__FRONT_AXLE ;
        }

        std::vector<std::string> AxlesXmlParser::SubElementFrontAxleParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__FRONT_AXLE
                    };
        }
        AxlesXmlParser::SubElementRearAxleParser::SubElementRearAxleParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _axleXmlParser = std::make_shared<AxleXmlParser>(messageLogger, filename);
        }

        void AxlesXmlParser::SubElementRearAxleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto rearAxle = std::make_shared<AxleImpl>();
            auto typedObject = std::static_pointer_cast<AxlesImpl>(object);                    
            // Setting the parent
            rearAxle->SetParent(object);
            _axleXmlParser->ParseElement(indexedElement, parserContext, rearAxle);

            typedObject->SetRearAxle(rearAxle);
        }
        
        int AxlesXmlParser::SubElementRearAxleParser::GetMinOccur() 
        {
            return 1;
        }

        int AxlesXmlParser::SubElementRearAxleParser::GetMaxOccur() 
        {
            return 1;
        }

        bool AxlesXmlParser::SubElementRearAxleParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__REAR_AXLE ;
        }

        std::vector<std::string> AxlesXmlParser::SubElementRearAxleParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__REAR_AXLE
                    };
        }
        AxlesXmlParser::SubElementAdditionalAxlesParser::SubElementAdditionalAxlesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _axleXmlParser = std::make_shared<AxleXmlParser>(messageLogger, filename);
        }

        void AxlesXmlParser::SubElementAdditionalAxlesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto additionalAxles = std::make_shared<AxleImpl>();
            auto typedObject = std::static_pointer_cast<AxlesImpl>(object);                    
            // Setting the parent
            additionalAxles->SetParent(object);
            _axleXmlParser->ParseElement(indexedElement, parserContext, additionalAxles);
            auto additionalAxlesList = typedObject->GetWriterAdditionalAxles();
            additionalAxlesList.push_back(additionalAxles);
            typedObject->SetAdditionalAxles(additionalAxlesList);
        }
        
        int AxlesXmlParser::SubElementAdditionalAxlesParser::GetMinOccur() 
        {
            return 0;
        }

        int AxlesXmlParser::SubElementAdditionalAxlesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool AxlesXmlParser::SubElementAdditionalAxlesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ADDITIONAL_AXLE ;
        }

        std::vector<std::string> AxlesXmlParser::SubElementAdditionalAxlesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ADDITIONAL_AXLE
                    };
        }
  
        AxlesXmlParser::AxlesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a BoundingBoxImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            BoundingBoxXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> BoundingBoxXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> BoundingBoxXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementCenterParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementDimensionsParser>(_messageLogger, _filename));
            return result;
        }

        BoundingBoxXmlParser::SubElementCenterParser::SubElementCenterParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _centerXmlParser = std::make_shared<CenterXmlParser>(messageLogger, filename);
        }

        void BoundingBoxXmlParser::SubElementCenterParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto center = std::make_shared<CenterImpl>();
            auto typedObject = std::static_pointer_cast<BoundingBoxImpl>(object);                    
            // Setting the parent
            center->SetParent(object);
            _centerXmlParser->ParseElement(indexedElement, parserContext, center);

            typedObject->SetCenter(center);
        }
        
        int BoundingBoxXmlParser::SubElementCenterParser::GetMinOccur() 
        {
            return 1;
        }

        int BoundingBoxXmlParser::SubElementCenterParser::GetMaxOccur() 
        {
            return 1;
        }

        bool BoundingBoxXmlParser::SubElementCenterParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CENTER ;
        }

        std::vector<std::string> BoundingBoxXmlParser::SubElementCenterParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CENTER
                    };
        }
        BoundingBoxXmlParser::SubElementDimensionsParser::SubElementDimensionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _dimensionsXmlParser = std::make_shared<DimensionsXmlParser>(messageLogger, filename);
        }

        void BoundingBoxXmlParser::SubElementDimensionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto dimensions = std::make_shared<DimensionsImpl>();
            auto typedObject = std::static_pointer_cast<BoundingBoxImpl>(object);                    
            // Setting the parent
            dimensions->SetParent(object);
            _dimensionsXmlParser->ParseElement(indexedElement, parserContext, dimensions);

            typedObject->SetDimensions(dimensions);
        }
        
        int BoundingBoxXmlParser::SubElementDimensionsParser::GetMinOccur() 
        {
            return 1;
        }

        int BoundingBoxXmlParser::SubElementDimensionsParser::GetMaxOccur() 
        {
            return 1;
        }

        bool BoundingBoxXmlParser::SubElementDimensionsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DIMENSIONS ;
        }

        std::vector<std::string> BoundingBoxXmlParser::SubElementDimensionsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DIMENSIONS
                    };
        }
  
        BoundingBoxXmlParser::BoundingBoxXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ByEntityConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ByEntityConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ByEntityConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ByEntityConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementTriggeringEntitiesParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementEntityConditionParser>(_messageLogger, _filename));
            return result;
        }

        ByEntityConditionXmlParser::SubElementTriggeringEntitiesParser::SubElementTriggeringEntitiesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _triggeringEntitiesXmlParser = std::make_shared<TriggeringEntitiesXmlParser>(messageLogger, filename);
        }

        void ByEntityConditionXmlParser::SubElementTriggeringEntitiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto triggeringEntities = std::make_shared<TriggeringEntitiesImpl>();
            auto typedObject = std::static_pointer_cast<ByEntityConditionImpl>(object);                    
            // Setting the parent
            triggeringEntities->SetParent(object);
            _triggeringEntitiesXmlParser->ParseElement(indexedElement, parserContext, triggeringEntities);

            typedObject->SetTriggeringEntities(triggeringEntities);
        }
        
        int ByEntityConditionXmlParser::SubElementTriggeringEntitiesParser::GetMinOccur() 
        {
            return 1;
        }

        int ByEntityConditionXmlParser::SubElementTriggeringEntitiesParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ByEntityConditionXmlParser::SubElementTriggeringEntitiesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRIGGERING_ENTITIES ;
        }

        std::vector<std::string> ByEntityConditionXmlParser::SubElementTriggeringEntitiesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRIGGERING_ENTITIES
                    };
        }
        ByEntityConditionXmlParser::SubElementEntityConditionParser::SubElementEntityConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entityConditionXmlParser = std::make_shared<EntityConditionXmlParser>(messageLogger, filename);
        }

        void ByEntityConditionXmlParser::SubElementEntityConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto entityCondition = std::make_shared<EntityConditionImpl>();
            auto typedObject = std::static_pointer_cast<ByEntityConditionImpl>(object);                    
            // Setting the parent
            entityCondition->SetParent(object);
            _entityConditionXmlParser->ParseElement(indexedElement, parserContext, entityCondition);

            typedObject->SetEntityCondition(entityCondition);
        }
        
        int ByEntityConditionXmlParser::SubElementEntityConditionParser::GetMinOccur() 
        {
            return 1;
        }

        int ByEntityConditionXmlParser::SubElementEntityConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ByEntityConditionXmlParser::SubElementEntityConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENTITY_CONDITION ;
        }

        std::vector<std::string> ByEntityConditionXmlParser::SubElementEntityConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENTITY_CONDITION
                    };
        }
  
        ByEntityConditionXmlParser::ByEntityConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ByObjectTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ByObjectTypeXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ByObjectTypeXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeType: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ByObjectTypeImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = ObjectType::GetFromLiteral(attributeValue);
                        if (kResult != ObjectType::UNKNOWN)
                        {
                            typedObject->SetType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<AttributeType>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ByObjectTypeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        ByObjectTypeXmlParser::ByObjectTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ByTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ByTypeXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ByTypeXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeObjectType: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeObjectType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ByTypeImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = ObjectType::GetFromLiteral(attributeValue);
                        if (kResult != ObjectType::UNKNOWN)
                        {
                            typedObject->SetObjectType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE, std::make_shared<AttributeObjectType>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ByTypeXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        ByTypeXmlParser::ByTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ByValueConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ByValueConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ByValueConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ByValueConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
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

        void ByValueConditionXmlParser::SubElementParameterConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterCondition = std::make_shared<ParameterConditionImpl>();
            auto typedObject = std::static_pointer_cast<ByValueConditionImpl>(object);                    
            // Setting the parent
            parameterCondition->SetParent(object);
            _parameterConditionXmlParser->ParseElement(indexedElement, parserContext, parameterCondition);

            typedObject->SetParameterCondition(parameterCondition);
        }
        
        int ByValueConditionXmlParser::SubElementParameterConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int ByValueConditionXmlParser::SubElementParameterConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ByValueConditionXmlParser::SubElementParameterConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_CONDITION ;
        }

        std::vector<std::string> ByValueConditionXmlParser::SubElementParameterConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PARAMETER_CONDITION
                    };
        }
        ByValueConditionXmlParser::SubElementTimeOfDayConditionParser::SubElementTimeOfDayConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _timeOfDayConditionXmlParser = std::make_shared<TimeOfDayConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementTimeOfDayConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto timeOfDayCondition = std::make_shared<TimeOfDayConditionImpl>();
            auto typedObject = std::static_pointer_cast<ByValueConditionImpl>(object);                    
            // Setting the parent
            timeOfDayCondition->SetParent(object);
            _timeOfDayConditionXmlParser->ParseElement(indexedElement, parserContext, timeOfDayCondition);

            typedObject->SetTimeOfDayCondition(timeOfDayCondition);
        }
        
        int ByValueConditionXmlParser::SubElementTimeOfDayConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int ByValueConditionXmlParser::SubElementTimeOfDayConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ByValueConditionXmlParser::SubElementTimeOfDayConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TIME_OF_DAY_CONDITION ;
        }

        std::vector<std::string> ByValueConditionXmlParser::SubElementTimeOfDayConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TIME_OF_DAY_CONDITION
                    };
        }
        ByValueConditionXmlParser::SubElementSimulationTimeConditionParser::SubElementSimulationTimeConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _simulationTimeConditionXmlParser = std::make_shared<SimulationTimeConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementSimulationTimeConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto simulationTimeCondition = std::make_shared<SimulationTimeConditionImpl>();
            auto typedObject = std::static_pointer_cast<ByValueConditionImpl>(object);                    
            // Setting the parent
            simulationTimeCondition->SetParent(object);
            _simulationTimeConditionXmlParser->ParseElement(indexedElement, parserContext, simulationTimeCondition);

            typedObject->SetSimulationTimeCondition(simulationTimeCondition);
        }
        
        int ByValueConditionXmlParser::SubElementSimulationTimeConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int ByValueConditionXmlParser::SubElementSimulationTimeConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ByValueConditionXmlParser::SubElementSimulationTimeConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SIMULATION_TIME_CONDITION ;
        }

        std::vector<std::string> ByValueConditionXmlParser::SubElementSimulationTimeConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SIMULATION_TIME_CONDITION
                    };
        }
        ByValueConditionXmlParser::SubElementStoryboardElementStateConditionParser::SubElementStoryboardElementStateConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _storyboardElementStateConditionXmlParser = std::make_shared<StoryboardElementStateConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementStoryboardElementStateConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto storyboardElementStateCondition = std::make_shared<StoryboardElementStateConditionImpl>();
            auto typedObject = std::static_pointer_cast<ByValueConditionImpl>(object);                    
            // Setting the parent
            storyboardElementStateCondition->SetParent(object);
            _storyboardElementStateConditionXmlParser->ParseElement(indexedElement, parserContext, storyboardElementStateCondition);

            typedObject->SetStoryboardElementStateCondition(storyboardElementStateCondition);
        }
        
        int ByValueConditionXmlParser::SubElementStoryboardElementStateConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int ByValueConditionXmlParser::SubElementStoryboardElementStateConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ByValueConditionXmlParser::SubElementStoryboardElementStateConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__STORYBOARD_ELEMENT_STATE_CONDITION ;
        }

        std::vector<std::string> ByValueConditionXmlParser::SubElementStoryboardElementStateConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__STORYBOARD_ELEMENT_STATE_CONDITION
                    };
        }
        ByValueConditionXmlParser::SubElementUserDefinedValueConditionParser::SubElementUserDefinedValueConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _userDefinedValueConditionXmlParser = std::make_shared<UserDefinedValueConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementUserDefinedValueConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto userDefinedValueCondition = std::make_shared<UserDefinedValueConditionImpl>();
            auto typedObject = std::static_pointer_cast<ByValueConditionImpl>(object);                    
            // Setting the parent
            userDefinedValueCondition->SetParent(object);
            _userDefinedValueConditionXmlParser->ParseElement(indexedElement, parserContext, userDefinedValueCondition);

            typedObject->SetUserDefinedValueCondition(userDefinedValueCondition);
        }
        
        int ByValueConditionXmlParser::SubElementUserDefinedValueConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int ByValueConditionXmlParser::SubElementUserDefinedValueConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ByValueConditionXmlParser::SubElementUserDefinedValueConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__USER_DEFINED_VALUE_CONDITION ;
        }

        std::vector<std::string> ByValueConditionXmlParser::SubElementUserDefinedValueConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__USER_DEFINED_VALUE_CONDITION
                    };
        }
        ByValueConditionXmlParser::SubElementTrafficSignalConditionParser::SubElementTrafficSignalConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSignalConditionXmlParser = std::make_shared<TrafficSignalConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementTrafficSignalConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficSignalCondition = std::make_shared<TrafficSignalConditionImpl>();
            auto typedObject = std::static_pointer_cast<ByValueConditionImpl>(object);                    
            // Setting the parent
            trafficSignalCondition->SetParent(object);
            _trafficSignalConditionXmlParser->ParseElement(indexedElement, parserContext, trafficSignalCondition);

            typedObject->SetTrafficSignalCondition(trafficSignalCondition);
        }
        
        int ByValueConditionXmlParser::SubElementTrafficSignalConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int ByValueConditionXmlParser::SubElementTrafficSignalConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ByValueConditionXmlParser::SubElementTrafficSignalConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONDITION ;
        }

        std::vector<std::string> ByValueConditionXmlParser::SubElementTrafficSignalConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONDITION
                    };
        }
        ByValueConditionXmlParser::SubElementTrafficSignalControllerConditionParser::SubElementTrafficSignalControllerConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSignalControllerConditionXmlParser = std::make_shared<TrafficSignalControllerConditionXmlParser>(messageLogger, filename);
        }

        void ByValueConditionXmlParser::SubElementTrafficSignalControllerConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficSignalControllerCondition = std::make_shared<TrafficSignalControllerConditionImpl>();
            auto typedObject = std::static_pointer_cast<ByValueConditionImpl>(object);                    
            // Setting the parent
            trafficSignalControllerCondition->SetParent(object);
            _trafficSignalControllerConditionXmlParser->ParseElement(indexedElement, parserContext, trafficSignalControllerCondition);

            typedObject->SetTrafficSignalControllerCondition(trafficSignalControllerCondition);
        }
        
        int ByValueConditionXmlParser::SubElementTrafficSignalControllerConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int ByValueConditionXmlParser::SubElementTrafficSignalControllerConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ByValueConditionXmlParser::SubElementTrafficSignalControllerConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_CONDITION ;
        }

        std::vector<std::string> ByValueConditionXmlParser::SubElementTrafficSignalControllerConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_CONDITION
                    };
        }
  
        ByValueConditionXmlParser::ByValueConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CatalogImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            CatalogXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> CatalogXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<CatalogImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
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
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> CatalogXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
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

        void CatalogXmlParser::SubElementVehiclesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto vehicles = std::make_shared<VehicleImpl>();
            auto typedObject = std::static_pointer_cast<CatalogImpl>(object);                    
            // Setting the parent
            vehicles->SetParent(object);
            _vehicleXmlParser->ParseElement(indexedElement, parserContext, vehicles);
            auto vehiclesList = typedObject->GetWriterVehicles();
            vehiclesList.push_back(vehicles);
            typedObject->SetVehicles(vehiclesList);
        }
        
        int CatalogXmlParser::SubElementVehiclesParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogXmlParser::SubElementVehiclesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool CatalogXmlParser::SubElementVehiclesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__VEHICLE ;
        }

        std::vector<std::string> CatalogXmlParser::SubElementVehiclesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__VEHICLE
                    };
        }
        CatalogXmlParser::SubElementControllersParser::SubElementControllersParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerXmlParser = std::make_shared<ControllerXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementControllersParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto controllers = std::make_shared<ControllerImpl>();
            auto typedObject = std::static_pointer_cast<CatalogImpl>(object);                    
            // Setting the parent
            controllers->SetParent(object);
            _controllerXmlParser->ParseElement(indexedElement, parserContext, controllers);
            auto controllersList = typedObject->GetWriterControllers();
            controllersList.push_back(controllers);
            typedObject->SetControllers(controllersList);
        }
        
        int CatalogXmlParser::SubElementControllersParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogXmlParser::SubElementControllersParser::GetMaxOccur() 
        {
            return -1;
        }

        bool CatalogXmlParser::SubElementControllersParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER ;
        }

        std::vector<std::string> CatalogXmlParser::SubElementControllersParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONTROLLER
                    };
        }
        CatalogXmlParser::SubElementPedestriansParser::SubElementPedestriansParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _pedestrianXmlParser = std::make_shared<PedestrianXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementPedestriansParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto pedestrians = std::make_shared<PedestrianImpl>();
            auto typedObject = std::static_pointer_cast<CatalogImpl>(object);                    
            // Setting the parent
            pedestrians->SetParent(object);
            _pedestrianXmlParser->ParseElement(indexedElement, parserContext, pedestrians);
            auto pedestriansList = typedObject->GetWriterPedestrians();
            pedestriansList.push_back(pedestrians);
            typedObject->SetPedestrians(pedestriansList);
        }
        
        int CatalogXmlParser::SubElementPedestriansParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogXmlParser::SubElementPedestriansParser::GetMaxOccur() 
        {
            return -1;
        }

        bool CatalogXmlParser::SubElementPedestriansParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PEDESTRIAN ;
        }

        std::vector<std::string> CatalogXmlParser::SubElementPedestriansParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PEDESTRIAN
                    };
        }
        CatalogXmlParser::SubElementMiscObjectsParser::SubElementMiscObjectsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _miscObjectXmlParser = std::make_shared<MiscObjectXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementMiscObjectsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto miscObjects = std::make_shared<MiscObjectImpl>();
            auto typedObject = std::static_pointer_cast<CatalogImpl>(object);                    
            // Setting the parent
            miscObjects->SetParent(object);
            _miscObjectXmlParser->ParseElement(indexedElement, parserContext, miscObjects);
            auto miscObjectsList = typedObject->GetWriterMiscObjects();
            miscObjectsList.push_back(miscObjects);
            typedObject->SetMiscObjects(miscObjectsList);
        }
        
        int CatalogXmlParser::SubElementMiscObjectsParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogXmlParser::SubElementMiscObjectsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool CatalogXmlParser::SubElementMiscObjectsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__MISC_OBJECT ;
        }

        std::vector<std::string> CatalogXmlParser::SubElementMiscObjectsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__MISC_OBJECT
                    };
        }
        CatalogXmlParser::SubElementEnvironmentsParser::SubElementEnvironmentsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _environmentXmlParser = std::make_shared<EnvironmentXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementEnvironmentsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto environments = std::make_shared<EnvironmentImpl>();
            auto typedObject = std::static_pointer_cast<CatalogImpl>(object);                    
            // Setting the parent
            environments->SetParent(object);
            _environmentXmlParser->ParseElement(indexedElement, parserContext, environments);
            auto environmentsList = typedObject->GetWriterEnvironments();
            environmentsList.push_back(environments);
            typedObject->SetEnvironments(environmentsList);
        }
        
        int CatalogXmlParser::SubElementEnvironmentsParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogXmlParser::SubElementEnvironmentsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool CatalogXmlParser::SubElementEnvironmentsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENVIRONMENT ;
        }

        std::vector<std::string> CatalogXmlParser::SubElementEnvironmentsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENVIRONMENT
                    };
        }
        CatalogXmlParser::SubElementManeuversParser::SubElementManeuversParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _maneuverXmlParser = std::make_shared<ManeuverXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementManeuversParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto maneuvers = std::make_shared<ManeuverImpl>();
            auto typedObject = std::static_pointer_cast<CatalogImpl>(object);                    
            // Setting the parent
            maneuvers->SetParent(object);
            _maneuverXmlParser->ParseElement(indexedElement, parserContext, maneuvers);
            auto maneuversList = typedObject->GetWriterManeuvers();
            maneuversList.push_back(maneuvers);
            typedObject->SetManeuvers(maneuversList);
        }
        
        int CatalogXmlParser::SubElementManeuversParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogXmlParser::SubElementManeuversParser::GetMaxOccur() 
        {
            return -1;
        }

        bool CatalogXmlParser::SubElementManeuversParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__MANEUVER ;
        }

        std::vector<std::string> CatalogXmlParser::SubElementManeuversParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__MANEUVER
                    };
        }
        CatalogXmlParser::SubElementTrajectoriesParser::SubElementTrajectoriesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trajectoryXmlParser = std::make_shared<TrajectoryXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementTrajectoriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trajectories = std::make_shared<TrajectoryImpl>();
            auto typedObject = std::static_pointer_cast<CatalogImpl>(object);                    
            // Setting the parent
            trajectories->SetParent(object);
            _trajectoryXmlParser->ParseElement(indexedElement, parserContext, trajectories);
            auto trajectoriesList = typedObject->GetWriterTrajectories();
            trajectoriesList.push_back(trajectories);
            typedObject->SetTrajectories(trajectoriesList);
        }
        
        int CatalogXmlParser::SubElementTrajectoriesParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogXmlParser::SubElementTrajectoriesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool CatalogXmlParser::SubElementTrajectoriesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAJECTORY ;
        }

        std::vector<std::string> CatalogXmlParser::SubElementTrajectoriesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAJECTORY
                    };
        }
        CatalogXmlParser::SubElementRoutesParser::SubElementRoutesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _routeXmlParser = std::make_shared<RouteXmlParser>(messageLogger, filename);
        }

        void CatalogXmlParser::SubElementRoutesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto routes = std::make_shared<RouteImpl>();
            auto typedObject = std::static_pointer_cast<CatalogImpl>(object);                    
            // Setting the parent
            routes->SetParent(object);
            _routeXmlParser->ParseElement(indexedElement, parserContext, routes);
            auto routesList = typedObject->GetWriterRoutes();
            routesList.push_back(routes);
            typedObject->SetRoutes(routesList);
        }
        
        int CatalogXmlParser::SubElementRoutesParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogXmlParser::SubElementRoutesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool CatalogXmlParser::SubElementRoutesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ROUTE ;
        }

        std::vector<std::string> CatalogXmlParser::SubElementRoutesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ROUTE
                    };
        }
  
        CatalogXmlParser::CatalogXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CatalogDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            CatalogDefinitionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}


        std::vector<std::shared_ptr<IElementParser>> CatalogDefinitionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementCatalogParser>(_messageLogger, _filename));
            return result;
        }

        CatalogDefinitionXmlParser::SubElementCatalogParser::SubElementCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogXmlParser = std::make_shared<CatalogXmlParser>(messageLogger, filename);
        }

        void CatalogDefinitionXmlParser::SubElementCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto catalog = std::make_shared<CatalogImpl>();
            auto typedObject = std::static_pointer_cast<CatalogDefinitionImpl>(object);                    
            // Setting the parent
            catalog->SetParent(object);
            _catalogXmlParser->ParseElement(indexedElement, parserContext, catalog);

            typedObject->SetCatalog(catalog);
        }
        
        int CatalogDefinitionXmlParser::SubElementCatalogParser::GetMinOccur() 
        {
            return 1;
        }

        int CatalogDefinitionXmlParser::SubElementCatalogParser::GetMaxOccur() 
        {
            return 1;
        }

        bool CatalogDefinitionXmlParser::SubElementCatalogParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG ;
        }

        std::vector<std::string> CatalogDefinitionXmlParser::SubElementCatalogParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG
                    };
        }
  
        CatalogDefinitionXmlParser::CatalogDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlGroupParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CatalogLocationsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            CatalogLocationsXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> CatalogLocationsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> CatalogLocationsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
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

        void CatalogLocationsXmlParser::SubElementVehicleCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto vehicleCatalog = std::make_shared<VehicleCatalogLocationImpl>();
            auto typedObject = std::static_pointer_cast<CatalogLocationsImpl>(object);                    
            // Setting the parent
            vehicleCatalog->SetParent(object);
            _vehicleCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, vehicleCatalog);

            typedObject->SetVehicleCatalog(vehicleCatalog);
        }
        
        int CatalogLocationsXmlParser::SubElementVehicleCatalogParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogLocationsXmlParser::SubElementVehicleCatalogParser::GetMaxOccur() 
        {
            return 1;
        }

        bool CatalogLocationsXmlParser::SubElementVehicleCatalogParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__VEHICLE_CATALOG ;
        }

        std::vector<std::string> CatalogLocationsXmlParser::SubElementVehicleCatalogParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__VEHICLE_CATALOG
                    };
        }
        CatalogLocationsXmlParser::SubElementControllerCatalogParser::SubElementControllerCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerCatalogLocationXmlParser = std::make_shared<ControllerCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementControllerCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto controllerCatalog = std::make_shared<ControllerCatalogLocationImpl>();
            auto typedObject = std::static_pointer_cast<CatalogLocationsImpl>(object);                    
            // Setting the parent
            controllerCatalog->SetParent(object);
            _controllerCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, controllerCatalog);

            typedObject->SetControllerCatalog(controllerCatalog);
        }
        
        int CatalogLocationsXmlParser::SubElementControllerCatalogParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogLocationsXmlParser::SubElementControllerCatalogParser::GetMaxOccur() 
        {
            return 1;
        }

        bool CatalogLocationsXmlParser::SubElementControllerCatalogParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER_CATALOG ;
        }

        std::vector<std::string> CatalogLocationsXmlParser::SubElementControllerCatalogParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONTROLLER_CATALOG
                    };
        }
        CatalogLocationsXmlParser::SubElementPedestrianCatalogParser::SubElementPedestrianCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _pedestrianCatalogLocationXmlParser = std::make_shared<PedestrianCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementPedestrianCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto pedestrianCatalog = std::make_shared<PedestrianCatalogLocationImpl>();
            auto typedObject = std::static_pointer_cast<CatalogLocationsImpl>(object);                    
            // Setting the parent
            pedestrianCatalog->SetParent(object);
            _pedestrianCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, pedestrianCatalog);

            typedObject->SetPedestrianCatalog(pedestrianCatalog);
        }
        
        int CatalogLocationsXmlParser::SubElementPedestrianCatalogParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogLocationsXmlParser::SubElementPedestrianCatalogParser::GetMaxOccur() 
        {
            return 1;
        }

        bool CatalogLocationsXmlParser::SubElementPedestrianCatalogParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PEDESTRIAN_CATALOG ;
        }

        std::vector<std::string> CatalogLocationsXmlParser::SubElementPedestrianCatalogParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PEDESTRIAN_CATALOG
                    };
        }
        CatalogLocationsXmlParser::SubElementMiscObjectCatalogParser::SubElementMiscObjectCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _miscObjectCatalogLocationXmlParser = std::make_shared<MiscObjectCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementMiscObjectCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto miscObjectCatalog = std::make_shared<MiscObjectCatalogLocationImpl>();
            auto typedObject = std::static_pointer_cast<CatalogLocationsImpl>(object);                    
            // Setting the parent
            miscObjectCatalog->SetParent(object);
            _miscObjectCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, miscObjectCatalog);

            typedObject->SetMiscObjectCatalog(miscObjectCatalog);
        }
        
        int CatalogLocationsXmlParser::SubElementMiscObjectCatalogParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogLocationsXmlParser::SubElementMiscObjectCatalogParser::GetMaxOccur() 
        {
            return 1;
        }

        bool CatalogLocationsXmlParser::SubElementMiscObjectCatalogParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__MISC_OBJECT_CATALOG ;
        }

        std::vector<std::string> CatalogLocationsXmlParser::SubElementMiscObjectCatalogParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__MISC_OBJECT_CATALOG
                    };
        }
        CatalogLocationsXmlParser::SubElementEnvironmentCatalogParser::SubElementEnvironmentCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _environmentCatalogLocationXmlParser = std::make_shared<EnvironmentCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementEnvironmentCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto environmentCatalog = std::make_shared<EnvironmentCatalogLocationImpl>();
            auto typedObject = std::static_pointer_cast<CatalogLocationsImpl>(object);                    
            // Setting the parent
            environmentCatalog->SetParent(object);
            _environmentCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, environmentCatalog);

            typedObject->SetEnvironmentCatalog(environmentCatalog);
        }
        
        int CatalogLocationsXmlParser::SubElementEnvironmentCatalogParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogLocationsXmlParser::SubElementEnvironmentCatalogParser::GetMaxOccur() 
        {
            return 1;
        }

        bool CatalogLocationsXmlParser::SubElementEnvironmentCatalogParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENVIRONMENT_CATALOG ;
        }

        std::vector<std::string> CatalogLocationsXmlParser::SubElementEnvironmentCatalogParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENVIRONMENT_CATALOG
                    };
        }
        CatalogLocationsXmlParser::SubElementManeuverCatalogParser::SubElementManeuverCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _maneuverCatalogLocationXmlParser = std::make_shared<ManeuverCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementManeuverCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto maneuverCatalog = std::make_shared<ManeuverCatalogLocationImpl>();
            auto typedObject = std::static_pointer_cast<CatalogLocationsImpl>(object);                    
            // Setting the parent
            maneuverCatalog->SetParent(object);
            _maneuverCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, maneuverCatalog);

            typedObject->SetManeuverCatalog(maneuverCatalog);
        }
        
        int CatalogLocationsXmlParser::SubElementManeuverCatalogParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogLocationsXmlParser::SubElementManeuverCatalogParser::GetMaxOccur() 
        {
            return 1;
        }

        bool CatalogLocationsXmlParser::SubElementManeuverCatalogParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__MANEUVER_CATALOG ;
        }

        std::vector<std::string> CatalogLocationsXmlParser::SubElementManeuverCatalogParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__MANEUVER_CATALOG
                    };
        }
        CatalogLocationsXmlParser::SubElementTrajectoryCatalogParser::SubElementTrajectoryCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trajectoryCatalogLocationXmlParser = std::make_shared<TrajectoryCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementTrajectoryCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trajectoryCatalog = std::make_shared<TrajectoryCatalogLocationImpl>();
            auto typedObject = std::static_pointer_cast<CatalogLocationsImpl>(object);                    
            // Setting the parent
            trajectoryCatalog->SetParent(object);
            _trajectoryCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, trajectoryCatalog);

            typedObject->SetTrajectoryCatalog(trajectoryCatalog);
        }
        
        int CatalogLocationsXmlParser::SubElementTrajectoryCatalogParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogLocationsXmlParser::SubElementTrajectoryCatalogParser::GetMaxOccur() 
        {
            return 1;
        }

        bool CatalogLocationsXmlParser::SubElementTrajectoryCatalogParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAJECTORY_CATALOG ;
        }

        std::vector<std::string> CatalogLocationsXmlParser::SubElementTrajectoryCatalogParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAJECTORY_CATALOG
                    };
        }
        CatalogLocationsXmlParser::SubElementRouteCatalogParser::SubElementRouteCatalogParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _routeCatalogLocationXmlParser = std::make_shared<RouteCatalogLocationXmlParser>(messageLogger, filename);
        }

        void CatalogLocationsXmlParser::SubElementRouteCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto routeCatalog = std::make_shared<RouteCatalogLocationImpl>();
            auto typedObject = std::static_pointer_cast<CatalogLocationsImpl>(object);                    
            // Setting the parent
            routeCatalog->SetParent(object);
            _routeCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, routeCatalog);

            typedObject->SetRouteCatalog(routeCatalog);
        }
        
        int CatalogLocationsXmlParser::SubElementRouteCatalogParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogLocationsXmlParser::SubElementRouteCatalogParser::GetMaxOccur() 
        {
            return 1;
        }

        bool CatalogLocationsXmlParser::SubElementRouteCatalogParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ROUTE_CATALOG ;
        }

        std::vector<std::string> CatalogLocationsXmlParser::SubElementRouteCatalogParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ROUTE_CATALOG
                    };
        }
  
        CatalogLocationsXmlParser::CatalogLocationsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CatalogReferenceImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            CatalogReferenceXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> CatalogReferenceXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeCatalogName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeCatalogName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<CatalogReferenceImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetCatalogName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME, std::make_shared<AttributeCatalogName>(_messageLogger, _filename)));
            class AttributeEntryName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntryName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<CatalogReferenceImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetEntryName(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME, std::make_shared<AttributeEntryName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> CatalogReferenceXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementParameterAssignmentsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENTS) );
            return result;
        }

        CatalogReferenceXmlParser::SubElementParameterAssignmentsParser::SubElementParameterAssignmentsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterAssignmentXmlParser = std::make_shared<ParameterAssignmentXmlParser>(messageLogger, filename);
        }

        void CatalogReferenceXmlParser::SubElementParameterAssignmentsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterAssignments = std::make_shared<ParameterAssignmentImpl>();
            auto typedObject = std::static_pointer_cast<CatalogReferenceImpl>(object);                    
            // Setting the parent
            parameterAssignments->SetParent(object);
            _parameterAssignmentXmlParser->ParseElement(indexedElement, parserContext, parameterAssignments);
            auto parameterAssignmentsList = typedObject->GetWriterParameterAssignments();
            parameterAssignmentsList.push_back(parameterAssignments);
            typedObject->SetParameterAssignments(parameterAssignmentsList);
        }
        
        int CatalogReferenceXmlParser::SubElementParameterAssignmentsParser::GetMinOccur() 
        {
            return 0;
        }

        int CatalogReferenceXmlParser::SubElementParameterAssignmentsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool CatalogReferenceXmlParser::SubElementParameterAssignmentsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENT;
        }

        std::vector<std::string> CatalogReferenceXmlParser::SubElementParameterAssignmentsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENT};
        }
  
        CatalogReferenceXmlParser::CatalogReferenceXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CenterImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            CenterXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> CenterXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeX: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeX(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<CenterImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__X, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetX(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__X, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__X, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__X, std::make_shared<AttributeX>(_messageLogger, _filename)));
            class AttributeY: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeY(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<CenterImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__Y, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetY(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__Y, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__Y, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__Y, std::make_shared<AttributeY>(_messageLogger, _filename)));
            class AttributeZ: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeZ(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<CenterImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__Z, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetZ(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__Z, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__Z, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__Z, std::make_shared<AttributeZ>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> CenterXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        CenterXmlParser::CenterXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CentralSwarmObjectImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            CentralSwarmObjectXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> CentralSwarmObjectXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<CentralSwarmObjectImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> CentralSwarmObjectXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        CentralSwarmObjectXmlParser::CentralSwarmObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ClothoidImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ClothoidXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ClothoidXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeCurvature: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeCurvature(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ClothoidImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CURVATURE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetCurvature(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CURVATURE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CURVATURE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CURVATURE, std::make_shared<AttributeCurvature>(_messageLogger, _filename)));
            class AttributeCurvatureDot: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeCurvatureDot(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ClothoidImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetCurvatureDot(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT, std::make_shared<AttributeCurvatureDot>(_messageLogger, _filename)));
            class AttributeLength: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeLength(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ClothoidImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LENGTH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetLength(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LENGTH, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LENGTH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LENGTH, std::make_shared<AttributeLength>(_messageLogger, _filename)));
            class AttributeStartTime: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeStartTime(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ClothoidImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__START_TIME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetStartTime(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__START_TIME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__START_TIME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__START_TIME, std::make_shared<AttributeStartTime>(_messageLogger, _filename)));
            class AttributeStopTime: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeStopTime(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ClothoidImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__STOP_TIME, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetStopTime(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__STOP_TIME, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__STOP_TIME, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__STOP_TIME, std::make_shared<AttributeStopTime>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ClothoidXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        ClothoidXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void ClothoidXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto position = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<ClothoidImpl>(object);                    
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            typedObject->SetPosition(position);
        }
        
        int ClothoidXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int ClothoidXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ClothoidXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> ClothoidXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        ClothoidXmlParser::ClothoidXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CollisionConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            CollisionConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> CollisionConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> CollisionConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementEntityRefParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementByTypeParser>(_messageLogger, _filename));
            return result;
        }

        CollisionConditionXmlParser::SubElementEntityRefParser::SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entityRefXmlParser = std::make_shared<EntityRefXmlParser>(messageLogger, filename);
        }

        void CollisionConditionXmlParser::SubElementEntityRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto entityRef = std::make_shared<EntityRefImpl>();
            auto typedObject = std::static_pointer_cast<CollisionConditionImpl>(object);                    
            // Setting the parent
            entityRef->SetParent(object);
            _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRef);

            typedObject->SetEntityRef(entityRef);
        }
        
        int CollisionConditionXmlParser::SubElementEntityRefParser::GetMinOccur() 
        {
            return 0;
        }

        int CollisionConditionXmlParser::SubElementEntityRefParser::GetMaxOccur() 
        {
            return 1;
        }

        bool CollisionConditionXmlParser::SubElementEntityRefParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
        }

        std::vector<std::string> CollisionConditionXmlParser::SubElementEntityRefParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENTITY_REF
                    };
        }
        CollisionConditionXmlParser::SubElementByTypeParser::SubElementByTypeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _byObjectTypeXmlParser = std::make_shared<ByObjectTypeXmlParser>(messageLogger, filename);
        }

        void CollisionConditionXmlParser::SubElementByTypeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto byType = std::make_shared<ByObjectTypeImpl>();
            auto typedObject = std::static_pointer_cast<CollisionConditionImpl>(object);                    
            // Setting the parent
            byType->SetParent(object);
            _byObjectTypeXmlParser->ParseElement(indexedElement, parserContext, byType);

            typedObject->SetByType(byType);
        }
        
        int CollisionConditionXmlParser::SubElementByTypeParser::GetMinOccur() 
        {
            return 0;
        }

        int CollisionConditionXmlParser::SubElementByTypeParser::GetMaxOccur() 
        {
            return 1;
        }

        bool CollisionConditionXmlParser::SubElementByTypeParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__BY_TYPE ;
        }

        std::vector<std::string> CollisionConditionXmlParser::SubElementByTypeParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__BY_TYPE
                    };
        }
  
        CollisionConditionXmlParser::CollisionConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeConditionEdge: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeConditionEdge(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = ConditionEdge::GetFromLiteral(attributeValue);
                        if (kResult != ConditionEdge::UNKNOWN)
                        {
                            typedObject->SetConditionEdge(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE, std::make_shared<AttributeConditionEdge>(_messageLogger, _filename)));
            class AttributeDelay: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDelay(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DELAY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDelay(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DELAY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DELAY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DELAY, std::make_shared<AttributeDelay>(_messageLogger, _filename)));
            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementByEntityConditionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementByValueConditionParser>(_messageLogger, _filename));
            return result;
        }

        ConditionXmlParser::SubElementByEntityConditionParser::SubElementByEntityConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _byEntityConditionXmlParser = std::make_shared<ByEntityConditionXmlParser>(messageLogger, filename);
        }

        void ConditionXmlParser::SubElementByEntityConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto byEntityCondition = std::make_shared<ByEntityConditionImpl>();
            auto typedObject = std::static_pointer_cast<ConditionImpl>(object);                    
            // Setting the parent
            byEntityCondition->SetParent(object);
            _byEntityConditionXmlParser->ParseElement(indexedElement, parserContext, byEntityCondition);

            typedObject->SetByEntityCondition(byEntityCondition);
        }
        
        int ConditionXmlParser::SubElementByEntityConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int ConditionXmlParser::SubElementByEntityConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ConditionXmlParser::SubElementByEntityConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__BY_ENTITY_CONDITION ;
        }

        std::vector<std::string> ConditionXmlParser::SubElementByEntityConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__BY_ENTITY_CONDITION
                    };
        }
        ConditionXmlParser::SubElementByValueConditionParser::SubElementByValueConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _byValueConditionXmlParser = std::make_shared<ByValueConditionXmlParser>(messageLogger, filename);
        }

        void ConditionXmlParser::SubElementByValueConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto byValueCondition = std::make_shared<ByValueConditionImpl>();
            auto typedObject = std::static_pointer_cast<ConditionImpl>(object);                    
            // Setting the parent
            byValueCondition->SetParent(object);
            _byValueConditionXmlParser->ParseElement(indexedElement, parserContext, byValueCondition);

            typedObject->SetByValueCondition(byValueCondition);
        }
        
        int ConditionXmlParser::SubElementByValueConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int ConditionXmlParser::SubElementByValueConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ConditionXmlParser::SubElementByValueConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__BY_VALUE_CONDITION ;
        }

        std::vector<std::string> ConditionXmlParser::SubElementByValueConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__BY_VALUE_CONDITION
                    };
        }
  
        ConditionXmlParser::ConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ConditionGroupImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ConditionGroupXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ConditionGroupXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ConditionGroupXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementConditionsParser>(_messageLogger, _filename));
            return result;
        }

        ConditionGroupXmlParser::SubElementConditionsParser::SubElementConditionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _conditionXmlParser = std::make_shared<ConditionXmlParser>(messageLogger, filename);
        }

        void ConditionGroupXmlParser::SubElementConditionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto conditions = std::make_shared<ConditionImpl>();
            auto typedObject = std::static_pointer_cast<ConditionGroupImpl>(object);                    
            // Setting the parent
            conditions->SetParent(object);
            _conditionXmlParser->ParseElement(indexedElement, parserContext, conditions);
            auto conditionsList = typedObject->GetWriterConditions();
            conditionsList.push_back(conditions);
            typedObject->SetConditions(conditionsList);
        }
        
        int ConditionGroupXmlParser::SubElementConditionsParser::GetMinOccur() 
        {
            return 1;
        }

        int ConditionGroupXmlParser::SubElementConditionsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ConditionGroupXmlParser::SubElementConditionsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONDITION ;
        }

        std::vector<std::string> ConditionGroupXmlParser::SubElementConditionsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONDITION
                    };
        }
  
        ConditionGroupXmlParser::ConditionGroupXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ControlPointImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ControlPointXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ControlPointXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeTime: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTime(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ControlPointImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TIME, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TIME, std::make_shared<AttributeTime>(_messageLogger, _filename)));
            class AttributeWeight: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeWeight(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ControlPointImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, StripDollarSign(attributeValue), startMarker); 
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
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<AttributeWeight>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ControlPointXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        ControlPointXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void ControlPointXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto position = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<ControlPointImpl>(object);                    
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            typedObject->SetPosition(position);
        }
        
        int ControlPointXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int ControlPointXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ControlPointXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> ControlPointXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        ControlPointXmlParser::ControlPointXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ControllerImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ControllerXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ControllerXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ControllerImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ControllerXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementPropertiesParser>(_messageLogger, _filename));
            return result;
        }

        ControllerXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void ControllerXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            auto typedObject = std::static_pointer_cast<ControllerImpl>(object);                    
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = typedObject->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            typedObject->SetParameterDeclarations(parameterDeclarationsList);
        }
        
        int ControllerXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int ControllerXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ControllerXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> ControllerXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        ControllerXmlParser::SubElementPropertiesParser::SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _propertiesXmlParser = std::make_shared<PropertiesXmlParser>(messageLogger, filename);
        }

        void ControllerXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto properties = std::make_shared<PropertiesImpl>();
            auto typedObject = std::static_pointer_cast<ControllerImpl>(object);                    
            // Setting the parent
            properties->SetParent(object);
            _propertiesXmlParser->ParseElement(indexedElement, parserContext, properties);

            typedObject->SetProperties(properties);
        }
        
        int ControllerXmlParser::SubElementPropertiesParser::GetMinOccur() 
        {
            return 1;
        }

        int ControllerXmlParser::SubElementPropertiesParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ControllerXmlParser::SubElementPropertiesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PROPERTIES ;
        }

        std::vector<std::string> ControllerXmlParser::SubElementPropertiesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PROPERTIES
                    };
        }
  
        ControllerXmlParser::ControllerXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ControllerActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ControllerActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ControllerActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementAssignControllerActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementOverrideControllerValueActionParser>(_messageLogger, _filename));
            return result;
        }

        ControllerActionXmlParser::SubElementAssignControllerActionParser::SubElementAssignControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _assignControllerActionXmlParser = std::make_shared<AssignControllerActionXmlParser>(messageLogger, filename);
        }

        void ControllerActionXmlParser::SubElementAssignControllerActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto assignControllerAction = std::make_shared<AssignControllerActionImpl>();
            auto typedObject = std::static_pointer_cast<ControllerActionImpl>(object);                    
            // Setting the parent
            assignControllerAction->SetParent(object);
            _assignControllerActionXmlParser->ParseElement(indexedElement, parserContext, assignControllerAction);

            typedObject->SetAssignControllerAction(assignControllerAction);
        }
        
        int ControllerActionXmlParser::SubElementAssignControllerActionParser::GetMinOccur() 
        {
            return 1;
        }

        int ControllerActionXmlParser::SubElementAssignControllerActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ControllerActionXmlParser::SubElementAssignControllerActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ASSIGN_CONTROLLER_ACTION ;
        }

        std::vector<std::string> ControllerActionXmlParser::SubElementAssignControllerActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ASSIGN_CONTROLLER_ACTION
                    };
        }
        ControllerActionXmlParser::SubElementOverrideControllerValueActionParser::SubElementOverrideControllerValueActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideControllerValueActionXmlParser = std::make_shared<OverrideControllerValueActionXmlParser>(messageLogger, filename);
        }

        void ControllerActionXmlParser::SubElementOverrideControllerValueActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto overrideControllerValueAction = std::make_shared<OverrideControllerValueActionImpl>();
            auto typedObject = std::static_pointer_cast<ControllerActionImpl>(object);                    
            // Setting the parent
            overrideControllerValueAction->SetParent(object);
            _overrideControllerValueActionXmlParser->ParseElement(indexedElement, parserContext, overrideControllerValueAction);

            typedObject->SetOverrideControllerValueAction(overrideControllerValueAction);
        }
        
        int ControllerActionXmlParser::SubElementOverrideControllerValueActionParser::GetMinOccur() 
        {
            return 1;
        }

        int ControllerActionXmlParser::SubElementOverrideControllerValueActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ControllerActionXmlParser::SubElementOverrideControllerValueActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__OVERRIDE_CONTROLLER_VALUE_ACTION ;
        }

        std::vector<std::string> ControllerActionXmlParser::SubElementOverrideControllerValueActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__OVERRIDE_CONTROLLER_VALUE_ACTION
                    };
        }
  
        ControllerActionXmlParser::ControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ControllerCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ControllerCatalogLocationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ControllerCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ControllerCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename));
            return result;
        }

        ControllerCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename);
        }

        void ControllerCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            auto typedObject = std::static_pointer_cast<ControllerCatalogLocationImpl>(object);                    
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            typedObject->SetDirectory(directory);
        }
        
        int ControllerCatalogLocationXmlParser::SubElementDirectoryParser::GetMinOccur() 
        {
            return 1;
        }

        int ControllerCatalogLocationXmlParser::SubElementDirectoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ControllerCatalogLocationXmlParser::SubElementDirectoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
        }

        std::vector<std::string> ControllerCatalogLocationXmlParser::SubElementDirectoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DIRECTORY
                    };
        }
  
        ControllerCatalogLocationXmlParser::ControllerCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ControllerDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ControllerDistributionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ControllerDistributionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ControllerDistributionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementControllerDistributionEntriesParser>(_messageLogger, _filename));
            return result;
        }

        ControllerDistributionXmlParser::SubElementControllerDistributionEntriesParser::SubElementControllerDistributionEntriesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerDistributionEntryXmlParser = std::make_shared<ControllerDistributionEntryXmlParser>(messageLogger, filename);
        }

        void ControllerDistributionXmlParser::SubElementControllerDistributionEntriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto controllerDistributionEntries = std::make_shared<ControllerDistributionEntryImpl>();
            auto typedObject = std::static_pointer_cast<ControllerDistributionImpl>(object);                    
            // Setting the parent
            controllerDistributionEntries->SetParent(object);
            _controllerDistributionEntryXmlParser->ParseElement(indexedElement, parserContext, controllerDistributionEntries);
            auto controllerDistributionEntriesList = typedObject->GetWriterControllerDistributionEntries();
            controllerDistributionEntriesList.push_back(controllerDistributionEntries);
            typedObject->SetControllerDistributionEntries(controllerDistributionEntriesList);
        }
        
        int ControllerDistributionXmlParser::SubElementControllerDistributionEntriesParser::GetMinOccur() 
        {
            return 1;
        }

        int ControllerDistributionXmlParser::SubElementControllerDistributionEntriesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ControllerDistributionXmlParser::SubElementControllerDistributionEntriesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION_ENTRY ;
        }

        std::vector<std::string> ControllerDistributionXmlParser::SubElementControllerDistributionEntriesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION_ENTRY
                    };
        }
  
        ControllerDistributionXmlParser::ControllerDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ControllerDistributionEntryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ControllerDistributionEntryXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ControllerDistributionEntryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeWeight: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeWeight(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ControllerDistributionEntryImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, std::make_shared<AttributeWeight>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ControllerDistributionEntryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementControllerParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            return result;
        }

        ControllerDistributionEntryXmlParser::SubElementControllerParser::SubElementControllerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerXmlParser = std::make_shared<ControllerXmlParser>(messageLogger, filename);
        }

        void ControllerDistributionEntryXmlParser::SubElementControllerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto controller = std::make_shared<ControllerImpl>();
            auto typedObject = std::static_pointer_cast<ControllerDistributionEntryImpl>(object);                    
            // Setting the parent
            controller->SetParent(object);
            _controllerXmlParser->ParseElement(indexedElement, parserContext, controller);

            typedObject->SetController(controller);
        }
        
        int ControllerDistributionEntryXmlParser::SubElementControllerParser::GetMinOccur() 
        {
            return 0;
        }

        int ControllerDistributionEntryXmlParser::SubElementControllerParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ControllerDistributionEntryXmlParser::SubElementControllerParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER ;
        }

        std::vector<std::string> ControllerDistributionEntryXmlParser::SubElementControllerParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONTROLLER
                    };
        }
        ControllerDistributionEntryXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void ControllerDistributionEntryXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            auto typedObject = std::static_pointer_cast<ControllerDistributionEntryImpl>(object);                    
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            typedObject->SetCatalogReference(catalogReference);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(std::dynamic_pointer_cast<ICatalogReference>(catalogReference));
        }
        
        int ControllerDistributionEntryXmlParser::SubElementCatalogReferenceParser::GetMinOccur() 
        {
            return 0;
        }

        int ControllerDistributionEntryXmlParser::SubElementCatalogReferenceParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ControllerDistributionEntryXmlParser::SubElementCatalogReferenceParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
        }

        std::vector<std::string> ControllerDistributionEntryXmlParser::SubElementCatalogReferenceParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                    };
        }
  
        ControllerDistributionEntryXmlParser::ControllerDistributionEntryXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a CustomCommandActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        bool CustomCommandActionXmlParser::IsContentRequired()
        {
          return false;
        }

        std::map<std::string, std::shared_ptr<IAttributeParser>> CustomCommandActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeType: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<CustomCommandActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetType(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<AttributeType>(_messageLogger, _filename)));
            return result;
        }
        void CustomCommandActionXmlParser::SetContentProperty(const std::string content, std::shared_ptr<BaseImpl> object)
        {
        	auto typedObject = std::static_pointer_cast<CustomCommandActionImpl>(object);                    
            typedObject->SetContent(content);
        }
  
        CustomCommandActionXmlParser::CustomCommandActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlSimpleContentParser(messageLogger, filename) {}
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a DeleteEntityActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            DeleteEntityActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> DeleteEntityActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> DeleteEntityActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        DeleteEntityActionXmlParser::DeleteEntityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a DimensionsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            DimensionsXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> DimensionsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeHeight: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeHeight(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<DimensionsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__HEIGHT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetHeight(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__HEIGHT, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__HEIGHT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__HEIGHT, std::make_shared<AttributeHeight>(_messageLogger, _filename)));
            class AttributeLength: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeLength(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<DimensionsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LENGTH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetLength(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__LENGTH, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__LENGTH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LENGTH, std::make_shared<AttributeLength>(_messageLogger, _filename)));
            class AttributeWidth: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeWidth(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<DimensionsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__WIDTH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetWidth(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__WIDTH, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__WIDTH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__WIDTH, std::make_shared<AttributeWidth>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> DimensionsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        DimensionsXmlParser::DimensionsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a DirectoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            DirectoryXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> DirectoryXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributePath: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributePath(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<DirectoryImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PATH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetPath(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PATH, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PATH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PATH, std::make_shared<AttributePath>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> DirectoryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        DirectoryXmlParser::DirectoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a DistanceConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            DistanceConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> DistanceConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeAlongRoute: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeAlongRoute(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<DistanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetAlongRoute(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, std::make_shared<AttributeAlongRoute>(_messageLogger, _filename)));
            class AttributeFreespace: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeFreespace(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<DistanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<AttributeFreespace>(_messageLogger, _filename)));
            class AttributeRule: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<DistanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__RULE, StripDollarSign(attributeValue), startMarker); 
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
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__RULE, std::make_shared<AttributeRule>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<DistanceConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> DistanceConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementPositionParser>(_messageLogger, _filename));
            return result;
        }

        DistanceConditionXmlParser::SubElementPositionParser::SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionXmlParser = std::make_shared<PositionXmlParser>(messageLogger, filename);
        }

        void DistanceConditionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto position = std::make_shared<PositionImpl>();
            auto typedObject = std::static_pointer_cast<DistanceConditionImpl>(object);                    
            // Setting the parent
            position->SetParent(object);
            _positionXmlParser->ParseElement(indexedElement, parserContext, position);

            typedObject->SetPosition(position);
        }
        
        int DistanceConditionXmlParser::SubElementPositionParser::GetMinOccur() 
        {
            return 1;
        }

        int DistanceConditionXmlParser::SubElementPositionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool DistanceConditionXmlParser::SubElementPositionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
        }

        std::vector<std::string> DistanceConditionXmlParser::SubElementPositionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__POSITION
                    };
        }
  
        DistanceConditionXmlParser::DistanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a DynamicConstraintsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            DynamicConstraintsXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> DynamicConstraintsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeMaxAcceleration: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMaxAcceleration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<DynamicConstraintsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, StripDollarSign(attributeValue), startMarker); 
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
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, std::make_shared<AttributeMaxAcceleration>(_messageLogger, _filename)));
            class AttributeMaxDeceleration: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMaxDeceleration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<DynamicConstraintsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, StripDollarSign(attributeValue), startMarker); 
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
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, std::make_shared<AttributeMaxDeceleration>(_messageLogger, _filename)));
            class AttributeMaxSpeed: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMaxSpeed(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<DynamicConstraintsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, StripDollarSign(attributeValue), startMarker); 
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
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, std::make_shared<AttributeMaxSpeed>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> DynamicConstraintsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        DynamicConstraintsXmlParser::DynamicConstraintsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EndOfRoadConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            EndOfRoadConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> EndOfRoadConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDuration: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDuration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<EndOfRoadConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DURATION, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<AttributeDuration>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> EndOfRoadConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        EndOfRoadConditionXmlParser::EndOfRoadConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EntitiesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            EntitiesXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> EntitiesXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> EntitiesXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementScenarioObjectsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementEntitySelectionsParser>(_messageLogger, _filename));
            return result;
        }

        EntitiesXmlParser::SubElementScenarioObjectsParser::SubElementScenarioObjectsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _scenarioObjectXmlParser = std::make_shared<ScenarioObjectXmlParser>(messageLogger, filename);
        }

        void EntitiesXmlParser::SubElementScenarioObjectsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto scenarioObjects = std::make_shared<ScenarioObjectImpl>();
            auto typedObject = std::static_pointer_cast<EntitiesImpl>(object);                    
            // Setting the parent
            scenarioObjects->SetParent(object);
            _scenarioObjectXmlParser->ParseElement(indexedElement, parserContext, scenarioObjects);
            auto scenarioObjectsList = typedObject->GetWriterScenarioObjects();
            scenarioObjectsList.push_back(scenarioObjects);
            typedObject->SetScenarioObjects(scenarioObjectsList);
        }
        
        int EntitiesXmlParser::SubElementScenarioObjectsParser::GetMinOccur() 
        {
            return 0;
        }

        int EntitiesXmlParser::SubElementScenarioObjectsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool EntitiesXmlParser::SubElementScenarioObjectsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SCENARIO_OBJECT ;
        }

        std::vector<std::string> EntitiesXmlParser::SubElementScenarioObjectsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SCENARIO_OBJECT
                    };
        }
        EntitiesXmlParser::SubElementEntitySelectionsParser::SubElementEntitySelectionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entitySelectionXmlParser = std::make_shared<EntitySelectionXmlParser>(messageLogger, filename);
        }

        void EntitiesXmlParser::SubElementEntitySelectionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto entitySelections = std::make_shared<EntitySelectionImpl>();
            auto typedObject = std::static_pointer_cast<EntitiesImpl>(object);                    
            // Setting the parent
            entitySelections->SetParent(object);
            _entitySelectionXmlParser->ParseElement(indexedElement, parserContext, entitySelections);
            auto entitySelectionsList = typedObject->GetWriterEntitySelections();
            entitySelectionsList.push_back(entitySelections);
            typedObject->SetEntitySelections(entitySelectionsList);
        }
        
        int EntitiesXmlParser::SubElementEntitySelectionsParser::GetMinOccur() 
        {
            return 0;
        }

        int EntitiesXmlParser::SubElementEntitySelectionsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool EntitiesXmlParser::SubElementEntitySelectionsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENTITY_SELECTION ;
        }

        std::vector<std::string> EntitiesXmlParser::SubElementEntitySelectionsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENTITY_SELECTION
                    };
        }
  
        EntitiesXmlParser::EntitiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EntityActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            EntityActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> EntityActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<EntityActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> EntityActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementAddEntityActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementDeleteEntityActionParser>(_messageLogger, _filename));
            return result;
        }

        EntityActionXmlParser::SubElementAddEntityActionParser::SubElementAddEntityActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _addEntityActionXmlParser = std::make_shared<AddEntityActionXmlParser>(messageLogger, filename);
        }

        void EntityActionXmlParser::SubElementAddEntityActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto addEntityAction = std::make_shared<AddEntityActionImpl>();
            auto typedObject = std::static_pointer_cast<EntityActionImpl>(object);                    
            // Setting the parent
            addEntityAction->SetParent(object);
            _addEntityActionXmlParser->ParseElement(indexedElement, parserContext, addEntityAction);

            typedObject->SetAddEntityAction(addEntityAction);
        }
        
        int EntityActionXmlParser::SubElementAddEntityActionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityActionXmlParser::SubElementAddEntityActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityActionXmlParser::SubElementAddEntityActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ADD_ENTITY_ACTION ;
        }

        std::vector<std::string> EntityActionXmlParser::SubElementAddEntityActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ADD_ENTITY_ACTION
                    };
        }
        EntityActionXmlParser::SubElementDeleteEntityActionParser::SubElementDeleteEntityActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _deleteEntityActionXmlParser = std::make_shared<DeleteEntityActionXmlParser>(messageLogger, filename);
        }

        void EntityActionXmlParser::SubElementDeleteEntityActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto deleteEntityAction = std::make_shared<DeleteEntityActionImpl>();
            auto typedObject = std::static_pointer_cast<EntityActionImpl>(object);                    
            // Setting the parent
            deleteEntityAction->SetParent(object);
            _deleteEntityActionXmlParser->ParseElement(indexedElement, parserContext, deleteEntityAction);

            typedObject->SetDeleteEntityAction(deleteEntityAction);
        }
        
        int EntityActionXmlParser::SubElementDeleteEntityActionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityActionXmlParser::SubElementDeleteEntityActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityActionXmlParser::SubElementDeleteEntityActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DELETE_ENTITY_ACTION ;
        }

        std::vector<std::string> EntityActionXmlParser::SubElementDeleteEntityActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DELETE_ENTITY_ACTION
                    };
        }
  
        EntityActionXmlParser::EntityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EntityConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            EntityConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> EntityConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> EntityConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
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

        void EntityConditionXmlParser::SubElementEndOfRoadConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto endOfRoadCondition = std::make_shared<EndOfRoadConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            endOfRoadCondition->SetParent(object);
            _endOfRoadConditionXmlParser->ParseElement(indexedElement, parserContext, endOfRoadCondition);

            typedObject->SetEndOfRoadCondition(endOfRoadCondition);
        }
        
        int EntityConditionXmlParser::SubElementEndOfRoadConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementEndOfRoadConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementEndOfRoadConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__END_OF_ROAD_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementEndOfRoadConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__END_OF_ROAD_CONDITION
                    };
        }
        EntityConditionXmlParser::SubElementCollisionConditionParser::SubElementCollisionConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _collisionConditionXmlParser = std::make_shared<CollisionConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementCollisionConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto collisionCondition = std::make_shared<CollisionConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            collisionCondition->SetParent(object);
            _collisionConditionXmlParser->ParseElement(indexedElement, parserContext, collisionCondition);

            typedObject->SetCollisionCondition(collisionCondition);
        }
        
        int EntityConditionXmlParser::SubElementCollisionConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementCollisionConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementCollisionConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__COLLISION_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementCollisionConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__COLLISION_CONDITION
                    };
        }
        EntityConditionXmlParser::SubElementOffroadConditionParser::SubElementOffroadConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _offroadConditionXmlParser = std::make_shared<OffroadConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementOffroadConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto offroadCondition = std::make_shared<OffroadConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            offroadCondition->SetParent(object);
            _offroadConditionXmlParser->ParseElement(indexedElement, parserContext, offroadCondition);

            typedObject->SetOffroadCondition(offroadCondition);
        }
        
        int EntityConditionXmlParser::SubElementOffroadConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementOffroadConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementOffroadConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__OFFROAD_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementOffroadConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__OFFROAD_CONDITION
                    };
        }
        EntityConditionXmlParser::SubElementTimeHeadwayConditionParser::SubElementTimeHeadwayConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _timeHeadwayConditionXmlParser = std::make_shared<TimeHeadwayConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementTimeHeadwayConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto timeHeadwayCondition = std::make_shared<TimeHeadwayConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            timeHeadwayCondition->SetParent(object);
            _timeHeadwayConditionXmlParser->ParseElement(indexedElement, parserContext, timeHeadwayCondition);

            typedObject->SetTimeHeadwayCondition(timeHeadwayCondition);
        }
        
        int EntityConditionXmlParser::SubElementTimeHeadwayConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementTimeHeadwayConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementTimeHeadwayConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TIME_HEADWAY_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementTimeHeadwayConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TIME_HEADWAY_CONDITION
                    };
        }
        EntityConditionXmlParser::SubElementTimeToCollisionConditionParser::SubElementTimeToCollisionConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _timeToCollisionConditionXmlParser = std::make_shared<TimeToCollisionConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementTimeToCollisionConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto timeToCollisionCondition = std::make_shared<TimeToCollisionConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            timeToCollisionCondition->SetParent(object);
            _timeToCollisionConditionXmlParser->ParseElement(indexedElement, parserContext, timeToCollisionCondition);

            typedObject->SetTimeToCollisionCondition(timeToCollisionCondition);
        }
        
        int EntityConditionXmlParser::SubElementTimeToCollisionConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementTimeToCollisionConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementTimeToCollisionConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementTimeToCollisionConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION
                    };
        }
        EntityConditionXmlParser::SubElementAccelerationConditionParser::SubElementAccelerationConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _accelerationConditionXmlParser = std::make_shared<AccelerationConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementAccelerationConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto accelerationCondition = std::make_shared<AccelerationConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            accelerationCondition->SetParent(object);
            _accelerationConditionXmlParser->ParseElement(indexedElement, parserContext, accelerationCondition);

            typedObject->SetAccelerationCondition(accelerationCondition);
        }
        
        int EntityConditionXmlParser::SubElementAccelerationConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementAccelerationConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementAccelerationConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ACCELERATION_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementAccelerationConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ACCELERATION_CONDITION
                    };
        }
        EntityConditionXmlParser::SubElementStandStillConditionParser::SubElementStandStillConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _standStillConditionXmlParser = std::make_shared<StandStillConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementStandStillConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto standStillCondition = std::make_shared<StandStillConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            standStillCondition->SetParent(object);
            _standStillConditionXmlParser->ParseElement(indexedElement, parserContext, standStillCondition);

            typedObject->SetStandStillCondition(standStillCondition);
        }
        
        int EntityConditionXmlParser::SubElementStandStillConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementStandStillConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementStandStillConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__STAND_STILL_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementStandStillConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__STAND_STILL_CONDITION
                    };
        }
        EntityConditionXmlParser::SubElementSpeedConditionParser::SubElementSpeedConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _speedConditionXmlParser = std::make_shared<SpeedConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementSpeedConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto speedCondition = std::make_shared<SpeedConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            speedCondition->SetParent(object);
            _speedConditionXmlParser->ParseElement(indexedElement, parserContext, speedCondition);

            typedObject->SetSpeedCondition(speedCondition);
        }
        
        int EntityConditionXmlParser::SubElementSpeedConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementSpeedConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementSpeedConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SPEED_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementSpeedConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SPEED_CONDITION
                    };
        }
        EntityConditionXmlParser::SubElementRelativeSpeedConditionParser::SubElementRelativeSpeedConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeSpeedConditionXmlParser = std::make_shared<RelativeSpeedConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementRelativeSpeedConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto relativeSpeedCondition = std::make_shared<RelativeSpeedConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            relativeSpeedCondition->SetParent(object);
            _relativeSpeedConditionXmlParser->ParseElement(indexedElement, parserContext, relativeSpeedCondition);

            typedObject->SetRelativeSpeedCondition(relativeSpeedCondition);
        }
        
        int EntityConditionXmlParser::SubElementRelativeSpeedConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementRelativeSpeedConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementRelativeSpeedConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementRelativeSpeedConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_CONDITION
                    };
        }
        EntityConditionXmlParser::SubElementTraveledDistanceConditionParser::SubElementTraveledDistanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _traveledDistanceConditionXmlParser = std::make_shared<TraveledDistanceConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementTraveledDistanceConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto traveledDistanceCondition = std::make_shared<TraveledDistanceConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            traveledDistanceCondition->SetParent(object);
            _traveledDistanceConditionXmlParser->ParseElement(indexedElement, parserContext, traveledDistanceCondition);

            typedObject->SetTraveledDistanceCondition(traveledDistanceCondition);
        }
        
        int EntityConditionXmlParser::SubElementTraveledDistanceConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementTraveledDistanceConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementTraveledDistanceConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAVELED_DISTANCE_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementTraveledDistanceConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAVELED_DISTANCE_CONDITION
                    };
        }
        EntityConditionXmlParser::SubElementReachPositionConditionParser::SubElementReachPositionConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _reachPositionConditionXmlParser = std::make_shared<ReachPositionConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementReachPositionConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto reachPositionCondition = std::make_shared<ReachPositionConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            reachPositionCondition->SetParent(object);
            _reachPositionConditionXmlParser->ParseElement(indexedElement, parserContext, reachPositionCondition);

            typedObject->SetReachPositionCondition(reachPositionCondition);
        }
        
        int EntityConditionXmlParser::SubElementReachPositionConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementReachPositionConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementReachPositionConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__REACH_POSITION_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementReachPositionConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__REACH_POSITION_CONDITION
                    };
        }
        EntityConditionXmlParser::SubElementDistanceConditionParser::SubElementDistanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _distanceConditionXmlParser = std::make_shared<DistanceConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementDistanceConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto distanceCondition = std::make_shared<DistanceConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            distanceCondition->SetParent(object);
            _distanceConditionXmlParser->ParseElement(indexedElement, parserContext, distanceCondition);

            typedObject->SetDistanceCondition(distanceCondition);
        }
        
        int EntityConditionXmlParser::SubElementDistanceConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementDistanceConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementDistanceConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DISTANCE_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementDistanceConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DISTANCE_CONDITION
                    };
        }
        EntityConditionXmlParser::SubElementRelativeDistanceConditionParser::SubElementRelativeDistanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeDistanceConditionXmlParser = std::make_shared<RelativeDistanceConditionXmlParser>(messageLogger, filename);
        }

        void EntityConditionXmlParser::SubElementRelativeDistanceConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto relativeDistanceCondition = std::make_shared<RelativeDistanceConditionImpl>();
            auto typedObject = std::static_pointer_cast<EntityConditionImpl>(object);                    
            // Setting the parent
            relativeDistanceCondition->SetParent(object);
            _relativeDistanceConditionXmlParser->ParseElement(indexedElement, parserContext, relativeDistanceCondition);

            typedObject->SetRelativeDistanceCondition(relativeDistanceCondition);
        }
        
        int EntityConditionXmlParser::SubElementRelativeDistanceConditionParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityConditionXmlParser::SubElementRelativeDistanceConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityConditionXmlParser::SubElementRelativeDistanceConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_DISTANCE_CONDITION ;
        }

        std::vector<std::string> EntityConditionXmlParser::SubElementRelativeDistanceConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RELATIVE_DISTANCE_CONDITION
                    };
        }
  
        EntityConditionXmlParser::EntityConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EntityObjectImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            EntityObjectXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}



        std::vector<std::shared_ptr<IElementParser>> EntityObjectXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
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

        void EntityObjectXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            auto typedObject = std::static_pointer_cast<EntityObjectImpl>(object);                    
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            typedObject->SetCatalogReference(catalogReference);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(std::dynamic_pointer_cast<ICatalogReference>(catalogReference));
        }
        
        int EntityObjectXmlParser::SubElementCatalogReferenceParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityObjectXmlParser::SubElementCatalogReferenceParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityObjectXmlParser::SubElementCatalogReferenceParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
        }

        std::vector<std::string> EntityObjectXmlParser::SubElementCatalogReferenceParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                    };
        }
        EntityObjectXmlParser::SubElementVehicleParser::SubElementVehicleParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _vehicleXmlParser = std::make_shared<VehicleXmlParser>(messageLogger, filename);
        }

        void EntityObjectXmlParser::SubElementVehicleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto vehicle = std::make_shared<VehicleImpl>();
            auto typedObject = std::static_pointer_cast<EntityObjectImpl>(object);                    
            // Setting the parent
            vehicle->SetParent(object);
            _vehicleXmlParser->ParseElement(indexedElement, parserContext, vehicle);

            typedObject->SetVehicle(vehicle);
        }
        
        int EntityObjectXmlParser::SubElementVehicleParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityObjectXmlParser::SubElementVehicleParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityObjectXmlParser::SubElementVehicleParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__VEHICLE ;
        }

        std::vector<std::string> EntityObjectXmlParser::SubElementVehicleParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__VEHICLE
                    };
        }
        EntityObjectXmlParser::SubElementPedestrianParser::SubElementPedestrianParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _pedestrianXmlParser = std::make_shared<PedestrianXmlParser>(messageLogger, filename);
        }

        void EntityObjectXmlParser::SubElementPedestrianParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto pedestrian = std::make_shared<PedestrianImpl>();
            auto typedObject = std::static_pointer_cast<EntityObjectImpl>(object);                    
            // Setting the parent
            pedestrian->SetParent(object);
            _pedestrianXmlParser->ParseElement(indexedElement, parserContext, pedestrian);

            typedObject->SetPedestrian(pedestrian);
        }
        
        int EntityObjectXmlParser::SubElementPedestrianParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityObjectXmlParser::SubElementPedestrianParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityObjectXmlParser::SubElementPedestrianParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PEDESTRIAN ;
        }

        std::vector<std::string> EntityObjectXmlParser::SubElementPedestrianParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PEDESTRIAN
                    };
        }
        EntityObjectXmlParser::SubElementMiscObjectParser::SubElementMiscObjectParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _miscObjectXmlParser = std::make_shared<MiscObjectXmlParser>(messageLogger, filename);
        }

        void EntityObjectXmlParser::SubElementMiscObjectParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto miscObject = std::make_shared<MiscObjectImpl>();
            auto typedObject = std::static_pointer_cast<EntityObjectImpl>(object);                    
            // Setting the parent
            miscObject->SetParent(object);
            _miscObjectXmlParser->ParseElement(indexedElement, parserContext, miscObject);

            typedObject->SetMiscObject(miscObject);
        }
        
        int EntityObjectXmlParser::SubElementMiscObjectParser::GetMinOccur() 
        {
            return 0;
        }

        int EntityObjectXmlParser::SubElementMiscObjectParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntityObjectXmlParser::SubElementMiscObjectParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__MISC_OBJECT ;
        }

        std::vector<std::string> EntityObjectXmlParser::SubElementMiscObjectParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__MISC_OBJECT
                    };
        }
  
        EntityObjectXmlParser::EntityObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlGroupParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EntityRefImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            EntityRefXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> EntityRefXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<EntityRefImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> EntityRefXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        EntityRefXmlParser::EntityRefXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EntitySelectionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            EntitySelectionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> EntitySelectionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<EntitySelectionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> EntitySelectionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementMembersParser>(_messageLogger, _filename));
            return result;
        }

        EntitySelectionXmlParser::SubElementMembersParser::SubElementMembersParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _selectedEntitiesXmlParser = std::make_shared<SelectedEntitiesXmlParser>(messageLogger, filename);
        }

        void EntitySelectionXmlParser::SubElementMembersParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto members = std::make_shared<SelectedEntitiesImpl>();
            auto typedObject = std::static_pointer_cast<EntitySelectionImpl>(object);                    
            // Setting the parent
            members->SetParent(object);
            _selectedEntitiesXmlParser->ParseElement(indexedElement, parserContext, members);

            typedObject->SetMembers(members);
        }
        
        int EntitySelectionXmlParser::SubElementMembersParser::GetMinOccur() 
        {
            return 1;
        }

        int EntitySelectionXmlParser::SubElementMembersParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EntitySelectionXmlParser::SubElementMembersParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__MEMBERS ;
        }

        std::vector<std::string> EntitySelectionXmlParser::SubElementMembersParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__MEMBERS
                    };
        }
  
        EntitySelectionXmlParser::EntitySelectionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EnvironmentImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            EnvironmentXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> EnvironmentXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<EnvironmentImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> EnvironmentXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementTimeOfDayParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementWeatherParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRoadConditionParser>(_messageLogger, _filename));
            return result;
        }

        EnvironmentXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void EnvironmentXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            auto typedObject = std::static_pointer_cast<EnvironmentImpl>(object);                    
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = typedObject->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            typedObject->SetParameterDeclarations(parameterDeclarationsList);
        }
        
        int EnvironmentXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int EnvironmentXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool EnvironmentXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> EnvironmentXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        EnvironmentXmlParser::SubElementTimeOfDayParser::SubElementTimeOfDayParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _timeOfDayXmlParser = std::make_shared<TimeOfDayXmlParser>(messageLogger, filename);
        }

        void EnvironmentXmlParser::SubElementTimeOfDayParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto timeOfDay = std::make_shared<TimeOfDayImpl>();
            auto typedObject = std::static_pointer_cast<EnvironmentImpl>(object);                    
            // Setting the parent
            timeOfDay->SetParent(object);
            _timeOfDayXmlParser->ParseElement(indexedElement, parserContext, timeOfDay);

            typedObject->SetTimeOfDay(timeOfDay);
        }
        
        int EnvironmentXmlParser::SubElementTimeOfDayParser::GetMinOccur() 
        {
            return 1;
        }

        int EnvironmentXmlParser::SubElementTimeOfDayParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EnvironmentXmlParser::SubElementTimeOfDayParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TIME_OF_DAY ;
        }

        std::vector<std::string> EnvironmentXmlParser::SubElementTimeOfDayParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TIME_OF_DAY
                    };
        }
        EnvironmentXmlParser::SubElementWeatherParser::SubElementWeatherParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _weatherXmlParser = std::make_shared<WeatherXmlParser>(messageLogger, filename);
        }

        void EnvironmentXmlParser::SubElementWeatherParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto weather = std::make_shared<WeatherImpl>();
            auto typedObject = std::static_pointer_cast<EnvironmentImpl>(object);                    
            // Setting the parent
            weather->SetParent(object);
            _weatherXmlParser->ParseElement(indexedElement, parserContext, weather);

            typedObject->SetWeather(weather);
        }
        
        int EnvironmentXmlParser::SubElementWeatherParser::GetMinOccur() 
        {
            return 1;
        }

        int EnvironmentXmlParser::SubElementWeatherParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EnvironmentXmlParser::SubElementWeatherParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__WEATHER ;
        }

        std::vector<std::string> EnvironmentXmlParser::SubElementWeatherParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__WEATHER
                    };
        }
        EnvironmentXmlParser::SubElementRoadConditionParser::SubElementRoadConditionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _roadConditionXmlParser = std::make_shared<RoadConditionXmlParser>(messageLogger, filename);
        }

        void EnvironmentXmlParser::SubElementRoadConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto roadCondition = std::make_shared<RoadConditionImpl>();
            auto typedObject = std::static_pointer_cast<EnvironmentImpl>(object);                    
            // Setting the parent
            roadCondition->SetParent(object);
            _roadConditionXmlParser->ParseElement(indexedElement, parserContext, roadCondition);

            typedObject->SetRoadCondition(roadCondition);
        }
        
        int EnvironmentXmlParser::SubElementRoadConditionParser::GetMinOccur() 
        {
            return 1;
        }

        int EnvironmentXmlParser::SubElementRoadConditionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EnvironmentXmlParser::SubElementRoadConditionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ROAD_CONDITION ;
        }

        std::vector<std::string> EnvironmentXmlParser::SubElementRoadConditionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ROAD_CONDITION
                    };
        }
  
        EnvironmentXmlParser::EnvironmentXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EnvironmentActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            EnvironmentActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> EnvironmentActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> EnvironmentActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementEnvironmentParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            return result;
        }

        EnvironmentActionXmlParser::SubElementEnvironmentParser::SubElementEnvironmentParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _environmentXmlParser = std::make_shared<EnvironmentXmlParser>(messageLogger, filename);
        }

        void EnvironmentActionXmlParser::SubElementEnvironmentParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto environment = std::make_shared<EnvironmentImpl>();
            auto typedObject = std::static_pointer_cast<EnvironmentActionImpl>(object);                    
            // Setting the parent
            environment->SetParent(object);
            _environmentXmlParser->ParseElement(indexedElement, parserContext, environment);

            typedObject->SetEnvironment(environment);
        }
        
        int EnvironmentActionXmlParser::SubElementEnvironmentParser::GetMinOccur() 
        {
            return 0;
        }

        int EnvironmentActionXmlParser::SubElementEnvironmentParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EnvironmentActionXmlParser::SubElementEnvironmentParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENVIRONMENT ;
        }

        std::vector<std::string> EnvironmentActionXmlParser::SubElementEnvironmentParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENVIRONMENT
                    };
        }
        EnvironmentActionXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void EnvironmentActionXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            auto typedObject = std::static_pointer_cast<EnvironmentActionImpl>(object);                    
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            typedObject->SetCatalogReference(catalogReference);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(std::dynamic_pointer_cast<ICatalogReference>(catalogReference));
        }
        
        int EnvironmentActionXmlParser::SubElementCatalogReferenceParser::GetMinOccur() 
        {
            return 0;
        }

        int EnvironmentActionXmlParser::SubElementCatalogReferenceParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EnvironmentActionXmlParser::SubElementCatalogReferenceParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
        }

        std::vector<std::string> EnvironmentActionXmlParser::SubElementCatalogReferenceParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                    };
        }
  
        EnvironmentActionXmlParser::EnvironmentActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EnvironmentCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            EnvironmentCatalogLocationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> EnvironmentCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> EnvironmentCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename));
            return result;
        }

        EnvironmentCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename);
        }

        void EnvironmentCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            auto typedObject = std::static_pointer_cast<EnvironmentCatalogLocationImpl>(object);                    
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            typedObject->SetDirectory(directory);
        }
        
        int EnvironmentCatalogLocationXmlParser::SubElementDirectoryParser::GetMinOccur() 
        {
            return 1;
        }

        int EnvironmentCatalogLocationXmlParser::SubElementDirectoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EnvironmentCatalogLocationXmlParser::SubElementDirectoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
        }

        std::vector<std::string> EnvironmentCatalogLocationXmlParser::SubElementDirectoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DIRECTORY
                    };
        }
  
        EnvironmentCatalogLocationXmlParser::EnvironmentCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a EventImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            EventXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> EventXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeMaximumExecutionCount: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMaximumExecutionCount(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<EventImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetMaximumExecutionCount(ParseUnsignedInt(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, std::make_shared<AttributeMaximumExecutionCount>(_messageLogger, _filename)));
            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<EventImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            class AttributePriority: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributePriority(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<EventImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__PRIORITY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = Priority::GetFromLiteral(attributeValue);
                        if (kResult != Priority::UNKNOWN)
                        {
                            typedObject->SetPriority(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__PRIORITY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__PRIORITY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__PRIORITY, std::make_shared<AttributePriority>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> EventXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementActionsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementStartTriggerParser>(_messageLogger, _filename));
            return result;
        }

        EventXmlParser::SubElementActionsParser::SubElementActionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _actionXmlParser = std::make_shared<ActionXmlParser>(messageLogger, filename);
        }

        void EventXmlParser::SubElementActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto actions = std::make_shared<ActionImpl>();
            auto typedObject = std::static_pointer_cast<EventImpl>(object);                    
            // Setting the parent
            actions->SetParent(object);
            _actionXmlParser->ParseElement(indexedElement, parserContext, actions);
            auto actionsList = typedObject->GetWriterActions();
            actionsList.push_back(actions);
            typedObject->SetActions(actionsList);
        }
        
        int EventXmlParser::SubElementActionsParser::GetMinOccur() 
        {
            return 1;
        }

        int EventXmlParser::SubElementActionsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool EventXmlParser::SubElementActionsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ACTION ;
        }

        std::vector<std::string> EventXmlParser::SubElementActionsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ACTION
                    };
        }
        EventXmlParser::SubElementStartTriggerParser::SubElementStartTriggerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _triggerXmlParser = std::make_shared<TriggerXmlParser>(messageLogger, filename);
        }

        void EventXmlParser::SubElementStartTriggerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto startTrigger = std::make_shared<TriggerImpl>();
            auto typedObject = std::static_pointer_cast<EventImpl>(object);                    
            // Setting the parent
            startTrigger->SetParent(object);
            _triggerXmlParser->ParseElement(indexedElement, parserContext, startTrigger);

            typedObject->SetStartTrigger(startTrigger);
        }
        
        int EventXmlParser::SubElementStartTriggerParser::GetMinOccur() 
        {
            return 1;
        }

        int EventXmlParser::SubElementStartTriggerParser::GetMaxOccur() 
        {
            return 1;
        }

        bool EventXmlParser::SubElementStartTriggerParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__START_TRIGGER ;
        }

        std::vector<std::string> EventXmlParser::SubElementStartTriggerParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__START_TRIGGER
                    };
        }
  
        EventXmlParser::EventXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a FileImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            FileXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> FileXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeFilepath: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeFilepath(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<FileImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FILEPATH, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetFilepath(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__FILEPATH, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__FILEPATH, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FILEPATH, std::make_shared<AttributeFilepath>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> FileXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        FileXmlParser::FileXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a FileHeaderImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            FileHeaderXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> FileHeaderXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeAuthor: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeAuthor(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<FileHeaderImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__AUTHOR, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetAuthor(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__AUTHOR, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__AUTHOR, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__AUTHOR, std::make_shared<AttributeAuthor>(_messageLogger, _filename)));
            class AttributeDate: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDate(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<FileHeaderImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DATE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDate(ParseDateTime(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DATE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DATE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DATE, std::make_shared<AttributeDate>(_messageLogger, _filename)));
            class AttributeDescription: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDescription(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<FileHeaderImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDescription(ParseString(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION, std::make_shared<AttributeDescription>(_messageLogger, _filename)));
            class AttributeRevMajor: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRevMajor(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<FileHeaderImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetRevMajor(ParseUnsignedShort(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR, std::make_shared<AttributeRevMajor>(_messageLogger, _filename)));
            class AttributeRevMinor: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRevMinor(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<FileHeaderImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetRevMinor(ParseUnsignedShort(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR, std::make_shared<AttributeRevMinor>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> FileHeaderXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        FileHeaderXmlParser::FileHeaderXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a FinalSpeedImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            FinalSpeedXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> FinalSpeedXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> FinalSpeedXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementAbsoluteSpeedParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementRelativeSpeedToMasterParser>(_messageLogger, _filename));
            return result;
        }

        FinalSpeedXmlParser::SubElementAbsoluteSpeedParser::SubElementAbsoluteSpeedParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _absoluteSpeedXmlParser = std::make_shared<AbsoluteSpeedXmlParser>(messageLogger, filename);
        }

        void FinalSpeedXmlParser::SubElementAbsoluteSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto absoluteSpeed = std::make_shared<AbsoluteSpeedImpl>();
            auto typedObject = std::static_pointer_cast<FinalSpeedImpl>(object);                    
            // Setting the parent
            absoluteSpeed->SetParent(object);
            _absoluteSpeedXmlParser->ParseElement(indexedElement, parserContext, absoluteSpeed);

            typedObject->SetAbsoluteSpeed(absoluteSpeed);
        }
        
        int FinalSpeedXmlParser::SubElementAbsoluteSpeedParser::GetMinOccur() 
        {
            return 0;
        }

        int FinalSpeedXmlParser::SubElementAbsoluteSpeedParser::GetMaxOccur() 
        {
            return 1;
        }

        bool FinalSpeedXmlParser::SubElementAbsoluteSpeedParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ABSOLUTE_SPEED ;
        }

        std::vector<std::string> FinalSpeedXmlParser::SubElementAbsoluteSpeedParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ABSOLUTE_SPEED
                    };
        }
        FinalSpeedXmlParser::SubElementRelativeSpeedToMasterParser::SubElementRelativeSpeedToMasterParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeSpeedToMasterXmlParser = std::make_shared<RelativeSpeedToMasterXmlParser>(messageLogger, filename);
        }

        void FinalSpeedXmlParser::SubElementRelativeSpeedToMasterParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto relativeSpeedToMaster = std::make_shared<RelativeSpeedToMasterImpl>();
            auto typedObject = std::static_pointer_cast<FinalSpeedImpl>(object);                    
            // Setting the parent
            relativeSpeedToMaster->SetParent(object);
            _relativeSpeedToMasterXmlParser->ParseElement(indexedElement, parserContext, relativeSpeedToMaster);

            typedObject->SetRelativeSpeedToMaster(relativeSpeedToMaster);
        }
        
        int FinalSpeedXmlParser::SubElementRelativeSpeedToMasterParser::GetMinOccur() 
        {
            return 0;
        }

        int FinalSpeedXmlParser::SubElementRelativeSpeedToMasterParser::GetMaxOccur() 
        {
            return 1;
        }

        bool FinalSpeedXmlParser::SubElementRelativeSpeedToMasterParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_TO_MASTER ;
        }

        std::vector<std::string> FinalSpeedXmlParser::SubElementRelativeSpeedToMasterParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_TO_MASTER
                    };
        }
  
        FinalSpeedXmlParser::FinalSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a FogImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            FogXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> FogXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeVisualRange: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeVisualRange(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<FogImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetVisualRange(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE, std::make_shared<AttributeVisualRange>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> FogXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementBoundingBoxParser>(_messageLogger, _filename));
            return result;
        }

        FogXmlParser::SubElementBoundingBoxParser::SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _boundingBoxXmlParser = std::make_shared<BoundingBoxXmlParser>(messageLogger, filename);
        }

        void FogXmlParser::SubElementBoundingBoxParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto boundingBox = std::make_shared<BoundingBoxImpl>();
            auto typedObject = std::static_pointer_cast<FogImpl>(object);                    
            // Setting the parent
            boundingBox->SetParent(object);
            _boundingBoxXmlParser->ParseElement(indexedElement, parserContext, boundingBox);

            typedObject->SetBoundingBox(boundingBox);
        }
        
        int FogXmlParser::SubElementBoundingBoxParser::GetMinOccur() 
        {
            return 0;
        }

        int FogXmlParser::SubElementBoundingBoxParser::GetMaxOccur() 
        {
            return 1;
        }

        bool FogXmlParser::SubElementBoundingBoxParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__BOUNDING_BOX ;
        }

        std::vector<std::string> FogXmlParser::SubElementBoundingBoxParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__BOUNDING_BOX
                    };
        }
  
        FogXmlParser::FogXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a FollowTrajectoryActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            FollowTrajectoryActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> FollowTrajectoryActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> FollowTrajectoryActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
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

        void FollowTrajectoryActionXmlParser::SubElementTrajectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trajectory = std::make_shared<TrajectoryImpl>();
            auto typedObject = std::static_pointer_cast<FollowTrajectoryActionImpl>(object);                    
            // Setting the parent
            trajectory->SetParent(object);
            _trajectoryXmlParser->ParseElement(indexedElement, parserContext, trajectory);

            typedObject->SetTrajectory(trajectory);
        }
        
        int FollowTrajectoryActionXmlParser::SubElementTrajectoryParser::GetMinOccur() 
        {
            return 0;
        }

        int FollowTrajectoryActionXmlParser::SubElementTrajectoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool FollowTrajectoryActionXmlParser::SubElementTrajectoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAJECTORY ;
        }

        std::vector<std::string> FollowTrajectoryActionXmlParser::SubElementTrajectoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAJECTORY
                    };
        }
        FollowTrajectoryActionXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void FollowTrajectoryActionXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            auto typedObject = std::static_pointer_cast<FollowTrajectoryActionImpl>(object);                    
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            typedObject->SetCatalogReference(catalogReference);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(std::dynamic_pointer_cast<ICatalogReference>(catalogReference));
        }
        
        int FollowTrajectoryActionXmlParser::SubElementCatalogReferenceParser::GetMinOccur() 
        {
            return 0;
        }

        int FollowTrajectoryActionXmlParser::SubElementCatalogReferenceParser::GetMaxOccur() 
        {
            return 1;
        }

        bool FollowTrajectoryActionXmlParser::SubElementCatalogReferenceParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
        }

        std::vector<std::string> FollowTrajectoryActionXmlParser::SubElementCatalogReferenceParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                    };
        }
        FollowTrajectoryActionXmlParser::SubElementTimeReferenceParser::SubElementTimeReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _timeReferenceXmlParser = std::make_shared<TimeReferenceXmlParser>(messageLogger, filename);
        }

        void FollowTrajectoryActionXmlParser::SubElementTimeReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto timeReference = std::make_shared<TimeReferenceImpl>();
            auto typedObject = std::static_pointer_cast<FollowTrajectoryActionImpl>(object);                    
            // Setting the parent
            timeReference->SetParent(object);
            _timeReferenceXmlParser->ParseElement(indexedElement, parserContext, timeReference);

            typedObject->SetTimeReference(timeReference);
        }
        
        int FollowTrajectoryActionXmlParser::SubElementTimeReferenceParser::GetMinOccur() 
        {
            return 1;
        }

        int FollowTrajectoryActionXmlParser::SubElementTimeReferenceParser::GetMaxOccur() 
        {
            return 1;
        }

        bool FollowTrajectoryActionXmlParser::SubElementTimeReferenceParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TIME_REFERENCE ;
        }

        std::vector<std::string> FollowTrajectoryActionXmlParser::SubElementTimeReferenceParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TIME_REFERENCE
                    };
        }
        FollowTrajectoryActionXmlParser::SubElementTrajectoryFollowingModeParser::SubElementTrajectoryFollowingModeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trajectoryFollowingModeXmlParser = std::make_shared<TrajectoryFollowingModeXmlParser>(messageLogger, filename);
        }

        void FollowTrajectoryActionXmlParser::SubElementTrajectoryFollowingModeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trajectoryFollowingMode = std::make_shared<TrajectoryFollowingModeImpl>();
            auto typedObject = std::static_pointer_cast<FollowTrajectoryActionImpl>(object);                    
            // Setting the parent
            trajectoryFollowingMode->SetParent(object);
            _trajectoryFollowingModeXmlParser->ParseElement(indexedElement, parserContext, trajectoryFollowingMode);

            typedObject->SetTrajectoryFollowingMode(trajectoryFollowingMode);
        }
        
        int FollowTrajectoryActionXmlParser::SubElementTrajectoryFollowingModeParser::GetMinOccur() 
        {
            return 1;
        }

        int FollowTrajectoryActionXmlParser::SubElementTrajectoryFollowingModeParser::GetMaxOccur() 
        {
            return 1;
        }

        bool FollowTrajectoryActionXmlParser::SubElementTrajectoryFollowingModeParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAJECTORY_FOLLOWING_MODE ;
        }

        std::vector<std::string> FollowTrajectoryActionXmlParser::SubElementTrajectoryFollowingModeParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAJECTORY_FOLLOWING_MODE
                    };
        }
  
        FollowTrajectoryActionXmlParser::FollowTrajectoryActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a GlobalActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            GlobalActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> GlobalActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> GlobalActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
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

        void GlobalActionXmlParser::SubElementEnvironmentActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto environmentAction = std::make_shared<EnvironmentActionImpl>();
            auto typedObject = std::static_pointer_cast<GlobalActionImpl>(object);                    
            // Setting the parent
            environmentAction->SetParent(object);
            _environmentActionXmlParser->ParseElement(indexedElement, parserContext, environmentAction);

            typedObject->SetEnvironmentAction(environmentAction);
        }
        
        int GlobalActionXmlParser::SubElementEnvironmentActionParser::GetMinOccur() 
        {
            return 0;
        }

        int GlobalActionXmlParser::SubElementEnvironmentActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool GlobalActionXmlParser::SubElementEnvironmentActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENVIRONMENT_ACTION ;
        }

        std::vector<std::string> GlobalActionXmlParser::SubElementEnvironmentActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENVIRONMENT_ACTION
                    };
        }
        GlobalActionXmlParser::SubElementEntityActionParser::SubElementEntityActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _entityActionXmlParser = std::make_shared<EntityActionXmlParser>(messageLogger, filename);
        }

        void GlobalActionXmlParser::SubElementEntityActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto entityAction = std::make_shared<EntityActionImpl>();
            auto typedObject = std::static_pointer_cast<GlobalActionImpl>(object);                    
            // Setting the parent
            entityAction->SetParent(object);
            _entityActionXmlParser->ParseElement(indexedElement, parserContext, entityAction);

            typedObject->SetEntityAction(entityAction);
        }
        
        int GlobalActionXmlParser::SubElementEntityActionParser::GetMinOccur() 
        {
            return 0;
        }

        int GlobalActionXmlParser::SubElementEntityActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool GlobalActionXmlParser::SubElementEntityActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ENTITY_ACTION ;
        }

        std::vector<std::string> GlobalActionXmlParser::SubElementEntityActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ENTITY_ACTION
                    };
        }
        GlobalActionXmlParser::SubElementParameterActionParser::SubElementParameterActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterActionXmlParser = std::make_shared<ParameterActionXmlParser>(messageLogger, filename);
        }

        void GlobalActionXmlParser::SubElementParameterActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterAction = std::make_shared<ParameterActionImpl>();
            auto typedObject = std::static_pointer_cast<GlobalActionImpl>(object);                    
            // Setting the parent
            parameterAction->SetParent(object);
            _parameterActionXmlParser->ParseElement(indexedElement, parserContext, parameterAction);

            typedObject->SetParameterAction(parameterAction);
        }
        
        int GlobalActionXmlParser::SubElementParameterActionParser::GetMinOccur() 
        {
            return 0;
        }

        int GlobalActionXmlParser::SubElementParameterActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool GlobalActionXmlParser::SubElementParameterActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_ACTION ;
        }

        std::vector<std::string> GlobalActionXmlParser::SubElementParameterActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PARAMETER_ACTION
                    };
        }
        GlobalActionXmlParser::SubElementInfrastructureActionParser::SubElementInfrastructureActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _infrastructureActionXmlParser = std::make_shared<InfrastructureActionXmlParser>(messageLogger, filename);
        }

        void GlobalActionXmlParser::SubElementInfrastructureActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto infrastructureAction = std::make_shared<InfrastructureActionImpl>();
            auto typedObject = std::static_pointer_cast<GlobalActionImpl>(object);                    
            // Setting the parent
            infrastructureAction->SetParent(object);
            _infrastructureActionXmlParser->ParseElement(indexedElement, parserContext, infrastructureAction);

            typedObject->SetInfrastructureAction(infrastructureAction);
        }
        
        int GlobalActionXmlParser::SubElementInfrastructureActionParser::GetMinOccur() 
        {
            return 0;
        }

        int GlobalActionXmlParser::SubElementInfrastructureActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool GlobalActionXmlParser::SubElementInfrastructureActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__INFRASTRUCTURE_ACTION ;
        }

        std::vector<std::string> GlobalActionXmlParser::SubElementInfrastructureActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__INFRASTRUCTURE_ACTION
                    };
        }
        GlobalActionXmlParser::SubElementTrafficActionParser::SubElementTrafficActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficActionXmlParser = std::make_shared<TrafficActionXmlParser>(messageLogger, filename);
        }

        void GlobalActionXmlParser::SubElementTrafficActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficAction = std::make_shared<TrafficActionImpl>();
            auto typedObject = std::static_pointer_cast<GlobalActionImpl>(object);                    
            // Setting the parent
            trafficAction->SetParent(object);
            _trafficActionXmlParser->ParseElement(indexedElement, parserContext, trafficAction);

            typedObject->SetTrafficAction(trafficAction);
        }
        
        int GlobalActionXmlParser::SubElementTrafficActionParser::GetMinOccur() 
        {
            return 0;
        }

        int GlobalActionXmlParser::SubElementTrafficActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool GlobalActionXmlParser::SubElementTrafficActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_ACTION ;
        }

        std::vector<std::string> GlobalActionXmlParser::SubElementTrafficActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_ACTION
                    };
        }
  
        GlobalActionXmlParser::GlobalActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a InRoutePositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            InRoutePositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> InRoutePositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> InRoutePositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementFromCurrentEntityParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementFromRoadCoordinatesParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementFromLaneCoordinatesParser>(_messageLogger, _filename));
            return result;
        }

        InRoutePositionXmlParser::SubElementFromCurrentEntityParser::SubElementFromCurrentEntityParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionOfCurrentEntityXmlParser = std::make_shared<PositionOfCurrentEntityXmlParser>(messageLogger, filename);
        }

        void InRoutePositionXmlParser::SubElementFromCurrentEntityParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto fromCurrentEntity = std::make_shared<PositionOfCurrentEntityImpl>();
            auto typedObject = std::static_pointer_cast<InRoutePositionImpl>(object);                    
            // Setting the parent
            fromCurrentEntity->SetParent(object);
            _positionOfCurrentEntityXmlParser->ParseElement(indexedElement, parserContext, fromCurrentEntity);

            typedObject->SetFromCurrentEntity(fromCurrentEntity);
        }
        
        int InRoutePositionXmlParser::SubElementFromCurrentEntityParser::GetMinOccur() 
        {
            return 0;
        }

        int InRoutePositionXmlParser::SubElementFromCurrentEntityParser::GetMaxOccur() 
        {
            return 1;
        }

        bool InRoutePositionXmlParser::SubElementFromCurrentEntityParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__FROM_CURRENT_ENTITY ;
        }

        std::vector<std::string> InRoutePositionXmlParser::SubElementFromCurrentEntityParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__FROM_CURRENT_ENTITY
                    };
        }
        InRoutePositionXmlParser::SubElementFromRoadCoordinatesParser::SubElementFromRoadCoordinatesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionInRoadCoordinatesXmlParser = std::make_shared<PositionInRoadCoordinatesXmlParser>(messageLogger, filename);
        }

        void InRoutePositionXmlParser::SubElementFromRoadCoordinatesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto fromRoadCoordinates = std::make_shared<PositionInRoadCoordinatesImpl>();
            auto typedObject = std::static_pointer_cast<InRoutePositionImpl>(object);                    
            // Setting the parent
            fromRoadCoordinates->SetParent(object);
            _positionInRoadCoordinatesXmlParser->ParseElement(indexedElement, parserContext, fromRoadCoordinates);

            typedObject->SetFromRoadCoordinates(fromRoadCoordinates);
        }
        
        int InRoutePositionXmlParser::SubElementFromRoadCoordinatesParser::GetMinOccur() 
        {
            return 0;
        }

        int InRoutePositionXmlParser::SubElementFromRoadCoordinatesParser::GetMaxOccur() 
        {
            return 1;
        }

        bool InRoutePositionXmlParser::SubElementFromRoadCoordinatesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__FROM_ROAD_COORDINATES ;
        }

        std::vector<std::string> InRoutePositionXmlParser::SubElementFromRoadCoordinatesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__FROM_ROAD_COORDINATES
                    };
        }
        InRoutePositionXmlParser::SubElementFromLaneCoordinatesParser::SubElementFromLaneCoordinatesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _positionInLaneCoordinatesXmlParser = std::make_shared<PositionInLaneCoordinatesXmlParser>(messageLogger, filename);
        }

        void InRoutePositionXmlParser::SubElementFromLaneCoordinatesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto fromLaneCoordinates = std::make_shared<PositionInLaneCoordinatesImpl>();
            auto typedObject = std::static_pointer_cast<InRoutePositionImpl>(object);                    
            // Setting the parent
            fromLaneCoordinates->SetParent(object);
            _positionInLaneCoordinatesXmlParser->ParseElement(indexedElement, parserContext, fromLaneCoordinates);

            typedObject->SetFromLaneCoordinates(fromLaneCoordinates);
        }
        
        int InRoutePositionXmlParser::SubElementFromLaneCoordinatesParser::GetMinOccur() 
        {
            return 0;
        }

        int InRoutePositionXmlParser::SubElementFromLaneCoordinatesParser::GetMaxOccur() 
        {
            return 1;
        }

        bool InRoutePositionXmlParser::SubElementFromLaneCoordinatesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__FROM_LANE_COORDINATES ;
        }

        std::vector<std::string> InRoutePositionXmlParser::SubElementFromLaneCoordinatesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__FROM_LANE_COORDINATES
                    };
        }
  
        InRoutePositionXmlParser::InRoutePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a InfrastructureActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            InfrastructureActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> InfrastructureActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> InfrastructureActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementTrafficSignalActionParser>(_messageLogger, _filename));
            return result;
        }

        InfrastructureActionXmlParser::SubElementTrafficSignalActionParser::SubElementTrafficSignalActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _trafficSignalActionXmlParser = std::make_shared<TrafficSignalActionXmlParser>(messageLogger, filename);
        }

        void InfrastructureActionXmlParser::SubElementTrafficSignalActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto trafficSignalAction = std::make_shared<TrafficSignalActionImpl>();
            auto typedObject = std::static_pointer_cast<InfrastructureActionImpl>(object);                    
            // Setting the parent
            trafficSignalAction->SetParent(object);
            _trafficSignalActionXmlParser->ParseElement(indexedElement, parserContext, trafficSignalAction);

            typedObject->SetTrafficSignalAction(trafficSignalAction);
        }
        
        int InfrastructureActionXmlParser::SubElementTrafficSignalActionParser::GetMinOccur() 
        {
            return 1;
        }

        int InfrastructureActionXmlParser::SubElementTrafficSignalActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool InfrastructureActionXmlParser::SubElementTrafficSignalActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_ACTION ;
        }

        std::vector<std::string> InfrastructureActionXmlParser::SubElementTrafficSignalActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_ACTION
                    };
        }
  
        InfrastructureActionXmlParser::InfrastructureActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a InitImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            InitXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> InitXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> InitXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementActionsParser>(_messageLogger, _filename));
            return result;
        }

        InitXmlParser::SubElementActionsParser::SubElementActionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _initActionsXmlParser = std::make_shared<InitActionsXmlParser>(messageLogger, filename);
        }

        void InitXmlParser::SubElementActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto actions = std::make_shared<InitActionsImpl>();
            auto typedObject = std::static_pointer_cast<InitImpl>(object);                    
            // Setting the parent
            actions->SetParent(object);
            _initActionsXmlParser->ParseElement(indexedElement, parserContext, actions);

            typedObject->SetActions(actions);
        }
        
        int InitXmlParser::SubElementActionsParser::GetMinOccur() 
        {
            return 1;
        }

        int InitXmlParser::SubElementActionsParser::GetMaxOccur() 
        {
            return 1;
        }

        bool InitXmlParser::SubElementActionsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ACTIONS ;
        }

        std::vector<std::string> InitXmlParser::SubElementActionsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ACTIONS
                    };
        }
  
        InitXmlParser::InitXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a InitActionsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            InitActionsXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> InitActionsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> InitActionsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementGlobalActionsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementUserDefinedActionsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPrivatesParser>(_messageLogger, _filename));
            return result;
        }

        InitActionsXmlParser::SubElementGlobalActionsParser::SubElementGlobalActionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _globalActionXmlParser = std::make_shared<GlobalActionXmlParser>(messageLogger, filename);
        }

        void InitActionsXmlParser::SubElementGlobalActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto globalActions = std::make_shared<GlobalActionImpl>();
            auto typedObject = std::static_pointer_cast<InitActionsImpl>(object);                    
            // Setting the parent
            globalActions->SetParent(object);
            _globalActionXmlParser->ParseElement(indexedElement, parserContext, globalActions);
            auto globalActionsList = typedObject->GetWriterGlobalActions();
            globalActionsList.push_back(globalActions);
            typedObject->SetGlobalActions(globalActionsList);
        }
        
        int InitActionsXmlParser::SubElementGlobalActionsParser::GetMinOccur() 
        {
            return 0;
        }

        int InitActionsXmlParser::SubElementGlobalActionsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool InitActionsXmlParser::SubElementGlobalActionsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__GLOBAL_ACTION ;
        }

        std::vector<std::string> InitActionsXmlParser::SubElementGlobalActionsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__GLOBAL_ACTION
                    };
        }
        InitActionsXmlParser::SubElementUserDefinedActionsParser::SubElementUserDefinedActionsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _userDefinedActionXmlParser = std::make_shared<UserDefinedActionXmlParser>(messageLogger, filename);
        }

        void InitActionsXmlParser::SubElementUserDefinedActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto userDefinedActions = std::make_shared<UserDefinedActionImpl>();
            auto typedObject = std::static_pointer_cast<InitActionsImpl>(object);                    
            // Setting the parent
            userDefinedActions->SetParent(object);
            _userDefinedActionXmlParser->ParseElement(indexedElement, parserContext, userDefinedActions);
            auto userDefinedActionsList = typedObject->GetWriterUserDefinedActions();
            userDefinedActionsList.push_back(userDefinedActions);
            typedObject->SetUserDefinedActions(userDefinedActionsList);
        }
        
        int InitActionsXmlParser::SubElementUserDefinedActionsParser::GetMinOccur() 
        {
            return 0;
        }

        int InitActionsXmlParser::SubElementUserDefinedActionsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool InitActionsXmlParser::SubElementUserDefinedActionsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__USER_DEFINED_ACTION ;
        }

        std::vector<std::string> InitActionsXmlParser::SubElementUserDefinedActionsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__USER_DEFINED_ACTION
                    };
        }
        InitActionsXmlParser::SubElementPrivatesParser::SubElementPrivatesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _privateXmlParser = std::make_shared<PrivateXmlParser>(messageLogger, filename);
        }

        void InitActionsXmlParser::SubElementPrivatesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto privates = std::make_shared<PrivateImpl>();
            auto typedObject = std::static_pointer_cast<InitActionsImpl>(object);                    
            // Setting the parent
            privates->SetParent(object);
            _privateXmlParser->ParseElement(indexedElement, parserContext, privates);
            auto privatesList = typedObject->GetWriterPrivates();
            privatesList.push_back(privates);
            typedObject->SetPrivates(privatesList);
        }
        
        int InitActionsXmlParser::SubElementPrivatesParser::GetMinOccur() 
        {
            return 0;
        }

        int InitActionsXmlParser::SubElementPrivatesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool InitActionsXmlParser::SubElementPrivatesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PRIVATE ;
        }

        std::vector<std::string> InitActionsXmlParser::SubElementPrivatesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PRIVATE
                    };
        }
  
        InitActionsXmlParser::InitActionsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a KnotImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            KnotXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> KnotXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<KnotImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> KnotXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        KnotXmlParser::KnotXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LaneChangeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            LaneChangeActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> LaneChangeActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeTargetLaneOffset: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTargetLaneOffset(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LaneChangeActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TARGET_LANE_OFFSET, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetTargetLaneOffset(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TARGET_LANE_OFFSET, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TARGET_LANE_OFFSET, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TARGET_LANE_OFFSET, std::make_shared<AttributeTargetLaneOffset>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> LaneChangeActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementLaneChangeActionDynamicsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementLaneChangeTargetParser>(_messageLogger, _filename));
            return result;
        }

        LaneChangeActionXmlParser::SubElementLaneChangeActionDynamicsParser::SubElementLaneChangeActionDynamicsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _transitionDynamicsXmlParser = std::make_shared<TransitionDynamicsXmlParser>(messageLogger, filename);
        }

        void LaneChangeActionXmlParser::SubElementLaneChangeActionDynamicsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto laneChangeActionDynamics = std::make_shared<TransitionDynamicsImpl>();
            auto typedObject = std::static_pointer_cast<LaneChangeActionImpl>(object);                    
            // Setting the parent
            laneChangeActionDynamics->SetParent(object);
            _transitionDynamicsXmlParser->ParseElement(indexedElement, parserContext, laneChangeActionDynamics);

            typedObject->SetLaneChangeActionDynamics(laneChangeActionDynamics);
        }
        
        int LaneChangeActionXmlParser::SubElementLaneChangeActionDynamicsParser::GetMinOccur() 
        {
            return 1;
        }

        int LaneChangeActionXmlParser::SubElementLaneChangeActionDynamicsParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LaneChangeActionXmlParser::SubElementLaneChangeActionDynamicsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION_DYNAMICS ;
        }

        std::vector<std::string> LaneChangeActionXmlParser::SubElementLaneChangeActionDynamicsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION_DYNAMICS
                    };
        }
        LaneChangeActionXmlParser::SubElementLaneChangeTargetParser::SubElementLaneChangeTargetParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _laneChangeTargetXmlParser = std::make_shared<LaneChangeTargetXmlParser>(messageLogger, filename);
        }

        void LaneChangeActionXmlParser::SubElementLaneChangeTargetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto laneChangeTarget = std::make_shared<LaneChangeTargetImpl>();
            auto typedObject = std::static_pointer_cast<LaneChangeActionImpl>(object);                    
            // Setting the parent
            laneChangeTarget->SetParent(object);
            _laneChangeTargetXmlParser->ParseElement(indexedElement, parserContext, laneChangeTarget);

            typedObject->SetLaneChangeTarget(laneChangeTarget);
        }
        
        int LaneChangeActionXmlParser::SubElementLaneChangeTargetParser::GetMinOccur() 
        {
            return 1;
        }

        int LaneChangeActionXmlParser::SubElementLaneChangeTargetParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LaneChangeActionXmlParser::SubElementLaneChangeTargetParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__LANE_CHANGE_TARGET ;
        }

        std::vector<std::string> LaneChangeActionXmlParser::SubElementLaneChangeTargetParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__LANE_CHANGE_TARGET
                    };
        }
  
        LaneChangeActionXmlParser::LaneChangeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LaneChangeTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            LaneChangeTargetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> LaneChangeTargetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> LaneChangeTargetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementRelativeTargetLaneParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementAbsoluteTargetLaneParser>(_messageLogger, _filename));
            return result;
        }

        LaneChangeTargetXmlParser::SubElementRelativeTargetLaneParser::SubElementRelativeTargetLaneParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeTargetLaneXmlParser = std::make_shared<RelativeTargetLaneXmlParser>(messageLogger, filename);
        }

        void LaneChangeTargetXmlParser::SubElementRelativeTargetLaneParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto relativeTargetLane = std::make_shared<RelativeTargetLaneImpl>();
            auto typedObject = std::static_pointer_cast<LaneChangeTargetImpl>(object);                    
            // Setting the parent
            relativeTargetLane->SetParent(object);
            _relativeTargetLaneXmlParser->ParseElement(indexedElement, parserContext, relativeTargetLane);

            typedObject->SetRelativeTargetLane(relativeTargetLane);
        }
        
        int LaneChangeTargetXmlParser::SubElementRelativeTargetLaneParser::GetMinOccur() 
        {
            return 0;
        }

        int LaneChangeTargetXmlParser::SubElementRelativeTargetLaneParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LaneChangeTargetXmlParser::SubElementRelativeTargetLaneParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE ;
        }

        std::vector<std::string> LaneChangeTargetXmlParser::SubElementRelativeTargetLaneParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE
                    };
        }
        LaneChangeTargetXmlParser::SubElementAbsoluteTargetLaneParser::SubElementAbsoluteTargetLaneParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _absoluteTargetLaneXmlParser = std::make_shared<AbsoluteTargetLaneXmlParser>(messageLogger, filename);
        }

        void LaneChangeTargetXmlParser::SubElementAbsoluteTargetLaneParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto absoluteTargetLane = std::make_shared<AbsoluteTargetLaneImpl>();
            auto typedObject = std::static_pointer_cast<LaneChangeTargetImpl>(object);                    
            // Setting the parent
            absoluteTargetLane->SetParent(object);
            _absoluteTargetLaneXmlParser->ParseElement(indexedElement, parserContext, absoluteTargetLane);

            typedObject->SetAbsoluteTargetLane(absoluteTargetLane);
        }
        
        int LaneChangeTargetXmlParser::SubElementAbsoluteTargetLaneParser::GetMinOccur() 
        {
            return 0;
        }

        int LaneChangeTargetXmlParser::SubElementAbsoluteTargetLaneParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LaneChangeTargetXmlParser::SubElementAbsoluteTargetLaneParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE ;
        }

        std::vector<std::string> LaneChangeTargetXmlParser::SubElementAbsoluteTargetLaneParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE
                    };
        }
  
        LaneChangeTargetXmlParser::LaneChangeTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LaneOffsetActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            LaneOffsetActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> LaneOffsetActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeContinuous: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeContinuous(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LaneOffsetActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, std::make_shared<AttributeContinuous>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> LaneOffsetActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementLaneOffsetActionDynamicsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementLaneOffsetTargetParser>(_messageLogger, _filename));
            return result;
        }

        LaneOffsetActionXmlParser::SubElementLaneOffsetActionDynamicsParser::SubElementLaneOffsetActionDynamicsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _laneOffsetActionDynamicsXmlParser = std::make_shared<LaneOffsetActionDynamicsXmlParser>(messageLogger, filename);
        }

        void LaneOffsetActionXmlParser::SubElementLaneOffsetActionDynamicsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto laneOffsetActionDynamics = std::make_shared<LaneOffsetActionDynamicsImpl>();
            auto typedObject = std::static_pointer_cast<LaneOffsetActionImpl>(object);                    
            // Setting the parent
            laneOffsetActionDynamics->SetParent(object);
            _laneOffsetActionDynamicsXmlParser->ParseElement(indexedElement, parserContext, laneOffsetActionDynamics);

            typedObject->SetLaneOffsetActionDynamics(laneOffsetActionDynamics);
        }
        
        int LaneOffsetActionXmlParser::SubElementLaneOffsetActionDynamicsParser::GetMinOccur() 
        {
            return 1;
        }

        int LaneOffsetActionXmlParser::SubElementLaneOffsetActionDynamicsParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LaneOffsetActionXmlParser::SubElementLaneOffsetActionDynamicsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION_DYNAMICS ;
        }

        std::vector<std::string> LaneOffsetActionXmlParser::SubElementLaneOffsetActionDynamicsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION_DYNAMICS
                    };
        }
        LaneOffsetActionXmlParser::SubElementLaneOffsetTargetParser::SubElementLaneOffsetTargetParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _laneOffsetTargetXmlParser = std::make_shared<LaneOffsetTargetXmlParser>(messageLogger, filename);
        }

        void LaneOffsetActionXmlParser::SubElementLaneOffsetTargetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto laneOffsetTarget = std::make_shared<LaneOffsetTargetImpl>();
            auto typedObject = std::static_pointer_cast<LaneOffsetActionImpl>(object);                    
            // Setting the parent
            laneOffsetTarget->SetParent(object);
            _laneOffsetTargetXmlParser->ParseElement(indexedElement, parserContext, laneOffsetTarget);

            typedObject->SetLaneOffsetTarget(laneOffsetTarget);
        }
        
        int LaneOffsetActionXmlParser::SubElementLaneOffsetTargetParser::GetMinOccur() 
        {
            return 1;
        }

        int LaneOffsetActionXmlParser::SubElementLaneOffsetTargetParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LaneOffsetActionXmlParser::SubElementLaneOffsetTargetParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__LANE_OFFSET_TARGET ;
        }

        std::vector<std::string> LaneOffsetActionXmlParser::SubElementLaneOffsetTargetParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__LANE_OFFSET_TARGET
                    };
        }
  
        LaneOffsetActionXmlParser::LaneOffsetActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LaneOffsetActionDynamicsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            LaneOffsetActionDynamicsXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> LaneOffsetActionDynamicsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDynamicsShape: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDynamicsShape(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LaneOffsetActionDynamicsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = DynamicsShape::GetFromLiteral(attributeValue);
                        if (kResult != DynamicsShape::UNKNOWN)
                        {
                            typedObject->SetDynamicsShape(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, std::make_shared<AttributeDynamicsShape>(_messageLogger, _filename)));
            class AttributeMaxLateralAcc: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMaxLateralAcc(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LaneOffsetActionDynamicsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetMaxLateralAcc(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC, std::make_shared<AttributeMaxLateralAcc>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> LaneOffsetActionDynamicsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        LaneOffsetActionDynamicsXmlParser::LaneOffsetActionDynamicsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LaneOffsetTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            LaneOffsetTargetXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> LaneOffsetTargetXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> LaneOffsetTargetXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementRelativeTargetLaneOffsetParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementAbsoluteTargetLaneOffsetParser>(_messageLogger, _filename));
            return result;
        }

        LaneOffsetTargetXmlParser::SubElementRelativeTargetLaneOffsetParser::SubElementRelativeTargetLaneOffsetParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _relativeTargetLaneOffsetXmlParser = std::make_shared<RelativeTargetLaneOffsetXmlParser>(messageLogger, filename);
        }

        void LaneOffsetTargetXmlParser::SubElementRelativeTargetLaneOffsetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto relativeTargetLaneOffset = std::make_shared<RelativeTargetLaneOffsetImpl>();
            auto typedObject = std::static_pointer_cast<LaneOffsetTargetImpl>(object);                    
            // Setting the parent
            relativeTargetLaneOffset->SetParent(object);
            _relativeTargetLaneOffsetXmlParser->ParseElement(indexedElement, parserContext, relativeTargetLaneOffset);

            typedObject->SetRelativeTargetLaneOffset(relativeTargetLaneOffset);
        }
        
        int LaneOffsetTargetXmlParser::SubElementRelativeTargetLaneOffsetParser::GetMinOccur() 
        {
            return 0;
        }

        int LaneOffsetTargetXmlParser::SubElementRelativeTargetLaneOffsetParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LaneOffsetTargetXmlParser::SubElementRelativeTargetLaneOffsetParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE_OFFSET ;
        }

        std::vector<std::string> LaneOffsetTargetXmlParser::SubElementRelativeTargetLaneOffsetParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE_OFFSET
                    };
        }
        LaneOffsetTargetXmlParser::SubElementAbsoluteTargetLaneOffsetParser::SubElementAbsoluteTargetLaneOffsetParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _absoluteTargetLaneOffsetXmlParser = std::make_shared<AbsoluteTargetLaneOffsetXmlParser>(messageLogger, filename);
        }

        void LaneOffsetTargetXmlParser::SubElementAbsoluteTargetLaneOffsetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto absoluteTargetLaneOffset = std::make_shared<AbsoluteTargetLaneOffsetImpl>();
            auto typedObject = std::static_pointer_cast<LaneOffsetTargetImpl>(object);                    
            // Setting the parent
            absoluteTargetLaneOffset->SetParent(object);
            _absoluteTargetLaneOffsetXmlParser->ParseElement(indexedElement, parserContext, absoluteTargetLaneOffset);

            typedObject->SetAbsoluteTargetLaneOffset(absoluteTargetLaneOffset);
        }
        
        int LaneOffsetTargetXmlParser::SubElementAbsoluteTargetLaneOffsetParser::GetMinOccur() 
        {
            return 0;
        }

        int LaneOffsetTargetXmlParser::SubElementAbsoluteTargetLaneOffsetParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LaneOffsetTargetXmlParser::SubElementAbsoluteTargetLaneOffsetParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET ;
        }

        std::vector<std::string> LaneOffsetTargetXmlParser::SubElementAbsoluteTargetLaneOffsetParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET
                    };
        }
  
        LaneOffsetTargetXmlParser::LaneOffsetTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LanePositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            LanePositionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> LanePositionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeLaneId: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeLaneId(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LanePositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, std::make_shared<AttributeLaneId>(_messageLogger, _filename)));
            class AttributeOffset: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeOffset(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LanePositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__OFFSET, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__OFFSET, std::make_shared<AttributeOffset>(_messageLogger, _filename)));
            class AttributeRoadId: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeRoadId(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LanePositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, std::make_shared<AttributeRoadId>(_messageLogger, _filename)));
            class AttributeS: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeS(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LanePositionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__S, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__S, std::make_shared<AttributeS>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> LanePositionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementOrientationParser>(_messageLogger, _filename));
            return result;
        }

        LanePositionXmlParser::SubElementOrientationParser::SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _orientationXmlParser = std::make_shared<OrientationXmlParser>(messageLogger, filename);
        }

        void LanePositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto orientation = std::make_shared<OrientationImpl>();
            auto typedObject = std::static_pointer_cast<LanePositionImpl>(object);                    
            // Setting the parent
            orientation->SetParent(object);
            _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

            typedObject->SetOrientation(orientation);
        }
        
        int LanePositionXmlParser::SubElementOrientationParser::GetMinOccur() 
        {
            return 0;
        }

        int LanePositionXmlParser::SubElementOrientationParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LanePositionXmlParser::SubElementOrientationParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
        }

        std::vector<std::string> LanePositionXmlParser::SubElementOrientationParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ORIENTATION
                    };
        }
  
        LanePositionXmlParser::LanePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LateralActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            LateralActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> LateralActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> LateralActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementLaneChangeActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementLaneOffsetActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementLateralDistanceActionParser>(_messageLogger, _filename));
            return result;
        }

        LateralActionXmlParser::SubElementLaneChangeActionParser::SubElementLaneChangeActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _laneChangeActionXmlParser = std::make_shared<LaneChangeActionXmlParser>(messageLogger, filename);
        }

        void LateralActionXmlParser::SubElementLaneChangeActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto laneChangeAction = std::make_shared<LaneChangeActionImpl>();
            auto typedObject = std::static_pointer_cast<LateralActionImpl>(object);                    
            // Setting the parent
            laneChangeAction->SetParent(object);
            _laneChangeActionXmlParser->ParseElement(indexedElement, parserContext, laneChangeAction);

            typedObject->SetLaneChangeAction(laneChangeAction);
        }
        
        int LateralActionXmlParser::SubElementLaneChangeActionParser::GetMinOccur() 
        {
            return 0;
        }

        int LateralActionXmlParser::SubElementLaneChangeActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LateralActionXmlParser::SubElementLaneChangeActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION ;
        }

        std::vector<std::string> LateralActionXmlParser::SubElementLaneChangeActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION
                    };
        }
        LateralActionXmlParser::SubElementLaneOffsetActionParser::SubElementLaneOffsetActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _laneOffsetActionXmlParser = std::make_shared<LaneOffsetActionXmlParser>(messageLogger, filename);
        }

        void LateralActionXmlParser::SubElementLaneOffsetActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto laneOffsetAction = std::make_shared<LaneOffsetActionImpl>();
            auto typedObject = std::static_pointer_cast<LateralActionImpl>(object);                    
            // Setting the parent
            laneOffsetAction->SetParent(object);
            _laneOffsetActionXmlParser->ParseElement(indexedElement, parserContext, laneOffsetAction);

            typedObject->SetLaneOffsetAction(laneOffsetAction);
        }
        
        int LateralActionXmlParser::SubElementLaneOffsetActionParser::GetMinOccur() 
        {
            return 0;
        }

        int LateralActionXmlParser::SubElementLaneOffsetActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LateralActionXmlParser::SubElementLaneOffsetActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION ;
        }

        std::vector<std::string> LateralActionXmlParser::SubElementLaneOffsetActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION
                    };
        }
        LateralActionXmlParser::SubElementLateralDistanceActionParser::SubElementLateralDistanceActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _lateralDistanceActionXmlParser = std::make_shared<LateralDistanceActionXmlParser>(messageLogger, filename);
        }

        void LateralActionXmlParser::SubElementLateralDistanceActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto lateralDistanceAction = std::make_shared<LateralDistanceActionImpl>();
            auto typedObject = std::static_pointer_cast<LateralActionImpl>(object);                    
            // Setting the parent
            lateralDistanceAction->SetParent(object);
            _lateralDistanceActionXmlParser->ParseElement(indexedElement, parserContext, lateralDistanceAction);

            typedObject->SetLateralDistanceAction(lateralDistanceAction);
        }
        
        int LateralActionXmlParser::SubElementLateralDistanceActionParser::GetMinOccur() 
        {
            return 0;
        }

        int LateralActionXmlParser::SubElementLateralDistanceActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LateralActionXmlParser::SubElementLateralDistanceActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__LATERAL_DISTANCE_ACTION ;
        }

        std::vector<std::string> LateralActionXmlParser::SubElementLateralDistanceActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__LATERAL_DISTANCE_ACTION
                    };
        }
  
        LateralActionXmlParser::LateralActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LateralDistanceActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            LateralDistanceActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> LateralDistanceActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeContinuous: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeContinuous(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LateralDistanceActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, std::make_shared<AttributeContinuous>(_messageLogger, _filename)));
            class AttributeDistance: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDistance(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LateralDistanceActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDistance(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, std::make_shared<AttributeDistance>(_messageLogger, _filename)));
            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LateralDistanceActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            class AttributeFreespace: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeFreespace(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LateralDistanceActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<AttributeFreespace>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> LateralDistanceActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementDynamicConstraintsParser>(_messageLogger, _filename));
            return result;
        }

        LateralDistanceActionXmlParser::SubElementDynamicConstraintsParser::SubElementDynamicConstraintsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _dynamicConstraintsXmlParser = std::make_shared<DynamicConstraintsXmlParser>(messageLogger, filename);
        }

        void LateralDistanceActionXmlParser::SubElementDynamicConstraintsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto dynamicConstraints = std::make_shared<DynamicConstraintsImpl>();
            auto typedObject = std::static_pointer_cast<LateralDistanceActionImpl>(object);                    
            // Setting the parent
            dynamicConstraints->SetParent(object);
            _dynamicConstraintsXmlParser->ParseElement(indexedElement, parserContext, dynamicConstraints);

            typedObject->SetDynamicConstraints(dynamicConstraints);
        }
        
        int LateralDistanceActionXmlParser::SubElementDynamicConstraintsParser::GetMinOccur() 
        {
            return 0;
        }

        int LateralDistanceActionXmlParser::SubElementDynamicConstraintsParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LateralDistanceActionXmlParser::SubElementDynamicConstraintsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS ;
        }

        std::vector<std::string> LateralDistanceActionXmlParser::SubElementDynamicConstraintsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS
                    };
        }
  
        LateralDistanceActionXmlParser::LateralDistanceActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LongitudinalActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            LongitudinalActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> LongitudinalActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> LongitudinalActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementSpeedActionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementLongitudinalDistanceActionParser>(_messageLogger, _filename));
            return result;
        }

        LongitudinalActionXmlParser::SubElementSpeedActionParser::SubElementSpeedActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _speedActionXmlParser = std::make_shared<SpeedActionXmlParser>(messageLogger, filename);
        }

        void LongitudinalActionXmlParser::SubElementSpeedActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto speedAction = std::make_shared<SpeedActionImpl>();
            auto typedObject = std::static_pointer_cast<LongitudinalActionImpl>(object);                    
            // Setting the parent
            speedAction->SetParent(object);
            _speedActionXmlParser->ParseElement(indexedElement, parserContext, speedAction);

            typedObject->SetSpeedAction(speedAction);
        }
        
        int LongitudinalActionXmlParser::SubElementSpeedActionParser::GetMinOccur() 
        {
            return 0;
        }

        int LongitudinalActionXmlParser::SubElementSpeedActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LongitudinalActionXmlParser::SubElementSpeedActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__SPEED_ACTION ;
        }

        std::vector<std::string> LongitudinalActionXmlParser::SubElementSpeedActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__SPEED_ACTION
                    };
        }
        LongitudinalActionXmlParser::SubElementLongitudinalDistanceActionParser::SubElementLongitudinalDistanceActionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _longitudinalDistanceActionXmlParser = std::make_shared<LongitudinalDistanceActionXmlParser>(messageLogger, filename);
        }

        void LongitudinalActionXmlParser::SubElementLongitudinalDistanceActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto longitudinalDistanceAction = std::make_shared<LongitudinalDistanceActionImpl>();
            auto typedObject = std::static_pointer_cast<LongitudinalActionImpl>(object);                    
            // Setting the parent
            longitudinalDistanceAction->SetParent(object);
            _longitudinalDistanceActionXmlParser->ParseElement(indexedElement, parserContext, longitudinalDistanceAction);

            typedObject->SetLongitudinalDistanceAction(longitudinalDistanceAction);
        }
        
        int LongitudinalActionXmlParser::SubElementLongitudinalDistanceActionParser::GetMinOccur() 
        {
            return 0;
        }

        int LongitudinalActionXmlParser::SubElementLongitudinalDistanceActionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LongitudinalActionXmlParser::SubElementLongitudinalDistanceActionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__LONGITUDINAL_DISTANCE_ACTION ;
        }

        std::vector<std::string> LongitudinalActionXmlParser::SubElementLongitudinalDistanceActionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__LONGITUDINAL_DISTANCE_ACTION
                    };
        }
  
        LongitudinalActionXmlParser::LongitudinalActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a LongitudinalDistanceActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            LongitudinalDistanceActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> LongitudinalDistanceActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeContinuous: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeContinuous(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LongitudinalDistanceActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, std::make_shared<AttributeContinuous>(_messageLogger, _filename)));
            class AttributeDistance: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDistance(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LongitudinalDistanceActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetDistance(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, std::make_shared<AttributeDistance>(_messageLogger, _filename)));
            class AttributeEntityRef: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LongitudinalDistanceActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, std::make_shared<AttributeEntityRef>(_messageLogger, _filename)));
            class AttributeFreespace: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeFreespace(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LongitudinalDistanceActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, std::make_shared<AttributeFreespace>(_messageLogger, _filename)));
            class AttributeTimeGap: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeTimeGap(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<LongitudinalDistanceActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TIME_GAP, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetTimeGap(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TIME_GAP, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TIME_GAP, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TIME_GAP, std::make_shared<AttributeTimeGap>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> LongitudinalDistanceActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementDynamicConstraintsParser>(_messageLogger, _filename));
            return result;
        }

        LongitudinalDistanceActionXmlParser::SubElementDynamicConstraintsParser::SubElementDynamicConstraintsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _dynamicConstraintsXmlParser = std::make_shared<DynamicConstraintsXmlParser>(messageLogger, filename);
        }

        void LongitudinalDistanceActionXmlParser::SubElementDynamicConstraintsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto dynamicConstraints = std::make_shared<DynamicConstraintsImpl>();
            auto typedObject = std::static_pointer_cast<LongitudinalDistanceActionImpl>(object);                    
            // Setting the parent
            dynamicConstraints->SetParent(object);
            _dynamicConstraintsXmlParser->ParseElement(indexedElement, parserContext, dynamicConstraints);

            typedObject->SetDynamicConstraints(dynamicConstraints);
        }
        
        int LongitudinalDistanceActionXmlParser::SubElementDynamicConstraintsParser::GetMinOccur() 
        {
            return 0;
        }

        int LongitudinalDistanceActionXmlParser::SubElementDynamicConstraintsParser::GetMaxOccur() 
        {
            return 1;
        }

        bool LongitudinalDistanceActionXmlParser::SubElementDynamicConstraintsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS ;
        }

        std::vector<std::string> LongitudinalDistanceActionXmlParser::SubElementDynamicConstraintsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS
                    };
        }
  
        LongitudinalDistanceActionXmlParser::LongitudinalDistanceActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ManeuverImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ManeuverXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ManeuverXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ManeuverImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ManeuverXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementEventsParser>(_messageLogger, _filename));
            return result;
        }

        ManeuverXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void ManeuverXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            auto typedObject = std::static_pointer_cast<ManeuverImpl>(object);                    
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = typedObject->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            typedObject->SetParameterDeclarations(parameterDeclarationsList);
        }
        
        int ManeuverXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int ManeuverXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ManeuverXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> ManeuverXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        ManeuverXmlParser::SubElementEventsParser::SubElementEventsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _eventXmlParser = std::make_shared<EventXmlParser>(messageLogger, filename);
        }

        void ManeuverXmlParser::SubElementEventsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto events = std::make_shared<EventImpl>();
            auto typedObject = std::static_pointer_cast<ManeuverImpl>(object);                    
            // Setting the parent
            events->SetParent(object);
            _eventXmlParser->ParseElement(indexedElement, parserContext, events);
            auto eventsList = typedObject->GetWriterEvents();
            eventsList.push_back(events);
            typedObject->SetEvents(eventsList);
        }
        
        int ManeuverXmlParser::SubElementEventsParser::GetMinOccur() 
        {
            return 1;
        }

        int ManeuverXmlParser::SubElementEventsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ManeuverXmlParser::SubElementEventsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__EVENT ;
        }

        std::vector<std::string> ManeuverXmlParser::SubElementEventsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__EVENT
                    };
        }
  
        ManeuverXmlParser::ManeuverXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ManeuverCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ManeuverCatalogLocationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ManeuverCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ManeuverCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename));
            return result;
        }

        ManeuverCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename);
        }

        void ManeuverCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            auto typedObject = std::static_pointer_cast<ManeuverCatalogLocationImpl>(object);                    
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            typedObject->SetDirectory(directory);
        }
        
        int ManeuverCatalogLocationXmlParser::SubElementDirectoryParser::GetMinOccur() 
        {
            return 1;
        }

        int ManeuverCatalogLocationXmlParser::SubElementDirectoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ManeuverCatalogLocationXmlParser::SubElementDirectoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
        }

        std::vector<std::string> ManeuverCatalogLocationXmlParser::SubElementDirectoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DIRECTORY
                    };
        }
  
        ManeuverCatalogLocationXmlParser::ManeuverCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ManeuverGroupImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ManeuverGroupXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> ManeuverGroupXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeMaximumExecutionCount: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMaximumExecutionCount(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ManeuverGroupImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetMaximumExecutionCount(ParseUnsignedInt(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, std::make_shared<AttributeMaximumExecutionCount>(_messageLogger, _filename)));
            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<ManeuverGroupImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ManeuverGroupXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementActorsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogReferencesParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementManeuversParser>(_messageLogger, _filename));
            return result;
        }

        ManeuverGroupXmlParser::SubElementActorsParser::SubElementActorsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _actorsXmlParser = std::make_shared<ActorsXmlParser>(messageLogger, filename);
        }

        void ManeuverGroupXmlParser::SubElementActorsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto actors = std::make_shared<ActorsImpl>();
            auto typedObject = std::static_pointer_cast<ManeuverGroupImpl>(object);                    
            // Setting the parent
            actors->SetParent(object);
            _actorsXmlParser->ParseElement(indexedElement, parserContext, actors);

            typedObject->SetActors(actors);
        }
        
        int ManeuverGroupXmlParser::SubElementActorsParser::GetMinOccur() 
        {
            return 1;
        }

        int ManeuverGroupXmlParser::SubElementActorsParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ManeuverGroupXmlParser::SubElementActorsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ACTORS ;
        }

        std::vector<std::string> ManeuverGroupXmlParser::SubElementActorsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ACTORS
                    };
        }
        ManeuverGroupXmlParser::SubElementCatalogReferencesParser::SubElementCatalogReferencesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void ManeuverGroupXmlParser::SubElementCatalogReferencesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto catalogReferences = std::make_shared<CatalogReferenceImpl>();
            auto typedObject = std::static_pointer_cast<ManeuverGroupImpl>(object);                    
            // Setting the parent
            catalogReferences->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReferences);
            auto catalogReferencesList = typedObject->GetWriterCatalogReferences();
            catalogReferencesList.push_back(catalogReferences);
            typedObject->SetCatalogReferences(catalogReferencesList);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(std::dynamic_pointer_cast<ICatalogReference>(catalogReferences));
        }
        
        int ManeuverGroupXmlParser::SubElementCatalogReferencesParser::GetMinOccur() 
        {
            return 0;
        }

        int ManeuverGroupXmlParser::SubElementCatalogReferencesParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ManeuverGroupXmlParser::SubElementCatalogReferencesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
        }

        std::vector<std::string> ManeuverGroupXmlParser::SubElementCatalogReferencesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                    };
        }
        ManeuverGroupXmlParser::SubElementManeuversParser::SubElementManeuversParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _maneuverXmlParser = std::make_shared<ManeuverXmlParser>(messageLogger, filename);
        }

        void ManeuverGroupXmlParser::SubElementManeuversParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto maneuvers = std::make_shared<ManeuverImpl>();
            auto typedObject = std::static_pointer_cast<ManeuverGroupImpl>(object);                    
            // Setting the parent
            maneuvers->SetParent(object);
            _maneuverXmlParser->ParseElement(indexedElement, parserContext, maneuvers);
            auto maneuversList = typedObject->GetWriterManeuvers();
            maneuversList.push_back(maneuvers);
            typedObject->SetManeuvers(maneuversList);
        }
        
        int ManeuverGroupXmlParser::SubElementManeuversParser::GetMinOccur() 
        {
            return 0;
        }

        int ManeuverGroupXmlParser::SubElementManeuversParser::GetMaxOccur() 
        {
            return -1;
        }

        bool ManeuverGroupXmlParser::SubElementManeuversParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__MANEUVER ;
        }

        std::vector<std::string> ManeuverGroupXmlParser::SubElementManeuversParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__MANEUVER
                    };
        }
  
        ManeuverGroupXmlParser::ManeuverGroupXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a MiscObjectImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            MiscObjectXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> MiscObjectXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeMass: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMass(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<MiscObjectImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MASS, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MASS, std::make_shared<AttributeMass>(_messageLogger, _filename)));
            class AttributeMiscObjectCategory: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeMiscObjectCategory(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<MiscObjectImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = MiscObjectCategory::GetFromLiteral(attributeValue);
                        if (kResult != MiscObjectCategory::UNKNOWN)
                        {
                            typedObject->SetMiscObjectCategory(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY, std::make_shared<AttributeMiscObjectCategory>(_messageLogger, _filename)));
            class AttributeName: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<MiscObjectImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NAME, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NAME, std::make_shared<AttributeName>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> MiscObjectXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
            result.push_back(std::make_shared<SubElementBoundingBoxParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementPropertiesParser>(_messageLogger, _filename));
            return result;
        }

        MiscObjectXmlParser::SubElementParameterDeclarationsParser::SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterDeclarationXmlParser = std::make_shared<ParameterDeclarationXmlParser>(messageLogger, filename);
        }

        void MiscObjectXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
            auto typedObject = std::static_pointer_cast<MiscObjectImpl>(object);                    
            // Setting the parent
            parameterDeclarations->SetParent(object);
            _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
            auto parameterDeclarationsList = typedObject->GetWriterParameterDeclarations();
            parameterDeclarationsList.push_back(parameterDeclarations);
            typedObject->SetParameterDeclarations(parameterDeclarationsList);
        }
        
        int MiscObjectXmlParser::SubElementParameterDeclarationsParser::GetMinOccur() 
        {
            return 0;
        }

        int MiscObjectXmlParser::SubElementParameterDeclarationsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool MiscObjectXmlParser::SubElementParameterDeclarationsParser::DoesMatch(std::string& elementName)
        {
            return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
        }

        std::vector<std::string> MiscObjectXmlParser::SubElementParameterDeclarationsParser::GetExpectedTagNames()
        {
            return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
        }
        MiscObjectXmlParser::SubElementBoundingBoxParser::SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _boundingBoxXmlParser = std::make_shared<BoundingBoxXmlParser>(messageLogger, filename);
        }

        void MiscObjectXmlParser::SubElementBoundingBoxParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto boundingBox = std::make_shared<BoundingBoxImpl>();
            auto typedObject = std::static_pointer_cast<MiscObjectImpl>(object);                    
            // Setting the parent
            boundingBox->SetParent(object);
            _boundingBoxXmlParser->ParseElement(indexedElement, parserContext, boundingBox);

            typedObject->SetBoundingBox(boundingBox);
        }
        
        int MiscObjectXmlParser::SubElementBoundingBoxParser::GetMinOccur() 
        {
            return 1;
        }

        int MiscObjectXmlParser::SubElementBoundingBoxParser::GetMaxOccur() 
        {
            return 1;
        }

        bool MiscObjectXmlParser::SubElementBoundingBoxParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__BOUNDING_BOX ;
        }

        std::vector<std::string> MiscObjectXmlParser::SubElementBoundingBoxParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__BOUNDING_BOX
                    };
        }
        MiscObjectXmlParser::SubElementPropertiesParser::SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _propertiesXmlParser = std::make_shared<PropertiesXmlParser>(messageLogger, filename);
        }

        void MiscObjectXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto properties = std::make_shared<PropertiesImpl>();
            auto typedObject = std::static_pointer_cast<MiscObjectImpl>(object);                    
            // Setting the parent
            properties->SetParent(object);
            _propertiesXmlParser->ParseElement(indexedElement, parserContext, properties);

            typedObject->SetProperties(properties);
        }
        
        int MiscObjectXmlParser::SubElementPropertiesParser::GetMinOccur() 
        {
            return 1;
        }

        int MiscObjectXmlParser::SubElementPropertiesParser::GetMaxOccur() 
        {
            return 1;
        }

        bool MiscObjectXmlParser::SubElementPropertiesParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PROPERTIES ;
        }

        std::vector<std::string> MiscObjectXmlParser::SubElementPropertiesParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PROPERTIES
                    };
        }
  
        MiscObjectXmlParser::MiscObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a MiscObjectCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            MiscObjectCatalogLocationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> MiscObjectCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> MiscObjectCatalogLocationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementDirectoryParser>(_messageLogger, _filename));
            return result;
        }

        MiscObjectCatalogLocationXmlParser::SubElementDirectoryParser::SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _directoryXmlParser = std::make_shared<DirectoryXmlParser>(messageLogger, filename);
        }

        void MiscObjectCatalogLocationXmlParser::SubElementDirectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto directory = std::make_shared<DirectoryImpl>();
            auto typedObject = std::static_pointer_cast<MiscObjectCatalogLocationImpl>(object);                    
            // Setting the parent
            directory->SetParent(object);
            _directoryXmlParser->ParseElement(indexedElement, parserContext, directory);

            typedObject->SetDirectory(directory);
        }
        
        int MiscObjectCatalogLocationXmlParser::SubElementDirectoryParser::GetMinOccur() 
        {
            return 1;
        }

        int MiscObjectCatalogLocationXmlParser::SubElementDirectoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool MiscObjectCatalogLocationXmlParser::SubElementDirectoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
        }

        std::vector<std::string> MiscObjectCatalogLocationXmlParser::SubElementDirectoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__DIRECTORY
                    };
        }
  
        MiscObjectCatalogLocationXmlParser::MiscObjectCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ModifyRuleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ModifyRuleXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ModifyRuleXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ModifyRuleXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementAddValueParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementMultiplyByValueParser>(_messageLogger, _filename));
            return result;
        }

        ModifyRuleXmlParser::SubElementAddValueParser::SubElementAddValueParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterAddValueRuleXmlParser = std::make_shared<ParameterAddValueRuleXmlParser>(messageLogger, filename);
        }

        void ModifyRuleXmlParser::SubElementAddValueParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto addValue = std::make_shared<ParameterAddValueRuleImpl>();
            auto typedObject = std::static_pointer_cast<ModifyRuleImpl>(object);                    
            // Setting the parent
            addValue->SetParent(object);
            _parameterAddValueRuleXmlParser->ParseElement(indexedElement, parserContext, addValue);

            typedObject->SetAddValue(addValue);
        }
        
        int ModifyRuleXmlParser::SubElementAddValueParser::GetMinOccur() 
        {
            return 0;
        }

        int ModifyRuleXmlParser::SubElementAddValueParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ModifyRuleXmlParser::SubElementAddValueParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__ADD_VALUE ;
        }

        std::vector<std::string> ModifyRuleXmlParser::SubElementAddValueParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__ADD_VALUE
                    };
        }
        ModifyRuleXmlParser::SubElementMultiplyByValueParser::SubElementMultiplyByValueParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _parameterMultiplyByValueRuleXmlParser = std::make_shared<ParameterMultiplyByValueRuleXmlParser>(messageLogger, filename);
        }

        void ModifyRuleXmlParser::SubElementMultiplyByValueParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto multiplyByValue = std::make_shared<ParameterMultiplyByValueRuleImpl>();
            auto typedObject = std::static_pointer_cast<ModifyRuleImpl>(object);                    
            // Setting the parent
            multiplyByValue->SetParent(object);
            _parameterMultiplyByValueRuleXmlParser->ParseElement(indexedElement, parserContext, multiplyByValue);

            typedObject->SetMultiplyByValue(multiplyByValue);
        }
        
        int ModifyRuleXmlParser::SubElementMultiplyByValueParser::GetMinOccur() 
        {
            return 0;
        }

        int ModifyRuleXmlParser::SubElementMultiplyByValueParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ModifyRuleXmlParser::SubElementMultiplyByValueParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__MULTIPLY_BY_VALUE ;
        }

        std::vector<std::string> ModifyRuleXmlParser::SubElementMultiplyByValueParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__MULTIPLY_BY_VALUE
                    };
        }
  
        ModifyRuleXmlParser::ModifyRuleXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a NoneImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            NoneXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> NoneXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> NoneXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        NoneXmlParser::NoneXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a NurbsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            NurbsXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> NurbsXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeOrder: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeOrder(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<NurbsImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ORDER, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetOrder(ParseUnsignedInt(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ORDER, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ORDER, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ORDER, std::make_shared<AttributeOrder>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> NurbsXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementControlPointsParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementKnotsParser>(_messageLogger, _filename));
            return result;
        }

        NurbsXmlParser::SubElementControlPointsParser::SubElementControlPointsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controlPointXmlParser = std::make_shared<ControlPointXmlParser>(messageLogger, filename);
        }

        void NurbsXmlParser::SubElementControlPointsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto controlPoints = std::make_shared<ControlPointImpl>();
            auto typedObject = std::static_pointer_cast<NurbsImpl>(object);                    
            // Setting the parent
            controlPoints->SetParent(object);
            _controlPointXmlParser->ParseElement(indexedElement, parserContext, controlPoints);
            auto controlPointsList = typedObject->GetWriterControlPoints();
            controlPointsList.push_back(controlPoints);
            typedObject->SetControlPoints(controlPointsList);
        }
        
        int NurbsXmlParser::SubElementControlPointsParser::GetMinOccur() 
        {
            return 2;
        }

        int NurbsXmlParser::SubElementControlPointsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool NurbsXmlParser::SubElementControlPointsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONTROL_POINT ;
        }

        std::vector<std::string> NurbsXmlParser::SubElementControlPointsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONTROL_POINT
                    };
        }
        NurbsXmlParser::SubElementKnotsParser::SubElementKnotsParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _knotXmlParser = std::make_shared<KnotXmlParser>(messageLogger, filename);
        }

        void NurbsXmlParser::SubElementKnotsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto knots = std::make_shared<KnotImpl>();
            auto typedObject = std::static_pointer_cast<NurbsImpl>(object);                    
            // Setting the parent
            knots->SetParent(object);
            _knotXmlParser->ParseElement(indexedElement, parserContext, knots);
            auto knotsList = typedObject->GetWriterKnots();
            knotsList.push_back(knots);
            typedObject->SetKnots(knotsList);
        }
        
        int NurbsXmlParser::SubElementKnotsParser::GetMinOccur() 
        {
            return 2;
        }

        int NurbsXmlParser::SubElementKnotsParser::GetMaxOccur() 
        {
            return -1;
        }

        bool NurbsXmlParser::SubElementKnotsParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__KNOT ;
        }

        std::vector<std::string> NurbsXmlParser::SubElementKnotsParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__KNOT
                    };
        }
  
        NurbsXmlParser::NurbsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a ObjectControllerImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            ObjectControllerXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> ObjectControllerXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> ObjectControllerXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementCatalogReferenceParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementControllerParser>(_messageLogger, _filename));
            return result;
        }

        ObjectControllerXmlParser::SubElementCatalogReferenceParser::SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(messageLogger, filename);
        }

        void ObjectControllerXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto catalogReference = std::make_shared<CatalogReferenceImpl>();
            auto typedObject = std::static_pointer_cast<ObjectControllerImpl>(object);                    
            // Setting the parent
            catalogReference->SetParent(object);
            _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

            typedObject->SetCatalogReference(catalogReference);
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(std::dynamic_pointer_cast<ICatalogReference>(catalogReference));
        }
        
        int ObjectControllerXmlParser::SubElementCatalogReferenceParser::GetMinOccur() 
        {
            return 0;
        }

        int ObjectControllerXmlParser::SubElementCatalogReferenceParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ObjectControllerXmlParser::SubElementCatalogReferenceParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
        }

        std::vector<std::string> ObjectControllerXmlParser::SubElementCatalogReferenceParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                    };
        }
        ObjectControllerXmlParser::SubElementControllerParser::SubElementControllerParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _controllerXmlParser = std::make_shared<ControllerXmlParser>(messageLogger, filename);
        }

        void ObjectControllerXmlParser::SubElementControllerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto controller = std::make_shared<ControllerImpl>();
            auto typedObject = std::static_pointer_cast<ObjectControllerImpl>(object);                    
            // Setting the parent
            controller->SetParent(object);
            _controllerXmlParser->ParseElement(indexedElement, parserContext, controller);

            typedObject->SetController(controller);
        }
        
        int ObjectControllerXmlParser::SubElementControllerParser::GetMinOccur() 
        {
            return 0;
        }

        int ObjectControllerXmlParser::SubElementControllerParser::GetMaxOccur() 
        {
            return 1;
        }

        bool ObjectControllerXmlParser::SubElementControllerParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER ;
        }

        std::vector<std::string> ObjectControllerXmlParser::SubElementControllerParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CONTROLLER
                    };
        }
  
        ObjectControllerXmlParser::ObjectControllerXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OffroadConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            OffroadConditionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> OffroadConditionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeDuration: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeDuration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OffroadConditionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__DURATION, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__DURATION, std::make_shared<AttributeDuration>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> OffroadConditionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        OffroadConditionXmlParser::OffroadConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OpenScenarioImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            OpenScenarioXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> OpenScenarioXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> OpenScenarioXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementFileHeaderParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementOpenScenarioCategoryParser>(_messageLogger, _filename));
            return result;
        }

        OpenScenarioXmlParser::SubElementFileHeaderParser::SubElementFileHeaderParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _fileHeaderXmlParser = std::make_shared<FileHeaderXmlParser>(messageLogger, filename);
        }

        void OpenScenarioXmlParser::SubElementFileHeaderParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto fileHeader = std::make_shared<FileHeaderImpl>();
            auto typedObject = std::static_pointer_cast<OpenScenarioImpl>(object);                    
            // Setting the parent
            fileHeader->SetParent(object);
            _fileHeaderXmlParser->ParseElement(indexedElement, parserContext, fileHeader);

            typedObject->SetFileHeader(fileHeader);
        }
        
        int OpenScenarioXmlParser::SubElementFileHeaderParser::GetMinOccur() 
        {
            return 1;
        }

        int OpenScenarioXmlParser::SubElementFileHeaderParser::GetMaxOccur() 
        {
            return 1;
        }

        bool OpenScenarioXmlParser::SubElementFileHeaderParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__FILE_HEADER ;
        }

        std::vector<std::string> OpenScenarioXmlParser::SubElementFileHeaderParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__FILE_HEADER
                    };
        }
        OpenScenarioXmlParser::SubElementOpenScenarioCategoryParser::SubElementOpenScenarioCategoryParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _openScenarioCategoryXmlParser = std::make_shared<OpenScenarioCategoryXmlParser>(messageLogger, filename);
        }

        void OpenScenarioXmlParser::SubElementOpenScenarioCategoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto openScenarioCategory = std::make_shared<OpenScenarioCategoryImpl>();
            auto typedObject = std::static_pointer_cast<OpenScenarioImpl>(object);                    
            // Setting the parent
            openScenarioCategory->SetParent(object);
            _openScenarioCategoryXmlParser->ParseElement(indexedElement, parserContext, openScenarioCategory);

            typedObject->SetOpenScenarioCategory(openScenarioCategory);
        }
        
        int OpenScenarioXmlParser::SubElementOpenScenarioCategoryParser::GetMinOccur() 
        {
            return 1;
        }

        int OpenScenarioXmlParser::SubElementOpenScenarioCategoryParser::GetMaxOccur() 
        {
            return 1;
        }

        bool OpenScenarioXmlParser::SubElementOpenScenarioCategoryParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS || 
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS || 
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG ;
        }

        std::vector<std::string> OpenScenarioXmlParser::SubElementOpenScenarioCategoryParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS,
                OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS,
                OSC_CONSTANTS::ELEMENT__CATALOG
                    };
        }
  
        OpenScenarioXmlParser::OpenScenarioXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OpenScenarioCategoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            OpenScenarioCategoryXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}



        std::vector<std::shared_ptr<IElementParser>> OpenScenarioCategoryXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            result.push_back(std::make_shared<SubElementScenarioDefinitionParser>(_messageLogger, _filename));
            result.push_back(std::make_shared<SubElementCatalogDefinitionParser>(_messageLogger, _filename));
            return result;
        }

        OpenScenarioCategoryXmlParser::SubElementScenarioDefinitionParser::SubElementScenarioDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _scenarioDefinitionXmlParser = std::make_shared<ScenarioDefinitionXmlParser>(messageLogger, filename);
        }

        void OpenScenarioCategoryXmlParser::SubElementScenarioDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto scenarioDefinition = std::make_shared<ScenarioDefinitionImpl>();
            auto typedObject = std::static_pointer_cast<OpenScenarioCategoryImpl>(object);                    
            // Setting the parent
            scenarioDefinition->SetParent(object);
            _scenarioDefinitionXmlParser->ParseElement(indexedElement, parserContext, scenarioDefinition);

            typedObject->SetScenarioDefinition(scenarioDefinition);
        }
        
        int OpenScenarioCategoryXmlParser::SubElementScenarioDefinitionParser::GetMinOccur() 
        {
            return 1;
        }

        int OpenScenarioCategoryXmlParser::SubElementScenarioDefinitionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool OpenScenarioCategoryXmlParser::SubElementScenarioDefinitionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS || 
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS ;
        }

        std::vector<std::string> OpenScenarioCategoryXmlParser::SubElementScenarioDefinitionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS,
                OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS
                    };
        }
        OpenScenarioCategoryXmlParser::SubElementCatalogDefinitionParser::SubElementCatalogDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _catalogDefinitionXmlParser = std::make_shared<CatalogDefinitionXmlParser>(messageLogger, filename);
        }

        void OpenScenarioCategoryXmlParser::SubElementCatalogDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto catalogDefinition = std::make_shared<CatalogDefinitionImpl>();
            auto typedObject = std::static_pointer_cast<OpenScenarioCategoryImpl>(object);                    
            // Setting the parent
            catalogDefinition->SetParent(object);
            _catalogDefinitionXmlParser->ParseElement(indexedElement, parserContext, catalogDefinition);

            typedObject->SetCatalogDefinition(catalogDefinition);
        }
        
        int OpenScenarioCategoryXmlParser::SubElementCatalogDefinitionParser::GetMinOccur() 
        {
            return 1;
        }

        int OpenScenarioCategoryXmlParser::SubElementCatalogDefinitionParser::GetMaxOccur() 
        {
            return 1;
        }

        bool OpenScenarioCategoryXmlParser::SubElementCatalogDefinitionParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CATALOG ;
        }

        std::vector<std::string> OpenScenarioCategoryXmlParser::SubElementCatalogDefinitionParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CATALOG
                    };
        }
  
        OpenScenarioCategoryXmlParser::OpenScenarioCategoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlGroupParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OrientationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            OrientationXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> OrientationXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeH: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeH(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OrientationImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__H, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetH(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__H, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__H, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__H, std::make_shared<AttributeH>(_messageLogger, _filename)));
            class AttributeP: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeP(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OrientationImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__P, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetP(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__P, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__P, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__P, std::make_shared<AttributeP>(_messageLogger, _filename)));
            class AttributeR: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeR(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OrientationImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__R, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetR(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__R, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__R, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__R, std::make_shared<AttributeR>(_messageLogger, _filename)));
            class AttributeType: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OrientationImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__TYPE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Enumeration Type
                        const auto kResult = ReferenceContext::GetFromLiteral(attributeValue);
                        if (kResult != ReferenceContext::UNKNOWN)
                        {
                            typedObject->SetType(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 0;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__TYPE, std::make_shared<AttributeType>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> OrientationXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        OrientationXmlParser::OrientationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideBrakeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            OverrideBrakeActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> OverrideBrakeActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeActive: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeActive(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OverrideBrakeActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetActive(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<AttributeActive>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OverrideBrakeActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> OverrideBrakeActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        OverrideBrakeActionXmlParser::OverrideBrakeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideClutchActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            OverrideClutchActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> OverrideClutchActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeActive: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeActive(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OverrideClutchActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetActive(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<AttributeActive>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OverrideClutchActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> OverrideClutchActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        OverrideClutchActionXmlParser::OverrideClutchActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideControllerValueActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            OverrideControllerValueActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}


        std::map<std::string, std::shared_ptr<IAttributeParser>> OverrideControllerValueActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> OverrideControllerValueActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
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

        void OverrideControllerValueActionXmlParser::SubElementThrottleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto throttle = std::make_shared<OverrideThrottleActionImpl>();
            auto typedObject = std::static_pointer_cast<OverrideControllerValueActionImpl>(object);                    
            // Setting the parent
            throttle->SetParent(object);
            _overrideThrottleActionXmlParser->ParseElement(indexedElement, parserContext, throttle);

            typedObject->SetThrottle(throttle);
        }
        
        int OverrideControllerValueActionXmlParser::SubElementThrottleParser::GetMinOccur() 
        {
            return 1;
        }

        int OverrideControllerValueActionXmlParser::SubElementThrottleParser::GetMaxOccur() 
        {
            return 1;
        }

        bool OverrideControllerValueActionXmlParser::SubElementThrottleParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__THROTTLE ;
        }

        std::vector<std::string> OverrideControllerValueActionXmlParser::SubElementThrottleParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__THROTTLE
                    };
        }
        OverrideControllerValueActionXmlParser::SubElementBrakeParser::SubElementBrakeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideBrakeActionXmlParser = std::make_shared<OverrideBrakeActionXmlParser>(messageLogger, filename);
        }

        void OverrideControllerValueActionXmlParser::SubElementBrakeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto brake = std::make_shared<OverrideBrakeActionImpl>();
            auto typedObject = std::static_pointer_cast<OverrideControllerValueActionImpl>(object);                    
            // Setting the parent
            brake->SetParent(object);
            _overrideBrakeActionXmlParser->ParseElement(indexedElement, parserContext, brake);

            typedObject->SetBrake(brake);
        }
        
        int OverrideControllerValueActionXmlParser::SubElementBrakeParser::GetMinOccur() 
        {
            return 1;
        }

        int OverrideControllerValueActionXmlParser::SubElementBrakeParser::GetMaxOccur() 
        {
            return 1;
        }

        bool OverrideControllerValueActionXmlParser::SubElementBrakeParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__BRAKE ;
        }

        std::vector<std::string> OverrideControllerValueActionXmlParser::SubElementBrakeParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__BRAKE
                    };
        }
        OverrideControllerValueActionXmlParser::SubElementClutchParser::SubElementClutchParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideClutchActionXmlParser = std::make_shared<OverrideClutchActionXmlParser>(messageLogger, filename);
        }

        void OverrideControllerValueActionXmlParser::SubElementClutchParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto clutch = std::make_shared<OverrideClutchActionImpl>();
            auto typedObject = std::static_pointer_cast<OverrideControllerValueActionImpl>(object);                    
            // Setting the parent
            clutch->SetParent(object);
            _overrideClutchActionXmlParser->ParseElement(indexedElement, parserContext, clutch);

            typedObject->SetClutch(clutch);
        }
        
        int OverrideControllerValueActionXmlParser::SubElementClutchParser::GetMinOccur() 
        {
            return 1;
        }

        int OverrideControllerValueActionXmlParser::SubElementClutchParser::GetMaxOccur() 
        {
            return 1;
        }

        bool OverrideControllerValueActionXmlParser::SubElementClutchParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__CLUTCH ;
        }

        std::vector<std::string> OverrideControllerValueActionXmlParser::SubElementClutchParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__CLUTCH
                    };
        }
        OverrideControllerValueActionXmlParser::SubElementParkingBrakeParser::SubElementParkingBrakeParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideParkingBrakeActionXmlParser = std::make_shared<OverrideParkingBrakeActionXmlParser>(messageLogger, filename);
        }

        void OverrideControllerValueActionXmlParser::SubElementParkingBrakeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto parkingBrake = std::make_shared<OverrideParkingBrakeActionImpl>();
            auto typedObject = std::static_pointer_cast<OverrideControllerValueActionImpl>(object);                    
            // Setting the parent
            parkingBrake->SetParent(object);
            _overrideParkingBrakeActionXmlParser->ParseElement(indexedElement, parserContext, parkingBrake);

            typedObject->SetParkingBrake(parkingBrake);
        }
        
        int OverrideControllerValueActionXmlParser::SubElementParkingBrakeParser::GetMinOccur() 
        {
            return 1;
        }

        int OverrideControllerValueActionXmlParser::SubElementParkingBrakeParser::GetMaxOccur() 
        {
            return 1;
        }

        bool OverrideControllerValueActionXmlParser::SubElementParkingBrakeParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__PARKING_BRAKE ;
        }

        std::vector<std::string> OverrideControllerValueActionXmlParser::SubElementParkingBrakeParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__PARKING_BRAKE
                    };
        }
        OverrideControllerValueActionXmlParser::SubElementSteeringWheelParser::SubElementSteeringWheelParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideSteeringWheelActionXmlParser = std::make_shared<OverrideSteeringWheelActionXmlParser>(messageLogger, filename);
        }

        void OverrideControllerValueActionXmlParser::SubElementSteeringWheelParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto steeringWheel = std::make_shared<OverrideSteeringWheelActionImpl>();
            auto typedObject = std::static_pointer_cast<OverrideControllerValueActionImpl>(object);                    
            // Setting the parent
            steeringWheel->SetParent(object);
            _overrideSteeringWheelActionXmlParser->ParseElement(indexedElement, parserContext, steeringWheel);

            typedObject->SetSteeringWheel(steeringWheel);
        }
        
        int OverrideControllerValueActionXmlParser::SubElementSteeringWheelParser::GetMinOccur() 
        {
            return 1;
        }

        int OverrideControllerValueActionXmlParser::SubElementSteeringWheelParser::GetMaxOccur() 
        {
            return 1;
        }

        bool OverrideControllerValueActionXmlParser::SubElementSteeringWheelParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__STEERING_WHEEL ;
        }

        std::vector<std::string> OverrideControllerValueActionXmlParser::SubElementSteeringWheelParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__STEERING_WHEEL
                    };
        }
        OverrideControllerValueActionXmlParser::SubElementGearParser::SubElementGearParser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _overrideGearActionXmlParser = std::make_shared<OverrideGearActionXmlParser>(messageLogger, filename);
        }

        void OverrideControllerValueActionXmlParser::SubElementGearParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto gear = std::make_shared<OverrideGearActionImpl>();
            auto typedObject = std::static_pointer_cast<OverrideControllerValueActionImpl>(object);                    
            // Setting the parent
            gear->SetParent(object);
            _overrideGearActionXmlParser->ParseElement(indexedElement, parserContext, gear);

            typedObject->SetGear(gear);
        }
        
        int OverrideControllerValueActionXmlParser::SubElementGearParser::GetMinOccur() 
        {
            return 1;
        }

        int OverrideControllerValueActionXmlParser::SubElementGearParser::GetMaxOccur() 
        {
            return 1;
        }

        bool OverrideControllerValueActionXmlParser::SubElementGearParser::DoesMatch(std::string& elementName)
        {
            return
                elementName == OSC_CONSTANTS::ELEMENT__GEAR ;
        }

        std::vector<std::string> OverrideControllerValueActionXmlParser::SubElementGearParser::GetExpectedTagNames()
        {
            return {
                OSC_CONSTANTS::ELEMENT__GEAR
                    };
        }
  
        OverrideControllerValueActionXmlParser::OverrideControllerValueActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideGearActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            OverrideGearActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> OverrideGearActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeActive: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeActive(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OverrideGearActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetActive(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<AttributeActive>(_messageLogger, _filename)));
            class AttributeNumber: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeNumber(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OverrideGearActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__NUMBER, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetNumber(ParseDouble(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__NUMBER, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__NUMBER, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__NUMBER, std::make_shared<AttributeNumber>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> OverrideGearActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        OverrideGearActionXmlParser::OverrideGearActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideParkingBrakeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            OverrideParkingBrakeActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> OverrideParkingBrakeActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeActive: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeActive(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OverrideParkingBrakeActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetActive(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<AttributeActive>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OverrideParkingBrakeActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> OverrideParkingBrakeActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        OverrideParkingBrakeActionXmlParser::OverrideParkingBrakeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideSteeringWheelActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            OverrideSteeringWheelActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> OverrideSteeringWheelActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeActive: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeActive(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OverrideSteeringWheelActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetActive(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<AttributeActive>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OverrideSteeringWheelActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> OverrideSteeringWheelActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        OverrideSteeringWheelActionXmlParser::OverrideSteeringWheelActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * Filling a OverrideThrottleActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
            OverrideThrottleActionXmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}

        std::map<std::string, std::shared_ptr<IAttributeParser>> OverrideThrottleActionXmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            class AttributeActive: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeActive(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OverrideThrottleActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                    	
                        // Parse value
                        // Simple type
                        typedObject->SetActive(ParseBoolean(attributeValue, startMarker));
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<Textmarker>(endMarker));
                    
                }

                int GetMinOccur() override
                {
                    return 1;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, std::make_shared<AttributeActive>(_messageLogger, _filename)));
            class AttributeValue: public IAttributeParser, public XmlParserBase
            {
            public:
                AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    auto typedObject = std::static_pointer_cast<OverrideThrottleActionImpl>(object);
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__VALUE, StripDollarSign(attributeValue), startMarker); 
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
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__VALUE, std::make_shared<AttributeValue>(_messageLogger, _filename)));
            return result;
        }

        std::vector<std::shared_ptr<IElementParser>> OverrideThrottleActionXmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            return result;
        }

  
        OverrideThrottleActionXmlParser::OverrideThrottleActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        

    
    }
}
