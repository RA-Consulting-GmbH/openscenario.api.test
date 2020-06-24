#include "XmlParsers.h"
#include "NamedReferenceProxy.h"
#include "FileContentMessage.h"
#include "Position.h"
#include "Textmarker.h"
#include "ErrorLevel.h"
#include "WrappedListParser.h"

namespace RAC_OPENSCENARIO
{

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AbsoluteSpeedImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void AbsoluteSpeedXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AbsoluteSpeedImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing AbsoluteSpeed", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing AbsoluteSpeed", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteSpeedImpl>>> AbsoluteSpeedXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteSpeedImpl>>> result;

        class AttributeValue: public IAttributeParser<AbsoluteSpeedImpl>, public XmlParserBase<AbsoluteSpeedImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AbsoluteSpeedImpl>& object) override
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

    void AbsoluteTargetLaneXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AbsoluteTargetLaneImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing AbsoluteTargetLane", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing AbsoluteTargetLane", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetLaneImpl>>> AbsoluteTargetLaneXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetLaneImpl>>> result;

        class AttributeValue: public IAttributeParser<AbsoluteTargetLaneImpl>, public XmlParserBase<AbsoluteTargetLaneImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AbsoluteTargetLaneImpl>& object) override
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

    void AbsoluteTargetLaneOffsetXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AbsoluteTargetLaneOffsetImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing AbsoluteTargetLaneOffset", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing AbsoluteTargetLaneOffset", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetLaneOffsetImpl>>> AbsoluteTargetLaneOffsetXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetLaneOffsetImpl>>> result;

        class AttributeValue: public IAttributeParser<AbsoluteTargetLaneOffsetImpl>, public XmlParserBase<AbsoluteTargetLaneOffsetImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AbsoluteTargetLaneOffsetImpl>& object) override
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

    void AbsoluteTargetSpeedXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AbsoluteTargetSpeedImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing AbsoluteTargetSpeed", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing AbsoluteTargetSpeed", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetSpeedImpl>>> AbsoluteTargetSpeedXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetSpeedImpl>>> result;

        class AttributeValue: public IAttributeParser<AbsoluteTargetSpeedImpl>, public XmlParserBase<AbsoluteTargetSpeedImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AbsoluteTargetSpeedImpl>& object) override
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

    void AccelerationConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AccelerationConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing AccelerationCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing AccelerationCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<AccelerationConditionImpl>>> AccelerationConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<AccelerationConditionImpl>>> result;

        class AttributeValue: public IAttributeParser<AccelerationConditionImpl>, public XmlParserBase<AccelerationConditionImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AccelerationConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AccelerationConditionImpl>& object) override
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

    void AcquirePositionActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AcquirePositionActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing AcquirePositionAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing AcquirePositionAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<AcquirePositionActionImpl>>> AcquirePositionActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<AcquirePositionActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<AcquirePositionActionImpl>>> AcquirePositionActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<AcquirePositionActionImpl>>> result;
        auto positionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPositionParser>(positionXmlParser));
        return result;
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

    void ActXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Act", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Act", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ActImpl>>> ActXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ActImpl>>> result;

        class AttributeName: public IAttributeParser<ActImpl>, public XmlParserBase<ActImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ActImpl>& object) override
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
        auto maneuverGroupsXmlParser = std::make_shared<ManeuverGroupXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementManeuverGroupsParser>(maneuverGroupsXmlParser));
        auto startTriggerXmlParser = std::make_shared<TriggerXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementStartTriggerParser>(startTriggerXmlParser));
        auto stopTriggerXmlParser = std::make_shared<TriggerXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementStopTriggerParser>(stopTriggerXmlParser));
        return result;
    }

    void ActXmlParser::SubElementManeuverGroupsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActImpl>& object)
    {
        auto maneuverGroups = std::make_shared<ManeuverGroupImpl>();
        // Setting the parent
        maneuverGroups->SetParent(object);
        _maneuverGroupXmlParser->ParseElement(indexedElement, parserContext, maneuverGroups);
        auto maneuverGroupsList = object->GetManeuverGroups();
        maneuverGroupsList.push_back(maneuverGroups);
    }
    void ActXmlParser::SubElementStartTriggerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActImpl>& object)
    {
        auto startTrigger = std::make_shared<TriggerImpl>();
        // Setting the parent
        startTrigger->SetParent(object);
        _triggerXmlParser->ParseElement(indexedElement, parserContext, startTrigger);

        object->SetStartTrigger(startTrigger);
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

    void ActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Action", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Action", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ActionImpl>>> ActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ActionImpl>>> result;

        class AttributeName: public IAttributeParser<ActionImpl>, public XmlParserBase<ActionImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ActionImpl>& object) override
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
        auto globalActionXmlParser = std::make_shared<GlobalActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementGlobalActionParser>(globalActionXmlParser));
        auto userDefinedActionXmlParser = std::make_shared<UserDefinedActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementUserDefinedActionParser>(userDefinedActionXmlParser));
        auto privateActionXmlParser = std::make_shared<PrivateActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPrivateActionParser>(privateActionXmlParser));
        return result;
    }

    void ActionXmlParser::SubElementGlobalActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActionImpl>& object)
    {
        auto globalAction = std::make_shared<GlobalActionImpl>();
        // Setting the parent
        globalAction->SetParent(object);
        _globalActionXmlParser->ParseElement(indexedElement, parserContext, globalAction);

        object->SetGlobalAction(globalAction);
    }
    void ActionXmlParser::SubElementUserDefinedActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActionImpl>& object)
    {
        auto userDefinedAction = std::make_shared<UserDefinedActionImpl>();
        // Setting the parent
        userDefinedAction->SetParent(object);
        _userDefinedActionXmlParser->ParseElement(indexedElement, parserContext, userDefinedAction);

        object->SetUserDefinedAction(userDefinedAction);
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

    void ActivateControllerActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActivateControllerActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ActivateControllerAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ActivateControllerAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ActivateControllerActionImpl>>> ActivateControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ActivateControllerActionImpl>>> result;

        class AttributeLateral: public IAttributeParser<ActivateControllerActionImpl>, public XmlParserBase<ActivateControllerActionImpl>
        {
        public:
            AttributeLateral(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ActivateControllerActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ActivateControllerActionImpl>& object) override
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

    void ActorsXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActorsImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Actors", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Actors", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ActorsImpl>>> ActorsXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ActorsImpl>>> result;

        class AttributeSelectTriggeringEntities: public IAttributeParser<ActorsImpl>, public XmlParserBase<ActorsImpl>
        {
        public:
            AttributeSelectTriggeringEntities(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ActorsImpl>& object) override
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
        auto entityRefsXmlParser = std::make_shared<EntityRefXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEntityRefsParser>(entityRefsXmlParser));
        return result;
    }

    void ActorsXmlParser::SubElementEntityRefsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActorsImpl>& object)
    {
        auto entityRefs = std::make_shared<EntityRefImpl>();
        // Setting the parent
        entityRefs->SetParent(object);
        _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRefs);
        auto entityRefsList = object->GetEntityRefs();
        entityRefsList.push_back(entityRefs);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AddEntityActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void AddEntityActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AddEntityActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing AddEntityAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing AddEntityAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<AddEntityActionImpl>>> AddEntityActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<AddEntityActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<AddEntityActionImpl>>> AddEntityActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<AddEntityActionImpl>>> result;
        auto positionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPositionParser>(positionXmlParser));
        return result;
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

    void AssignControllerActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignControllerActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing AssignControllerAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing AssignControllerAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<AssignControllerActionImpl>>> AssignControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<AssignControllerActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<AssignControllerActionImpl>>> AssignControllerActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<AssignControllerActionImpl>>> result;
        auto controllerXmlParser = std::make_shared<ControllerXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementControllerParser>(controllerXmlParser));
        auto catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCatalogReferenceParser>(catalogReferenceXmlParser));
        return result;
    }

    void AssignControllerActionXmlParser::SubElementControllerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignControllerActionImpl>& object)
    {
        auto controller = std::make_shared<ControllerImpl>();
        // Setting the parent
        controller->SetParent(object);
        _controllerXmlParser->ParseElement(indexedElement, parserContext, controller);

        object->SetController(controller);
    }
    void AssignControllerActionXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignControllerActionImpl>& object)
    {
        auto catalogReference = std::make_shared<CatalogReferenceImpl>();
        // Setting the parent
        catalogReference->SetParent(object);
        _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

        object->SetCatalogReference(catalogReference);
        parserContext->AddCatalogReference(catalogReference);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AssignRouteActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void AssignRouteActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignRouteActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing AssignRouteAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing AssignRouteAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<AssignRouteActionImpl>>> AssignRouteActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<AssignRouteActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<AssignRouteActionImpl>>> AssignRouteActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<AssignRouteActionImpl>>> result;
        auto routeXmlParser = std::make_shared<RouteXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRouteParser>(routeXmlParser));
        auto catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCatalogReferenceParser>(catalogReferenceXmlParser));
        return result;
    }

    void AssignRouteActionXmlParser::SubElementRouteParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignRouteActionImpl>& object)
    {
        auto route = std::make_shared<RouteImpl>();
        // Setting the parent
        route->SetParent(object);
        _routeXmlParser->ParseElement(indexedElement, parserContext, route);

        object->SetRoute(route);
    }
    void AssignRouteActionXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignRouteActionImpl>& object)
    {
        auto catalogReference = std::make_shared<CatalogReferenceImpl>();
        // Setting the parent
        catalogReference->SetParent(object);
        _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

        object->SetCatalogReference(catalogReference);
        parserContext->AddCatalogReference(catalogReference);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AxleImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void AxleXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxleImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Axle", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Axle", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<AxleImpl>>> AxleXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<AxleImpl>>> result;

        class AttributeMaxSteering: public IAttributeParser<AxleImpl>, public XmlParserBase<AxleImpl>
        {
        public:
            AttributeMaxSteering(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AxleImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AxleImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AxleImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AxleImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<AxleImpl>& object) override
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

    void AxlesXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxlesImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Axles", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Axles", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<AxlesImpl>>> AxlesXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<AxlesImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<AxlesImpl>>> AxlesXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<AxlesImpl>>> result;
        auto frontAxleXmlParser = std::make_shared<AxleXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementFrontAxleParser>(frontAxleXmlParser));
        auto rearAxleXmlParser = std::make_shared<AxleXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRearAxleParser>(rearAxleXmlParser));
        auto additionalAxlesXmlParser = std::make_shared<AxleXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementAdditionalAxlesParser>(additionalAxlesXmlParser));
        return result;
    }

    void AxlesXmlParser::SubElementFrontAxleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxlesImpl>& object)
    {
        auto frontAxle = std::make_shared<AxleImpl>();
        // Setting the parent
        frontAxle->SetParent(object);
        _axleXmlParser->ParseElement(indexedElement, parserContext, frontAxle);

        object->SetFrontAxle(frontAxle);
    }
    void AxlesXmlParser::SubElementRearAxleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxlesImpl>& object)
    {
        auto rearAxle = std::make_shared<AxleImpl>();
        // Setting the parent
        rearAxle->SetParent(object);
        _axleXmlParser->ParseElement(indexedElement, parserContext, rearAxle);

        object->SetRearAxle(rearAxle);
    }
    void AxlesXmlParser::SubElementAdditionalAxlesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxlesImpl>& object)
    {
        auto additionalAxles = std::make_shared<AxleImpl>();
        // Setting the parent
        additionalAxles->SetParent(object);
        _axleXmlParser->ParseElement(indexedElement, parserContext, additionalAxles);
        auto additionalAxlesList = object->GetAdditionalAxles();
        additionalAxlesList.push_back(additionalAxles);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a BoundingBoxImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void BoundingBoxXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BoundingBoxImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing BoundingBox", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing BoundingBox", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<BoundingBoxImpl>>> BoundingBoxXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<BoundingBoxImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<BoundingBoxImpl>>> BoundingBoxXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<BoundingBoxImpl>>> result;
        auto centerXmlParser = std::make_shared<CenterXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCenterParser>(centerXmlParser));
        auto dimensionsXmlParser = std::make_shared<DimensionsXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDimensionsParser>(dimensionsXmlParser));
        return result;
    }

    void BoundingBoxXmlParser::SubElementCenterParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BoundingBoxImpl>& object)
    {
        auto center = std::make_shared<CenterImpl>();
        // Setting the parent
        center->SetParent(object);
        _centerXmlParser->ParseElement(indexedElement, parserContext, center);

        object->SetCenter(center);
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

    void ByEntityConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByEntityConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ByEntityCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ByEntityCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ByEntityConditionImpl>>> ByEntityConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ByEntityConditionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<ByEntityConditionImpl>>> ByEntityConditionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<ByEntityConditionImpl>>> result;
        auto triggeringEntitiesXmlParser = std::make_shared<TriggeringEntitiesXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTriggeringEntitiesParser>(triggeringEntitiesXmlParser));
        auto entityConditionXmlParser = std::make_shared<EntityConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEntityConditionParser>(entityConditionXmlParser));
        return result;
    }

    void ByEntityConditionXmlParser::SubElementTriggeringEntitiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByEntityConditionImpl>& object)
    {
        auto triggeringEntities = std::make_shared<TriggeringEntitiesImpl>();
        // Setting the parent
        triggeringEntities->SetParent(object);
        _triggeringEntitiesXmlParser->ParseElement(indexedElement, parserContext, triggeringEntities);

        object->SetTriggeringEntities(triggeringEntities);
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

    void ByObjectTypeXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByObjectTypeImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ByObjectType", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ByObjectType", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ByObjectTypeImpl>>> ByObjectTypeXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ByObjectTypeImpl>>> result;

        class AttributeType: public IAttributeParser<ByObjectTypeImpl>, public XmlParserBase<ByObjectTypeImpl>
        {
        public:
            AttributeType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ByObjectTypeImpl>& object) override
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

    void ByTypeXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByTypeImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ByType", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ByType", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ByTypeImpl>>> ByTypeXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ByTypeImpl>>> result;

        class AttributeObjectType: public IAttributeParser<ByTypeImpl>, public XmlParserBase<ByTypeImpl>
        {
        public:
            AttributeObjectType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ByTypeImpl>& object) override
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

    void ByValueConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ByValueCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ByValueCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ByValueConditionImpl>>> ByValueConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ByValueConditionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<ByValueConditionImpl>>> ByValueConditionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<ByValueConditionImpl>>> result;
        auto parameterConditionXmlParser = std::make_shared<ParameterConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementParameterConditionParser>(parameterConditionXmlParser));
        auto timeOfDayConditionXmlParser = std::make_shared<TimeOfDayConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTimeOfDayConditionParser>(timeOfDayConditionXmlParser));
        auto simulationTimeConditionXmlParser = std::make_shared<SimulationTimeConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementSimulationTimeConditionParser>(simulationTimeConditionXmlParser));
        auto storyboardElementStateConditionXmlParser = std::make_shared<StoryboardElementStateConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementStoryboardElementStateConditionParser>(storyboardElementStateConditionXmlParser));
        auto userDefinedValueConditionXmlParser = std::make_shared<UserDefinedValueConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementUserDefinedValueConditionParser>(userDefinedValueConditionXmlParser));
        auto trafficSignalConditionXmlParser = std::make_shared<TrafficSignalConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficSignalConditionParser>(trafficSignalConditionXmlParser));
        auto trafficSignalControllerConditionXmlParser = std::make_shared<TrafficSignalControllerConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficSignalControllerConditionParser>(trafficSignalControllerConditionXmlParser));
        return result;
    }

    void ByValueConditionXmlParser::SubElementParameterConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
    {
        auto parameterCondition = std::make_shared<ParameterConditionImpl>();
        // Setting the parent
        parameterCondition->SetParent(object);
        _parameterConditionXmlParser->ParseElement(indexedElement, parserContext, parameterCondition);

        object->SetParameterCondition(parameterCondition);
    }
    void ByValueConditionXmlParser::SubElementTimeOfDayConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
    {
        auto timeOfDayCondition = std::make_shared<TimeOfDayConditionImpl>();
        // Setting the parent
        timeOfDayCondition->SetParent(object);
        _timeOfDayConditionXmlParser->ParseElement(indexedElement, parserContext, timeOfDayCondition);

        object->SetTimeOfDayCondition(timeOfDayCondition);
    }
    void ByValueConditionXmlParser::SubElementSimulationTimeConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
    {
        auto simulationTimeCondition = std::make_shared<SimulationTimeConditionImpl>();
        // Setting the parent
        simulationTimeCondition->SetParent(object);
        _simulationTimeConditionXmlParser->ParseElement(indexedElement, parserContext, simulationTimeCondition);

        object->SetSimulationTimeCondition(simulationTimeCondition);
    }
    void ByValueConditionXmlParser::SubElementStoryboardElementStateConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
    {
        auto storyboardElementStateCondition = std::make_shared<StoryboardElementStateConditionImpl>();
        // Setting the parent
        storyboardElementStateCondition->SetParent(object);
        _storyboardElementStateConditionXmlParser->ParseElement(indexedElement, parserContext, storyboardElementStateCondition);

        object->SetStoryboardElementStateCondition(storyboardElementStateCondition);
    }
    void ByValueConditionXmlParser::SubElementUserDefinedValueConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
    {
        auto userDefinedValueCondition = std::make_shared<UserDefinedValueConditionImpl>();
        // Setting the parent
        userDefinedValueCondition->SetParent(object);
        _userDefinedValueConditionXmlParser->ParseElement(indexedElement, parserContext, userDefinedValueCondition);

        object->SetUserDefinedValueCondition(userDefinedValueCondition);
    }
    void ByValueConditionXmlParser::SubElementTrafficSignalConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object)
    {
        auto trafficSignalCondition = std::make_shared<TrafficSignalConditionImpl>();
        // Setting the parent
        trafficSignalCondition->SetParent(object);
        _trafficSignalConditionXmlParser->ParseElement(indexedElement, parserContext, trafficSignalCondition);

        object->SetTrafficSignalCondition(trafficSignalCondition);
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

    void CatalogXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Catalog", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Catalog", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<CatalogImpl>>> CatalogXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<CatalogImpl>>> result;

        class AttributeName: public IAttributeParser<CatalogImpl>, public XmlParserBase<CatalogImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CatalogImpl>& object) override
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
        auto vehiclesXmlParser = std::make_shared<VehicleXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementVehiclesParser>(vehiclesXmlParser));
        auto controllersXmlParser = std::make_shared<ControllerXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementControllersParser>(controllersXmlParser));
        auto pedestriansXmlParser = std::make_shared<PedestrianXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPedestriansParser>(pedestriansXmlParser));
        auto miscObjectsXmlParser = std::make_shared<MiscObjectXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementMiscObjectsParser>(miscObjectsXmlParser));
        auto environmentsXmlParser = std::make_shared<EnvironmentXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEnvironmentsParser>(environmentsXmlParser));
        auto maneuversXmlParser = std::make_shared<ManeuverXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementManeuversParser>(maneuversXmlParser));
        auto trajectoriesXmlParser = std::make_shared<TrajectoryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrajectoriesParser>(trajectoriesXmlParser));
        auto routesXmlParser = std::make_shared<RouteXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRoutesParser>(routesXmlParser));
        return result;
    }

    void CatalogXmlParser::SubElementVehiclesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
    {
        auto vehicles = std::make_shared<VehicleImpl>();
        // Setting the parent
        vehicles->SetParent(object);
        _vehicleXmlParser->ParseElement(indexedElement, parserContext, vehicles);
        auto vehiclesList = object->GetVehicles();
        vehiclesList.push_back(vehicles);
    }
    void CatalogXmlParser::SubElementControllersParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
    {
        auto controllers = std::make_shared<ControllerImpl>();
        // Setting the parent
        controllers->SetParent(object);
        _controllerXmlParser->ParseElement(indexedElement, parserContext, controllers);
        auto controllersList = object->GetControllers();
        controllersList.push_back(controllers);
    }
    void CatalogXmlParser::SubElementPedestriansParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
    {
        auto pedestrians = std::make_shared<PedestrianImpl>();
        // Setting the parent
        pedestrians->SetParent(object);
        _pedestrianXmlParser->ParseElement(indexedElement, parserContext, pedestrians);
        auto pedestriansList = object->GetPedestrians();
        pedestriansList.push_back(pedestrians);
    }
    void CatalogXmlParser::SubElementMiscObjectsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
    {
        auto miscObjects = std::make_shared<MiscObjectImpl>();
        // Setting the parent
        miscObjects->SetParent(object);
        _miscObjectXmlParser->ParseElement(indexedElement, parserContext, miscObjects);
        auto miscObjectsList = object->GetMiscObjects();
        miscObjectsList.push_back(miscObjects);
    }
    void CatalogXmlParser::SubElementEnvironmentsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
    {
        auto environments = std::make_shared<EnvironmentImpl>();
        // Setting the parent
        environments->SetParent(object);
        _environmentXmlParser->ParseElement(indexedElement, parserContext, environments);
        auto environmentsList = object->GetEnvironments();
        environmentsList.push_back(environments);
    }
    void CatalogXmlParser::SubElementManeuversParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
    {
        auto maneuvers = std::make_shared<ManeuverImpl>();
        // Setting the parent
        maneuvers->SetParent(object);
        _maneuverXmlParser->ParseElement(indexedElement, parserContext, maneuvers);
        auto maneuversList = object->GetManeuvers();
        maneuversList.push_back(maneuvers);
    }
    void CatalogXmlParser::SubElementTrajectoriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
    {
        auto trajectories = std::make_shared<TrajectoryImpl>();
        // Setting the parent
        trajectories->SetParent(object);
        _trajectoryXmlParser->ParseElement(indexedElement, parserContext, trajectories);
        auto trajectoriesList = object->GetTrajectories();
        trajectoriesList.push_back(trajectories);
    }
    void CatalogXmlParser::SubElementRoutesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object)
    {
        auto routes = std::make_shared<RouteImpl>();
        // Setting the parent
        routes->SetParent(object);
        _routeXmlParser->ParseElement(indexedElement, parserContext, routes);
        auto routesList = object->GetRoutes();
        routesList.push_back(routes);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CatalogDefinitionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void CatalogDefinitionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogDefinitionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing CatalogDefinition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlGroupParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing CatalogDefinition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }


    std::vector<std::shared_ptr<IElementParser<CatalogDefinitionImpl>>> CatalogDefinitionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<CatalogDefinitionImpl>>> result;
        auto catalogXmlParser = std::make_shared<CatalogXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCatalogParser>(catalogXmlParser));
        return result;
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

    void CatalogLocationsXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing CatalogLocations", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing CatalogLocations", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<CatalogLocationsImpl>>> CatalogLocationsXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<CatalogLocationsImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<CatalogLocationsImpl>>> CatalogLocationsXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<CatalogLocationsImpl>>> result;
        auto vehicleCatalogXmlParser = std::make_shared<VehicleCatalogLocationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementVehicleCatalogParser>(vehicleCatalogXmlParser));
        auto controllerCatalogXmlParser = std::make_shared<ControllerCatalogLocationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementControllerCatalogParser>(controllerCatalogXmlParser));
        auto pedestrianCatalogXmlParser = std::make_shared<PedestrianCatalogLocationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPedestrianCatalogParser>(pedestrianCatalogXmlParser));
        auto miscObjectCatalogXmlParser = std::make_shared<MiscObjectCatalogLocationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementMiscObjectCatalogParser>(miscObjectCatalogXmlParser));
        auto environmentCatalogXmlParser = std::make_shared<EnvironmentCatalogLocationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEnvironmentCatalogParser>(environmentCatalogXmlParser));
        auto maneuverCatalogXmlParser = std::make_shared<ManeuverCatalogLocationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementManeuverCatalogParser>(maneuverCatalogXmlParser));
        auto trajectoryCatalogXmlParser = std::make_shared<TrajectoryCatalogLocationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrajectoryCatalogParser>(trajectoryCatalogXmlParser));
        auto routeCatalogXmlParser = std::make_shared<RouteCatalogLocationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRouteCatalogParser>(routeCatalogXmlParser));
        return result;
    }

    void CatalogLocationsXmlParser::SubElementVehicleCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
    {
        auto vehicleCatalog = std::make_shared<VehicleCatalogLocationImpl>();
        // Setting the parent
        vehicleCatalog->SetParent(object);
        _vehicleCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, vehicleCatalog);

        object->SetVehicleCatalog(vehicleCatalog);
    }
    void CatalogLocationsXmlParser::SubElementControllerCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
    {
        auto controllerCatalog = std::make_shared<ControllerCatalogLocationImpl>();
        // Setting the parent
        controllerCatalog->SetParent(object);
        _controllerCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, controllerCatalog);

        object->SetControllerCatalog(controllerCatalog);
    }
    void CatalogLocationsXmlParser::SubElementPedestrianCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
    {
        auto pedestrianCatalog = std::make_shared<PedestrianCatalogLocationImpl>();
        // Setting the parent
        pedestrianCatalog->SetParent(object);
        _pedestrianCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, pedestrianCatalog);

        object->SetPedestrianCatalog(pedestrianCatalog);
    }
    void CatalogLocationsXmlParser::SubElementMiscObjectCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
    {
        auto miscObjectCatalog = std::make_shared<MiscObjectCatalogLocationImpl>();
        // Setting the parent
        miscObjectCatalog->SetParent(object);
        _miscObjectCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, miscObjectCatalog);

        object->SetMiscObjectCatalog(miscObjectCatalog);
    }
    void CatalogLocationsXmlParser::SubElementEnvironmentCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
    {
        auto environmentCatalog = std::make_shared<EnvironmentCatalogLocationImpl>();
        // Setting the parent
        environmentCatalog->SetParent(object);
        _environmentCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, environmentCatalog);

        object->SetEnvironmentCatalog(environmentCatalog);
    }
    void CatalogLocationsXmlParser::SubElementManeuverCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
    {
        auto maneuverCatalog = std::make_shared<ManeuverCatalogLocationImpl>();
        // Setting the parent
        maneuverCatalog->SetParent(object);
        _maneuverCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, maneuverCatalog);

        object->SetManeuverCatalog(maneuverCatalog);
    }
    void CatalogLocationsXmlParser::SubElementTrajectoryCatalogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object)
    {
        auto trajectoryCatalog = std::make_shared<TrajectoryCatalogLocationImpl>();
        // Setting the parent
        trajectoryCatalog->SetParent(object);
        _trajectoryCatalogLocationXmlParser->ParseElement(indexedElement, parserContext, trajectoryCatalog);

        object->SetTrajectoryCatalog(trajectoryCatalog);
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

    void CatalogReferenceXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogReferenceImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing CatalogReference", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing CatalogReference", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<CatalogReferenceImpl>>> CatalogReferenceXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<CatalogReferenceImpl>>> result;

        class AttributeCatalogName: public IAttributeParser<CatalogReferenceImpl>, public XmlParserBase<CatalogReferenceImpl>
        {
        public:
            AttributeCatalogName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CatalogReferenceImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CatalogReferenceImpl>& object) override
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
        auto parameterAssignmentsXmlParser = std::make_shared<ParameterAssignmentXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<WrappedListParser<CatalogReferenceImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterAssignmentsParser>(parameterAssignmentsXmlParser), OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENTS) );
        return result;
    }

    void CatalogReferenceXmlParser::SubElementParameterAssignmentsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogReferenceImpl>& object)
    {
        auto parameterAssignments = std::make_shared<ParameterAssignmentImpl>();
        // Setting the parent
        parameterAssignments->SetParent(object);
        _parameterAssignmentXmlParser->ParseElement(indexedElement, parserContext, parameterAssignments);
        auto parameterAssignmentsList = object->GetParameterAssignments();
        parameterAssignmentsList.push_back(parameterAssignments);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CenterImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void CenterXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CenterImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Center", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Center", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<CenterImpl>>> CenterXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<CenterImpl>>> result;

        class AttributeX: public IAttributeParser<CenterImpl>, public XmlParserBase<CenterImpl>
        {
        public:
            AttributeX(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CenterImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CenterImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CenterImpl>& object) override
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

    void CentralSwarmObjectXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CentralSwarmObjectImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing CentralSwarmObject", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing CentralSwarmObject", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<CentralSwarmObjectImpl>>> CentralSwarmObjectXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<CentralSwarmObjectImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<CentralSwarmObjectImpl>, public XmlParserBase<CentralSwarmObjectImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CentralSwarmObjectImpl>& object) override
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

    void ClothoidXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ClothoidImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Clothoid", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Clothoid", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ClothoidImpl>>> ClothoidXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ClothoidImpl>>> result;

        class AttributeCurvature: public IAttributeParser<ClothoidImpl>, public XmlParserBase<ClothoidImpl>
        {
        public:
            AttributeCurvature(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ClothoidImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ClothoidImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ClothoidImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ClothoidImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ClothoidImpl>& object) override
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
        auto positionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPositionParser>(positionXmlParser));
        return result;
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

    void CollisionConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CollisionConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing CollisionCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing CollisionCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<CollisionConditionImpl>>> CollisionConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<CollisionConditionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<CollisionConditionImpl>>> CollisionConditionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<CollisionConditionImpl>>> result;
        auto entityRefXmlParser = std::make_shared<EntityRefXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEntityRefParser>(entityRefXmlParser));
        auto byTypeXmlParser = std::make_shared<ByObjectTypeXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementByTypeParser>(byTypeXmlParser));
        return result;
    }

    void CollisionConditionXmlParser::SubElementEntityRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CollisionConditionImpl>& object)
    {
        auto entityRef = std::make_shared<EntityRefImpl>();
        // Setting the parent
        entityRef->SetParent(object);
        _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRef);

        object->SetEntityRef(entityRef);
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

    void ConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Condition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Condition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ConditionImpl>>> ConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ConditionImpl>>> result;

        class AttributeName: public IAttributeParser<ConditionImpl>, public XmlParserBase<ConditionImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ConditionImpl>& object) override
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
        auto byEntityConditionXmlParser = std::make_shared<ByEntityConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementByEntityConditionParser>(byEntityConditionXmlParser));
        auto byValueConditionXmlParser = std::make_shared<ByValueConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementByValueConditionParser>(byValueConditionXmlParser));
        return result;
    }

    void ConditionXmlParser::SubElementByEntityConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ConditionImpl>& object)
    {
        auto byEntityCondition = std::make_shared<ByEntityConditionImpl>();
        // Setting the parent
        byEntityCondition->SetParent(object);
        _byEntityConditionXmlParser->ParseElement(indexedElement, parserContext, byEntityCondition);

        object->SetByEntityCondition(byEntityCondition);
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

    void ConditionGroupXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ConditionGroupImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ConditionGroup", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ConditionGroup", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ConditionGroupImpl>>> ConditionGroupXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ConditionGroupImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<ConditionGroupImpl>>> ConditionGroupXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<ConditionGroupImpl>>> result;
        auto conditionsXmlParser = std::make_shared<ConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementConditionsParser>(conditionsXmlParser));
        return result;
    }

    void ConditionGroupXmlParser::SubElementConditionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ConditionGroupImpl>& object)
    {
        auto conditions = std::make_shared<ConditionImpl>();
        // Setting the parent
        conditions->SetParent(object);
        _conditionXmlParser->ParseElement(indexedElement, parserContext, conditions);
        auto conditionsList = object->GetConditions();
        conditionsList.push_back(conditions);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ControlPointImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void ControlPointXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControlPointImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ControlPoint", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ControlPoint", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ControlPointImpl>>> ControlPointXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ControlPointImpl>>> result;

        class AttributeTime: public IAttributeParser<ControlPointImpl>, public XmlParserBase<ControlPointImpl>
        {
        public:
            AttributeTime(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ControlPointImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ControlPointImpl>& object) override
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
        auto positionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPositionParser>(positionXmlParser));
        return result;
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

    void ControllerXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Controller", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Controller", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ControllerImpl>>> ControllerXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerImpl>>> result;

        class AttributeName: public IAttributeParser<ControllerImpl>, public XmlParserBase<ControllerImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ControllerImpl>& object) override
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
        auto parameterDeclarationsXmlParser = std::make_shared<ParameterDeclarationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<WrappedListParser<ControllerImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(parameterDeclarationsXmlParser), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
        auto propertiesXmlParser = std::make_shared<PropertiesXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPropertiesParser>(propertiesXmlParser));
        return result;
    }

    void ControllerXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerImpl>& object)
    {
        auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
        // Setting the parent
        parameterDeclarations->SetParent(object);
        _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
        auto parameterDeclarationsList = object->GetParameterDeclarations();
        parameterDeclarationsList.push_back(parameterDeclarations);
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

    void ControllerActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ControllerAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ControllerAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ControllerActionImpl>>> ControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<ControllerActionImpl>>> ControllerActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<ControllerActionImpl>>> result;
        auto assignControllerActionXmlParser = std::make_shared<AssignControllerActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementAssignControllerActionParser>(assignControllerActionXmlParser));
        auto overrideControllerValueActionXmlParser = std::make_shared<OverrideControllerValueActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementOverrideControllerValueActionParser>(overrideControllerValueActionXmlParser));
        return result;
    }

    void ControllerActionXmlParser::SubElementAssignControllerActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerActionImpl>& object)
    {
        auto assignControllerAction = std::make_shared<AssignControllerActionImpl>();
        // Setting the parent
        assignControllerAction->SetParent(object);
        _assignControllerActionXmlParser->ParseElement(indexedElement, parserContext, assignControllerAction);

        object->SetAssignControllerAction(assignControllerAction);
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

    void ControllerCatalogLocationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerCatalogLocationImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ControllerCatalogLocation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ControllerCatalogLocation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ControllerCatalogLocationImpl>>> ControllerCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerCatalogLocationImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<ControllerCatalogLocationImpl>>> ControllerCatalogLocationXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<ControllerCatalogLocationImpl>>> result;
        auto directoryXmlParser = std::make_shared<DirectoryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDirectoryParser>(directoryXmlParser));
        return result;
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

    void ControllerDistributionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ControllerDistribution", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ControllerDistribution", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ControllerDistributionImpl>>> ControllerDistributionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerDistributionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<ControllerDistributionImpl>>> ControllerDistributionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<ControllerDistributionImpl>>> result;
        auto controllerDistributionEntriesXmlParser = std::make_shared<ControllerDistributionEntryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementControllerDistributionEntriesParser>(controllerDistributionEntriesXmlParser));
        return result;
    }

    void ControllerDistributionXmlParser::SubElementControllerDistributionEntriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionImpl>& object)
    {
        auto controllerDistributionEntries = std::make_shared<ControllerDistributionEntryImpl>();
        // Setting the parent
        controllerDistributionEntries->SetParent(object);
        _controllerDistributionEntryXmlParser->ParseElement(indexedElement, parserContext, controllerDistributionEntries);
        auto controllerDistributionEntriesList = object->GetControllerDistributionEntries();
        controllerDistributionEntriesList.push_back(controllerDistributionEntries);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ControllerDistributionEntryImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void ControllerDistributionEntryXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionEntryImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ControllerDistributionEntry", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ControllerDistributionEntry", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ControllerDistributionEntryImpl>>> ControllerDistributionEntryXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerDistributionEntryImpl>>> result;

        class AttributeWeight: public IAttributeParser<ControllerDistributionEntryImpl>, public XmlParserBase<ControllerDistributionEntryImpl>
        {
        public:
            AttributeWeight(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ControllerDistributionEntryImpl>& object) override
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
        auto controllerXmlParser = std::make_shared<ControllerXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementControllerParser>(controllerXmlParser));
        auto catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCatalogReferenceParser>(catalogReferenceXmlParser));
        return result;
    }

    void ControllerDistributionEntryXmlParser::SubElementControllerParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionEntryImpl>& object)
    {
        auto controller = std::make_shared<ControllerImpl>();
        // Setting the parent
        controller->SetParent(object);
        _controllerXmlParser->ParseElement(indexedElement, parserContext, controller);

        object->SetController(controller);
    }
    void ControllerDistributionEntryXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionEntryImpl>& object)
    {
        auto catalogReference = std::make_shared<CatalogReferenceImpl>();
        // Setting the parent
        catalogReference->SetParent(object);
        _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

        object->SetCatalogReference(catalogReference);
        parserContext->AddCatalogReference(catalogReference);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CustomCommandActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void CustomCommandActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CustomCommandActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing CustomCommandAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlSimpleContentParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing CustomCommandAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<CustomCommandActionImpl>>> CustomCommandActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<CustomCommandActionImpl>>> result;

        class AttributeType: public IAttributeParser<CustomCommandActionImpl>, public XmlParserBase<CustomCommandActionImpl>
        {
        public:
            AttributeType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<CustomCommandActionImpl>& object) override
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
    void CustomCommandActionXmlParser::SetContentProperty(std::string& content, CustomCommandActionImpl& object)
    {
        object.SetContent(content);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a DeleteEntityActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void DeleteEntityActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<DeleteEntityActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing DeleteEntityAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing DeleteEntityAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

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

    void DimensionsXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<DimensionsImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Dimensions", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Dimensions", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<DimensionsImpl>>> DimensionsXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<DimensionsImpl>>> result;

        class AttributeWidth: public IAttributeParser<DimensionsImpl>, public XmlParserBase<DimensionsImpl>
        {
        public:
            AttributeWidth(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DimensionsImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DimensionsImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DimensionsImpl>& object) override
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

    void DirectoryXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<DirectoryImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Directory", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Directory", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<DirectoryImpl>>> DirectoryXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<DirectoryImpl>>> result;

        class AttributePath: public IAttributeParser<DirectoryImpl>, public XmlParserBase<DirectoryImpl>
        {
        public:
            AttributePath(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DirectoryImpl>& object) override
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

    void DistanceConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<DistanceConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing DistanceCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing DistanceCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<DistanceConditionImpl>>> DistanceConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<DistanceConditionImpl>>> result;

        class AttributeValue: public IAttributeParser<DistanceConditionImpl>, public XmlParserBase<DistanceConditionImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DistanceConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DistanceConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DistanceConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DistanceConditionImpl>& object) override
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
        auto positionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPositionParser>(positionXmlParser));
        return result;
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

    void DynamicConstraintsXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<DynamicConstraintsImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing DynamicConstraints", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing DynamicConstraints", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<DynamicConstraintsImpl>>> DynamicConstraintsXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<DynamicConstraintsImpl>>> result;

        class AttributeMaxAcceleration: public IAttributeParser<DynamicConstraintsImpl>, public XmlParserBase<DynamicConstraintsImpl>
        {
        public:
            AttributeMaxAcceleration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DynamicConstraintsImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DynamicConstraintsImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<DynamicConstraintsImpl>& object) override
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

    void EndOfRoadConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EndOfRoadConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing EndOfRoadCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing EndOfRoadCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<EndOfRoadConditionImpl>>> EndOfRoadConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<EndOfRoadConditionImpl>>> result;

        class AttributeDuration: public IAttributeParser<EndOfRoadConditionImpl>, public XmlParserBase<EndOfRoadConditionImpl>
        {
        public:
            AttributeDuration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EndOfRoadConditionImpl>& object) override
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

    void EntitiesXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntitiesImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Entities", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Entities", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<EntitiesImpl>>> EntitiesXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<EntitiesImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<EntitiesImpl>>> EntitiesXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<EntitiesImpl>>> result;
        auto scenarioObjectsXmlParser = std::make_shared<ScenarioObjectXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementScenarioObjectsParser>(scenarioObjectsXmlParser));
        auto entitySelectionsXmlParser = std::make_shared<EntitySelectionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEntitySelectionsParser>(entitySelectionsXmlParser));
        return result;
    }

    void EntitiesXmlParser::SubElementScenarioObjectsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntitiesImpl>& object)
    {
        auto scenarioObjects = std::make_shared<ScenarioObjectImpl>();
        // Setting the parent
        scenarioObjects->SetParent(object);
        _scenarioObjectXmlParser->ParseElement(indexedElement, parserContext, scenarioObjects);
        auto scenarioObjectsList = object->GetScenarioObjects();
        scenarioObjectsList.push_back(scenarioObjects);
    }
    void EntitiesXmlParser::SubElementEntitySelectionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntitiesImpl>& object)
    {
        auto entitySelections = std::make_shared<EntitySelectionImpl>();
        // Setting the parent
        entitySelections->SetParent(object);
        _entitySelectionXmlParser->ParseElement(indexedElement, parserContext, entitySelections);
        auto entitySelectionsList = object->GetEntitySelections();
        entitySelectionsList.push_back(entitySelections);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EntityActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void EntityActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing EntityAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing EntityAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<EntityActionImpl>>> EntityActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<EntityActionImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<EntityActionImpl>, public XmlParserBase<EntityActionImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EntityActionImpl>& object) override
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
        auto addEntityActionXmlParser = std::make_shared<AddEntityActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementAddEntityActionParser>(addEntityActionXmlParser));
        auto deleteEntityActionXmlParser = std::make_shared<DeleteEntityActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDeleteEntityActionParser>(deleteEntityActionXmlParser));
        return result;
    }

    void EntityActionXmlParser::SubElementAddEntityActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityActionImpl>& object)
    {
        auto addEntityAction = std::make_shared<AddEntityActionImpl>();
        // Setting the parent
        addEntityAction->SetParent(object);
        _addEntityActionXmlParser->ParseElement(indexedElement, parserContext, addEntityAction);

        object->SetAddEntityAction(addEntityAction);
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

    void EntityConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing EntityCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing EntityCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<EntityConditionImpl>>> EntityConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<EntityConditionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<EntityConditionImpl>>> EntityConditionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<EntityConditionImpl>>> result;
        auto endOfRoadConditionXmlParser = std::make_shared<EndOfRoadConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEndOfRoadConditionParser>(endOfRoadConditionXmlParser));
        auto collisionConditionXmlParser = std::make_shared<CollisionConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCollisionConditionParser>(collisionConditionXmlParser));
        auto offroadConditionXmlParser = std::make_shared<OffroadConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementOffroadConditionParser>(offroadConditionXmlParser));
        auto timeHeadwayConditionXmlParser = std::make_shared<TimeHeadwayConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTimeHeadwayConditionParser>(timeHeadwayConditionXmlParser));
        auto timeToCollisionConditionXmlParser = std::make_shared<TimeToCollisionConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTimeToCollisionConditionParser>(timeToCollisionConditionXmlParser));
        auto accelerationConditionXmlParser = std::make_shared<AccelerationConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementAccelerationConditionParser>(accelerationConditionXmlParser));
        auto standStillConditionXmlParser = std::make_shared<StandStillConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementStandStillConditionParser>(standStillConditionXmlParser));
        auto speedConditionXmlParser = std::make_shared<SpeedConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementSpeedConditionParser>(speedConditionXmlParser));
        auto relativeSpeedConditionXmlParser = std::make_shared<RelativeSpeedConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRelativeSpeedConditionParser>(relativeSpeedConditionXmlParser));
        auto traveledDistanceConditionXmlParser = std::make_shared<TraveledDistanceConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTraveledDistanceConditionParser>(traveledDistanceConditionXmlParser));
        auto reachPositionConditionXmlParser = std::make_shared<ReachPositionConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementReachPositionConditionParser>(reachPositionConditionXmlParser));
        auto distanceConditionXmlParser = std::make_shared<DistanceConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDistanceConditionParser>(distanceConditionXmlParser));
        auto relativeDistanceConditionXmlParser = std::make_shared<RelativeDistanceConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRelativeDistanceConditionParser>(relativeDistanceConditionXmlParser));
        return result;
    }

    void EntityConditionXmlParser::SubElementEndOfRoadConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto endOfRoadCondition = std::make_shared<EndOfRoadConditionImpl>();
        // Setting the parent
        endOfRoadCondition->SetParent(object);
        _endOfRoadConditionXmlParser->ParseElement(indexedElement, parserContext, endOfRoadCondition);

        object->SetEndOfRoadCondition(endOfRoadCondition);
    }
    void EntityConditionXmlParser::SubElementCollisionConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto collisionCondition = std::make_shared<CollisionConditionImpl>();
        // Setting the parent
        collisionCondition->SetParent(object);
        _collisionConditionXmlParser->ParseElement(indexedElement, parserContext, collisionCondition);

        object->SetCollisionCondition(collisionCondition);
    }
    void EntityConditionXmlParser::SubElementOffroadConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto offroadCondition = std::make_shared<OffroadConditionImpl>();
        // Setting the parent
        offroadCondition->SetParent(object);
        _offroadConditionXmlParser->ParseElement(indexedElement, parserContext, offroadCondition);

        object->SetOffroadCondition(offroadCondition);
    }
    void EntityConditionXmlParser::SubElementTimeHeadwayConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto timeHeadwayCondition = std::make_shared<TimeHeadwayConditionImpl>();
        // Setting the parent
        timeHeadwayCondition->SetParent(object);
        _timeHeadwayConditionXmlParser->ParseElement(indexedElement, parserContext, timeHeadwayCondition);

        object->SetTimeHeadwayCondition(timeHeadwayCondition);
    }
    void EntityConditionXmlParser::SubElementTimeToCollisionConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto timeToCollisionCondition = std::make_shared<TimeToCollisionConditionImpl>();
        // Setting the parent
        timeToCollisionCondition->SetParent(object);
        _timeToCollisionConditionXmlParser->ParseElement(indexedElement, parserContext, timeToCollisionCondition);

        object->SetTimeToCollisionCondition(timeToCollisionCondition);
    }
    void EntityConditionXmlParser::SubElementAccelerationConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto accelerationCondition = std::make_shared<AccelerationConditionImpl>();
        // Setting the parent
        accelerationCondition->SetParent(object);
        _accelerationConditionXmlParser->ParseElement(indexedElement, parserContext, accelerationCondition);

        object->SetAccelerationCondition(accelerationCondition);
    }
    void EntityConditionXmlParser::SubElementStandStillConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto standStillCondition = std::make_shared<StandStillConditionImpl>();
        // Setting the parent
        standStillCondition->SetParent(object);
        _standStillConditionXmlParser->ParseElement(indexedElement, parserContext, standStillCondition);

        object->SetStandStillCondition(standStillCondition);
    }
    void EntityConditionXmlParser::SubElementSpeedConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto speedCondition = std::make_shared<SpeedConditionImpl>();
        // Setting the parent
        speedCondition->SetParent(object);
        _speedConditionXmlParser->ParseElement(indexedElement, parserContext, speedCondition);

        object->SetSpeedCondition(speedCondition);
    }
    void EntityConditionXmlParser::SubElementRelativeSpeedConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto relativeSpeedCondition = std::make_shared<RelativeSpeedConditionImpl>();
        // Setting the parent
        relativeSpeedCondition->SetParent(object);
        _relativeSpeedConditionXmlParser->ParseElement(indexedElement, parserContext, relativeSpeedCondition);

        object->SetRelativeSpeedCondition(relativeSpeedCondition);
    }
    void EntityConditionXmlParser::SubElementTraveledDistanceConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto traveledDistanceCondition = std::make_shared<TraveledDistanceConditionImpl>();
        // Setting the parent
        traveledDistanceCondition->SetParent(object);
        _traveledDistanceConditionXmlParser->ParseElement(indexedElement, parserContext, traveledDistanceCondition);

        object->SetTraveledDistanceCondition(traveledDistanceCondition);
    }
    void EntityConditionXmlParser::SubElementReachPositionConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto reachPositionCondition = std::make_shared<ReachPositionConditionImpl>();
        // Setting the parent
        reachPositionCondition->SetParent(object);
        _reachPositionConditionXmlParser->ParseElement(indexedElement, parserContext, reachPositionCondition);

        object->SetReachPositionCondition(reachPositionCondition);
    }
    void EntityConditionXmlParser::SubElementDistanceConditionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object)
    {
        auto distanceCondition = std::make_shared<DistanceConditionImpl>();
        // Setting the parent
        distanceCondition->SetParent(object);
        _distanceConditionXmlParser->ParseElement(indexedElement, parserContext, distanceCondition);

        object->SetDistanceCondition(distanceCondition);
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

    void EntityObjectXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing EntityObject", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlGroupParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing EntityObject", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }


    std::vector<std::shared_ptr<IElementParser<EntityObjectImpl>>> EntityObjectXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<EntityObjectImpl>>> result;
        auto catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCatalogReferenceParser>(catalogReferenceXmlParser));
        auto vehicleXmlParser = std::make_shared<VehicleXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementVehicleParser>(vehicleXmlParser));
        auto pedestrianXmlParser = std::make_shared<PedestrianXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPedestrianParser>(pedestrianXmlParser));
        auto miscObjectXmlParser = std::make_shared<MiscObjectXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementMiscObjectParser>(miscObjectXmlParser));
        return result;
    }

    void EntityObjectXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object)
    {
        auto catalogReference = std::make_shared<CatalogReferenceImpl>();
        // Setting the parent
        catalogReference->SetParent(object);
        _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

        object->SetCatalogReference(catalogReference);
        parserContext->AddCatalogReference(catalogReference);
    }
    void EntityObjectXmlParser::SubElementVehicleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object)
    {
        auto vehicle = std::make_shared<VehicleImpl>();
        // Setting the parent
        vehicle->SetParent(object);
        _vehicleXmlParser->ParseElement(indexedElement, parserContext, vehicle);

        object->SetVehicle(vehicle);
    }
    void EntityObjectXmlParser::SubElementPedestrianParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object)
    {
        auto pedestrian = std::make_shared<PedestrianImpl>();
        // Setting the parent
        pedestrian->SetParent(object);
        _pedestrianXmlParser->ParseElement(indexedElement, parserContext, pedestrian);

        object->SetPedestrian(pedestrian);
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

    void EntityRefXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityRefImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing EntityRef", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing EntityRef", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<EntityRefImpl>>> EntityRefXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<EntityRefImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<EntityRefImpl>, public XmlParserBase<EntityRefImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EntityRefImpl>& object) override
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

    void EntitySelectionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntitySelectionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing EntitySelection", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing EntitySelection", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<EntitySelectionImpl>>> EntitySelectionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<EntitySelectionImpl>>> result;

        class AttributeName: public IAttributeParser<EntitySelectionImpl>, public XmlParserBase<EntitySelectionImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EntitySelectionImpl>& object) override
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
        auto membersXmlParser = std::make_shared<SelectedEntitiesXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementMembersParser>(membersXmlParser));
        return result;
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

    void EnvironmentXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Environment", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Environment", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentImpl>>> EnvironmentXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentImpl>>> result;

        class AttributeName: public IAttributeParser<EnvironmentImpl>, public XmlParserBase<EnvironmentImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EnvironmentImpl>& object) override
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
        auto parameterDeclarationsXmlParser = std::make_shared<ParameterDeclarationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<WrappedListParser<EnvironmentImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(parameterDeclarationsXmlParser), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
        auto timeOfDayXmlParser = std::make_shared<TimeOfDayXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTimeOfDayParser>(timeOfDayXmlParser));
        auto weatherXmlParser = std::make_shared<WeatherXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementWeatherParser>(weatherXmlParser));
        auto roadConditionXmlParser = std::make_shared<RoadConditionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRoadConditionParser>(roadConditionXmlParser));
        return result;
    }

    void EnvironmentXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object)
    {
        auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
        // Setting the parent
        parameterDeclarations->SetParent(object);
        _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
        auto parameterDeclarationsList = object->GetParameterDeclarations();
        parameterDeclarationsList.push_back(parameterDeclarations);
    }
    void EnvironmentXmlParser::SubElementTimeOfDayParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object)
    {
        auto timeOfDay = std::make_shared<TimeOfDayImpl>();
        // Setting the parent
        timeOfDay->SetParent(object);
        _timeOfDayXmlParser->ParseElement(indexedElement, parserContext, timeOfDay);

        object->SetTimeOfDay(timeOfDay);
    }
    void EnvironmentXmlParser::SubElementWeatherParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object)
    {
        auto weather = std::make_shared<WeatherImpl>();
        // Setting the parent
        weather->SetParent(object);
        _weatherXmlParser->ParseElement(indexedElement, parserContext, weather);

        object->SetWeather(weather);
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

    void EnvironmentActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing EnvironmentAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing EnvironmentAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentActionImpl>>> EnvironmentActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<EnvironmentActionImpl>>> EnvironmentActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<EnvironmentActionImpl>>> result;
        auto environmentXmlParser = std::make_shared<EnvironmentXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEnvironmentParser>(environmentXmlParser));
        auto catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCatalogReferenceParser>(catalogReferenceXmlParser));
        return result;
    }

    void EnvironmentActionXmlParser::SubElementEnvironmentParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentActionImpl>& object)
    {
        auto environment = std::make_shared<EnvironmentImpl>();
        // Setting the parent
        environment->SetParent(object);
        _environmentXmlParser->ParseElement(indexedElement, parserContext, environment);

        object->SetEnvironment(environment);
    }
    void EnvironmentActionXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentActionImpl>& object)
    {
        auto catalogReference = std::make_shared<CatalogReferenceImpl>();
        // Setting the parent
        catalogReference->SetParent(object);
        _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

        object->SetCatalogReference(catalogReference);
        parserContext->AddCatalogReference(catalogReference);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EnvironmentCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void EnvironmentCatalogLocationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentCatalogLocationImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing EnvironmentCatalogLocation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing EnvironmentCatalogLocation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentCatalogLocationImpl>>> EnvironmentCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentCatalogLocationImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<EnvironmentCatalogLocationImpl>>> EnvironmentCatalogLocationXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<EnvironmentCatalogLocationImpl>>> result;
        auto directoryXmlParser = std::make_shared<DirectoryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDirectoryParser>(directoryXmlParser));
        return result;
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

    void EventXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EventImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Event", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Event", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<EventImpl>>> EventXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<EventImpl>>> result;

        class AttributePriority: public IAttributeParser<EventImpl>, public XmlParserBase<EventImpl>
        {
        public:
            AttributePriority(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EventImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EventImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<EventImpl>& object) override
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
        auto actionsXmlParser = std::make_shared<ActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementActionsParser>(actionsXmlParser));
        auto startTriggerXmlParser = std::make_shared<TriggerXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementStartTriggerParser>(startTriggerXmlParser));
        return result;
    }

    void EventXmlParser::SubElementActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EventImpl>& object)
    {
        auto actions = std::make_shared<ActionImpl>();
        // Setting the parent
        actions->SetParent(object);
        _actionXmlParser->ParseElement(indexedElement, parserContext, actions);
        auto actionsList = object->GetActions();
        actionsList.push_back(actions);
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

    void FileXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FileImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing File", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing File", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<FileImpl>>> FileXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<FileImpl>>> result;

        class AttributeFilepath: public IAttributeParser<FileImpl>, public XmlParserBase<FileImpl>
        {
        public:
            AttributeFilepath(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FileImpl>& object) override
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

    void FileHeaderXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FileHeaderImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing FileHeader", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing FileHeader", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<FileHeaderImpl>>> FileHeaderXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<FileHeaderImpl>>> result;

        class AttributeRevMajor: public IAttributeParser<FileHeaderImpl>, public XmlParserBase<FileHeaderImpl>
        {
        public:
            AttributeRevMajor(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FileHeaderImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FileHeaderImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FileHeaderImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FileHeaderImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FileHeaderImpl>& object) override
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

    void FinalSpeedXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FinalSpeedImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing FinalSpeed", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing FinalSpeed", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<FinalSpeedImpl>>> FinalSpeedXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<FinalSpeedImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<FinalSpeedImpl>>> FinalSpeedXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<FinalSpeedImpl>>> result;
        auto absoluteSpeedXmlParser = std::make_shared<AbsoluteSpeedXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementAbsoluteSpeedParser>(absoluteSpeedXmlParser));
        auto relativeSpeedToMasterXmlParser = std::make_shared<RelativeSpeedToMasterXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRelativeSpeedToMasterParser>(relativeSpeedToMasterXmlParser));
        return result;
    }

    void FinalSpeedXmlParser::SubElementAbsoluteSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FinalSpeedImpl>& object)
    {
        auto absoluteSpeed = std::make_shared<AbsoluteSpeedImpl>();
        // Setting the parent
        absoluteSpeed->SetParent(object);
        _absoluteSpeedXmlParser->ParseElement(indexedElement, parserContext, absoluteSpeed);

        object->SetAbsoluteSpeed(absoluteSpeed);
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

    void FogXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FogImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Fog", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Fog", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<FogImpl>>> FogXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<FogImpl>>> result;

        class AttributeVisualRange: public IAttributeParser<FogImpl>, public XmlParserBase<FogImpl>
        {
        public:
            AttributeVisualRange(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<FogImpl>& object) override
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
        auto boundingBoxXmlParser = std::make_shared<BoundingBoxXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementBoundingBoxParser>(boundingBoxXmlParser));
        return result;
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

    void FollowTrajectoryActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing FollowTrajectoryAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing FollowTrajectoryAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<FollowTrajectoryActionImpl>>> FollowTrajectoryActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<FollowTrajectoryActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<FollowTrajectoryActionImpl>>> FollowTrajectoryActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<FollowTrajectoryActionImpl>>> result;
        auto trajectoryXmlParser = std::make_shared<TrajectoryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrajectoryParser>(trajectoryXmlParser));
        auto catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCatalogReferenceParser>(catalogReferenceXmlParser));
        auto timeReferenceXmlParser = std::make_shared<TimeReferenceXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTimeReferenceParser>(timeReferenceXmlParser));
        auto trajectoryFollowingModeXmlParser = std::make_shared<TrajectoryFollowingModeXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrajectoryFollowingModeParser>(trajectoryFollowingModeXmlParser));
        return result;
    }

    void FollowTrajectoryActionXmlParser::SubElementTrajectoryParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object)
    {
        auto trajectory = std::make_shared<TrajectoryImpl>();
        // Setting the parent
        trajectory->SetParent(object);
        _trajectoryXmlParser->ParseElement(indexedElement, parserContext, trajectory);

        object->SetTrajectory(trajectory);
    }
    void FollowTrajectoryActionXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object)
    {
        auto catalogReference = std::make_shared<CatalogReferenceImpl>();
        // Setting the parent
        catalogReference->SetParent(object);
        _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

        object->SetCatalogReference(catalogReference);
        parserContext->AddCatalogReference(catalogReference);
    }
    void FollowTrajectoryActionXmlParser::SubElementTimeReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object)
    {
        auto timeReference = std::make_shared<TimeReferenceImpl>();
        // Setting the parent
        timeReference->SetParent(object);
        _timeReferenceXmlParser->ParseElement(indexedElement, parserContext, timeReference);

        object->SetTimeReference(timeReference);
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

    void GlobalActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing GlobalAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing GlobalAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<GlobalActionImpl>>> GlobalActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<GlobalActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<GlobalActionImpl>>> GlobalActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<GlobalActionImpl>>> result;
        auto environmentActionXmlParser = std::make_shared<EnvironmentActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEnvironmentActionParser>(environmentActionXmlParser));
        auto entityActionXmlParser = std::make_shared<EntityActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEntityActionParser>(entityActionXmlParser));
        auto parameterActionXmlParser = std::make_shared<ParameterActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementParameterActionParser>(parameterActionXmlParser));
        auto infrastructureActionXmlParser = std::make_shared<InfrastructureActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementInfrastructureActionParser>(infrastructureActionXmlParser));
        auto trafficActionXmlParser = std::make_shared<TrafficActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficActionParser>(trafficActionXmlParser));
        return result;
    }

    void GlobalActionXmlParser::SubElementEnvironmentActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object)
    {
        auto environmentAction = std::make_shared<EnvironmentActionImpl>();
        // Setting the parent
        environmentAction->SetParent(object);
        _environmentActionXmlParser->ParseElement(indexedElement, parserContext, environmentAction);

        object->SetEnvironmentAction(environmentAction);
    }
    void GlobalActionXmlParser::SubElementEntityActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object)
    {
        auto entityAction = std::make_shared<EntityActionImpl>();
        // Setting the parent
        entityAction->SetParent(object);
        _entityActionXmlParser->ParseElement(indexedElement, parserContext, entityAction);

        object->SetEntityAction(entityAction);
    }
    void GlobalActionXmlParser::SubElementParameterActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object)
    {
        auto parameterAction = std::make_shared<ParameterActionImpl>();
        // Setting the parent
        parameterAction->SetParent(object);
        _parameterActionXmlParser->ParseElement(indexedElement, parserContext, parameterAction);

        object->SetParameterAction(parameterAction);
    }
    void GlobalActionXmlParser::SubElementInfrastructureActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object)
    {
        auto infrastructureAction = std::make_shared<InfrastructureActionImpl>();
        // Setting the parent
        infrastructureAction->SetParent(object);
        _infrastructureActionXmlParser->ParseElement(indexedElement, parserContext, infrastructureAction);

        object->SetInfrastructureAction(infrastructureAction);
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

    void InRoutePositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InRoutePositionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing InRoutePosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing InRoutePosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<InRoutePositionImpl>>> InRoutePositionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<InRoutePositionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<InRoutePositionImpl>>> InRoutePositionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<InRoutePositionImpl>>> result;
        auto fromCurrentEntityXmlParser = std::make_shared<PositionOfCurrentEntityXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementFromCurrentEntityParser>(fromCurrentEntityXmlParser));
        auto fromRoadCoordinatesXmlParser = std::make_shared<PositionInRoadCoordinatesXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementFromRoadCoordinatesParser>(fromRoadCoordinatesXmlParser));
        auto fromLaneCoordinatesXmlParser = std::make_shared<PositionInLaneCoordinatesXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementFromLaneCoordinatesParser>(fromLaneCoordinatesXmlParser));
        return result;
    }

    void InRoutePositionXmlParser::SubElementFromCurrentEntityParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InRoutePositionImpl>& object)
    {
        auto fromCurrentEntity = std::make_shared<PositionOfCurrentEntityImpl>();
        // Setting the parent
        fromCurrentEntity->SetParent(object);
        _positionOfCurrentEntityXmlParser->ParseElement(indexedElement, parserContext, fromCurrentEntity);

        object->SetFromCurrentEntity(fromCurrentEntity);
    }
    void InRoutePositionXmlParser::SubElementFromRoadCoordinatesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InRoutePositionImpl>& object)
    {
        auto fromRoadCoordinates = std::make_shared<PositionInRoadCoordinatesImpl>();
        // Setting the parent
        fromRoadCoordinates->SetParent(object);
        _positionInRoadCoordinatesXmlParser->ParseElement(indexedElement, parserContext, fromRoadCoordinates);

        object->SetFromRoadCoordinates(fromRoadCoordinates);
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

    void InfrastructureActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InfrastructureActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing InfrastructureAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing InfrastructureAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<InfrastructureActionImpl>>> InfrastructureActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<InfrastructureActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<InfrastructureActionImpl>>> InfrastructureActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<InfrastructureActionImpl>>> result;
        auto trafficSignalActionXmlParser = std::make_shared<TrafficSignalActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficSignalActionParser>(trafficSignalActionXmlParser));
        return result;
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

    void InitXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Init", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Init", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<InitImpl>>> InitXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<InitImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<InitImpl>>> InitXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<InitImpl>>> result;
        auto actionsXmlParser = std::make_shared<InitActionsXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementActionsParser>(actionsXmlParser));
        return result;
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

    void InitActionsXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitActionsImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing InitActions", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing InitActions", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<InitActionsImpl>>> InitActionsXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<InitActionsImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<InitActionsImpl>>> InitActionsXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<InitActionsImpl>>> result;
        auto globalActionsXmlParser = std::make_shared<GlobalActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementGlobalActionsParser>(globalActionsXmlParser));
        auto userDefinedActionsXmlParser = std::make_shared<UserDefinedActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementUserDefinedActionsParser>(userDefinedActionsXmlParser));
        auto privatesXmlParser = std::make_shared<PrivateXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPrivatesParser>(privatesXmlParser));
        return result;
    }

    void InitActionsXmlParser::SubElementGlobalActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitActionsImpl>& object)
    {
        auto globalActions = std::make_shared<GlobalActionImpl>();
        // Setting the parent
        globalActions->SetParent(object);
        _globalActionXmlParser->ParseElement(indexedElement, parserContext, globalActions);
        auto globalActionsList = object->GetGlobalActions();
        globalActionsList.push_back(globalActions);
    }
    void InitActionsXmlParser::SubElementUserDefinedActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitActionsImpl>& object)
    {
        auto userDefinedActions = std::make_shared<UserDefinedActionImpl>();
        // Setting the parent
        userDefinedActions->SetParent(object);
        _userDefinedActionXmlParser->ParseElement(indexedElement, parserContext, userDefinedActions);
        auto userDefinedActionsList = object->GetUserDefinedActions();
        userDefinedActionsList.push_back(userDefinedActions);
    }
    void InitActionsXmlParser::SubElementPrivatesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitActionsImpl>& object)
    {
        auto privates = std::make_shared<PrivateImpl>();
        // Setting the parent
        privates->SetParent(object);
        _privateXmlParser->ParseElement(indexedElement, parserContext, privates);
        auto privatesList = object->GetPrivates();
        privatesList.push_back(privates);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a KnotImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void KnotXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<KnotImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Knot", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Knot", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<KnotImpl>>> KnotXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<KnotImpl>>> result;

        class AttributeValue: public IAttributeParser<KnotImpl>, public XmlParserBase<KnotImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<KnotImpl>& object) override
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

    void LaneChangeActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing LaneChangeAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing LaneChangeAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<LaneChangeActionImpl>>> LaneChangeActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneChangeActionImpl>>> result;

        class AttributeTargetLaneOffset: public IAttributeParser<LaneChangeActionImpl>, public XmlParserBase<LaneChangeActionImpl>
        {
        public:
            AttributeTargetLaneOffset(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LaneChangeActionImpl>& object) override
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
        auto laneChangeActionDynamicsXmlParser = std::make_shared<TransitionDynamicsXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementLaneChangeActionDynamicsParser>(laneChangeActionDynamicsXmlParser));
        auto laneChangeTargetXmlParser = std::make_shared<LaneChangeTargetXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementLaneChangeTargetParser>(laneChangeTargetXmlParser));
        return result;
    }

    void LaneChangeActionXmlParser::SubElementLaneChangeActionDynamicsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeActionImpl>& object)
    {
        auto laneChangeActionDynamics = std::make_shared<TransitionDynamicsImpl>();
        // Setting the parent
        laneChangeActionDynamics->SetParent(object);
        _transitionDynamicsXmlParser->ParseElement(indexedElement, parserContext, laneChangeActionDynamics);

        object->SetLaneChangeActionDynamics(laneChangeActionDynamics);
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

    void LaneChangeTargetXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeTargetImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing LaneChangeTarget", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing LaneChangeTarget", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<LaneChangeTargetImpl>>> LaneChangeTargetXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneChangeTargetImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<LaneChangeTargetImpl>>> LaneChangeTargetXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<LaneChangeTargetImpl>>> result;
        auto relativeTargetLaneXmlParser = std::make_shared<RelativeTargetLaneXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRelativeTargetLaneParser>(relativeTargetLaneXmlParser));
        auto absoluteTargetLaneXmlParser = std::make_shared<AbsoluteTargetLaneXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementAbsoluteTargetLaneParser>(absoluteTargetLaneXmlParser));
        return result;
    }

    void LaneChangeTargetXmlParser::SubElementRelativeTargetLaneParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeTargetImpl>& object)
    {
        auto relativeTargetLane = std::make_shared<RelativeTargetLaneImpl>();
        // Setting the parent
        relativeTargetLane->SetParent(object);
        _relativeTargetLaneXmlParser->ParseElement(indexedElement, parserContext, relativeTargetLane);

        object->SetRelativeTargetLane(relativeTargetLane);
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

    void LaneOffsetActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing LaneOffsetAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing LaneOffsetAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetActionImpl>>> LaneOffsetActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetActionImpl>>> result;

        class AttributeContinuous: public IAttributeParser<LaneOffsetActionImpl>, public XmlParserBase<LaneOffsetActionImpl>
        {
        public:
            AttributeContinuous(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LaneOffsetActionImpl>& object) override
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
        auto laneOffsetActionDynamicsXmlParser = std::make_shared<LaneOffsetActionDynamicsXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementLaneOffsetActionDynamicsParser>(laneOffsetActionDynamicsXmlParser));
        auto laneOffsetTargetXmlParser = std::make_shared<LaneOffsetTargetXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementLaneOffsetTargetParser>(laneOffsetTargetXmlParser));
        return result;
    }

    void LaneOffsetActionXmlParser::SubElementLaneOffsetActionDynamicsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetActionImpl>& object)
    {
        auto laneOffsetActionDynamics = std::make_shared<LaneOffsetActionDynamicsImpl>();
        // Setting the parent
        laneOffsetActionDynamics->SetParent(object);
        _laneOffsetActionDynamicsXmlParser->ParseElement(indexedElement, parserContext, laneOffsetActionDynamics);

        object->SetLaneOffsetActionDynamics(laneOffsetActionDynamics);
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

    void LaneOffsetActionDynamicsXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetActionDynamicsImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing LaneOffsetActionDynamics", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing LaneOffsetActionDynamics", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetActionDynamicsImpl>>> LaneOffsetActionDynamicsXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetActionDynamicsImpl>>> result;

        class AttributeMaxLateralAcc: public IAttributeParser<LaneOffsetActionDynamicsImpl>, public XmlParserBase<LaneOffsetActionDynamicsImpl>
        {
        public:
            AttributeMaxLateralAcc(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LaneOffsetActionDynamicsImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LaneOffsetActionDynamicsImpl>& object) override
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

    void LaneOffsetTargetXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetTargetImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing LaneOffsetTarget", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing LaneOffsetTarget", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetTargetImpl>>> LaneOffsetTargetXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetTargetImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<LaneOffsetTargetImpl>>> LaneOffsetTargetXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<LaneOffsetTargetImpl>>> result;
        auto relativeTargetLaneOffsetXmlParser = std::make_shared<RelativeTargetLaneOffsetXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRelativeTargetLaneOffsetParser>(relativeTargetLaneOffsetXmlParser));
        auto absoluteTargetLaneOffsetXmlParser = std::make_shared<AbsoluteTargetLaneOffsetXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementAbsoluteTargetLaneOffsetParser>(absoluteTargetLaneOffsetXmlParser));
        return result;
    }

    void LaneOffsetTargetXmlParser::SubElementRelativeTargetLaneOffsetParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetTargetImpl>& object)
    {
        auto relativeTargetLaneOffset = std::make_shared<RelativeTargetLaneOffsetImpl>();
        // Setting the parent
        relativeTargetLaneOffset->SetParent(object);
        _relativeTargetLaneOffsetXmlParser->ParseElement(indexedElement, parserContext, relativeTargetLaneOffset);

        object->SetRelativeTargetLaneOffset(relativeTargetLaneOffset);
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

    void LanePositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LanePositionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing LanePosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing LanePosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<LanePositionImpl>>> LanePositionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<LanePositionImpl>>> result;

        class AttributeRoadId: public IAttributeParser<LanePositionImpl>, public XmlParserBase<LanePositionImpl>
        {
        public:
            AttributeRoadId(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LanePositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LanePositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LanePositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LanePositionImpl>& object) override
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
        auto orientationXmlParser = std::make_shared<OrientationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementOrientationParser>(orientationXmlParser));
        return result;
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

    void LateralActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing LateralAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing LateralAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<LateralActionImpl>>> LateralActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<LateralActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<LateralActionImpl>>> LateralActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<LateralActionImpl>>> result;
        auto laneChangeActionXmlParser = std::make_shared<LaneChangeActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementLaneChangeActionParser>(laneChangeActionXmlParser));
        auto laneOffsetActionXmlParser = std::make_shared<LaneOffsetActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementLaneOffsetActionParser>(laneOffsetActionXmlParser));
        auto lateralDistanceActionXmlParser = std::make_shared<LateralDistanceActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementLateralDistanceActionParser>(lateralDistanceActionXmlParser));
        return result;
    }

    void LateralActionXmlParser::SubElementLaneChangeActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralActionImpl>& object)
    {
        auto laneChangeAction = std::make_shared<LaneChangeActionImpl>();
        // Setting the parent
        laneChangeAction->SetParent(object);
        _laneChangeActionXmlParser->ParseElement(indexedElement, parserContext, laneChangeAction);

        object->SetLaneChangeAction(laneChangeAction);
    }
    void LateralActionXmlParser::SubElementLaneOffsetActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralActionImpl>& object)
    {
        auto laneOffsetAction = std::make_shared<LaneOffsetActionImpl>();
        // Setting the parent
        laneOffsetAction->SetParent(object);
        _laneOffsetActionXmlParser->ParseElement(indexedElement, parserContext, laneOffsetAction);

        object->SetLaneOffsetAction(laneOffsetAction);
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

    void LateralDistanceActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralDistanceActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing LateralDistanceAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing LateralDistanceAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<LateralDistanceActionImpl>>> LateralDistanceActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<LateralDistanceActionImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<LateralDistanceActionImpl>, public XmlParserBase<LateralDistanceActionImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LateralDistanceActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LateralDistanceActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LateralDistanceActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LateralDistanceActionImpl>& object) override
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
        auto dynamicConstraintsXmlParser = std::make_shared<DynamicConstraintsXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDynamicConstraintsParser>(dynamicConstraintsXmlParser));
        return result;
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

    void LongitudinalActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LongitudinalActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing LongitudinalAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing LongitudinalAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<LongitudinalActionImpl>>> LongitudinalActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<LongitudinalActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<LongitudinalActionImpl>>> LongitudinalActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<LongitudinalActionImpl>>> result;
        auto speedActionXmlParser = std::make_shared<SpeedActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementSpeedActionParser>(speedActionXmlParser));
        auto longitudinalDistanceActionXmlParser = std::make_shared<LongitudinalDistanceActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementLongitudinalDistanceActionParser>(longitudinalDistanceActionXmlParser));
        return result;
    }

    void LongitudinalActionXmlParser::SubElementSpeedActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LongitudinalActionImpl>& object)
    {
        auto speedAction = std::make_shared<SpeedActionImpl>();
        // Setting the parent
        speedAction->SetParent(object);
        _speedActionXmlParser->ParseElement(indexedElement, parserContext, speedAction);

        object->SetSpeedAction(speedAction);
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

    void LongitudinalDistanceActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LongitudinalDistanceActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing LongitudinalDistanceAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing LongitudinalDistanceAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<LongitudinalDistanceActionImpl>>> LongitudinalDistanceActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<LongitudinalDistanceActionImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<LongitudinalDistanceActionImpl>, public XmlParserBase<LongitudinalDistanceActionImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LongitudinalDistanceActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LongitudinalDistanceActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LongitudinalDistanceActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LongitudinalDistanceActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<LongitudinalDistanceActionImpl>& object) override
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
        auto dynamicConstraintsXmlParser = std::make_shared<DynamicConstraintsXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDynamicConstraintsParser>(dynamicConstraintsXmlParser));
        return result;
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

    void ManeuverXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Maneuver", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Maneuver", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverImpl>>> ManeuverXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverImpl>>> result;

        class AttributeName: public IAttributeParser<ManeuverImpl>, public XmlParserBase<ManeuverImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ManeuverImpl>& object) override
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
        auto parameterDeclarationsXmlParser = std::make_shared<ParameterDeclarationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<WrappedListParser<ManeuverImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(parameterDeclarationsXmlParser), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
        auto eventsXmlParser = std::make_shared<EventXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEventsParser>(eventsXmlParser));
        return result;
    }

    void ManeuverXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverImpl>& object)
    {
        auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
        // Setting the parent
        parameterDeclarations->SetParent(object);
        _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
        auto parameterDeclarationsList = object->GetParameterDeclarations();
        parameterDeclarationsList.push_back(parameterDeclarations);
    }
    void ManeuverXmlParser::SubElementEventsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverImpl>& object)
    {
        auto events = std::make_shared<EventImpl>();
        // Setting the parent
        events->SetParent(object);
        _eventXmlParser->ParseElement(indexedElement, parserContext, events);
        auto eventsList = object->GetEvents();
        eventsList.push_back(events);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ManeuverCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void ManeuverCatalogLocationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverCatalogLocationImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ManeuverCatalogLocation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ManeuverCatalogLocation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverCatalogLocationImpl>>> ManeuverCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverCatalogLocationImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<ManeuverCatalogLocationImpl>>> ManeuverCatalogLocationXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<ManeuverCatalogLocationImpl>>> result;
        auto directoryXmlParser = std::make_shared<DirectoryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDirectoryParser>(directoryXmlParser));
        return result;
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

    void ManeuverGroupXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverGroupImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ManeuverGroup", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ManeuverGroup", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverGroupImpl>>> ManeuverGroupXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverGroupImpl>>> result;

        class AttributeMaximumExecutionCount: public IAttributeParser<ManeuverGroupImpl>, public XmlParserBase<ManeuverGroupImpl>
        {
        public:
            AttributeMaximumExecutionCount(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ManeuverGroupImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ManeuverGroupImpl>& object) override
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
        auto actorsXmlParser = std::make_shared<ActorsXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementActorsParser>(actorsXmlParser));
        auto catalogReferencesXmlParser = std::make_shared<CatalogReferenceXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCatalogReferencesParser>(catalogReferencesXmlParser));
        auto maneuversXmlParser = std::make_shared<ManeuverXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementManeuversParser>(maneuversXmlParser));
        return result;
    }

    void ManeuverGroupXmlParser::SubElementActorsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverGroupImpl>& object)
    {
        auto actors = std::make_shared<ActorsImpl>();
        // Setting the parent
        actors->SetParent(object);
        _actorsXmlParser->ParseElement(indexedElement, parserContext, actors);

        object->SetActors(actors);
    }
    void ManeuverGroupXmlParser::SubElementCatalogReferencesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverGroupImpl>& object)
    {
        auto catalogReferences = std::make_shared<CatalogReferenceImpl>();
        // Setting the parent
        catalogReferences->SetParent(object);
        _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReferences);
        auto catalogReferencesList = object->GetCatalogReferences();
        catalogReferencesList.push_back(catalogReferences);
        parserContext->AddCatalogReference(catalogReferences);
    }
    void ManeuverGroupXmlParser::SubElementManeuversParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverGroupImpl>& object)
    {
        auto maneuvers = std::make_shared<ManeuverImpl>();
        // Setting the parent
        maneuvers->SetParent(object);
        _maneuverXmlParser->ParseElement(indexedElement, parserContext, maneuvers);
        auto maneuversList = object->GetManeuvers();
        maneuversList.push_back(maneuvers);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a MiscObjectImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void MiscObjectXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing MiscObject", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing MiscObject", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<MiscObjectImpl>>> MiscObjectXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<MiscObjectImpl>>> result;

        class AttributeMiscObjectCategory: public IAttributeParser<MiscObjectImpl>, public XmlParserBase<MiscObjectImpl>
        {
        public:
            AttributeMiscObjectCategory(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<MiscObjectImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<MiscObjectImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<MiscObjectImpl>& object) override
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
        auto parameterDeclarationsXmlParser = std::make_shared<ParameterDeclarationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<WrappedListParser<MiscObjectImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(parameterDeclarationsXmlParser), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
        auto boundingBoxXmlParser = std::make_shared<BoundingBoxXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementBoundingBoxParser>(boundingBoxXmlParser));
        auto propertiesXmlParser = std::make_shared<PropertiesXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPropertiesParser>(propertiesXmlParser));
        return result;
    }

    void MiscObjectXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectImpl>& object)
    {
        auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
        // Setting the parent
        parameterDeclarations->SetParent(object);
        _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
        auto parameterDeclarationsList = object->GetParameterDeclarations();
        parameterDeclarationsList.push_back(parameterDeclarations);
    }
    void MiscObjectXmlParser::SubElementBoundingBoxParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectImpl>& object)
    {
        auto boundingBox = std::make_shared<BoundingBoxImpl>();
        // Setting the parent
        boundingBox->SetParent(object);
        _boundingBoxXmlParser->ParseElement(indexedElement, parserContext, boundingBox);

        object->SetBoundingBox(boundingBox);
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

    void MiscObjectCatalogLocationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectCatalogLocationImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing MiscObjectCatalogLocation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing MiscObjectCatalogLocation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<MiscObjectCatalogLocationImpl>>> MiscObjectCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<MiscObjectCatalogLocationImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<MiscObjectCatalogLocationImpl>>> MiscObjectCatalogLocationXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<MiscObjectCatalogLocationImpl>>> result;
        auto directoryXmlParser = std::make_shared<DirectoryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDirectoryParser>(directoryXmlParser));
        return result;
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

    void ModifyRuleXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ModifyRuleImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ModifyRule", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ModifyRule", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ModifyRuleImpl>>> ModifyRuleXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ModifyRuleImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<ModifyRuleImpl>>> ModifyRuleXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<ModifyRuleImpl>>> result;
        auto addValueXmlParser = std::make_shared<ParameterAddValueRuleXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementAddValueParser>(addValueXmlParser));
        auto multiplyByValueXmlParser = std::make_shared<ParameterMultiplyByValueRuleXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementMultiplyByValueParser>(multiplyByValueXmlParser));
        return result;
    }

    void ModifyRuleXmlParser::SubElementAddValueParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ModifyRuleImpl>& object)
    {
        auto addValue = std::make_shared<ParameterAddValueRuleImpl>();
        // Setting the parent
        addValue->SetParent(object);
        _parameterAddValueRuleXmlParser->ParseElement(indexedElement, parserContext, addValue);

        object->SetAddValue(addValue);
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

    void NoneXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<NoneImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing None", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing None", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

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

    void NurbsXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<NurbsImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Nurbs", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Nurbs", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<NurbsImpl>>> NurbsXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<NurbsImpl>>> result;

        class AttributeOrder: public IAttributeParser<NurbsImpl>, public XmlParserBase<NurbsImpl>
        {
        public:
            AttributeOrder(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<NurbsImpl>& object) override
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
        auto controlPointsXmlParser = std::make_shared<ControlPointXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementControlPointsParser>(controlPointsXmlParser));
        auto knotsXmlParser = std::make_shared<KnotXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementKnotsParser>(knotsXmlParser));
        return result;
    }

    void NurbsXmlParser::SubElementControlPointsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<NurbsImpl>& object)
    {
        auto controlPoints = std::make_shared<ControlPointImpl>();
        // Setting the parent
        controlPoints->SetParent(object);
        _controlPointXmlParser->ParseElement(indexedElement, parserContext, controlPoints);
        auto controlPointsList = object->GetControlPoints();
        controlPointsList.push_back(controlPoints);
    }
    void NurbsXmlParser::SubElementKnotsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<NurbsImpl>& object)
    {
        auto knots = std::make_shared<KnotImpl>();
        // Setting the parent
        knots->SetParent(object);
        _knotXmlParser->ParseElement(indexedElement, parserContext, knots);
        auto knotsList = object->GetKnots();
        knotsList.push_back(knots);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ObjectControllerImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void ObjectControllerXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ObjectControllerImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ObjectController", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ObjectController", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ObjectControllerImpl>>> ObjectControllerXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ObjectControllerImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<ObjectControllerImpl>>> ObjectControllerXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<ObjectControllerImpl>>> result;
        auto catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCatalogReferenceParser>(catalogReferenceXmlParser));
        auto controllerXmlParser = std::make_shared<ControllerXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementControllerParser>(controllerXmlParser));
        return result;
    }

    void ObjectControllerXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ObjectControllerImpl>& object)
    {
        auto catalogReference = std::make_shared<CatalogReferenceImpl>();
        // Setting the parent
        catalogReference->SetParent(object);
        _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

        object->SetCatalogReference(catalogReference);
        parserContext->AddCatalogReference(catalogReference);
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

    void OffroadConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OffroadConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing OffroadCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing OffroadCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<OffroadConditionImpl>>> OffroadConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<OffroadConditionImpl>>> result;

        class AttributeDuration: public IAttributeParser<OffroadConditionImpl>, public XmlParserBase<OffroadConditionImpl>
        {
        public:
            AttributeDuration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OffroadConditionImpl>& object) override
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

    void OpenScenarioXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing OpenScenario", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing OpenScenario", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<OpenScenarioImpl>>> OpenScenarioXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<OpenScenarioImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<OpenScenarioImpl>>> OpenScenarioXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<OpenScenarioImpl>>> result;
        auto fileHeaderXmlParser = std::make_shared<FileHeaderXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementFileHeaderParser>(fileHeaderXmlParser));
        auto openScenarioCategoryXmlParser = std::make_shared<OpenScenarioCategoryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementOpenScenarioCategoryParser>(openScenarioCategoryXmlParser));
        return result;
    }

    void OpenScenarioXmlParser::SubElementFileHeaderParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioImpl>& object)
    {
        auto fileHeader = std::make_shared<FileHeaderImpl>();
        // Setting the parent
        fileHeader->SetParent(object);
        _fileHeaderXmlParser->ParseElement(indexedElement, parserContext, fileHeader);

        object->SetFileHeader(fileHeader);
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

    void OpenScenarioCategoryXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioCategoryImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing OpenScenarioCategory", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlGroupParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing OpenScenarioCategory", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }


    std::vector<std::shared_ptr<IElementParser<OpenScenarioCategoryImpl>>> OpenScenarioCategoryXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<OpenScenarioCategoryImpl>>> result;
        auto scenarioDefinitionXmlParser = std::make_shared<ScenarioDefinitionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementScenarioDefinitionParser>(scenarioDefinitionXmlParser));
        auto catalogDefinitionXmlParser = std::make_shared<CatalogDefinitionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCatalogDefinitionParser>(catalogDefinitionXmlParser));
        return result;
    }

    void OpenScenarioCategoryXmlParser::SubElementScenarioDefinitionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioCategoryImpl>& object)
    {
        auto scenarioDefinition = std::make_shared<ScenarioDefinitionImpl>();
        // Setting the parent
        scenarioDefinition->SetParent(object);
        _scenarioDefinitionXmlParser->ParseElement(indexedElement, parserContext, scenarioDefinition);

        object->SetScenarioDefinition(scenarioDefinition);
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

    void OrientationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OrientationImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Orientation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Orientation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<OrientationImpl>>> OrientationXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<OrientationImpl>>> result;

        class AttributeType: public IAttributeParser<OrientationImpl>, public XmlParserBase<OrientationImpl>
        {
        public:
            AttributeType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OrientationImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OrientationImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OrientationImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OrientationImpl>& object) override
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

    void OverrideBrakeActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideBrakeActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing OverrideBrakeAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing OverrideBrakeAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<OverrideBrakeActionImpl>>> OverrideBrakeActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideBrakeActionImpl>>> result;

        class AttributeValue: public IAttributeParser<OverrideBrakeActionImpl>, public XmlParserBase<OverrideBrakeActionImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideBrakeActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideBrakeActionImpl>& object) override
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

    void OverrideClutchActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideClutchActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing OverrideClutchAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing OverrideClutchAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<OverrideClutchActionImpl>>> OverrideClutchActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideClutchActionImpl>>> result;

        class AttributeValue: public IAttributeParser<OverrideClutchActionImpl>, public XmlParserBase<OverrideClutchActionImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideClutchActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideClutchActionImpl>& object) override
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

    void OverrideControllerValueActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing OverrideControllerValueAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing OverrideControllerValueAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<OverrideControllerValueActionImpl>>> OverrideControllerValueActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideControllerValueActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<OverrideControllerValueActionImpl>>> OverrideControllerValueActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<OverrideControllerValueActionImpl>>> result;
        auto throttleXmlParser = std::make_shared<OverrideThrottleActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementThrottleParser>(throttleXmlParser));
        auto brakeXmlParser = std::make_shared<OverrideBrakeActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementBrakeParser>(brakeXmlParser));
        auto clutchXmlParser = std::make_shared<OverrideClutchActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementClutchParser>(clutchXmlParser));
        auto parkingBrakeXmlParser = std::make_shared<OverrideParkingBrakeActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementParkingBrakeParser>(parkingBrakeXmlParser));
        auto steeringWheelXmlParser = std::make_shared<OverrideSteeringWheelActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementSteeringWheelParser>(steeringWheelXmlParser));
        auto gearXmlParser = std::make_shared<OverrideGearActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementGearParser>(gearXmlParser));
        return result;
    }

    void OverrideControllerValueActionXmlParser::SubElementThrottleParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object)
    {
        auto throttle = std::make_shared<OverrideThrottleActionImpl>();
        // Setting the parent
        throttle->SetParent(object);
        _overrideThrottleActionXmlParser->ParseElement(indexedElement, parserContext, throttle);

        object->SetThrottle(throttle);
    }
    void OverrideControllerValueActionXmlParser::SubElementBrakeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object)
    {
        auto brake = std::make_shared<OverrideBrakeActionImpl>();
        // Setting the parent
        brake->SetParent(object);
        _overrideBrakeActionXmlParser->ParseElement(indexedElement, parserContext, brake);

        object->SetBrake(brake);
    }
    void OverrideControllerValueActionXmlParser::SubElementClutchParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object)
    {
        auto clutch = std::make_shared<OverrideClutchActionImpl>();
        // Setting the parent
        clutch->SetParent(object);
        _overrideClutchActionXmlParser->ParseElement(indexedElement, parserContext, clutch);

        object->SetClutch(clutch);
    }
    void OverrideControllerValueActionXmlParser::SubElementParkingBrakeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object)
    {
        auto parkingBrake = std::make_shared<OverrideParkingBrakeActionImpl>();
        // Setting the parent
        parkingBrake->SetParent(object);
        _overrideParkingBrakeActionXmlParser->ParseElement(indexedElement, parserContext, parkingBrake);

        object->SetParkingBrake(parkingBrake);
    }
    void OverrideControllerValueActionXmlParser::SubElementSteeringWheelParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object)
    {
        auto steeringWheel = std::make_shared<OverrideSteeringWheelActionImpl>();
        // Setting the parent
        steeringWheel->SetParent(object);
        _overrideSteeringWheelActionXmlParser->ParseElement(indexedElement, parserContext, steeringWheel);

        object->SetSteeringWheel(steeringWheel);
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

    void OverrideGearActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideGearActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing OverrideGearAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing OverrideGearAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<OverrideGearActionImpl>>> OverrideGearActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideGearActionImpl>>> result;

        class AttributeNumber: public IAttributeParser<OverrideGearActionImpl>, public XmlParserBase<OverrideGearActionImpl>
        {
        public:
            AttributeNumber(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideGearActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideGearActionImpl>& object) override
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

    void OverrideParkingBrakeActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideParkingBrakeActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing OverrideParkingBrakeAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing OverrideParkingBrakeAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<OverrideParkingBrakeActionImpl>>> OverrideParkingBrakeActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideParkingBrakeActionImpl>>> result;

        class AttributeValue: public IAttributeParser<OverrideParkingBrakeActionImpl>, public XmlParserBase<OverrideParkingBrakeActionImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideParkingBrakeActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideParkingBrakeActionImpl>& object) override
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

    void OverrideSteeringWheelActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideSteeringWheelActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing OverrideSteeringWheelAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing OverrideSteeringWheelAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<OverrideSteeringWheelActionImpl>>> OverrideSteeringWheelActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideSteeringWheelActionImpl>>> result;

        class AttributeValue: public IAttributeParser<OverrideSteeringWheelActionImpl>, public XmlParserBase<OverrideSteeringWheelActionImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideSteeringWheelActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideSteeringWheelActionImpl>& object) override
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

    void OverrideThrottleActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideThrottleActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing OverrideThrottleAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing OverrideThrottleAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<OverrideThrottleActionImpl>>> OverrideThrottleActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideThrottleActionImpl>>> result;

        class AttributeValue: public IAttributeParser<OverrideThrottleActionImpl>, public XmlParserBase<OverrideThrottleActionImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideThrottleActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<OverrideThrottleActionImpl>& object) override
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


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void ParameterActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ParameterAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ParameterAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ParameterActionImpl>>> ParameterActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterActionImpl>>> result;

        class AttributeParameterRef: public IAttributeParser<ParameterActionImpl>, public XmlParserBase<ParameterActionImpl>
        {
        public:
            AttributeParameterRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterActionImpl>& object) override
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
        auto setActionXmlParser = std::make_shared<ParameterSetActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementSetActionParser>(setActionXmlParser));
        auto modifyActionXmlParser = std::make_shared<ParameterModifyActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementModifyActionParser>(modifyActionXmlParser));
        return result;
    }

    void ParameterActionXmlParser::SubElementSetActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterActionImpl>& object)
    {
        auto setAction = std::make_shared<ParameterSetActionImpl>();
        // Setting the parent
        setAction->SetParent(object);
        _parameterSetActionXmlParser->ParseElement(indexedElement, parserContext, setAction);

        object->SetSetAction(setAction);
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

    void ParameterAddValueRuleXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterAddValueRuleImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ParameterAddValueRule", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ParameterAddValueRule", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ParameterAddValueRuleImpl>>> ParameterAddValueRuleXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterAddValueRuleImpl>>> result;

        class AttributeValue: public IAttributeParser<ParameterAddValueRuleImpl>, public XmlParserBase<ParameterAddValueRuleImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterAddValueRuleImpl>& object) override
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

    void ParameterAssignmentXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterAssignmentImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ParameterAssignment", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ParameterAssignment", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ParameterAssignmentImpl>>> ParameterAssignmentXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterAssignmentImpl>>> result;

        class AttributeParameterRef: public IAttributeParser<ParameterAssignmentImpl>, public XmlParserBase<ParameterAssignmentImpl>
        {
        public:
            AttributeParameterRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterAssignmentImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterAssignmentImpl>& object) override
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

    void ParameterConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ParameterCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ParameterCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ParameterConditionImpl>>> ParameterConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterConditionImpl>>> result;

        class AttributeParameterRef: public IAttributeParser<ParameterConditionImpl>, public XmlParserBase<ParameterConditionImpl>
        {
        public:
            AttributeParameterRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterConditionImpl>& object) override
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

    void ParameterDeclarationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterDeclarationImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ParameterDeclaration", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ParameterDeclaration", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ParameterDeclarationImpl>>> ParameterDeclarationXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterDeclarationImpl>>> result;

        class AttributeName: public IAttributeParser<ParameterDeclarationImpl>, public XmlParserBase<ParameterDeclarationImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterDeclarationImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterDeclarationImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterDeclarationImpl>& object) override
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

    void ParameterModifyActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterModifyActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ParameterModifyAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ParameterModifyAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ParameterModifyActionImpl>>> ParameterModifyActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterModifyActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<ParameterModifyActionImpl>>> ParameterModifyActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<ParameterModifyActionImpl>>> result;
        auto ruleXmlParser = std::make_shared<ModifyRuleXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRuleParser>(ruleXmlParser));
        return result;
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

    void ParameterMultiplyByValueRuleXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterMultiplyByValueRuleImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ParameterMultiplyByValueRule", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ParameterMultiplyByValueRule", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ParameterMultiplyByValueRuleImpl>>> ParameterMultiplyByValueRuleXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterMultiplyByValueRuleImpl>>> result;

        class AttributeValue: public IAttributeParser<ParameterMultiplyByValueRuleImpl>, public XmlParserBase<ParameterMultiplyByValueRuleImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterMultiplyByValueRuleImpl>& object) override
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

    void ParameterSetActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterSetActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ParameterSetAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ParameterSetAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ParameterSetActionImpl>>> ParameterSetActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterSetActionImpl>>> result;

        class AttributeValue: public IAttributeParser<ParameterSetActionImpl>, public XmlParserBase<ParameterSetActionImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ParameterSetActionImpl>& object) override
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

    void PedestrianXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Pedestrian", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Pedestrian", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PedestrianImpl>>> PedestrianXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PedestrianImpl>>> result;

        class AttributeModel: public IAttributeParser<PedestrianImpl>, public XmlParserBase<PedestrianImpl>
        {
        public:
            AttributeModel(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PedestrianImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PedestrianImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PedestrianImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PedestrianImpl>& object) override
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
        auto parameterDeclarationsXmlParser = std::make_shared<ParameterDeclarationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<WrappedListParser<PedestrianImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(parameterDeclarationsXmlParser), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
        auto boundingBoxXmlParser = std::make_shared<BoundingBoxXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementBoundingBoxParser>(boundingBoxXmlParser));
        auto propertiesXmlParser = std::make_shared<PropertiesXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPropertiesParser>(propertiesXmlParser));
        return result;
    }

    void PedestrianXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianImpl>& object)
    {
        auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
        // Setting the parent
        parameterDeclarations->SetParent(object);
        _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
        auto parameterDeclarationsList = object->GetParameterDeclarations();
        parameterDeclarationsList.push_back(parameterDeclarations);
    }
    void PedestrianXmlParser::SubElementBoundingBoxParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianImpl>& object)
    {
        auto boundingBox = std::make_shared<BoundingBoxImpl>();
        // Setting the parent
        boundingBox->SetParent(object);
        _boundingBoxXmlParser->ParseElement(indexedElement, parserContext, boundingBox);

        object->SetBoundingBox(boundingBox);
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

    void PedestrianCatalogLocationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianCatalogLocationImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing PedestrianCatalogLocation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing PedestrianCatalogLocation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PedestrianCatalogLocationImpl>>> PedestrianCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PedestrianCatalogLocationImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<PedestrianCatalogLocationImpl>>> PedestrianCatalogLocationXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<PedestrianCatalogLocationImpl>>> result;
        auto directoryXmlParser = std::make_shared<DirectoryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDirectoryParser>(directoryXmlParser));
        return result;
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

    void PerformanceXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PerformanceImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Performance", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Performance", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PerformanceImpl>>> PerformanceXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PerformanceImpl>>> result;

        class AttributeMaxSpeed: public IAttributeParser<PerformanceImpl>, public XmlParserBase<PerformanceImpl>
        {
        public:
            AttributeMaxSpeed(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PerformanceImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PerformanceImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PerformanceImpl>& object) override
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

    void PhaseXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PhaseImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Phase", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Phase", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PhaseImpl>>> PhaseXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PhaseImpl>>> result;

        class AttributeName: public IAttributeParser<PhaseImpl>, public XmlParserBase<PhaseImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PhaseImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PhaseImpl>& object) override
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
        auto trafficSignalStatesXmlParser = std::make_shared<TrafficSignalStateXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficSignalStatesParser>(trafficSignalStatesXmlParser));
        return result;
    }

    void PhaseXmlParser::SubElementTrafficSignalStatesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PhaseImpl>& object)
    {
        auto trafficSignalStates = std::make_shared<TrafficSignalStateImpl>();
        // Setting the parent
        trafficSignalStates->SetParent(object);
        _trafficSignalStateXmlParser->ParseElement(indexedElement, parserContext, trafficSignalStates);
        auto trafficSignalStatesList = object->GetTrafficSignalStates();
        trafficSignalStatesList.push_back(trafficSignalStates);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PolylineImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void PolylineXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PolylineImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Polyline", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Polyline", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PolylineImpl>>> PolylineXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PolylineImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<PolylineImpl>>> PolylineXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<PolylineImpl>>> result;
        auto verticesXmlParser = std::make_shared<VertexXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementVerticesParser>(verticesXmlParser));
        return result;
    }

    void PolylineXmlParser::SubElementVerticesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PolylineImpl>& object)
    {
        auto vertices = std::make_shared<VertexImpl>();
        // Setting the parent
        vertices->SetParent(object);
        _vertexXmlParser->ParseElement(indexedElement, parserContext, vertices);
        auto verticesList = object->GetVertices();
        verticesList.push_back(vertices);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void PositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Position", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Position", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PositionImpl>>> PositionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PositionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<PositionImpl>>> PositionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<PositionImpl>>> result;
        auto worldPositionXmlParser = std::make_shared<WorldPositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementWorldPositionParser>(worldPositionXmlParser));
        auto relativeWorldPositionXmlParser = std::make_shared<RelativeWorldPositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRelativeWorldPositionParser>(relativeWorldPositionXmlParser));
        auto relativeObjectPositionXmlParser = std::make_shared<RelativeObjectPositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRelativeObjectPositionParser>(relativeObjectPositionXmlParser));
        auto roadPositionXmlParser = std::make_shared<RoadPositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRoadPositionParser>(roadPositionXmlParser));
        auto relativeRoadPositionXmlParser = std::make_shared<RelativeRoadPositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRelativeRoadPositionParser>(relativeRoadPositionXmlParser));
        auto lanePositionXmlParser = std::make_shared<LanePositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementLanePositionParser>(lanePositionXmlParser));
        auto relativeLanePositionXmlParser = std::make_shared<RelativeLanePositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRelativeLanePositionParser>(relativeLanePositionXmlParser));
        auto routePositionXmlParser = std::make_shared<RoutePositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRoutePositionParser>(routePositionXmlParser));
        return result;
    }

    void PositionXmlParser::SubElementWorldPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
    {
        auto worldPosition = std::make_shared<WorldPositionImpl>();
        // Setting the parent
        worldPosition->SetParent(object);
        _worldPositionXmlParser->ParseElement(indexedElement, parserContext, worldPosition);

        object->SetWorldPosition(worldPosition);
    }
    void PositionXmlParser::SubElementRelativeWorldPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
    {
        auto relativeWorldPosition = std::make_shared<RelativeWorldPositionImpl>();
        // Setting the parent
        relativeWorldPosition->SetParent(object);
        _relativeWorldPositionXmlParser->ParseElement(indexedElement, parserContext, relativeWorldPosition);

        object->SetRelativeWorldPosition(relativeWorldPosition);
    }
    void PositionXmlParser::SubElementRelativeObjectPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
    {
        auto relativeObjectPosition = std::make_shared<RelativeObjectPositionImpl>();
        // Setting the parent
        relativeObjectPosition->SetParent(object);
        _relativeObjectPositionXmlParser->ParseElement(indexedElement, parserContext, relativeObjectPosition);

        object->SetRelativeObjectPosition(relativeObjectPosition);
    }
    void PositionXmlParser::SubElementRoadPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
    {
        auto roadPosition = std::make_shared<RoadPositionImpl>();
        // Setting the parent
        roadPosition->SetParent(object);
        _roadPositionXmlParser->ParseElement(indexedElement, parserContext, roadPosition);

        object->SetRoadPosition(roadPosition);
    }
    void PositionXmlParser::SubElementRelativeRoadPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
    {
        auto relativeRoadPosition = std::make_shared<RelativeRoadPositionImpl>();
        // Setting the parent
        relativeRoadPosition->SetParent(object);
        _relativeRoadPositionXmlParser->ParseElement(indexedElement, parserContext, relativeRoadPosition);

        object->SetRelativeRoadPosition(relativeRoadPosition);
    }
    void PositionXmlParser::SubElementLanePositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
    {
        auto lanePosition = std::make_shared<LanePositionImpl>();
        // Setting the parent
        lanePosition->SetParent(object);
        _lanePositionXmlParser->ParseElement(indexedElement, parserContext, lanePosition);

        object->SetLanePosition(lanePosition);
    }
    void PositionXmlParser::SubElementRelativeLanePositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object)
    {
        auto relativeLanePosition = std::make_shared<RelativeLanePositionImpl>();
        // Setting the parent
        relativeLanePosition->SetParent(object);
        _relativeLanePositionXmlParser->ParseElement(indexedElement, parserContext, relativeLanePosition);

        object->SetRelativeLanePosition(relativeLanePosition);
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

    void PositionInLaneCoordinatesXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionInLaneCoordinatesImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing PositionInLaneCoordinates", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing PositionInLaneCoordinates", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PositionInLaneCoordinatesImpl>>> PositionInLaneCoordinatesXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PositionInLaneCoordinatesImpl>>> result;

        class AttributePathS: public IAttributeParser<PositionInLaneCoordinatesImpl>, public XmlParserBase<PositionInLaneCoordinatesImpl>
        {
        public:
            AttributePathS(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PositionInLaneCoordinatesImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PositionInLaneCoordinatesImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PositionInLaneCoordinatesImpl>& object) override
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

    void PositionInRoadCoordinatesXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionInRoadCoordinatesImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing PositionInRoadCoordinates", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing PositionInRoadCoordinates", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PositionInRoadCoordinatesImpl>>> PositionInRoadCoordinatesXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PositionInRoadCoordinatesImpl>>> result;

        class AttributePathS: public IAttributeParser<PositionInRoadCoordinatesImpl>, public XmlParserBase<PositionInRoadCoordinatesImpl>
        {
        public:
            AttributePathS(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PositionInRoadCoordinatesImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PositionInRoadCoordinatesImpl>& object) override
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

    void PositionOfCurrentEntityXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionOfCurrentEntityImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing PositionOfCurrentEntity", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing PositionOfCurrentEntity", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PositionOfCurrentEntityImpl>>> PositionOfCurrentEntityXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PositionOfCurrentEntityImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<PositionOfCurrentEntityImpl>, public XmlParserBase<PositionOfCurrentEntityImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PositionOfCurrentEntityImpl>& object) override
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

    void PrecipitationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrecipitationImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Precipitation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Precipitation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PrecipitationImpl>>> PrecipitationXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PrecipitationImpl>>> result;

        class AttributePrecipitationType: public IAttributeParser<PrecipitationImpl>, public XmlParserBase<PrecipitationImpl>
        {
        public:
            AttributePrecipitationType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PrecipitationImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PrecipitationImpl>& object) override
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

    void PrivateXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Private", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Private", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PrivateImpl>>> PrivateXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PrivateImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<PrivateImpl>, public XmlParserBase<PrivateImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PrivateImpl>& object) override
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
        auto privateActionsXmlParser = std::make_shared<PrivateActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPrivateActionsParser>(privateActionsXmlParser));
        return result;
    }

    void PrivateXmlParser::SubElementPrivateActionsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateImpl>& object)
    {
        auto privateActions = std::make_shared<PrivateActionImpl>();
        // Setting the parent
        privateActions->SetParent(object);
        _privateActionXmlParser->ParseElement(indexedElement, parserContext, privateActions);
        auto privateActionsList = object->GetPrivateActions();
        privateActionsList.push_back(privateActions);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PrivateActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void PrivateActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing PrivateAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing PrivateAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PrivateActionImpl>>> PrivateActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PrivateActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<PrivateActionImpl>>> PrivateActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<PrivateActionImpl>>> result;
        auto longitudinalActionXmlParser = std::make_shared<LongitudinalActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementLongitudinalActionParser>(longitudinalActionXmlParser));
        auto lateralActionXmlParser = std::make_shared<LateralActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementLateralActionParser>(lateralActionXmlParser));
        auto visibilityActionXmlParser = std::make_shared<VisibilityActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementVisibilityActionParser>(visibilityActionXmlParser));
        auto synchronizeActionXmlParser = std::make_shared<SynchronizeActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementSynchronizeActionParser>(synchronizeActionXmlParser));
        auto activateControllerActionXmlParser = std::make_shared<ActivateControllerActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementActivateControllerActionParser>(activateControllerActionXmlParser));
        auto controllerActionXmlParser = std::make_shared<ControllerActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementControllerActionParser>(controllerActionXmlParser));
        auto teleportActionXmlParser = std::make_shared<TeleportActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTeleportActionParser>(teleportActionXmlParser));
        auto routingActionXmlParser = std::make_shared<RoutingActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRoutingActionParser>(routingActionXmlParser));
        return result;
    }

    void PrivateActionXmlParser::SubElementLongitudinalActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
    {
        auto longitudinalAction = std::make_shared<LongitudinalActionImpl>();
        // Setting the parent
        longitudinalAction->SetParent(object);
        _longitudinalActionXmlParser->ParseElement(indexedElement, parserContext, longitudinalAction);

        object->SetLongitudinalAction(longitudinalAction);
    }
    void PrivateActionXmlParser::SubElementLateralActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
    {
        auto lateralAction = std::make_shared<LateralActionImpl>();
        // Setting the parent
        lateralAction->SetParent(object);
        _lateralActionXmlParser->ParseElement(indexedElement, parserContext, lateralAction);

        object->SetLateralAction(lateralAction);
    }
    void PrivateActionXmlParser::SubElementVisibilityActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
    {
        auto visibilityAction = std::make_shared<VisibilityActionImpl>();
        // Setting the parent
        visibilityAction->SetParent(object);
        _visibilityActionXmlParser->ParseElement(indexedElement, parserContext, visibilityAction);

        object->SetVisibilityAction(visibilityAction);
    }
    void PrivateActionXmlParser::SubElementSynchronizeActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
    {
        auto synchronizeAction = std::make_shared<SynchronizeActionImpl>();
        // Setting the parent
        synchronizeAction->SetParent(object);
        _synchronizeActionXmlParser->ParseElement(indexedElement, parserContext, synchronizeAction);

        object->SetSynchronizeAction(synchronizeAction);
    }
    void PrivateActionXmlParser::SubElementActivateControllerActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
    {
        auto activateControllerAction = std::make_shared<ActivateControllerActionImpl>();
        // Setting the parent
        activateControllerAction->SetParent(object);
        _activateControllerActionXmlParser->ParseElement(indexedElement, parserContext, activateControllerAction);

        object->SetActivateControllerAction(activateControllerAction);
    }
    void PrivateActionXmlParser::SubElementControllerActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
    {
        auto controllerAction = std::make_shared<ControllerActionImpl>();
        // Setting the parent
        controllerAction->SetParent(object);
        _controllerActionXmlParser->ParseElement(indexedElement, parserContext, controllerAction);

        object->SetControllerAction(controllerAction);
    }
    void PrivateActionXmlParser::SubElementTeleportActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object)
    {
        auto teleportAction = std::make_shared<TeleportActionImpl>();
        // Setting the parent
        teleportAction->SetParent(object);
        _teleportActionXmlParser->ParseElement(indexedElement, parserContext, teleportAction);

        object->SetTeleportAction(teleportAction);
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

    void PropertiesXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PropertiesImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Properties", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Properties", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PropertiesImpl>>> PropertiesXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PropertiesImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<PropertiesImpl>>> PropertiesXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<PropertiesImpl>>> result;
        auto propertiesXmlParser = std::make_shared<PropertyXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPropertiesParser>(propertiesXmlParser));
        auto filesXmlParser = std::make_shared<FileXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementFilesParser>(filesXmlParser));
        return result;
    }

    void PropertiesXmlParser::SubElementPropertiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PropertiesImpl>& object)
    {
        auto properties = std::make_shared<PropertyImpl>();
        // Setting the parent
        properties->SetParent(object);
        _propertyXmlParser->ParseElement(indexedElement, parserContext, properties);
        auto propertiesList = object->GetProperties();
        propertiesList.push_back(properties);
    }
    void PropertiesXmlParser::SubElementFilesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PropertiesImpl>& object)
    {
        auto files = std::make_shared<FileImpl>();
        // Setting the parent
        files->SetParent(object);
        _fileXmlParser->ParseElement(indexedElement, parserContext, files);
        auto filesList = object->GetFiles();
        filesList.push_back(files);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PropertyImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void PropertyXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PropertyImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Property", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Property", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<PropertyImpl>>> PropertyXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<PropertyImpl>>> result;

        class AttributeName: public IAttributeParser<PropertyImpl>, public XmlParserBase<PropertyImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PropertyImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<PropertyImpl>& object) override
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

    void ReachPositionConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ReachPositionConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ReachPositionCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ReachPositionCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ReachPositionConditionImpl>>> ReachPositionConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ReachPositionConditionImpl>>> result;

        class AttributeTolerance: public IAttributeParser<ReachPositionConditionImpl>, public XmlParserBase<ReachPositionConditionImpl>
        {
        public:
            AttributeTolerance(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ReachPositionConditionImpl>& object) override
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
        auto positionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPositionParser>(positionXmlParser));
        return result;
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

    void RelativeDistanceConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeDistanceConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RelativeDistanceCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RelativeDistanceCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RelativeDistanceConditionImpl>>> RelativeDistanceConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeDistanceConditionImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<RelativeDistanceConditionImpl>, public XmlParserBase<RelativeDistanceConditionImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeDistanceConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeDistanceConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeDistanceConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeDistanceConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeDistanceConditionImpl>& object) override
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

    void RelativeLanePositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeLanePositionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RelativeLanePosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RelativeLanePosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RelativeLanePositionImpl>>> RelativeLanePositionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeLanePositionImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<RelativeLanePositionImpl>, public XmlParserBase<RelativeLanePositionImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeLanePositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeLanePositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeLanePositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeLanePositionImpl>& object) override
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
        auto orientationXmlParser = std::make_shared<OrientationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementOrientationParser>(orientationXmlParser));
        return result;
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

    void RelativeObjectPositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeObjectPositionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RelativeObjectPosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RelativeObjectPosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RelativeObjectPositionImpl>>> RelativeObjectPositionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeObjectPositionImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<RelativeObjectPositionImpl>, public XmlParserBase<RelativeObjectPositionImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeObjectPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeObjectPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeObjectPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeObjectPositionImpl>& object) override
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
        auto orientationXmlParser = std::make_shared<OrientationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementOrientationParser>(orientationXmlParser));
        return result;
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

    void RelativeRoadPositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeRoadPositionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RelativeRoadPosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RelativeRoadPosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RelativeRoadPositionImpl>>> RelativeRoadPositionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeRoadPositionImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<RelativeRoadPositionImpl>, public XmlParserBase<RelativeRoadPositionImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeRoadPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeRoadPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeRoadPositionImpl>& object) override
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
        auto orientationXmlParser = std::make_shared<OrientationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementOrientationParser>(orientationXmlParser));
        return result;
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

    void RelativeSpeedConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeSpeedConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RelativeSpeedCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RelativeSpeedCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RelativeSpeedConditionImpl>>> RelativeSpeedConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeSpeedConditionImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<RelativeSpeedConditionImpl>, public XmlParserBase<RelativeSpeedConditionImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeSpeedConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeSpeedConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeSpeedConditionImpl>& object) override
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

    void RelativeSpeedToMasterXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeSpeedToMasterImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RelativeSpeedToMaster", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RelativeSpeedToMaster", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RelativeSpeedToMasterImpl>>> RelativeSpeedToMasterXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeSpeedToMasterImpl>>> result;

        class AttributeValue: public IAttributeParser<RelativeSpeedToMasterImpl>, public XmlParserBase<RelativeSpeedToMasterImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeSpeedToMasterImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeSpeedToMasterImpl>& object) override
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

    void RelativeTargetLaneXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeTargetLaneImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RelativeTargetLane", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RelativeTargetLane", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetLaneImpl>>> RelativeTargetLaneXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetLaneImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<RelativeTargetLaneImpl>, public XmlParserBase<RelativeTargetLaneImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetLaneImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetLaneImpl>& object) override
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

    void RelativeTargetLaneOffsetXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeTargetLaneOffsetImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RelativeTargetLaneOffset", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RelativeTargetLaneOffset", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetLaneOffsetImpl>>> RelativeTargetLaneOffsetXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetLaneOffsetImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<RelativeTargetLaneOffsetImpl>, public XmlParserBase<RelativeTargetLaneOffsetImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetLaneOffsetImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetLaneOffsetImpl>& object) override
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

    void RelativeTargetSpeedXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeTargetSpeedImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RelativeTargetSpeed", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RelativeTargetSpeed", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetSpeedImpl>>> RelativeTargetSpeedXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetSpeedImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<RelativeTargetSpeedImpl>, public XmlParserBase<RelativeTargetSpeedImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetSpeedImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetSpeedImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetSpeedImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeTargetSpeedImpl>& object) override
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

    void RelativeWorldPositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeWorldPositionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RelativeWorldPosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RelativeWorldPosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RelativeWorldPositionImpl>>> RelativeWorldPositionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeWorldPositionImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<RelativeWorldPositionImpl>, public XmlParserBase<RelativeWorldPositionImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeWorldPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeWorldPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeWorldPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RelativeWorldPositionImpl>& object) override
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
        auto orientationXmlParser = std::make_shared<OrientationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementOrientationParser>(orientationXmlParser));
        return result;
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

    void RoadConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RoadCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RoadCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RoadConditionImpl>>> RoadConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RoadConditionImpl>>> result;

        class AttributeFrictionScaleFactor: public IAttributeParser<RoadConditionImpl>, public XmlParserBase<RoadConditionImpl>
        {
        public:
            AttributeFrictionScaleFactor(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RoadConditionImpl>& object) override
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
        auto propertiesXmlParser = std::make_shared<PropertiesXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPropertiesParser>(propertiesXmlParser));
        return result;
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

    void RoadNetworkXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RoadNetwork", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RoadNetwork", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RoadNetworkImpl>>> RoadNetworkXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RoadNetworkImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<RoadNetworkImpl>>> RoadNetworkXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<RoadNetworkImpl>>> result;
        auto logicFileXmlParser = std::make_shared<FileXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementLogicFileParser>(logicFileXmlParser));
        auto sceneGraphFileXmlParser = std::make_shared<FileXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementSceneGraphFileParser>(sceneGraphFileXmlParser));
        auto trafficSignalsXmlParser = std::make_shared<TrafficSignalControllerXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<WrappedListParser<RoadNetworkImpl>>(_messageLogger, _filename, std::make_shared<SubElementTrafficSignalsParser>(trafficSignalsXmlParser), OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNALS) );
        return result;
    }

    void RoadNetworkXmlParser::SubElementLogicFileParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object)
    {
        auto logicFile = std::make_shared<FileImpl>();
        // Setting the parent
        logicFile->SetParent(object);
        _fileXmlParser->ParseElement(indexedElement, parserContext, logicFile);

        object->SetLogicFile(logicFile);
    }
    void RoadNetworkXmlParser::SubElementSceneGraphFileParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object)
    {
        auto sceneGraphFile = std::make_shared<FileImpl>();
        // Setting the parent
        sceneGraphFile->SetParent(object);
        _fileXmlParser->ParseElement(indexedElement, parserContext, sceneGraphFile);

        object->SetSceneGraphFile(sceneGraphFile);
    }
    void RoadNetworkXmlParser::SubElementTrafficSignalsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object)
    {
        auto trafficSignals = std::make_shared<TrafficSignalControllerImpl>();
        // Setting the parent
        trafficSignals->SetParent(object);
        _trafficSignalControllerXmlParser->ParseElement(indexedElement, parserContext, trafficSignals);
        auto trafficSignalsList = object->GetTrafficSignals();
        trafficSignalsList.push_back(trafficSignals);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoadPositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void RoadPositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadPositionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RoadPosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RoadPosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RoadPositionImpl>>> RoadPositionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RoadPositionImpl>>> result;

        class AttributeRoadId: public IAttributeParser<RoadPositionImpl>, public XmlParserBase<RoadPositionImpl>
        {
        public:
            AttributeRoadId(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RoadPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RoadPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RoadPositionImpl>& object) override
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
        auto orientationXmlParser = std::make_shared<OrientationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementOrientationParser>(orientationXmlParser));
        return result;
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

    void RouteXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Route", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Route", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RouteImpl>>> RouteXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RouteImpl>>> result;

        class AttributeName: public IAttributeParser<RouteImpl>, public XmlParserBase<RouteImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RouteImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<RouteImpl>& object) override
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
        auto parameterDeclarationsXmlParser = std::make_shared<ParameterDeclarationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<WrappedListParser<RouteImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(parameterDeclarationsXmlParser), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
        auto waypointsXmlParser = std::make_shared<WaypointXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementWaypointsParser>(waypointsXmlParser));
        return result;
    }

    void RouteXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteImpl>& object)
    {
        auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
        // Setting the parent
        parameterDeclarations->SetParent(object);
        _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
        auto parameterDeclarationsList = object->GetParameterDeclarations();
        parameterDeclarationsList.push_back(parameterDeclarations);
    }
    void RouteXmlParser::SubElementWaypointsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteImpl>& object)
    {
        auto waypoints = std::make_shared<WaypointImpl>();
        // Setting the parent
        waypoints->SetParent(object);
        _waypointXmlParser->ParseElement(indexedElement, parserContext, waypoints);
        auto waypointsList = object->GetWaypoints();
        waypointsList.push_back(waypoints);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RouteCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void RouteCatalogLocationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteCatalogLocationImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RouteCatalogLocation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RouteCatalogLocation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RouteCatalogLocationImpl>>> RouteCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RouteCatalogLocationImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<RouteCatalogLocationImpl>>> RouteCatalogLocationXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<RouteCatalogLocationImpl>>> result;
        auto directoryXmlParser = std::make_shared<DirectoryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDirectoryParser>(directoryXmlParser));
        return result;
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

    void RoutePositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutePositionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RoutePosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RoutePosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RoutePositionImpl>>> RoutePositionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RoutePositionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<RoutePositionImpl>>> RoutePositionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<RoutePositionImpl>>> result;
        auto routeRefXmlParser = std::make_shared<RouteRefXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRouteRefParser>(routeRefXmlParser));
        auto orientationXmlParser = std::make_shared<OrientationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementOrientationParser>(orientationXmlParser));
        auto inRoutePositionXmlParser = std::make_shared<InRoutePositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementInRoutePositionParser>(inRoutePositionXmlParser));
        return result;
    }

    void RoutePositionXmlParser::SubElementRouteRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutePositionImpl>& object)
    {
        auto routeRef = std::make_shared<RouteRefImpl>();
        // Setting the parent
        routeRef->SetParent(object);
        _routeRefXmlParser->ParseElement(indexedElement, parserContext, routeRef);

        object->SetRouteRef(routeRef);
    }
    void RoutePositionXmlParser::SubElementOrientationParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutePositionImpl>& object)
    {
        auto orientation = std::make_shared<OrientationImpl>();
        // Setting the parent
        orientation->SetParent(object);
        _orientationXmlParser->ParseElement(indexedElement, parserContext, orientation);

        object->SetOrientation(orientation);
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

    void RouteRefXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteRefImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RouteRef", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RouteRef", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RouteRefImpl>>> RouteRefXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RouteRefImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<RouteRefImpl>>> RouteRefXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<RouteRefImpl>>> result;
        auto routeXmlParser = std::make_shared<RouteXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRouteParser>(routeXmlParser));
        auto catalogReferenceXmlParser = std::make_shared<CatalogReferenceXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCatalogReferenceParser>(catalogReferenceXmlParser));
        return result;
    }

    void RouteRefXmlParser::SubElementRouteParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteRefImpl>& object)
    {
        auto route = std::make_shared<RouteImpl>();
        // Setting the parent
        route->SetParent(object);
        _routeXmlParser->ParseElement(indexedElement, parserContext, route);

        object->SetRoute(route);
    }
    void RouteRefXmlParser::SubElementCatalogReferenceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteRefImpl>& object)
    {
        auto catalogReference = std::make_shared<CatalogReferenceImpl>();
        // Setting the parent
        catalogReference->SetParent(object);
        _catalogReferenceXmlParser->ParseElement(indexedElement, parserContext, catalogReference);

        object->SetCatalogReference(catalogReference);
        parserContext->AddCatalogReference(catalogReference);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoutingActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void RoutingActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutingActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing RoutingAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing RoutingAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<RoutingActionImpl>>> RoutingActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<RoutingActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<RoutingActionImpl>>> RoutingActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<RoutingActionImpl>>> result;
        auto assignRouteActionXmlParser = std::make_shared<AssignRouteActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementAssignRouteActionParser>(assignRouteActionXmlParser));
        auto followTrajectoryActionXmlParser = std::make_shared<FollowTrajectoryActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementFollowTrajectoryActionParser>(followTrajectoryActionXmlParser));
        auto acquirePositionActionXmlParser = std::make_shared<AcquirePositionActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementAcquirePositionActionParser>(acquirePositionActionXmlParser));
        return result;
    }

    void RoutingActionXmlParser::SubElementAssignRouteActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutingActionImpl>& object)
    {
        auto assignRouteAction = std::make_shared<AssignRouteActionImpl>();
        // Setting the parent
        assignRouteAction->SetParent(object);
        _assignRouteActionXmlParser->ParseElement(indexedElement, parserContext, assignRouteAction);

        object->SetAssignRouteAction(assignRouteAction);
    }
    void RoutingActionXmlParser::SubElementFollowTrajectoryActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutingActionImpl>& object)
    {
        auto followTrajectoryAction = std::make_shared<FollowTrajectoryActionImpl>();
        // Setting the parent
        followTrajectoryAction->SetParent(object);
        _followTrajectoryActionXmlParser->ParseElement(indexedElement, parserContext, followTrajectoryAction);

        object->SetFollowTrajectoryAction(followTrajectoryAction);
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

    void ScenarioDefinitionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ScenarioDefinition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlGroupParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ScenarioDefinition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }


    std::vector<std::shared_ptr<IElementParser<ScenarioDefinitionImpl>>> ScenarioDefinitionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<ScenarioDefinitionImpl>>> result;
        auto parameterDeclarationsXmlParser = std::make_shared<ParameterDeclarationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<WrappedListParser<ScenarioDefinitionImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(parameterDeclarationsXmlParser), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
        auto catalogLocationsXmlParser = std::make_shared<CatalogLocationsXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCatalogLocationsParser>(catalogLocationsXmlParser));
        auto roadNetworkXmlParser = std::make_shared<RoadNetworkXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRoadNetworkParser>(roadNetworkXmlParser));
        auto entitiesXmlParser = std::make_shared<EntitiesXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEntitiesParser>(entitiesXmlParser));
        auto storyboardXmlParser = std::make_shared<StoryboardXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementStoryboardParser>(storyboardXmlParser));
        return result;
    }

    void ScenarioDefinitionXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object)
    {
        auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
        // Setting the parent
        parameterDeclarations->SetParent(object);
        _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
        auto parameterDeclarationsList = object->GetParameterDeclarations();
        parameterDeclarationsList.push_back(parameterDeclarations);
    }
    void ScenarioDefinitionXmlParser::SubElementCatalogLocationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object)
    {
        auto catalogLocations = std::make_shared<CatalogLocationsImpl>();
        // Setting the parent
        catalogLocations->SetParent(object);
        _catalogLocationsXmlParser->ParseElement(indexedElement, parserContext, catalogLocations);

        object->SetCatalogLocations(catalogLocations);
    }
    void ScenarioDefinitionXmlParser::SubElementRoadNetworkParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object)
    {
        auto roadNetwork = std::make_shared<RoadNetworkImpl>();
        // Setting the parent
        roadNetwork->SetParent(object);
        _roadNetworkXmlParser->ParseElement(indexedElement, parserContext, roadNetwork);

        object->SetRoadNetwork(roadNetwork);
    }
    void ScenarioDefinitionXmlParser::SubElementEntitiesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object)
    {
        auto entities = std::make_shared<EntitiesImpl>();
        // Setting the parent
        entities->SetParent(object);
        _entitiesXmlParser->ParseElement(indexedElement, parserContext, entities);

        object->SetEntities(entities);
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

    void ScenarioObjectXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioObjectImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing ScenarioObject", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing ScenarioObject", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ScenarioObjectImpl>>> ScenarioObjectXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ScenarioObjectImpl>>> result;

        class AttributeName: public IAttributeParser<ScenarioObjectImpl>, public XmlParserBase<ScenarioObjectImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<ScenarioObjectImpl>& object) override
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
        auto entityObjectXmlParser = std::make_shared<EntityObjectXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEntityObjectParser>(entityObjectXmlParser));
        auto objectControllerXmlParser = std::make_shared<ObjectControllerXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementObjectControllerParser>(objectControllerXmlParser));
        return result;
    }

    void ScenarioObjectXmlParser::SubElementEntityObjectParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioObjectImpl>& object)
    {
        auto entityObject = std::make_shared<EntityObjectImpl>();
        // Setting the parent
        entityObject->SetParent(object);
        _entityObjectXmlParser->ParseElement(indexedElement, parserContext, entityObject);

        object->SetEntityObject(entityObject);
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

    void SelectedEntitiesXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SelectedEntitiesImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing SelectedEntities", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing SelectedEntities", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<SelectedEntitiesImpl>>> SelectedEntitiesXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<SelectedEntitiesImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<SelectedEntitiesImpl>>> SelectedEntitiesXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<SelectedEntitiesImpl>>> result;
        auto entityRefXmlParser = std::make_shared<EntityRefXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEntityRefParser>(entityRefXmlParser));
        auto byTypeXmlParser = std::make_shared<ByTypeXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementByTypeParser>(byTypeXmlParser));
        return result;
    }

    void SelectedEntitiesXmlParser::SubElementEntityRefParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SelectedEntitiesImpl>& object)
    {
        auto entityRef = std::make_shared<EntityRefImpl>();
        // Setting the parent
        entityRef->SetParent(object);
        _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRef);
        auto entityRefList = object->GetEntityRef();
        entityRefList.push_back(entityRef);
    }
    void SelectedEntitiesXmlParser::SubElementByTypeParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SelectedEntitiesImpl>& object)
    {
        auto byType = std::make_shared<ByTypeImpl>();
        // Setting the parent
        byType->SetParent(object);
        _byTypeXmlParser->ParseElement(indexedElement, parserContext, byType);
        auto byTypeList = object->GetByType();
        byTypeList.push_back(byType);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ShapeImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void ShapeXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ShapeImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Shape", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Shape", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<ShapeImpl>>> ShapeXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<ShapeImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<ShapeImpl>>> ShapeXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<ShapeImpl>>> result;
        auto polylineXmlParser = std::make_shared<PolylineXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPolylineParser>(polylineXmlParser));
        auto clothoidXmlParser = std::make_shared<ClothoidXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementClothoidParser>(clothoidXmlParser));
        auto nurbsXmlParser = std::make_shared<NurbsXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementNurbsParser>(nurbsXmlParser));
        return result;
    }

    void ShapeXmlParser::SubElementPolylineParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ShapeImpl>& object)
    {
        auto polyline = std::make_shared<PolylineImpl>();
        // Setting the parent
        polyline->SetParent(object);
        _polylineXmlParser->ParseElement(indexedElement, parserContext, polyline);

        object->SetPolyline(polyline);
    }
    void ShapeXmlParser::SubElementClothoidParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ShapeImpl>& object)
    {
        auto clothoid = std::make_shared<ClothoidImpl>();
        // Setting the parent
        clothoid->SetParent(object);
        _clothoidXmlParser->ParseElement(indexedElement, parserContext, clothoid);

        object->SetClothoid(clothoid);
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

    void SimulationTimeConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SimulationTimeConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing SimulationTimeCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing SimulationTimeCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<SimulationTimeConditionImpl>>> SimulationTimeConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<SimulationTimeConditionImpl>>> result;

        class AttributeValue: public IAttributeParser<SimulationTimeConditionImpl>, public XmlParserBase<SimulationTimeConditionImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SimulationTimeConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SimulationTimeConditionImpl>& object) override
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

    void SpeedActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing SpeedAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing SpeedAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<SpeedActionImpl>>> SpeedActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<SpeedActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<SpeedActionImpl>>> SpeedActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<SpeedActionImpl>>> result;
        auto speedActionDynamicsXmlParser = std::make_shared<TransitionDynamicsXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementSpeedActionDynamicsParser>(speedActionDynamicsXmlParser));
        auto speedActionTargetXmlParser = std::make_shared<SpeedActionTargetXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementSpeedActionTargetParser>(speedActionTargetXmlParser));
        return result;
    }

    void SpeedActionXmlParser::SubElementSpeedActionDynamicsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionImpl>& object)
    {
        auto speedActionDynamics = std::make_shared<TransitionDynamicsImpl>();
        // Setting the parent
        speedActionDynamics->SetParent(object);
        _transitionDynamicsXmlParser->ParseElement(indexedElement, parserContext, speedActionDynamics);

        object->SetSpeedActionDynamics(speedActionDynamics);
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

    void SpeedActionTargetXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionTargetImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing SpeedActionTarget", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing SpeedActionTarget", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<SpeedActionTargetImpl>>> SpeedActionTargetXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<SpeedActionTargetImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<SpeedActionTargetImpl>>> SpeedActionTargetXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<SpeedActionTargetImpl>>> result;
        auto relativeTargetSpeedXmlParser = std::make_shared<RelativeTargetSpeedXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementRelativeTargetSpeedParser>(relativeTargetSpeedXmlParser));
        auto absoluteTargetSpeedXmlParser = std::make_shared<AbsoluteTargetSpeedXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementAbsoluteTargetSpeedParser>(absoluteTargetSpeedXmlParser));
        return result;
    }

    void SpeedActionTargetXmlParser::SubElementRelativeTargetSpeedParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionTargetImpl>& object)
    {
        auto relativeTargetSpeed = std::make_shared<RelativeTargetSpeedImpl>();
        // Setting the parent
        relativeTargetSpeed->SetParent(object);
        _relativeTargetSpeedXmlParser->ParseElement(indexedElement, parserContext, relativeTargetSpeed);

        object->SetRelativeTargetSpeed(relativeTargetSpeed);
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

    void SpeedConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing SpeedCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing SpeedCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<SpeedConditionImpl>>> SpeedConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<SpeedConditionImpl>>> result;

        class AttributeValue: public IAttributeParser<SpeedConditionImpl>, public XmlParserBase<SpeedConditionImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SpeedConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SpeedConditionImpl>& object) override
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

    void StandStillConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StandStillConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing StandStillCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing StandStillCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<StandStillConditionImpl>>> StandStillConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<StandStillConditionImpl>>> result;

        class AttributeDuration: public IAttributeParser<StandStillConditionImpl>, public XmlParserBase<StandStillConditionImpl>
        {
        public:
            AttributeDuration(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StandStillConditionImpl>& object) override
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

    void StoryXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Story", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Story", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<StoryImpl>>> StoryXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<StoryImpl>>> result;

        class AttributeName: public IAttributeParser<StoryImpl>, public XmlParserBase<StoryImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StoryImpl>& object) override
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
        auto parameterDeclarationsXmlParser = std::make_shared<ParameterDeclarationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<WrappedListParser<StoryImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(parameterDeclarationsXmlParser), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
        auto actsXmlParser = std::make_shared<ActXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementActsParser>(actsXmlParser));
        return result;
    }

    void StoryXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryImpl>& object)
    {
        auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
        // Setting the parent
        parameterDeclarations->SetParent(object);
        _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
        auto parameterDeclarationsList = object->GetParameterDeclarations();
        parameterDeclarationsList.push_back(parameterDeclarations);
    }
    void StoryXmlParser::SubElementActsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryImpl>& object)
    {
        auto acts = std::make_shared<ActImpl>();
        // Setting the parent
        acts->SetParent(object);
        _actXmlParser->ParseElement(indexedElement, parserContext, acts);
        auto actsList = object->GetActs();
        actsList.push_back(acts);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a StoryboardImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void StoryboardXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Storyboard", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Storyboard", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<StoryboardImpl>>> StoryboardXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<StoryboardImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<StoryboardImpl>>> StoryboardXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<StoryboardImpl>>> result;
        auto initXmlParser = std::make_shared<InitXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementInitParser>(initXmlParser));
        auto storiesXmlParser = std::make_shared<StoryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementStoriesParser>(storiesXmlParser));
        auto stopTriggerXmlParser = std::make_shared<TriggerXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementStopTriggerParser>(stopTriggerXmlParser));
        return result;
    }

    void StoryboardXmlParser::SubElementInitParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardImpl>& object)
    {
        auto init = std::make_shared<InitImpl>();
        // Setting the parent
        init->SetParent(object);
        _initXmlParser->ParseElement(indexedElement, parserContext, init);

        object->SetInit(init);
    }
    void StoryboardXmlParser::SubElementStoriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardImpl>& object)
    {
        auto stories = std::make_shared<StoryImpl>();
        // Setting the parent
        stories->SetParent(object);
        _storyXmlParser->ParseElement(indexedElement, parserContext, stories);
        auto storiesList = object->GetStories();
        storiesList.push_back(stories);
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

    void StoryboardElementStateConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardElementStateConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing StoryboardElementStateCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing StoryboardElementStateCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<StoryboardElementStateConditionImpl>>> StoryboardElementStateConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<StoryboardElementStateConditionImpl>>> result;

        class AttributeStoryboardElementType: public IAttributeParser<StoryboardElementStateConditionImpl>, public XmlParserBase<StoryboardElementStateConditionImpl>
        {
        public:
            AttributeStoryboardElementType(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StoryboardElementStateConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StoryboardElementStateConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<StoryboardElementStateConditionImpl>& object) override
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

    void SunXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SunImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Sun", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Sun", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<SunImpl>>> SunXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<SunImpl>>> result;

        class AttributeIntensity: public IAttributeParser<SunImpl>, public XmlParserBase<SunImpl>
        {
        public:
            AttributeIntensity(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SunImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SunImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SunImpl>& object) override
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

    void SynchronizeActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SynchronizeActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing SynchronizeAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing SynchronizeAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<SynchronizeActionImpl>>> SynchronizeActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<SynchronizeActionImpl>>> result;

        class AttributeMasterEntityRef: public IAttributeParser<SynchronizeActionImpl>, public XmlParserBase<SynchronizeActionImpl>
        {
        public:
            AttributeMasterEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<SynchronizeActionImpl>& object) override
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
        auto targetPositionMasterXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTargetPositionMasterParser>(targetPositionMasterXmlParser));
        auto targetPositionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTargetPositionParser>(targetPositionXmlParser));
        auto finalSpeedXmlParser = std::make_shared<FinalSpeedXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementFinalSpeedParser>(finalSpeedXmlParser));
        return result;
    }

    void SynchronizeActionXmlParser::SubElementTargetPositionMasterParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SynchronizeActionImpl>& object)
    {
        auto targetPositionMaster = std::make_shared<PositionImpl>();
        // Setting the parent
        targetPositionMaster->SetParent(object);
        _positionXmlParser->ParseElement(indexedElement, parserContext, targetPositionMaster);

        object->SetTargetPositionMaster(targetPositionMaster);
    }
    void SynchronizeActionXmlParser::SubElementTargetPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SynchronizeActionImpl>& object)
    {
        auto targetPosition = std::make_shared<PositionImpl>();
        // Setting the parent
        targetPosition->SetParent(object);
        _positionXmlParser->ParseElement(indexedElement, parserContext, targetPosition);

        object->SetTargetPosition(targetPosition);
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

    void TeleportActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TeleportActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TeleportAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TeleportAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TeleportActionImpl>>> TeleportActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TeleportActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<TeleportActionImpl>>> TeleportActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<TeleportActionImpl>>> result;
        auto positionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPositionParser>(positionXmlParser));
        return result;
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

    void TimeHeadwayConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeHeadwayConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TimeHeadwayCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TimeHeadwayCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TimeHeadwayConditionImpl>>> TimeHeadwayConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TimeHeadwayConditionImpl>>> result;

        class AttributeEntityRef: public IAttributeParser<TimeHeadwayConditionImpl>, public XmlParserBase<TimeHeadwayConditionImpl>
        {
        public:
            AttributeEntityRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeHeadwayConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeHeadwayConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeHeadwayConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeHeadwayConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeHeadwayConditionImpl>& object) override
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

    void TimeOfDayXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeOfDayImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TimeOfDay", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TimeOfDay", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TimeOfDayImpl>>> TimeOfDayXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TimeOfDayImpl>>> result;

        class AttributeAnimation: public IAttributeParser<TimeOfDayImpl>, public XmlParserBase<TimeOfDayImpl>
        {
        public:
            AttributeAnimation(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeOfDayImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeOfDayImpl>& object) override
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

    void TimeOfDayConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeOfDayConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TimeOfDayCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TimeOfDayCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TimeOfDayConditionImpl>>> TimeOfDayConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TimeOfDayConditionImpl>>> result;

        class AttributeRule: public IAttributeParser<TimeOfDayConditionImpl>, public XmlParserBase<TimeOfDayConditionImpl>
        {
        public:
            AttributeRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeOfDayConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeOfDayConditionImpl>& object) override
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

    void TimeReferenceXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeReferenceImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TimeReference", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TimeReference", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TimeReferenceImpl>>> TimeReferenceXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TimeReferenceImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<TimeReferenceImpl>>> TimeReferenceXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<TimeReferenceImpl>>> result;
        auto noneXmlParser = std::make_shared<NoneXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementNoneParser>(noneXmlParser));
        auto timingXmlParser = std::make_shared<TimingXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTimingParser>(timingXmlParser));
        return result;
    }

    void TimeReferenceXmlParser::SubElementNoneParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeReferenceImpl>& object)
    {
        auto none = std::make_shared<NoneImpl>();
        // Setting the parent
        none->SetParent(object);
        _noneXmlParser->ParseElement(indexedElement, parserContext, none);

        object->SetNone(none);
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

    void TimeToCollisionConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TimeToCollisionCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TimeToCollisionCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TimeToCollisionConditionImpl>>> TimeToCollisionConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TimeToCollisionConditionImpl>>> result;

        class AttributeValue: public IAttributeParser<TimeToCollisionConditionImpl>, public XmlParserBase<TimeToCollisionConditionImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeToCollisionConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeToCollisionConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeToCollisionConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimeToCollisionConditionImpl>& object) override
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
        auto timeToCollisionConditionTargetXmlParser = std::make_shared<TimeToCollisionConditionTargetXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTimeToCollisionConditionTargetParser>(timeToCollisionConditionTargetXmlParser));
        return result;
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

    void TimeToCollisionConditionTargetXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionTargetImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TimeToCollisionConditionTarget", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TimeToCollisionConditionTarget", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TimeToCollisionConditionTargetImpl>>> TimeToCollisionConditionTargetXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TimeToCollisionConditionTargetImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<TimeToCollisionConditionTargetImpl>>> TimeToCollisionConditionTargetXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<TimeToCollisionConditionTargetImpl>>> result;
        auto positionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPositionParser>(positionXmlParser));
        auto entityRefXmlParser = std::make_shared<EntityRefXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEntityRefParser>(entityRefXmlParser));
        return result;
    }

    void TimeToCollisionConditionTargetXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionTargetImpl>& object)
    {
        auto position = std::make_shared<PositionImpl>();
        // Setting the parent
        position->SetParent(object);
        _positionXmlParser->ParseElement(indexedElement, parserContext, position);

        object->SetPosition(position);
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

    void TimingXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimingImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Timing", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Timing", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TimingImpl>>> TimingXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TimingImpl>>> result;

        class AttributeDomainAbsoluteRelative: public IAttributeParser<TimingImpl>, public XmlParserBase<TimingImpl>
        {
        public:
            AttributeDomainAbsoluteRelative(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimingImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimingImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TimingImpl>& object) override
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

    void TrafficActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrafficAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrafficAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrafficActionImpl>>> TrafficActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<TrafficActionImpl>>> TrafficActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<TrafficActionImpl>>> result;
        auto trafficSourceActionXmlParser = std::make_shared<TrafficSourceActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficSourceActionParser>(trafficSourceActionXmlParser));
        auto trafficSinkActionXmlParser = std::make_shared<TrafficSinkActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficSinkActionParser>(trafficSinkActionXmlParser));
        auto trafficSwarmActionXmlParser = std::make_shared<TrafficSwarmActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficSwarmActionParser>(trafficSwarmActionXmlParser));
        return result;
    }

    void TrafficActionXmlParser::SubElementTrafficSourceActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficActionImpl>& object)
    {
        auto trafficSourceAction = std::make_shared<TrafficSourceActionImpl>();
        // Setting the parent
        trafficSourceAction->SetParent(object);
        _trafficSourceActionXmlParser->ParseElement(indexedElement, parserContext, trafficSourceAction);

        object->SetTrafficSourceAction(trafficSourceAction);
    }
    void TrafficActionXmlParser::SubElementTrafficSinkActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficActionImpl>& object)
    {
        auto trafficSinkAction = std::make_shared<TrafficSinkActionImpl>();
        // Setting the parent
        trafficSinkAction->SetParent(object);
        _trafficSinkActionXmlParser->ParseElement(indexedElement, parserContext, trafficSinkAction);

        object->SetTrafficSinkAction(trafficSinkAction);
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

    void TrafficDefinitionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficDefinitionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrafficDefinition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrafficDefinition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrafficDefinitionImpl>>> TrafficDefinitionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficDefinitionImpl>>> result;

        class AttributeName: public IAttributeParser<TrafficDefinitionImpl>, public XmlParserBase<TrafficDefinitionImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficDefinitionImpl>& object) override
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
        auto vehicleCategoryDistributionXmlParser = std::make_shared<VehicleCategoryDistributionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementVehicleCategoryDistributionParser>(vehicleCategoryDistributionXmlParser));
        auto controllerDistributionXmlParser = std::make_shared<ControllerDistributionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementControllerDistributionParser>(controllerDistributionXmlParser));
        return result;
    }

    void TrafficDefinitionXmlParser::SubElementVehicleCategoryDistributionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficDefinitionImpl>& object)
    {
        auto vehicleCategoryDistribution = std::make_shared<VehicleCategoryDistributionImpl>();
        // Setting the parent
        vehicleCategoryDistribution->SetParent(object);
        _vehicleCategoryDistributionXmlParser->ParseElement(indexedElement, parserContext, vehicleCategoryDistribution);

        object->SetVehicleCategoryDistribution(vehicleCategoryDistribution);
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

    void TrafficSignalActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrafficSignalAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrafficSignalAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalActionImpl>>> TrafficSignalActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<TrafficSignalActionImpl>>> TrafficSignalActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<TrafficSignalActionImpl>>> result;
        auto trafficSignalControllerActionXmlParser = std::make_shared<TrafficSignalControllerActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficSignalControllerActionParser>(trafficSignalControllerActionXmlParser));
        auto trafficSignalStateActionXmlParser = std::make_shared<TrafficSignalStateActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficSignalStateActionParser>(trafficSignalStateActionXmlParser));
        return result;
    }

    void TrafficSignalActionXmlParser::SubElementTrafficSignalControllerActionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalActionImpl>& object)
    {
        auto trafficSignalControllerAction = std::make_shared<TrafficSignalControllerActionImpl>();
        // Setting the parent
        trafficSignalControllerAction->SetParent(object);
        _trafficSignalControllerActionXmlParser->ParseElement(indexedElement, parserContext, trafficSignalControllerAction);

        object->SetTrafficSignalControllerAction(trafficSignalControllerAction);
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

    void TrafficSignalConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrafficSignalCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrafficSignalCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalConditionImpl>>> TrafficSignalConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalConditionImpl>>> result;

        class AttributeName: public IAttributeParser<TrafficSignalConditionImpl>, public XmlParserBase<TrafficSignalConditionImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalConditionImpl>& object) override
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

    void TrafficSignalControllerXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalControllerImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrafficSignalController", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrafficSignalController", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerImpl>>> TrafficSignalControllerXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerImpl>>> result;

        class AttributeName: public IAttributeParser<TrafficSignalControllerImpl>, public XmlParserBase<TrafficSignalControllerImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerImpl>& object) override
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
        auto phasesXmlParser = std::make_shared<PhaseXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPhasesParser>(phasesXmlParser));
        return result;
    }

    void TrafficSignalControllerXmlParser::SubElementPhasesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalControllerImpl>& object)
    {
        auto phases = std::make_shared<PhaseImpl>();
        // Setting the parent
        phases->SetParent(object);
        _phaseXmlParser->ParseElement(indexedElement, parserContext, phases);
        auto phasesList = object->GetPhases();
        phasesList.push_back(phases);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalControllerActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void TrafficSignalControllerActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalControllerActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrafficSignalControllerAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrafficSignalControllerAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerActionImpl>>> TrafficSignalControllerActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerActionImpl>>> result;

        class AttributeTrafficSignalControllerRef: public IAttributeParser<TrafficSignalControllerActionImpl>, public XmlParserBase<TrafficSignalControllerActionImpl>
        {
        public:
            AttributeTrafficSignalControllerRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerActionImpl>& object) override
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

    void TrafficSignalControllerConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalControllerConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrafficSignalControllerCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrafficSignalControllerCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerConditionImpl>>> TrafficSignalControllerConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerConditionImpl>>> result;

        class AttributeTrafficSignalControllerRef: public IAttributeParser<TrafficSignalControllerConditionImpl>, public XmlParserBase<TrafficSignalControllerConditionImpl>
        {
        public:
            AttributeTrafficSignalControllerRef(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalControllerConditionImpl>& object) override
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

    void TrafficSignalStateXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalStateImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrafficSignalState", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrafficSignalState", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalStateImpl>>> TrafficSignalStateXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalStateImpl>>> result;

        class AttributeTrafficSignalId: public IAttributeParser<TrafficSignalStateImpl>, public XmlParserBase<TrafficSignalStateImpl>
        {
        public:
            AttributeTrafficSignalId(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalStateImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalStateImpl>& object) override
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

    void TrafficSignalStateActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalStateActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrafficSignalStateAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrafficSignalStateAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalStateActionImpl>>> TrafficSignalStateActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalStateActionImpl>>> result;

        class AttributeName: public IAttributeParser<TrafficSignalStateActionImpl>, public XmlParserBase<TrafficSignalStateActionImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalStateActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSignalStateActionImpl>& object) override
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

    void TrafficSinkActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSinkActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrafficSinkAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrafficSinkAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSinkActionImpl>>> TrafficSinkActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSinkActionImpl>>> result;

        class AttributeRate: public IAttributeParser<TrafficSinkActionImpl>, public XmlParserBase<TrafficSinkActionImpl>
        {
        public:
            AttributeRate(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSinkActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSinkActionImpl>& object) override
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
        auto positionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPositionParser>(positionXmlParser));
        auto trafficDefinitionXmlParser = std::make_shared<TrafficDefinitionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficDefinitionParser>(trafficDefinitionXmlParser));
        return result;
    }

    void TrafficSinkActionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSinkActionImpl>& object)
    {
        auto position = std::make_shared<PositionImpl>();
        // Setting the parent
        position->SetParent(object);
        _positionXmlParser->ParseElement(indexedElement, parserContext, position);

        object->SetPosition(position);
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

    void TrafficSourceActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSourceActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrafficSourceAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrafficSourceAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSourceActionImpl>>> TrafficSourceActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSourceActionImpl>>> result;

        class AttributeRate: public IAttributeParser<TrafficSourceActionImpl>, public XmlParserBase<TrafficSourceActionImpl>
        {
        public:
            AttributeRate(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSourceActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSourceActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSourceActionImpl>& object) override
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
        auto positionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPositionParser>(positionXmlParser));
        auto trafficDefinitionXmlParser = std::make_shared<TrafficDefinitionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficDefinitionParser>(trafficDefinitionXmlParser));
        return result;
    }

    void TrafficSourceActionXmlParser::SubElementPositionParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSourceActionImpl>& object)
    {
        auto position = std::make_shared<PositionImpl>();
        // Setting the parent
        position->SetParent(object);
        _positionXmlParser->ParseElement(indexedElement, parserContext, position);

        object->SetPosition(position);
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

    void TrafficSwarmActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSwarmActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrafficSwarmAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrafficSwarmAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSwarmActionImpl>>> TrafficSwarmActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSwarmActionImpl>>> result;

        class AttributeSemiMajorAxis: public IAttributeParser<TrafficSwarmActionImpl>, public XmlParserBase<TrafficSwarmActionImpl>
        {
        public:
            AttributeSemiMajorAxis(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSwarmActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSwarmActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSwarmActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSwarmActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSwarmActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrafficSwarmActionImpl>& object) override
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
        auto centralObjectXmlParser = std::make_shared<CentralSwarmObjectXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCentralObjectParser>(centralObjectXmlParser));
        auto trafficDefinitionXmlParser = std::make_shared<TrafficDefinitionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementTrafficDefinitionParser>(trafficDefinitionXmlParser));
        return result;
    }

    void TrafficSwarmActionXmlParser::SubElementCentralObjectParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSwarmActionImpl>& object)
    {
        auto centralObject = std::make_shared<CentralSwarmObjectImpl>();
        // Setting the parent
        centralObject->SetParent(object);
        _centralSwarmObjectXmlParser->ParseElement(indexedElement, parserContext, centralObject);

        object->SetCentralObject(centralObject);
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

    void TrajectoryXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Trajectory", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Trajectory", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryImpl>>> TrajectoryXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryImpl>>> result;

        class AttributeName: public IAttributeParser<TrajectoryImpl>, public XmlParserBase<TrajectoryImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrajectoryImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrajectoryImpl>& object) override
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
        auto parameterDeclarationsXmlParser = std::make_shared<ParameterDeclarationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<WrappedListParser<TrajectoryImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(parameterDeclarationsXmlParser), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
        auto shapeXmlParser = std::make_shared<ShapeXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementShapeParser>(shapeXmlParser));
        return result;
    }

    void TrajectoryXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryImpl>& object)
    {
        auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
        // Setting the parent
        parameterDeclarations->SetParent(object);
        _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
        auto parameterDeclarationsList = object->GetParameterDeclarations();
        parameterDeclarationsList.push_back(parameterDeclarations);
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

    void TrajectoryCatalogLocationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryCatalogLocationImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrajectoryCatalogLocation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrajectoryCatalogLocation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryCatalogLocationImpl>>> TrajectoryCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryCatalogLocationImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<TrajectoryCatalogLocationImpl>>> TrajectoryCatalogLocationXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<TrajectoryCatalogLocationImpl>>> result;
        auto directoryXmlParser = std::make_shared<DirectoryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDirectoryParser>(directoryXmlParser));
        return result;
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

    void TrajectoryFollowingModeXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryFollowingModeImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TrajectoryFollowingMode", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TrajectoryFollowingMode", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryFollowingModeImpl>>> TrajectoryFollowingModeXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryFollowingModeImpl>>> result;

        class AttributeFollowingMode: public IAttributeParser<TrajectoryFollowingModeImpl>, public XmlParserBase<TrajectoryFollowingModeImpl>
        {
        public:
            AttributeFollowingMode(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TrajectoryFollowingModeImpl>& object) override
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

    void TransitionDynamicsXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TransitionDynamicsImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TransitionDynamics", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TransitionDynamics", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TransitionDynamicsImpl>>> TransitionDynamicsXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TransitionDynamicsImpl>>> result;

        class AttributeDynamicsShape: public IAttributeParser<TransitionDynamicsImpl>, public XmlParserBase<TransitionDynamicsImpl>
        {
        public:
            AttributeDynamicsShape(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TransitionDynamicsImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TransitionDynamicsImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TransitionDynamicsImpl>& object) override
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

    void TraveledDistanceConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TraveledDistanceConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TraveledDistanceCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TraveledDistanceCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TraveledDistanceConditionImpl>>> TraveledDistanceConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TraveledDistanceConditionImpl>>> result;

        class AttributeValue: public IAttributeParser<TraveledDistanceConditionImpl>, public XmlParserBase<TraveledDistanceConditionImpl>
        {
        public:
            AttributeValue(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TraveledDistanceConditionImpl>& object) override
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

    void TriggerXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TriggerImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Trigger", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Trigger", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TriggerImpl>>> TriggerXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TriggerImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<TriggerImpl>>> TriggerXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<TriggerImpl>>> result;
        auto conditionGroupsXmlParser = std::make_shared<ConditionGroupXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementConditionGroupsParser>(conditionGroupsXmlParser));
        return result;
    }

    void TriggerXmlParser::SubElementConditionGroupsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TriggerImpl>& object)
    {
        auto conditionGroups = std::make_shared<ConditionGroupImpl>();
        // Setting the parent
        conditionGroups->SetParent(object);
        _conditionGroupXmlParser->ParseElement(indexedElement, parserContext, conditionGroups);
        auto conditionGroupsList = object->GetConditionGroups();
        conditionGroupsList.push_back(conditionGroups);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TriggeringEntitiesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void TriggeringEntitiesXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TriggeringEntitiesImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing TriggeringEntities", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing TriggeringEntities", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<TriggeringEntitiesImpl>>> TriggeringEntitiesXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<TriggeringEntitiesImpl>>> result;

        class AttributeTriggeringEntitiesRule: public IAttributeParser<TriggeringEntitiesImpl>, public XmlParserBase<TriggeringEntitiesImpl>
        {
        public:
            AttributeTriggeringEntitiesRule(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<TriggeringEntitiesImpl>& object) override
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
        auto entityRefsXmlParser = std::make_shared<EntityRefXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementEntityRefsParser>(entityRefsXmlParser));
        return result;
    }

    void TriggeringEntitiesXmlParser::SubElementEntityRefsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TriggeringEntitiesImpl>& object)
    {
        auto entityRefs = std::make_shared<EntityRefImpl>();
        // Setting the parent
        entityRefs->SetParent(object);
        _entityRefXmlParser->ParseElement(indexedElement, parserContext, entityRefs);
        auto entityRefsList = object->GetEntityRefs();
        entityRefsList.push_back(entityRefs);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a UserDefinedActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void UserDefinedActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<UserDefinedActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing UserDefinedAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing UserDefinedAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<UserDefinedActionImpl>>> UserDefinedActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<UserDefinedActionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<UserDefinedActionImpl>>> UserDefinedActionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<UserDefinedActionImpl>>> result;
        auto customCommandActionXmlParser = std::make_shared<CustomCommandActionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementCustomCommandActionParser>(customCommandActionXmlParser));
        return result;
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

    void UserDefinedValueConditionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<UserDefinedValueConditionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing UserDefinedValueCondition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing UserDefinedValueCondition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<UserDefinedValueConditionImpl>>> UserDefinedValueConditionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<UserDefinedValueConditionImpl>>> result;

        class AttributeName: public IAttributeParser<UserDefinedValueConditionImpl>, public XmlParserBase<UserDefinedValueConditionImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<UserDefinedValueConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<UserDefinedValueConditionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<UserDefinedValueConditionImpl>& object) override
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

    void VehicleXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Vehicle", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Vehicle", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<VehicleImpl>>> VehicleXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleImpl>>> result;

        class AttributeName: public IAttributeParser<VehicleImpl>, public XmlParserBase<VehicleImpl>
        {
        public:
            AttributeName(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VehicleImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VehicleImpl>& object) override
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
        auto parameterDeclarationsXmlParser = std::make_shared<ParameterDeclarationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<WrappedListParser<VehicleImpl>>(_messageLogger, _filename, std::make_shared<SubElementParameterDeclarationsParser>(parameterDeclarationsXmlParser), OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS) );
        auto boundingBoxXmlParser = std::make_shared<BoundingBoxXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementBoundingBoxParser>(boundingBoxXmlParser));
        auto performanceXmlParser = std::make_shared<PerformanceXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPerformanceParser>(performanceXmlParser));
        auto axlesXmlParser = std::make_shared<AxlesXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementAxlesParser>(axlesXmlParser));
        auto propertiesXmlParser = std::make_shared<PropertiesXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPropertiesParser>(propertiesXmlParser));
        return result;
    }

    void VehicleXmlParser::SubElementParameterDeclarationsParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object)
    {
        auto parameterDeclarations = std::make_shared<ParameterDeclarationImpl>();
        // Setting the parent
        parameterDeclarations->SetParent(object);
        _parameterDeclarationXmlParser->ParseElement(indexedElement, parserContext, parameterDeclarations);
        auto parameterDeclarationsList = object->GetParameterDeclarations();
        parameterDeclarationsList.push_back(parameterDeclarations);
    }
    void VehicleXmlParser::SubElementBoundingBoxParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object)
    {
        auto boundingBox = std::make_shared<BoundingBoxImpl>();
        // Setting the parent
        boundingBox->SetParent(object);
        _boundingBoxXmlParser->ParseElement(indexedElement, parserContext, boundingBox);

        object->SetBoundingBox(boundingBox);
    }
    void VehicleXmlParser::SubElementPerformanceParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object)
    {
        auto performance = std::make_shared<PerformanceImpl>();
        // Setting the parent
        performance->SetParent(object);
        _performanceXmlParser->ParseElement(indexedElement, parserContext, performance);

        object->SetPerformance(performance);
    }
    void VehicleXmlParser::SubElementAxlesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object)
    {
        auto axles = std::make_shared<AxlesImpl>();
        // Setting the parent
        axles->SetParent(object);
        _axlesXmlParser->ParseElement(indexedElement, parserContext, axles);

        object->SetAxles(axles);
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

    void VehicleCatalogLocationXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCatalogLocationImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing VehicleCatalogLocation", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing VehicleCatalogLocation", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCatalogLocationImpl>>> VehicleCatalogLocationXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCatalogLocationImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<VehicleCatalogLocationImpl>>> VehicleCatalogLocationXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<VehicleCatalogLocationImpl>>> result;
        auto directoryXmlParser = std::make_shared<DirectoryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementDirectoryParser>(directoryXmlParser));
        return result;
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

    void VehicleCategoryDistributionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCategoryDistributionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing VehicleCategoryDistribution", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing VehicleCategoryDistribution", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCategoryDistributionImpl>>> VehicleCategoryDistributionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCategoryDistributionImpl>>> result;

        return result;
    }

    std::vector<std::shared_ptr<IElementParser<VehicleCategoryDistributionImpl>>> VehicleCategoryDistributionXmlParser::SubElementParser::CreateParserList()
    {
        std::vector<std::shared_ptr<IElementParser<VehicleCategoryDistributionImpl>>> result;
        auto vehicleCategoryDistributionEntriesXmlParser = std::make_shared<VehicleCategoryDistributionEntryXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementVehicleCategoryDistributionEntriesParser>(vehicleCategoryDistributionEntriesXmlParser));
        return result;
    }

    void VehicleCategoryDistributionXmlParser::SubElementVehicleCategoryDistributionEntriesParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCategoryDistributionImpl>& object)
    {
        auto vehicleCategoryDistributionEntries = std::make_shared<VehicleCategoryDistributionEntryImpl>();
        // Setting the parent
        vehicleCategoryDistributionEntries->SetParent(object);
        _vehicleCategoryDistributionEntryXmlParser->ParseElement(indexedElement, parserContext, vehicleCategoryDistributionEntries);
        auto vehicleCategoryDistributionEntriesList = object->GetVehicleCategoryDistributionEntries();
        vehicleCategoryDistributionEntriesList.push_back(vehicleCategoryDistributionEntries);
    }

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleCategoryDistributionEntryImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/

    void VehicleCategoryDistributionEntryXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCategoryDistributionEntryImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing VehicleCategoryDistributionEntry", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing VehicleCategoryDistributionEntry", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCategoryDistributionEntryImpl>>> VehicleCategoryDistributionEntryXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCategoryDistributionEntryImpl>>> result;

        class AttributeCategory: public IAttributeParser<VehicleCategoryDistributionEntryImpl>, public XmlParserBase<VehicleCategoryDistributionEntryImpl>
        {
        public:
            AttributeCategory(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VehicleCategoryDistributionEntryImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VehicleCategoryDistributionEntryImpl>& object) override
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

    void VertexXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VertexImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Vertex", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Vertex", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<VertexImpl>>> VertexXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<VertexImpl>>> result;

        class AttributeTime: public IAttributeParser<VertexImpl>, public XmlParserBase<VertexImpl>
        {
        public:
            AttributeTime(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VertexImpl>& object) override
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
        auto positionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPositionParser>(positionXmlParser));
        return result;
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

    void VisibilityActionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VisibilityActionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing VisibilityAction", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing VisibilityAction", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<VisibilityActionImpl>>> VisibilityActionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<VisibilityActionImpl>>> result;

        class AttributeGraphics: public IAttributeParser<VisibilityActionImpl>, public XmlParserBase<VisibilityActionImpl>
        {
        public:
            AttributeGraphics(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VisibilityActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VisibilityActionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<VisibilityActionImpl>& object) override
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

    void WaypointXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WaypointImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Waypoint", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Waypoint", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<WaypointImpl>>> WaypointXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<WaypointImpl>>> result;

        class AttributeRouteStrategy: public IAttributeParser<WaypointImpl>, public XmlParserBase<WaypointImpl>
        {
        public:
            AttributeRouteStrategy(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WaypointImpl>& object) override
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
        auto positionXmlParser = std::make_shared<PositionXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPositionParser>(positionXmlParser));
        return result;
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

    void WeatherXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WeatherImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing Weather", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing Weather", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<WeatherImpl>>> WeatherXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<WeatherImpl>>> result;

        class AttributeCloudState: public IAttributeParser<WeatherImpl>, public XmlParserBase<WeatherImpl>
        {
        public:
            AttributeCloudState(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WeatherImpl>& object) override
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
        auto sunXmlParser = std::make_shared<SunXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementSunParser>(sunXmlParser));
        auto fogXmlParser = std::make_shared<FogXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementFogParser>(fogXmlParser));
        auto precipitationXmlParser = std::make_shared<PrecipitationXmlParser>(_messageLogger, _filename);
        result.push_back(std::make_shared<SubElementPrecipitationParser>(precipitationXmlParser));
        return result;
    }

    void WeatherXmlParser::SubElementSunParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WeatherImpl>& object)
    {
        auto sun = std::make_shared<SunImpl>();
        // Setting the parent
        sun->SetParent(object);
        _sunXmlParser->ParseElement(indexedElement, parserContext, sun);

        object->SetSun(sun);
    }
    void WeatherXmlParser::SubElementFogParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WeatherImpl>& object)
    {
        auto fog = std::make_shared<FogImpl>();
        // Setting the parent
        fog->SetParent(object);
        _fogXmlParser->ParseElement(indexedElement, parserContext, fog);

        object->SetFog(fog);
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

    void WorldPositionXmlParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WorldPositionImpl>& object)
    {
        auto msg = FileContentMessage("Start Parsing WorldPosition", DEBUG, Textmarker(indexedElement->GetStartElementLocation().GetLine(), indexedElement->GetStartElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
        XmlComplexTypeParser::ParseElement(indexedElement,  parserContext, object);
        msg = FileContentMessage("End Parsing WorldPosition", DEBUG, Textmarker(indexedElement->GetEndElementLocation().GetLine(), indexedElement->GetEndElementLocation().GetColumn(), _filename));
        _messageLogger.LogMessage(msg);
    }

    std::map<std::string, std::shared_ptr<IAttributeParser<WorldPositionImpl>>> WorldPositionXmlParser::GetAttributeNameToAttributeParserMap()
    {
        std::map<std::string, std::shared_ptr<IAttributeParser<WorldPositionImpl>>> result;

        class AttributeX: public IAttributeParser<WorldPositionImpl>, public XmlParserBase<WorldPositionImpl>
        {
        public:
            AttributeX(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WorldPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WorldPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WorldPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WorldPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WorldPositionImpl>& object) override
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

            void Parse(RAC_XML_INDEXER::Position& startPosition, RAC_XML_INDEXER::Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<WorldPositionImpl>& object) override
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
