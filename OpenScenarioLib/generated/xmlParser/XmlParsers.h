#pragma once

#include "IParserMessageLogger.h"
#include "OscConstants.h"
#include "IndexedElement.h"
#include "ParserContext.h"
#include <vector>
#include "ApiClassImpl.h"
//%helper.getInterfaceTypeImport(element, packageName).each{importedType->%>import =importedType%>%}%>
#include "XmlAllParser.h"
#include "XmlChoiceParser.h"
#include "XmlSequenceParser.h"
#include <map>
#include "XmlComplexTypeParser.h"
#include "XmlGroupParser.h"
#include "XmlSimpleContentParser.h"
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
    class AbsoluteSpeedXmlParser;
    class AbsoluteTargetLaneXmlParser;
    class AbsoluteTargetLaneOffsetXmlParser;
    class AbsoluteTargetSpeedXmlParser;
    class AccelerationConditionXmlParser;
    class AcquirePositionActionXmlParser;
    class ActXmlParser;
    class ActionXmlParser;
    class ActivateControllerActionXmlParser;
    class ActorsXmlParser;
    class AddEntityActionXmlParser;
    class AssignControllerActionXmlParser;
    class AssignRouteActionXmlParser;
    class AxleXmlParser;
    class AxlesXmlParser;
    class BoundingBoxXmlParser;
    class ByEntityConditionXmlParser;
    class ByObjectTypeXmlParser;
    class ByTypeXmlParser;
    class ByValueConditionXmlParser;
    class CatalogXmlParser;
    class CatalogDefinitionXmlParser;
    class CatalogLocationsXmlParser;
    class CatalogReferenceXmlParser;
    class CenterXmlParser;
    class CentralSwarmObjectXmlParser;
    class ClothoidXmlParser;
    class CollisionConditionXmlParser;
    class ConditionXmlParser;
    class ConditionGroupXmlParser;
    class ControlPointXmlParser;
    class ControllerXmlParser;
    class ControllerActionXmlParser;
    class ControllerCatalogLocationXmlParser;
    class ControllerDistributionXmlParser;
    class ControllerDistributionEntryXmlParser;
    class CustomCommandActionXmlParser;
    class DeleteEntityActionXmlParser;
    class DimensionsXmlParser;
    class DirectoryXmlParser;
    class DistanceConditionXmlParser;
    class DynamicConstraintsXmlParser;
    class EndOfRoadConditionXmlParser;
    class EntitiesXmlParser;
    class EntityActionXmlParser;
    class EntityConditionXmlParser;
    class EntityObjectXmlParser;
    class EntityRefXmlParser;
    class EntitySelectionXmlParser;
    class EnvironmentXmlParser;
    class EnvironmentActionXmlParser;
    class EnvironmentCatalogLocationXmlParser;
    class EventXmlParser;
    class FileXmlParser;
    class FileHeaderXmlParser;
    class FinalSpeedXmlParser;
    class FogXmlParser;
    class FollowTrajectoryActionXmlParser;
    class GlobalActionXmlParser;
    class InRoutePositionXmlParser;
    class InfrastructureActionXmlParser;
    class InitXmlParser;
    class InitActionsXmlParser;
    class KnotXmlParser;
    class LaneChangeActionXmlParser;
    class LaneChangeTargetXmlParser;
    class LaneOffsetActionXmlParser;
    class LaneOffsetActionDynamicsXmlParser;
    class LaneOffsetTargetXmlParser;
    class LanePositionXmlParser;
    class LateralActionXmlParser;
    class LateralDistanceActionXmlParser;
    class LongitudinalActionXmlParser;
    class LongitudinalDistanceActionXmlParser;
    class ManeuverXmlParser;
    class ManeuverCatalogLocationXmlParser;
    class ManeuverGroupXmlParser;
    class MiscObjectXmlParser;
    class MiscObjectCatalogLocationXmlParser;
    class ModifyRuleXmlParser;
    class NoneXmlParser;
    class NurbsXmlParser;
    class ObjectControllerXmlParser;
    class OffroadConditionXmlParser;
    class OpenScenarioXmlParser;
    class OpenScenarioCategoryXmlParser;
    class OrientationXmlParser;
    class OverrideBrakeActionXmlParser;
    class OverrideClutchActionXmlParser;
    class OverrideControllerValueActionXmlParser;
    class OverrideGearActionXmlParser;
    class OverrideParkingBrakeActionXmlParser;
    class OverrideSteeringWheelActionXmlParser;
    class OverrideThrottleActionXmlParser;
    class ParameterActionXmlParser;
    class ParameterAddValueRuleXmlParser;
    class ParameterAssignmentXmlParser;
    class ParameterConditionXmlParser;
    class ParameterDeclarationXmlParser;
    class ParameterModifyActionXmlParser;
    class ParameterMultiplyByValueRuleXmlParser;
    class ParameterSetActionXmlParser;
    class PedestrianXmlParser;
    class PedestrianCatalogLocationXmlParser;
    class PerformanceXmlParser;
    class PhaseXmlParser;
    class PolylineXmlParser;
    class PositionXmlParser;
    class PositionInLaneCoordinatesXmlParser;
    class PositionInRoadCoordinatesXmlParser;
    class PositionOfCurrentEntityXmlParser;
    class PrecipitationXmlParser;
    class PrivateXmlParser;
    class PrivateActionXmlParser;
    class PropertiesXmlParser;
    class PropertyXmlParser;
    class ReachPositionConditionXmlParser;
    class RelativeDistanceConditionXmlParser;
    class RelativeLanePositionXmlParser;
    class RelativeObjectPositionXmlParser;
    class RelativeRoadPositionXmlParser;
    class RelativeSpeedConditionXmlParser;
    class RelativeSpeedToMasterXmlParser;
    class RelativeTargetLaneXmlParser;
    class RelativeTargetLaneOffsetXmlParser;
    class RelativeTargetSpeedXmlParser;
    class RelativeWorldPositionXmlParser;
    class RoadConditionXmlParser;
    class RoadNetworkXmlParser;
    class RoadPositionXmlParser;
    class RouteXmlParser;
    class RouteCatalogLocationXmlParser;
    class RoutePositionXmlParser;
    class RouteRefXmlParser;
    class RoutingActionXmlParser;
    class ScenarioDefinitionXmlParser;
    class ScenarioObjectXmlParser;
    class SelectedEntitiesXmlParser;
    class ShapeXmlParser;
    class SimulationTimeConditionXmlParser;
    class SpeedActionXmlParser;
    class SpeedActionTargetXmlParser;
    class SpeedConditionXmlParser;
    class StandStillConditionXmlParser;
    class StoryXmlParser;
    class StoryboardXmlParser;
    class StoryboardElementStateConditionXmlParser;
    class SunXmlParser;
    class SynchronizeActionXmlParser;
    class TeleportActionXmlParser;
    class TimeHeadwayConditionXmlParser;
    class TimeOfDayXmlParser;
    class TimeOfDayConditionXmlParser;
    class TimeReferenceXmlParser;
    class TimeToCollisionConditionXmlParser;
    class TimeToCollisionConditionTargetXmlParser;
    class TimingXmlParser;
    class TrafficActionXmlParser;
    class TrafficDefinitionXmlParser;
    class TrafficSignalActionXmlParser;
    class TrafficSignalConditionXmlParser;
    class TrafficSignalControllerXmlParser;
    class TrafficSignalControllerActionXmlParser;
    class TrafficSignalControllerConditionXmlParser;
    class TrafficSignalStateXmlParser;
    class TrafficSignalStateActionXmlParser;
    class TrafficSinkActionXmlParser;
    class TrafficSourceActionXmlParser;
    class TrafficSwarmActionXmlParser;
    class TrajectoryXmlParser;
    class TrajectoryCatalogLocationXmlParser;
    class TrajectoryFollowingModeXmlParser;
    class TransitionDynamicsXmlParser;
    class TraveledDistanceConditionXmlParser;
    class TriggerXmlParser;
    class TriggeringEntitiesXmlParser;
    class UserDefinedActionXmlParser;
    class UserDefinedValueConditionXmlParser;
    class VehicleXmlParser;
    class VehicleCatalogLocationXmlParser;
    class VehicleCategoryDistributionXmlParser;
    class VehicleCategoryDistributionEntryXmlParser;
    class VertexXmlParser;
    class VisibilityActionXmlParser;
    class WaypointXmlParser;
    class WeatherXmlParser;
    class WorldPositionXmlParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AbsoluteSpeedImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AbsoluteSpeedXmlParser: public XmlComplexTypeParser<AbsoluteSpeedImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteSpeedImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<AbsoluteSpeedImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<AbsoluteSpeedImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        AbsoluteSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AbsoluteSpeedImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AbsoluteTargetLaneImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AbsoluteTargetLaneXmlParser: public XmlComplexTypeParser<AbsoluteTargetLaneImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetLaneImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<AbsoluteTargetLaneImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<AbsoluteTargetLaneImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        AbsoluteTargetLaneXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AbsoluteTargetLaneImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AbsoluteTargetLaneOffsetImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AbsoluteTargetLaneOffsetXmlParser: public XmlComplexTypeParser<AbsoluteTargetLaneOffsetImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetLaneOffsetImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<AbsoluteTargetLaneOffsetImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<AbsoluteTargetLaneOffsetImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        AbsoluteTargetLaneOffsetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AbsoluteTargetLaneOffsetImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AbsoluteTargetSpeedImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AbsoluteTargetSpeedXmlParser: public XmlComplexTypeParser<AbsoluteTargetSpeedImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<AbsoluteTargetSpeedImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<AbsoluteTargetSpeedImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<AbsoluteTargetSpeedImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        AbsoluteTargetSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AbsoluteTargetSpeedImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AccelerationConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AccelerationConditionXmlParser: public XmlComplexTypeParser<AccelerationConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<AccelerationConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<AccelerationConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<AccelerationConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        AccelerationConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AccelerationConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AcquirePositionActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AcquirePositionActionXmlParser: public XmlComplexTypeParser<AcquirePositionActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<AcquirePositionActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<AcquirePositionActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<AcquirePositionActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement position
        */
        class SubElementPositionParser: public IElementParser<AcquirePositionActionImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AcquirePositionActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POSITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        AcquirePositionActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AcquirePositionActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ActImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ActXmlParser: public XmlComplexTypeParser<ActImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ActImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ActImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ActImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement maneuverGroups
        */
        class SubElementManeuverGroupsParser: public IElementParser<ActImpl> 
        {
        private:
            std::shared_ptr<ManeuverGroupXmlParser> _maneuverGroupXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementManeuverGroupsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__MANEUVER_GROUP ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__MANEUVER_GROUP
                        };
            }
        };

        /**
        * A parser for subelement startTrigger
        */
        class SubElementStartTriggerParser: public IElementParser<ActImpl> 
        {
        private:
            std::shared_ptr<TriggerXmlParser> _triggerXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementStartTriggerParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__START_TRIGGER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__START_TRIGGER
                        };
            }
        };

        /**
        * A parser for subelement stopTrigger
        */
        class SubElementStopTriggerParser: public IElementParser<ActImpl> 
        {
        private:
            std::shared_ptr<TriggerXmlParser> _triggerXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementStopTriggerParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__STOP_TRIGGER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__STOP_TRIGGER
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ActXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ActionXmlParser: public XmlComplexTypeParser<ActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<ActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement globalAction
        */
        class SubElementGlobalActionParser: public IElementParser<ActionImpl> 
        {
        private:
            std::shared_ptr<GlobalActionXmlParser> _globalActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementGlobalActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__GLOBAL_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__GLOBAL_ACTION
                        };
            }
        };

        /**
        * A parser for subelement userDefinedAction
        */
        class SubElementUserDefinedActionParser: public IElementParser<ActionImpl> 
        {
        private:
            std::shared_ptr<UserDefinedActionXmlParser> _userDefinedActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementUserDefinedActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__USER_DEFINED_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__USER_DEFINED_ACTION
                        };
            }
        };

        /**
        * A parser for subelement privateAction
        */
        class SubElementPrivateActionParser: public IElementParser<ActionImpl> 
        {
        private:
            std::shared_ptr<PrivateActionXmlParser> _privateActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPrivateActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ActivateControllerActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ActivateControllerActionXmlParser: public XmlComplexTypeParser<ActivateControllerActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ActivateControllerActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ActivateControllerActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ActivateControllerActionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ActivateControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActivateControllerActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ActorsImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ActorsXmlParser: public XmlComplexTypeParser<ActorsImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ActorsImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ActorsImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ActorsImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement entityRefs
        */
        class SubElementEntityRefsParser: public IElementParser<ActorsImpl> 
        {
        private:
            std::shared_ptr<EntityRefXmlParser> _entityRefXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEntityRefsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActorsImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENTITY_REF
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ActorsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ActorsImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AddEntityActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AddEntityActionXmlParser: public XmlComplexTypeParser<AddEntityActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<AddEntityActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<AddEntityActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<AddEntityActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement position
        */
        class SubElementPositionParser: public IElementParser<AddEntityActionImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AddEntityActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POSITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        AddEntityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AddEntityActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AssignControllerActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AssignControllerActionXmlParser: public XmlComplexTypeParser<AssignControllerActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<AssignControllerActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<AssignControllerActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<AssignControllerActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement controller
        */
        class SubElementControllerParser: public IElementParser<AssignControllerActionImpl> 
        {
        private:
            std::shared_ptr<ControllerXmlParser> _controllerXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementControllerParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignControllerActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CONTROLLER
                        };
            }
        };

        /**
        * A parser for subelement catalogReference
        */
        class SubElementCatalogReferenceParser: public IElementParser<AssignControllerActionImpl> 
        {
        private:
            std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignControllerActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        AssignControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignControllerActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AssignRouteActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AssignRouteActionXmlParser: public XmlComplexTypeParser<AssignRouteActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<AssignRouteActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<AssignRouteActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<AssignRouteActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement route
        */
        class SubElementRouteParser: public IElementParser<AssignRouteActionImpl> 
        {
        private:
            std::shared_ptr<RouteXmlParser> _routeXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRouteParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignRouteActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ROUTE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ROUTE
                        };
            }
        };

        /**
        * A parser for subelement catalogReference
        */
        class SubElementCatalogReferenceParser: public IElementParser<AssignRouteActionImpl> 
        {
        private:
            std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignRouteActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        AssignRouteActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AssignRouteActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AxleImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AxleXmlParser: public XmlComplexTypeParser<AxleImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<AxleImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<AxleImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<AxleImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        AxleXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxleImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AxlesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AxlesXmlParser: public XmlComplexTypeParser<AxlesImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<AxlesImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<AxlesImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<AxlesImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement frontAxle
        */
        class SubElementFrontAxleParser: public IElementParser<AxlesImpl> 
        {
        private:
            std::shared_ptr<AxleXmlParser> _axleXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementFrontAxleParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxlesImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__FRONT_AXLE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__FRONT_AXLE
                        };
            }
        };

        /**
        * A parser for subelement rearAxle
        */
        class SubElementRearAxleParser: public IElementParser<AxlesImpl> 
        {
        private:
            std::shared_ptr<AxleXmlParser> _axleXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRearAxleParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxlesImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__REAR_AXLE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__REAR_AXLE
                        };
            }
        };

        /**
        * A parser for subelement additionalAxles
        */
        class SubElementAdditionalAxlesParser: public IElementParser<AxlesImpl> 
        {
        private:
            std::shared_ptr<AxleXmlParser> _axleXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementAdditionalAxlesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxlesImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ADDITIONAL_AXLE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ADDITIONAL_AXLE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        AxlesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<AxlesImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a BoundingBoxImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class BoundingBoxXmlParser: public XmlComplexTypeParser<BoundingBoxImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<BoundingBoxImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<BoundingBoxImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<BoundingBoxImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement center
        */
        class SubElementCenterParser: public IElementParser<BoundingBoxImpl> 
        {
        private:
            std::shared_ptr<CenterXmlParser> _centerXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCenterParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BoundingBoxImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CENTER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CENTER
                        };
            }
        };

        /**
        * A parser for subelement dimensions
        */
        class SubElementDimensionsParser: public IElementParser<BoundingBoxImpl> 
        {
        private:
            std::shared_ptr<DimensionsXmlParser> _dimensionsXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDimensionsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BoundingBoxImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DIMENSIONS ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DIMENSIONS
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        BoundingBoxXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BoundingBoxImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ByEntityConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ByEntityConditionXmlParser: public XmlComplexTypeParser<ByEntityConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ByEntityConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<ByEntityConditionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ByEntityConditionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement triggeringEntities
        */
        class SubElementTriggeringEntitiesParser: public IElementParser<ByEntityConditionImpl> 
        {
        private:
            std::shared_ptr<TriggeringEntitiesXmlParser> _triggeringEntitiesXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTriggeringEntitiesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByEntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRIGGERING_ENTITIES ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRIGGERING_ENTITIES
                        };
            }
        };

        /**
        * A parser for subelement entityCondition
        */
        class SubElementEntityConditionParser: public IElementParser<ByEntityConditionImpl> 
        {
        private:
            std::shared_ptr<EntityConditionXmlParser> _entityConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEntityConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByEntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENTITY_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENTITY_CONDITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ByEntityConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByEntityConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ByObjectTypeImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ByObjectTypeXmlParser: public XmlComplexTypeParser<ByObjectTypeImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ByObjectTypeImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ByObjectTypeImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ByObjectTypeImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ByObjectTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByObjectTypeImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ByTypeImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ByTypeXmlParser: public XmlComplexTypeParser<ByTypeImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ByTypeImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ByTypeImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ByTypeImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ByTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByTypeImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ByValueConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ByValueConditionXmlParser: public XmlComplexTypeParser<ByValueConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ByValueConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<ByValueConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ByValueConditionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement parameterCondition
        */
        class SubElementParameterConditionParser: public IElementParser<ByValueConditionImpl> 
        {
        private:
            std::shared_ptr<ParameterConditionXmlParser> _parameterConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PARAMETER_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement timeOfDayCondition
        */
        class SubElementTimeOfDayConditionParser: public IElementParser<ByValueConditionImpl> 
        {
        private:
            std::shared_ptr<TimeOfDayConditionXmlParser> _timeOfDayConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTimeOfDayConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TIME_OF_DAY_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TIME_OF_DAY_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement simulationTimeCondition
        */
        class SubElementSimulationTimeConditionParser: public IElementParser<ByValueConditionImpl> 
        {
        private:
            std::shared_ptr<SimulationTimeConditionXmlParser> _simulationTimeConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementSimulationTimeConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__SIMULATION_TIME_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__SIMULATION_TIME_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement storyboardElementStateCondition
        */
        class SubElementStoryboardElementStateConditionParser: public IElementParser<ByValueConditionImpl> 
        {
        private:
            std::shared_ptr<StoryboardElementStateConditionXmlParser> _storyboardElementStateConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementStoryboardElementStateConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__STORYBOARD_ELEMENT_STATE_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__STORYBOARD_ELEMENT_STATE_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement userDefinedValueCondition
        */
        class SubElementUserDefinedValueConditionParser: public IElementParser<ByValueConditionImpl> 
        {
        private:
            std::shared_ptr<UserDefinedValueConditionXmlParser> _userDefinedValueConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementUserDefinedValueConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__USER_DEFINED_VALUE_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__USER_DEFINED_VALUE_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement trafficSignalCondition
        */
        class SubElementTrafficSignalConditionParser: public IElementParser<ByValueConditionImpl> 
        {
        private:
            std::shared_ptr<TrafficSignalConditionXmlParser> _trafficSignalConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficSignalConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement trafficSignalControllerCondition
        */
        class SubElementTrafficSignalControllerConditionParser: public IElementParser<ByValueConditionImpl> 
        {
        private:
            std::shared_ptr<TrafficSignalControllerConditionXmlParser> _trafficSignalControllerConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficSignalControllerConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_CONDITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ByValueConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ByValueConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CatalogImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CatalogXmlParser: public XmlComplexTypeParser<CatalogImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<CatalogImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<CatalogImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<CatalogImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement vehicles
        */
        class SubElementVehiclesParser: public IElementParser<CatalogImpl> 
        {
        private:
            std::shared_ptr<VehicleXmlParser> _vehicleXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementVehiclesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__VEHICLE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__VEHICLE
                        };
            }
        };

        /**
        * A parser for subelement controllers
        */
        class SubElementControllersParser: public IElementParser<CatalogImpl> 
        {
        private:
            std::shared_ptr<ControllerXmlParser> _controllerXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementControllersParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CONTROLLER
                        };
            }
        };

        /**
        * A parser for subelement pedestrians
        */
        class SubElementPedestriansParser: public IElementParser<CatalogImpl> 
        {
        private:
            std::shared_ptr<PedestrianXmlParser> _pedestrianXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPedestriansParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PEDESTRIAN ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PEDESTRIAN
                        };
            }
        };

        /**
        * A parser for subelement miscObjects
        */
        class SubElementMiscObjectsParser: public IElementParser<CatalogImpl> 
        {
        private:
            std::shared_ptr<MiscObjectXmlParser> _miscObjectXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementMiscObjectsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__MISC_OBJECT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__MISC_OBJECT
                        };
            }
        };

        /**
        * A parser for subelement environments
        */
        class SubElementEnvironmentsParser: public IElementParser<CatalogImpl> 
        {
        private:
            std::shared_ptr<EnvironmentXmlParser> _environmentXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEnvironmentsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENVIRONMENT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENVIRONMENT
                        };
            }
        };

        /**
        * A parser for subelement maneuvers
        */
        class SubElementManeuversParser: public IElementParser<CatalogImpl> 
        {
        private:
            std::shared_ptr<ManeuverXmlParser> _maneuverXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementManeuversParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__MANEUVER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__MANEUVER
                        };
            }
        };

        /**
        * A parser for subelement trajectories
        */
        class SubElementTrajectoriesParser: public IElementParser<CatalogImpl> 
        {
        private:
            std::shared_ptr<TrajectoryXmlParser> _trajectoryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrajectoriesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAJECTORY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAJECTORY
                        };
            }
        };

        /**
        * A parser for subelement routes
        */
        class SubElementRoutesParser: public IElementParser<CatalogImpl> 
        {
        private:
            std::shared_ptr<RouteXmlParser> _routeXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRoutesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ROUTE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ROUTE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        CatalogXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogImpl>& object) override;
    
    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CatalogDefinitionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CatalogDefinitionXmlParser: public XmlGroupParser<CatalogDefinitionImpl> 
    {


    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<CatalogDefinitionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<CatalogDefinitionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement catalog
        */
        class SubElementCatalogParser: public IElementParser<CatalogDefinitionImpl> 
        {
        private:
            std::shared_ptr<CatalogXmlParser> _catalogXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCatalogParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogDefinitionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        CatalogDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlGroupParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogDefinitionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CatalogLocationsImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CatalogLocationsXmlParser: public XmlComplexTypeParser<CatalogLocationsImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<CatalogLocationsImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<CatalogLocationsImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<CatalogLocationsImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement vehicleCatalog
        */
        class SubElementVehicleCatalogParser: public IElementParser<CatalogLocationsImpl> 
        {
        private:
            std::shared_ptr<VehicleCatalogLocationXmlParser> _vehicleCatalogLocationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementVehicleCatalogParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__VEHICLE_CATALOG ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__VEHICLE_CATALOG
                        };
            }
        };

        /**
        * A parser for subelement controllerCatalog
        */
        class SubElementControllerCatalogParser: public IElementParser<CatalogLocationsImpl> 
        {
        private:
            std::shared_ptr<ControllerCatalogLocationXmlParser> _controllerCatalogLocationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementControllerCatalogParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER_CATALOG ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CONTROLLER_CATALOG
                        };
            }
        };

        /**
        * A parser for subelement pedestrianCatalog
        */
        class SubElementPedestrianCatalogParser: public IElementParser<CatalogLocationsImpl> 
        {
        private:
            std::shared_ptr<PedestrianCatalogLocationXmlParser> _pedestrianCatalogLocationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPedestrianCatalogParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PEDESTRIAN_CATALOG ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PEDESTRIAN_CATALOG
                        };
            }
        };

        /**
        * A parser for subelement miscObjectCatalog
        */
        class SubElementMiscObjectCatalogParser: public IElementParser<CatalogLocationsImpl> 
        {
        private:
            std::shared_ptr<MiscObjectCatalogLocationXmlParser> _miscObjectCatalogLocationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementMiscObjectCatalogParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__MISC_OBJECT_CATALOG ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__MISC_OBJECT_CATALOG
                        };
            }
        };

        /**
        * A parser for subelement environmentCatalog
        */
        class SubElementEnvironmentCatalogParser: public IElementParser<CatalogLocationsImpl> 
        {
        private:
            std::shared_ptr<EnvironmentCatalogLocationXmlParser> _environmentCatalogLocationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEnvironmentCatalogParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENVIRONMENT_CATALOG ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENVIRONMENT_CATALOG
                        };
            }
        };

        /**
        * A parser for subelement maneuverCatalog
        */
        class SubElementManeuverCatalogParser: public IElementParser<CatalogLocationsImpl> 
        {
        private:
            std::shared_ptr<ManeuverCatalogLocationXmlParser> _maneuverCatalogLocationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementManeuverCatalogParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__MANEUVER_CATALOG ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__MANEUVER_CATALOG
                        };
            }
        };

        /**
        * A parser for subelement trajectoryCatalog
        */
        class SubElementTrajectoryCatalogParser: public IElementParser<CatalogLocationsImpl> 
        {
        private:
            std::shared_ptr<TrajectoryCatalogLocationXmlParser> _trajectoryCatalogLocationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrajectoryCatalogParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAJECTORY_CATALOG ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAJECTORY_CATALOG
                        };
            }
        };

        /**
        * A parser for subelement routeCatalog
        */
        class SubElementRouteCatalogParser: public IElementParser<CatalogLocationsImpl> 
        {
        private:
            std::shared_ptr<RouteCatalogLocationXmlParser> _routeCatalogLocationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRouteCatalogParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ROUTE_CATALOG ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ROUTE_CATALOG
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        CatalogLocationsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogLocationsImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CatalogReferenceImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CatalogReferenceXmlParser: public XmlComplexTypeParser<CatalogReferenceImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<CatalogReferenceImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<CatalogReferenceImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<CatalogReferenceImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement parameterAssignments
        */
        class SubElementParameterAssignmentsParser: public IElementParser<CatalogReferenceImpl> 
        {
        private:
            std::shared_ptr<ParameterAssignmentXmlParser> _parameterAssignmentXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterAssignmentsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogReferenceImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENT;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENT};
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        CatalogReferenceXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CatalogReferenceImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CenterImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CenterXmlParser: public XmlComplexTypeParser<CenterImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<CenterImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<CenterImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<CenterImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        CenterXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CenterImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CentralSwarmObjectImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CentralSwarmObjectXmlParser: public XmlComplexTypeParser<CentralSwarmObjectImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<CentralSwarmObjectImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<CentralSwarmObjectImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<CentralSwarmObjectImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        CentralSwarmObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CentralSwarmObjectImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ClothoidImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ClothoidXmlParser: public XmlComplexTypeParser<ClothoidImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ClothoidImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ClothoidImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ClothoidImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement position
        */
        class SubElementPositionParser: public IElementParser<ClothoidImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ClothoidImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POSITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ClothoidXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ClothoidImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CollisionConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CollisionConditionXmlParser: public XmlComplexTypeParser<CollisionConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<CollisionConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<CollisionConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<CollisionConditionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement entityRef
        */
        class SubElementEntityRefParser: public IElementParser<CollisionConditionImpl> 
        {
        private:
            std::shared_ptr<EntityRefXmlParser> _entityRefXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CollisionConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENTITY_REF
                        };
            }
        };

        /**
        * A parser for subelement byType
        */
        class SubElementByTypeParser: public IElementParser<CollisionConditionImpl> 
        {
        private:
            std::shared_ptr<ByObjectTypeXmlParser> _byObjectTypeXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementByTypeParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CollisionConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__BY_TYPE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__BY_TYPE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        CollisionConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CollisionConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ConditionXmlParser: public XmlComplexTypeParser<ConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<ConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ConditionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement byEntityCondition
        */
        class SubElementByEntityConditionParser: public IElementParser<ConditionImpl> 
        {
        private:
            std::shared_ptr<ByEntityConditionXmlParser> _byEntityConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementByEntityConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__BY_ENTITY_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__BY_ENTITY_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement byValueCondition
        */
        class SubElementByValueConditionParser: public IElementParser<ConditionImpl> 
        {
        private:
            std::shared_ptr<ByValueConditionXmlParser> _byValueConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementByValueConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__BY_VALUE_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__BY_VALUE_CONDITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ConditionGroupImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ConditionGroupXmlParser: public XmlComplexTypeParser<ConditionGroupImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ConditionGroupImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ConditionGroupImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ConditionGroupImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement conditions
        */
        class SubElementConditionsParser: public IElementParser<ConditionGroupImpl> 
        {
        private:
            std::shared_ptr<ConditionXmlParser> _conditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementConditionsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ConditionGroupImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CONDITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ConditionGroupXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ConditionGroupImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ControlPointImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ControlPointXmlParser: public XmlComplexTypeParser<ControlPointImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ControlPointImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ControlPointImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ControlPointImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement position
        */
        class SubElementPositionParser: public IElementParser<ControlPointImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControlPointImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POSITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ControlPointXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControlPointImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ControllerImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ControllerXmlParser: public XmlComplexTypeParser<ControllerImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<ControllerImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ControllerImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement parameterDeclarations
        */
        class SubElementParameterDeclarationsParser: public IElementParser<ControllerImpl> 
        {
        private:
            std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
            }
        };

        /**
        * A parser for subelement properties
        */
        class SubElementPropertiesParser: public IElementParser<ControllerImpl> 
        {
        private:
            std::shared_ptr<PropertiesXmlParser> _propertiesXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PROPERTIES ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PROPERTIES
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ControllerXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ControllerActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ControllerActionXmlParser: public XmlComplexTypeParser<ControllerActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<ControllerActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ControllerActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement assignControllerAction
        */
        class SubElementAssignControllerActionParser: public IElementParser<ControllerActionImpl> 
        {
        private:
            std::shared_ptr<AssignControllerActionXmlParser> _assignControllerActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementAssignControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ASSIGN_CONTROLLER_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ASSIGN_CONTROLLER_ACTION
                        };
            }
        };

        /**
        * A parser for subelement overrideControllerValueAction
        */
        class SubElementOverrideControllerValueActionParser: public IElementParser<ControllerActionImpl> 
        {
        private:
            std::shared_ptr<OverrideControllerValueActionXmlParser> _overrideControllerValueActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementOverrideControllerValueActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__OVERRIDE_CONTROLLER_VALUE_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__OVERRIDE_CONTROLLER_VALUE_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ControllerCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ControllerCatalogLocationXmlParser: public XmlComplexTypeParser<ControllerCatalogLocationImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerCatalogLocationImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<ControllerCatalogLocationImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ControllerCatalogLocationImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement directory
        */
        class SubElementDirectoryParser: public IElementParser<ControllerCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerCatalogLocationImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DIRECTORY
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ControllerCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerCatalogLocationImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ControllerDistributionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ControllerDistributionXmlParser: public XmlComplexTypeParser<ControllerDistributionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerDistributionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ControllerDistributionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ControllerDistributionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement controllerDistributionEntries
        */
        class SubElementControllerDistributionEntriesParser: public IElementParser<ControllerDistributionImpl> 
        {
        private:
            std::shared_ptr<ControllerDistributionEntryXmlParser> _controllerDistributionEntryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementControllerDistributionEntriesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION_ENTRY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION_ENTRY
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ControllerDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ControllerDistributionEntryImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ControllerDistributionEntryXmlParser: public XmlComplexTypeParser<ControllerDistributionEntryImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ControllerDistributionEntryImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<ControllerDistributionEntryImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ControllerDistributionEntryImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement controller
        */
        class SubElementControllerParser: public IElementParser<ControllerDistributionEntryImpl> 
        {
        private:
            std::shared_ptr<ControllerXmlParser> _controllerXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementControllerParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionEntryImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CONTROLLER
                        };
            }
        };

        /**
        * A parser for subelement catalogReference
        */
        class SubElementCatalogReferenceParser: public IElementParser<ControllerDistributionEntryImpl> 
        {
        private:
            std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionEntryImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ControllerDistributionEntryXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ControllerDistributionEntryImpl>& object) override;
    
    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CustomCommandActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CustomCommandActionXmlParser: public XmlSimpleContentParser<CustomCommandActionImpl> 
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<CustomCommandActionImpl>>> GetAttributeNameToAttributeParserMap() override;
    protected:
        void SetContentProperty(const std::string content, std::shared_ptr<CustomCommandActionImpl>& object) override;
        bool IsContentRequired() override
        {
            return false;
        }


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        CustomCommandActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlSimpleContentParser(messageLogger, filename) {}

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<CustomCommandActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a DeleteEntityActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class DeleteEntityActionXmlParser: public XmlComplexTypeParser<DeleteEntityActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<DeleteEntityActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<DeleteEntityActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<DeleteEntityActionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        DeleteEntityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<DeleteEntityActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a DimensionsImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class DimensionsXmlParser: public XmlComplexTypeParser<DimensionsImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<DimensionsImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<DimensionsImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<DimensionsImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        DimensionsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<DimensionsImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a DirectoryImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class DirectoryXmlParser: public XmlComplexTypeParser<DirectoryImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<DirectoryImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<DirectoryImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<DirectoryImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        DirectoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<DirectoryImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a DistanceConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class DistanceConditionXmlParser: public XmlComplexTypeParser<DistanceConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<DistanceConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<DistanceConditionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<DistanceConditionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement position
        */
        class SubElementPositionParser: public IElementParser<DistanceConditionImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<DistanceConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POSITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        DistanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<DistanceConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a DynamicConstraintsImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class DynamicConstraintsXmlParser: public XmlComplexTypeParser<DynamicConstraintsImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<DynamicConstraintsImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<DynamicConstraintsImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<DynamicConstraintsImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        DynamicConstraintsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<DynamicConstraintsImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EndOfRoadConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EndOfRoadConditionXmlParser: public XmlComplexTypeParser<EndOfRoadConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<EndOfRoadConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<EndOfRoadConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<EndOfRoadConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        EndOfRoadConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EndOfRoadConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EntitiesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EntitiesXmlParser: public XmlComplexTypeParser<EntitiesImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<EntitiesImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<EntitiesImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<EntitiesImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement scenarioObjects
        */
        class SubElementScenarioObjectsParser: public IElementParser<EntitiesImpl> 
        {
        private:
            std::shared_ptr<ScenarioObjectXmlParser> _scenarioObjectXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementScenarioObjectsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntitiesImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__SCENARIO_OBJECT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__SCENARIO_OBJECT
                        };
            }
        };

        /**
        * A parser for subelement entitySelections
        */
        class SubElementEntitySelectionsParser: public IElementParser<EntitiesImpl> 
        {
        private:
            std::shared_ptr<EntitySelectionXmlParser> _entitySelectionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEntitySelectionsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntitiesImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENTITY_SELECTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENTITY_SELECTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        EntitiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntitiesImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EntityActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EntityActionXmlParser: public XmlComplexTypeParser<EntityActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<EntityActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<EntityActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<EntityActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement addEntityAction
        */
        class SubElementAddEntityActionParser: public IElementParser<EntityActionImpl> 
        {
        private:
            std::shared_ptr<AddEntityActionXmlParser> _addEntityActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementAddEntityActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ADD_ENTITY_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ADD_ENTITY_ACTION
                        };
            }
        };

        /**
        * A parser for subelement deleteEntityAction
        */
        class SubElementDeleteEntityActionParser: public IElementParser<EntityActionImpl> 
        {
        private:
            std::shared_ptr<DeleteEntityActionXmlParser> _deleteEntityActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDeleteEntityActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DELETE_ENTITY_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DELETE_ENTITY_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        EntityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EntityConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EntityConditionXmlParser: public XmlComplexTypeParser<EntityConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<EntityConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<EntityConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<EntityConditionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement endOfRoadCondition
        */
        class SubElementEndOfRoadConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<EndOfRoadConditionXmlParser> _endOfRoadConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEndOfRoadConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__END_OF_ROAD_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__END_OF_ROAD_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement collisionCondition
        */
        class SubElementCollisionConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<CollisionConditionXmlParser> _collisionConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCollisionConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__COLLISION_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__COLLISION_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement offroadCondition
        */
        class SubElementOffroadConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<OffroadConditionXmlParser> _offroadConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementOffroadConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__OFFROAD_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__OFFROAD_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement timeHeadwayCondition
        */
        class SubElementTimeHeadwayConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<TimeHeadwayConditionXmlParser> _timeHeadwayConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTimeHeadwayConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TIME_HEADWAY_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TIME_HEADWAY_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement timeToCollisionCondition
        */
        class SubElementTimeToCollisionConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<TimeToCollisionConditionXmlParser> _timeToCollisionConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTimeToCollisionConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement accelerationCondition
        */
        class SubElementAccelerationConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<AccelerationConditionXmlParser> _accelerationConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementAccelerationConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ACCELERATION_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ACCELERATION_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement standStillCondition
        */
        class SubElementStandStillConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<StandStillConditionXmlParser> _standStillConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementStandStillConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__STAND_STILL_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__STAND_STILL_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement speedCondition
        */
        class SubElementSpeedConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<SpeedConditionXmlParser> _speedConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementSpeedConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__SPEED_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__SPEED_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement relativeSpeedCondition
        */
        class SubElementRelativeSpeedConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<RelativeSpeedConditionXmlParser> _relativeSpeedConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRelativeSpeedConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement traveledDistanceCondition
        */
        class SubElementTraveledDistanceConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<TraveledDistanceConditionXmlParser> _traveledDistanceConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTraveledDistanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAVELED_DISTANCE_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAVELED_DISTANCE_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement reachPositionCondition
        */
        class SubElementReachPositionConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<ReachPositionConditionXmlParser> _reachPositionConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementReachPositionConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__REACH_POSITION_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__REACH_POSITION_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement distanceCondition
        */
        class SubElementDistanceConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<DistanceConditionXmlParser> _distanceConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDistanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DISTANCE_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DISTANCE_CONDITION
                        };
            }
        };

        /**
        * A parser for subelement relativeDistanceCondition
        */
        class SubElementRelativeDistanceConditionParser: public IElementParser<EntityConditionImpl> 
        {
        private:
            std::shared_ptr<RelativeDistanceConditionXmlParser> _relativeDistanceConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRelativeDistanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_DISTANCE_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__RELATIVE_DISTANCE_CONDITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        EntityConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityConditionImpl>& object) override;
    
    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EntityObjectImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EntityObjectXmlParser: public XmlGroupParser<EntityObjectImpl> 
    {


    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<EntityObjectImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<EntityObjectImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement catalogReference
        */
        class SubElementCatalogReferenceParser: public IElementParser<EntityObjectImpl> 
        {
        private:
            std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                        };
            }
        };

        /**
        * A parser for subelement vehicle
        */
        class SubElementVehicleParser: public IElementParser<EntityObjectImpl> 
        {
        private:
            std::shared_ptr<VehicleXmlParser> _vehicleXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementVehicleParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__VEHICLE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__VEHICLE
                        };
            }
        };

        /**
        * A parser for subelement pedestrian
        */
        class SubElementPedestrianParser: public IElementParser<EntityObjectImpl> 
        {
        private:
            std::shared_ptr<PedestrianXmlParser> _pedestrianXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPedestrianParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PEDESTRIAN ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PEDESTRIAN
                        };
            }
        };

        /**
        * A parser for subelement miscObject
        */
        class SubElementMiscObjectParser: public IElementParser<EntityObjectImpl> 
        {
        private:
            std::shared_ptr<MiscObjectXmlParser> _miscObjectXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementMiscObjectParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__MISC_OBJECT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__MISC_OBJECT
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        EntityObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlGroupParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityObjectImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EntityRefImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EntityRefXmlParser: public XmlComplexTypeParser<EntityRefImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<EntityRefImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<EntityRefImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<EntityRefImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        EntityRefXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntityRefImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EntitySelectionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EntitySelectionXmlParser: public XmlComplexTypeParser<EntitySelectionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<EntitySelectionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<EntitySelectionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<EntitySelectionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement members
        */
        class SubElementMembersParser: public IElementParser<EntitySelectionImpl> 
        {
        private:
            std::shared_ptr<SelectedEntitiesXmlParser> _selectedEntitiesXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementMembersParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntitySelectionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__MEMBERS ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__MEMBERS
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        EntitySelectionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EntitySelectionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EnvironmentImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EnvironmentXmlParser: public XmlComplexTypeParser<EnvironmentImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<EnvironmentImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<EnvironmentImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement parameterDeclarations
        */
        class SubElementParameterDeclarationsParser: public IElementParser<EnvironmentImpl> 
        {
        private:
            std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
            }
        };

        /**
        * A parser for subelement timeOfDay
        */
        class SubElementTimeOfDayParser: public IElementParser<EnvironmentImpl> 
        {
        private:
            std::shared_ptr<TimeOfDayXmlParser> _timeOfDayXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTimeOfDayParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TIME_OF_DAY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TIME_OF_DAY
                        };
            }
        };

        /**
        * A parser for subelement weather
        */
        class SubElementWeatherParser: public IElementParser<EnvironmentImpl> 
        {
        private:
            std::shared_ptr<WeatherXmlParser> _weatherXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementWeatherParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__WEATHER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__WEATHER
                        };
            }
        };

        /**
        * A parser for subelement roadCondition
        */
        class SubElementRoadConditionParser: public IElementParser<EnvironmentImpl> 
        {
        private:
            std::shared_ptr<RoadConditionXmlParser> _roadConditionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRoadConditionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ROAD_CONDITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ROAD_CONDITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        EnvironmentXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EnvironmentActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EnvironmentActionXmlParser: public XmlComplexTypeParser<EnvironmentActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<EnvironmentActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<EnvironmentActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement environment
        */
        class SubElementEnvironmentParser: public IElementParser<EnvironmentActionImpl> 
        {
        private:
            std::shared_ptr<EnvironmentXmlParser> _environmentXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEnvironmentParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENVIRONMENT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENVIRONMENT
                        };
            }
        };

        /**
        * A parser for subelement catalogReference
        */
        class SubElementCatalogReferenceParser: public IElementParser<EnvironmentActionImpl> 
        {
        private:
            std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        EnvironmentActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EnvironmentCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EnvironmentCatalogLocationXmlParser: public XmlComplexTypeParser<EnvironmentCatalogLocationImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<EnvironmentCatalogLocationImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<EnvironmentCatalogLocationImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<EnvironmentCatalogLocationImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement directory
        */
        class SubElementDirectoryParser: public IElementParser<EnvironmentCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentCatalogLocationImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DIRECTORY
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        EnvironmentCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EnvironmentCatalogLocationImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EventImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EventXmlParser: public XmlComplexTypeParser<EventImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<EventImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<EventImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<EventImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement actions
        */
        class SubElementActionsParser: public IElementParser<EventImpl> 
        {
        private:
            std::shared_ptr<ActionXmlParser> _actionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementActionsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EventImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ACTION
                        };
            }
        };

        /**
        * A parser for subelement startTrigger
        */
        class SubElementStartTriggerParser: public IElementParser<EventImpl> 
        {
        private:
            std::shared_ptr<TriggerXmlParser> _triggerXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementStartTriggerParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EventImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__START_TRIGGER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__START_TRIGGER
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        EventXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<EventImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a FileImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class FileXmlParser: public XmlComplexTypeParser<FileImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<FileImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<FileImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<FileImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        FileXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FileImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a FileHeaderImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class FileHeaderXmlParser: public XmlComplexTypeParser<FileHeaderImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<FileHeaderImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<FileHeaderImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<FileHeaderImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        FileHeaderXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FileHeaderImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a FinalSpeedImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class FinalSpeedXmlParser: public XmlComplexTypeParser<FinalSpeedImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<FinalSpeedImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<FinalSpeedImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<FinalSpeedImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement absoluteSpeed
        */
        class SubElementAbsoluteSpeedParser: public IElementParser<FinalSpeedImpl> 
        {
        private:
            std::shared_ptr<AbsoluteSpeedXmlParser> _absoluteSpeedXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementAbsoluteSpeedParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FinalSpeedImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ABSOLUTE_SPEED ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ABSOLUTE_SPEED
                        };
            }
        };

        /**
        * A parser for subelement relativeSpeedToMaster
        */
        class SubElementRelativeSpeedToMasterParser: public IElementParser<FinalSpeedImpl> 
        {
        private:
            std::shared_ptr<RelativeSpeedToMasterXmlParser> _relativeSpeedToMasterXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRelativeSpeedToMasterParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FinalSpeedImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_TO_MASTER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_TO_MASTER
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        FinalSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FinalSpeedImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a FogImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class FogXmlParser: public XmlComplexTypeParser<FogImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<FogImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<FogImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<FogImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement boundingBox
        */
        class SubElementBoundingBoxParser: public IElementParser<FogImpl> 
        {
        private:
            std::shared_ptr<BoundingBoxXmlParser> _boundingBoxXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FogImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__BOUNDING_BOX ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__BOUNDING_BOX
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        FogXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FogImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a FollowTrajectoryActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class FollowTrajectoryActionXmlParser: public XmlComplexTypeParser<FollowTrajectoryActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<FollowTrajectoryActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<FollowTrajectoryActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<FollowTrajectoryActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement trajectory
        */
        class SubElementTrajectoryParser: public IElementParser<FollowTrajectoryActionImpl> 
        {
        private:
            std::shared_ptr<TrajectoryXmlParser> _trajectoryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrajectoryParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAJECTORY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAJECTORY
                        };
            }
        };

        /**
        * A parser for subelement catalogReference
        */
        class SubElementCatalogReferenceParser: public IElementParser<FollowTrajectoryActionImpl> 
        {
        private:
            std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                        };
            }
        };

        /**
        * A parser for subelement timeReference
        */
        class SubElementTimeReferenceParser: public IElementParser<FollowTrajectoryActionImpl> 
        {
        private:
            std::shared_ptr<TimeReferenceXmlParser> _timeReferenceXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTimeReferenceParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TIME_REFERENCE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TIME_REFERENCE
                        };
            }
        };

        /**
        * A parser for subelement trajectoryFollowingMode
        */
        class SubElementTrajectoryFollowingModeParser: public IElementParser<FollowTrajectoryActionImpl> 
        {
        private:
            std::shared_ptr<TrajectoryFollowingModeXmlParser> _trajectoryFollowingModeXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrajectoryFollowingModeParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAJECTORY_FOLLOWING_MODE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAJECTORY_FOLLOWING_MODE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        FollowTrajectoryActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<FollowTrajectoryActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a GlobalActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class GlobalActionXmlParser: public XmlComplexTypeParser<GlobalActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<GlobalActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<GlobalActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<GlobalActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement environmentAction
        */
        class SubElementEnvironmentActionParser: public IElementParser<GlobalActionImpl> 
        {
        private:
            std::shared_ptr<EnvironmentActionXmlParser> _environmentActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEnvironmentActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENVIRONMENT_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENVIRONMENT_ACTION
                        };
            }
        };

        /**
        * A parser for subelement entityAction
        */
        class SubElementEntityActionParser: public IElementParser<GlobalActionImpl> 
        {
        private:
            std::shared_ptr<EntityActionXmlParser> _entityActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEntityActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENTITY_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENTITY_ACTION
                        };
            }
        };

        /**
        * A parser for subelement parameterAction
        */
        class SubElementParameterActionParser: public IElementParser<GlobalActionImpl> 
        {
        private:
            std::shared_ptr<ParameterActionXmlParser> _parameterActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PARAMETER_ACTION
                        };
            }
        };

        /**
        * A parser for subelement infrastructureAction
        */
        class SubElementInfrastructureActionParser: public IElementParser<GlobalActionImpl> 
        {
        private:
            std::shared_ptr<InfrastructureActionXmlParser> _infrastructureActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementInfrastructureActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__INFRASTRUCTURE_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__INFRASTRUCTURE_ACTION
                        };
            }
        };

        /**
        * A parser for subelement trafficAction
        */
        class SubElementTrafficActionParser: public IElementParser<GlobalActionImpl> 
        {
        private:
            std::shared_ptr<TrafficActionXmlParser> _trafficActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        GlobalActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<GlobalActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a InRoutePositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class InRoutePositionXmlParser: public XmlComplexTypeParser<InRoutePositionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<InRoutePositionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<InRoutePositionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<InRoutePositionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement fromCurrentEntity
        */
        class SubElementFromCurrentEntityParser: public IElementParser<InRoutePositionImpl> 
        {
        private:
            std::shared_ptr<PositionOfCurrentEntityXmlParser> _positionOfCurrentEntityXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementFromCurrentEntityParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InRoutePositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__FROM_CURRENT_ENTITY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__FROM_CURRENT_ENTITY
                        };
            }
        };

        /**
        * A parser for subelement fromRoadCoordinates
        */
        class SubElementFromRoadCoordinatesParser: public IElementParser<InRoutePositionImpl> 
        {
        private:
            std::shared_ptr<PositionInRoadCoordinatesXmlParser> _positionInRoadCoordinatesXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementFromRoadCoordinatesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InRoutePositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__FROM_ROAD_COORDINATES ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__FROM_ROAD_COORDINATES
                        };
            }
        };

        /**
        * A parser for subelement fromLaneCoordinates
        */
        class SubElementFromLaneCoordinatesParser: public IElementParser<InRoutePositionImpl> 
        {
        private:
            std::shared_ptr<PositionInLaneCoordinatesXmlParser> _positionInLaneCoordinatesXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementFromLaneCoordinatesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InRoutePositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__FROM_LANE_COORDINATES ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__FROM_LANE_COORDINATES
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        InRoutePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InRoutePositionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a InfrastructureActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class InfrastructureActionXmlParser: public XmlComplexTypeParser<InfrastructureActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<InfrastructureActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<InfrastructureActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<InfrastructureActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement trafficSignalAction
        */
        class SubElementTrafficSignalActionParser: public IElementParser<InfrastructureActionImpl> 
        {
        private:
            std::shared_ptr<TrafficSignalActionXmlParser> _trafficSignalActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficSignalActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InfrastructureActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        InfrastructureActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InfrastructureActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a InitImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class InitXmlParser: public XmlComplexTypeParser<InitImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<InitImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<InitImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<InitImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement actions
        */
        class SubElementActionsParser: public IElementParser<InitImpl> 
        {
        private:
            std::shared_ptr<InitActionsXmlParser> _initActionsXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementActionsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ACTIONS ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ACTIONS
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        InitXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a InitActionsImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class InitActionsXmlParser: public XmlComplexTypeParser<InitActionsImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<InitActionsImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<InitActionsImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<InitActionsImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement globalActions
        */
        class SubElementGlobalActionsParser: public IElementParser<InitActionsImpl> 
        {
        private:
            std::shared_ptr<GlobalActionXmlParser> _globalActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementGlobalActionsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitActionsImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__GLOBAL_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__GLOBAL_ACTION
                        };
            }
        };

        /**
        * A parser for subelement userDefinedActions
        */
        class SubElementUserDefinedActionsParser: public IElementParser<InitActionsImpl> 
        {
        private:
            std::shared_ptr<UserDefinedActionXmlParser> _userDefinedActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementUserDefinedActionsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitActionsImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__USER_DEFINED_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__USER_DEFINED_ACTION
                        };
            }
        };

        /**
        * A parser for subelement privates
        */
        class SubElementPrivatesParser: public IElementParser<InitActionsImpl> 
        {
        private:
            std::shared_ptr<PrivateXmlParser> _privateXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPrivatesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitActionsImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PRIVATE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PRIVATE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        InitActionsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<InitActionsImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a KnotImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class KnotXmlParser: public XmlComplexTypeParser<KnotImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<KnotImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<KnotImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<KnotImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        KnotXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<KnotImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LaneChangeActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LaneChangeActionXmlParser: public XmlComplexTypeParser<LaneChangeActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneChangeActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<LaneChangeActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<LaneChangeActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement laneChangeActionDynamics
        */
        class SubElementLaneChangeActionDynamicsParser: public IElementParser<LaneChangeActionImpl> 
        {
        private:
            std::shared_ptr<TransitionDynamicsXmlParser> _transitionDynamicsXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementLaneChangeActionDynamicsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION_DYNAMICS ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION_DYNAMICS
                        };
            }
        };

        /**
        * A parser for subelement laneChangeTarget
        */
        class SubElementLaneChangeTargetParser: public IElementParser<LaneChangeActionImpl> 
        {
        private:
            std::shared_ptr<LaneChangeTargetXmlParser> _laneChangeTargetXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementLaneChangeTargetParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__LANE_CHANGE_TARGET ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__LANE_CHANGE_TARGET
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        LaneChangeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LaneChangeTargetImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LaneChangeTargetXmlParser: public XmlComplexTypeParser<LaneChangeTargetImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneChangeTargetImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<LaneChangeTargetImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<LaneChangeTargetImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement relativeTargetLane
        */
        class SubElementRelativeTargetLaneParser: public IElementParser<LaneChangeTargetImpl> 
        {
        private:
            std::shared_ptr<RelativeTargetLaneXmlParser> _relativeTargetLaneXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRelativeTargetLaneParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeTargetImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE
                        };
            }
        };

        /**
        * A parser for subelement absoluteTargetLane
        */
        class SubElementAbsoluteTargetLaneParser: public IElementParser<LaneChangeTargetImpl> 
        {
        private:
            std::shared_ptr<AbsoluteTargetLaneXmlParser> _absoluteTargetLaneXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementAbsoluteTargetLaneParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeTargetImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        LaneChangeTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneChangeTargetImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LaneOffsetActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LaneOffsetActionXmlParser: public XmlComplexTypeParser<LaneOffsetActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<LaneOffsetActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<LaneOffsetActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement laneOffsetActionDynamics
        */
        class SubElementLaneOffsetActionDynamicsParser: public IElementParser<LaneOffsetActionImpl> 
        {
        private:
            std::shared_ptr<LaneOffsetActionDynamicsXmlParser> _laneOffsetActionDynamicsXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementLaneOffsetActionDynamicsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION_DYNAMICS ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION_DYNAMICS
                        };
            }
        };

        /**
        * A parser for subelement laneOffsetTarget
        */
        class SubElementLaneOffsetTargetParser: public IElementParser<LaneOffsetActionImpl> 
        {
        private:
            std::shared_ptr<LaneOffsetTargetXmlParser> _laneOffsetTargetXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementLaneOffsetTargetParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__LANE_OFFSET_TARGET ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__LANE_OFFSET_TARGET
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        LaneOffsetActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LaneOffsetActionDynamicsImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LaneOffsetActionDynamicsXmlParser: public XmlComplexTypeParser<LaneOffsetActionDynamicsImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetActionDynamicsImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<LaneOffsetActionDynamicsImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<LaneOffsetActionDynamicsImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        LaneOffsetActionDynamicsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetActionDynamicsImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LaneOffsetTargetImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LaneOffsetTargetXmlParser: public XmlComplexTypeParser<LaneOffsetTargetImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<LaneOffsetTargetImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<LaneOffsetTargetImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<LaneOffsetTargetImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement relativeTargetLaneOffset
        */
        class SubElementRelativeTargetLaneOffsetParser: public IElementParser<LaneOffsetTargetImpl> 
        {
        private:
            std::shared_ptr<RelativeTargetLaneOffsetXmlParser> _relativeTargetLaneOffsetXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRelativeTargetLaneOffsetParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetTargetImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE_OFFSET ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE_OFFSET
                        };
            }
        };

        /**
        * A parser for subelement absoluteTargetLaneOffset
        */
        class SubElementAbsoluteTargetLaneOffsetParser: public IElementParser<LaneOffsetTargetImpl> 
        {
        private:
            std::shared_ptr<AbsoluteTargetLaneOffsetXmlParser> _absoluteTargetLaneOffsetXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementAbsoluteTargetLaneOffsetParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetTargetImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        LaneOffsetTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LaneOffsetTargetImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LanePositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LanePositionXmlParser: public XmlComplexTypeParser<LanePositionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<LanePositionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<LanePositionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<LanePositionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement orientation
        */
        class SubElementOrientationParser: public IElementParser<LanePositionImpl> 
        {
        private:
            std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LanePositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ORIENTATION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        LanePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LanePositionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LateralActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LateralActionXmlParser: public XmlComplexTypeParser<LateralActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<LateralActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<LateralActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<LateralActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement laneChangeAction
        */
        class SubElementLaneChangeActionParser: public IElementParser<LateralActionImpl> 
        {
        private:
            std::shared_ptr<LaneChangeActionXmlParser> _laneChangeActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementLaneChangeActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION
                        };
            }
        };

        /**
        * A parser for subelement laneOffsetAction
        */
        class SubElementLaneOffsetActionParser: public IElementParser<LateralActionImpl> 
        {
        private:
            std::shared_ptr<LaneOffsetActionXmlParser> _laneOffsetActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementLaneOffsetActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION
                        };
            }
        };

        /**
        * A parser for subelement lateralDistanceAction
        */
        class SubElementLateralDistanceActionParser: public IElementParser<LateralActionImpl> 
        {
        private:
            std::shared_ptr<LateralDistanceActionXmlParser> _lateralDistanceActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementLateralDistanceActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__LATERAL_DISTANCE_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__LATERAL_DISTANCE_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        LateralActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LateralDistanceActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LateralDistanceActionXmlParser: public XmlComplexTypeParser<LateralDistanceActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<LateralDistanceActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<LateralDistanceActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<LateralDistanceActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement dynamicConstraints
        */
        class SubElementDynamicConstraintsParser: public IElementParser<LateralDistanceActionImpl> 
        {
        private:
            std::shared_ptr<DynamicConstraintsXmlParser> _dynamicConstraintsXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDynamicConstraintsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralDistanceActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        LateralDistanceActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LateralDistanceActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LongitudinalActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LongitudinalActionXmlParser: public XmlComplexTypeParser<LongitudinalActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<LongitudinalActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<LongitudinalActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<LongitudinalActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement speedAction
        */
        class SubElementSpeedActionParser: public IElementParser<LongitudinalActionImpl> 
        {
        private:
            std::shared_ptr<SpeedActionXmlParser> _speedActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementSpeedActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LongitudinalActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__SPEED_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__SPEED_ACTION
                        };
            }
        };

        /**
        * A parser for subelement longitudinalDistanceAction
        */
        class SubElementLongitudinalDistanceActionParser: public IElementParser<LongitudinalActionImpl> 
        {
        private:
            std::shared_ptr<LongitudinalDistanceActionXmlParser> _longitudinalDistanceActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementLongitudinalDistanceActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LongitudinalActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__LONGITUDINAL_DISTANCE_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__LONGITUDINAL_DISTANCE_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        LongitudinalActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LongitudinalActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LongitudinalDistanceActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LongitudinalDistanceActionXmlParser: public XmlComplexTypeParser<LongitudinalDistanceActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<LongitudinalDistanceActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<LongitudinalDistanceActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<LongitudinalDistanceActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement dynamicConstraints
        */
        class SubElementDynamicConstraintsParser: public IElementParser<LongitudinalDistanceActionImpl> 
        {
        private:
            std::shared_ptr<DynamicConstraintsXmlParser> _dynamicConstraintsXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDynamicConstraintsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LongitudinalDistanceActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DYNAMIC_CONSTRAINTS
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        LongitudinalDistanceActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<LongitudinalDistanceActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ManeuverImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ManeuverXmlParser: public XmlComplexTypeParser<ManeuverImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ManeuverImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ManeuverImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement parameterDeclarations
        */
        class SubElementParameterDeclarationsParser: public IElementParser<ManeuverImpl> 
        {
        private:
            std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
            }
        };

        /**
        * A parser for subelement events
        */
        class SubElementEventsParser: public IElementParser<ManeuverImpl> 
        {
        private:
            std::shared_ptr<EventXmlParser> _eventXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEventsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__EVENT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__EVENT
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ManeuverXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ManeuverCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ManeuverCatalogLocationXmlParser: public XmlComplexTypeParser<ManeuverCatalogLocationImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverCatalogLocationImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<ManeuverCatalogLocationImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ManeuverCatalogLocationImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement directory
        */
        class SubElementDirectoryParser: public IElementParser<ManeuverCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverCatalogLocationImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DIRECTORY
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ManeuverCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverCatalogLocationImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ManeuverGroupImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ManeuverGroupXmlParser: public XmlComplexTypeParser<ManeuverGroupImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ManeuverGroupImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ManeuverGroupImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ManeuverGroupImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement actors
        */
        class SubElementActorsParser: public IElementParser<ManeuverGroupImpl> 
        {
        private:
            std::shared_ptr<ActorsXmlParser> _actorsXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementActorsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverGroupImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ACTORS ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ACTORS
                        };
            }
        };

        /**
        * A parser for subelement catalogReferences
        */
        class SubElementCatalogReferencesParser: public IElementParser<ManeuverGroupImpl> 
        {
        private:
            std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCatalogReferencesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverGroupImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                        };
            }
        };

        /**
        * A parser for subelement maneuvers
        */
        class SubElementManeuversParser: public IElementParser<ManeuverGroupImpl> 
        {
        private:
            std::shared_ptr<ManeuverXmlParser> _maneuverXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementManeuversParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverGroupImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__MANEUVER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__MANEUVER
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ManeuverGroupXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ManeuverGroupImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a MiscObjectImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class MiscObjectXmlParser: public XmlComplexTypeParser<MiscObjectImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<MiscObjectImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<MiscObjectImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<MiscObjectImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement parameterDeclarations
        */
        class SubElementParameterDeclarationsParser: public IElementParser<MiscObjectImpl> 
        {
        private:
            std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
            }
        };

        /**
        * A parser for subelement boundingBox
        */
        class SubElementBoundingBoxParser: public IElementParser<MiscObjectImpl> 
        {
        private:
            std::shared_ptr<BoundingBoxXmlParser> _boundingBoxXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__BOUNDING_BOX ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__BOUNDING_BOX
                        };
            }
        };

        /**
        * A parser for subelement properties
        */
        class SubElementPropertiesParser: public IElementParser<MiscObjectImpl> 
        {
        private:
            std::shared_ptr<PropertiesXmlParser> _propertiesXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PROPERTIES ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PROPERTIES
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        MiscObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a MiscObjectCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class MiscObjectCatalogLocationXmlParser: public XmlComplexTypeParser<MiscObjectCatalogLocationImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<MiscObjectCatalogLocationImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<MiscObjectCatalogLocationImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<MiscObjectCatalogLocationImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement directory
        */
        class SubElementDirectoryParser: public IElementParser<MiscObjectCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectCatalogLocationImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DIRECTORY
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        MiscObjectCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<MiscObjectCatalogLocationImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ModifyRuleImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ModifyRuleXmlParser: public XmlComplexTypeParser<ModifyRuleImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ModifyRuleImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<ModifyRuleImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ModifyRuleImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement addValue
        */
        class SubElementAddValueParser: public IElementParser<ModifyRuleImpl> 
        {
        private:
            std::shared_ptr<ParameterAddValueRuleXmlParser> _parameterAddValueRuleXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementAddValueParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ModifyRuleImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ADD_VALUE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ADD_VALUE
                        };
            }
        };

        /**
        * A parser for subelement multiplyByValue
        */
        class SubElementMultiplyByValueParser: public IElementParser<ModifyRuleImpl> 
        {
        private:
            std::shared_ptr<ParameterMultiplyByValueRuleXmlParser> _parameterMultiplyByValueRuleXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementMultiplyByValueParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ModifyRuleImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__MULTIPLY_BY_VALUE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__MULTIPLY_BY_VALUE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ModifyRuleXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ModifyRuleImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a NoneImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class NoneXmlParser: public XmlComplexTypeParser<NoneImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<NoneImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<NoneImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<NoneImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        NoneXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<NoneImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a NurbsImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class NurbsXmlParser: public XmlComplexTypeParser<NurbsImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<NurbsImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<NurbsImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<NurbsImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement controlPoints
        */
        class SubElementControlPointsParser: public IElementParser<NurbsImpl> 
        {
        private:
            std::shared_ptr<ControlPointXmlParser> _controlPointXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementControlPointsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<NurbsImpl>& object) override;

            int GetMinOccur() override
            {
                return 2;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CONTROL_POINT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CONTROL_POINT
                        };
            }
        };

        /**
        * A parser for subelement knots
        */
        class SubElementKnotsParser: public IElementParser<NurbsImpl> 
        {
        private:
            std::shared_ptr<KnotXmlParser> _knotXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementKnotsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<NurbsImpl>& object) override;

            int GetMinOccur() override
            {
                return 2;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__KNOT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__KNOT
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        NurbsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<NurbsImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ObjectControllerImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ObjectControllerXmlParser: public XmlComplexTypeParser<ObjectControllerImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ObjectControllerImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<ObjectControllerImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ObjectControllerImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement catalogReference
        */
        class SubElementCatalogReferenceParser: public IElementParser<ObjectControllerImpl> 
        {
        private:
            std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ObjectControllerImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                        };
            }
        };

        /**
        * A parser for subelement controller
        */
        class SubElementControllerParser: public IElementParser<ObjectControllerImpl> 
        {
        private:
            std::shared_ptr<ControllerXmlParser> _controllerXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementControllerParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ObjectControllerImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CONTROLLER
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ObjectControllerXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ObjectControllerImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OffroadConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OffroadConditionXmlParser: public XmlComplexTypeParser<OffroadConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<OffroadConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<OffroadConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<OffroadConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        OffroadConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OffroadConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OpenScenarioImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OpenScenarioXmlParser: public XmlComplexTypeParser<OpenScenarioImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<OpenScenarioImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<OpenScenarioImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<OpenScenarioImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement fileHeader
        */
        class SubElementFileHeaderParser: public IElementParser<OpenScenarioImpl> 
        {
        private:
            std::shared_ptr<FileHeaderXmlParser> _fileHeaderXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementFileHeaderParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__FILE_HEADER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__FILE_HEADER
                        };
            }
        };

        /**
        * A parser for subelement openScenarioCategory
        */
        class SubElementOpenScenarioCategoryParser: public IElementParser<OpenScenarioImpl> 
        {
        private:
            std::shared_ptr<OpenScenarioCategoryXmlParser> _openScenarioCategoryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementOpenScenarioCategoryParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS || 
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS || 
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS,
                    OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS,
                    OSC_CONSTANTS::ELEMENT__CATALOG
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        OpenScenarioXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioImpl>& object) override;
    
    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OpenScenarioCategoryImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OpenScenarioCategoryXmlParser: public XmlGroupParser<OpenScenarioCategoryImpl> 
    {


    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<OpenScenarioCategoryImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<OpenScenarioCategoryImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement scenarioDefinition
        */
        class SubElementScenarioDefinitionParser: public IElementParser<OpenScenarioCategoryImpl> 
        {
        private:
            std::shared_ptr<ScenarioDefinitionXmlParser> _scenarioDefinitionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementScenarioDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioCategoryImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS || 
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATIONS,
                    OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS
                        };
            }
        };

        /**
        * A parser for subelement catalogDefinition
        */
        class SubElementCatalogDefinitionParser: public IElementParser<OpenScenarioCategoryImpl> 
        {
        private:
            std::shared_ptr<CatalogDefinitionXmlParser> _catalogDefinitionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCatalogDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioCategoryImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        OpenScenarioCategoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlGroupParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OpenScenarioCategoryImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OrientationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OrientationXmlParser: public XmlComplexTypeParser<OrientationImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<OrientationImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<OrientationImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<OrientationImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        OrientationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OrientationImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OverrideBrakeActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideBrakeActionXmlParser: public XmlComplexTypeParser<OverrideBrakeActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideBrakeActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<OverrideBrakeActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<OverrideBrakeActionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        OverrideBrakeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideBrakeActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OverrideClutchActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideClutchActionXmlParser: public XmlComplexTypeParser<OverrideClutchActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideClutchActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<OverrideClutchActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<OverrideClutchActionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        OverrideClutchActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideClutchActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OverrideControllerValueActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideControllerValueActionXmlParser: public XmlComplexTypeParser<OverrideControllerValueActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideControllerValueActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<OverrideControllerValueActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<OverrideControllerValueActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement throttle
        */
        class SubElementThrottleParser: public IElementParser<OverrideControllerValueActionImpl> 
        {
        private:
            std::shared_ptr<OverrideThrottleActionXmlParser> _overrideThrottleActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementThrottleParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__THROTTLE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__THROTTLE
                        };
            }
        };

        /**
        * A parser for subelement brake
        */
        class SubElementBrakeParser: public IElementParser<OverrideControllerValueActionImpl> 
        {
        private:
            std::shared_ptr<OverrideBrakeActionXmlParser> _overrideBrakeActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementBrakeParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__BRAKE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__BRAKE
                        };
            }
        };

        /**
        * A parser for subelement clutch
        */
        class SubElementClutchParser: public IElementParser<OverrideControllerValueActionImpl> 
        {
        private:
            std::shared_ptr<OverrideClutchActionXmlParser> _overrideClutchActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementClutchParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CLUTCH ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CLUTCH
                        };
            }
        };

        /**
        * A parser for subelement parkingBrake
        */
        class SubElementParkingBrakeParser: public IElementParser<OverrideControllerValueActionImpl> 
        {
        private:
            std::shared_ptr<OverrideParkingBrakeActionXmlParser> _overrideParkingBrakeActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParkingBrakeParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PARKING_BRAKE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PARKING_BRAKE
                        };
            }
        };

        /**
        * A parser for subelement steeringWheel
        */
        class SubElementSteeringWheelParser: public IElementParser<OverrideControllerValueActionImpl> 
        {
        private:
            std::shared_ptr<OverrideSteeringWheelActionXmlParser> _overrideSteeringWheelActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementSteeringWheelParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__STEERING_WHEEL ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__STEERING_WHEEL
                        };
            }
        };

        /**
        * A parser for subelement gear
        */
        class SubElementGearParser: public IElementParser<OverrideControllerValueActionImpl> 
        {
        private:
            std::shared_ptr<OverrideGearActionXmlParser> _overrideGearActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementGearParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__GEAR ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__GEAR
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        OverrideControllerValueActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideControllerValueActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OverrideGearActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideGearActionXmlParser: public XmlComplexTypeParser<OverrideGearActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideGearActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<OverrideGearActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<OverrideGearActionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        OverrideGearActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideGearActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OverrideParkingBrakeActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideParkingBrakeActionXmlParser: public XmlComplexTypeParser<OverrideParkingBrakeActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideParkingBrakeActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<OverrideParkingBrakeActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<OverrideParkingBrakeActionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        OverrideParkingBrakeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideParkingBrakeActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OverrideSteeringWheelActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideSteeringWheelActionXmlParser: public XmlComplexTypeParser<OverrideSteeringWheelActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideSteeringWheelActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<OverrideSteeringWheelActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<OverrideSteeringWheelActionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        OverrideSteeringWheelActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideSteeringWheelActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OverrideThrottleActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideThrottleActionXmlParser: public XmlComplexTypeParser<OverrideThrottleActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<OverrideThrottleActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<OverrideThrottleActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<OverrideThrottleActionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        OverrideThrottleActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<OverrideThrottleActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterActionXmlParser: public XmlComplexTypeParser<ParameterActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<ParameterActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ParameterActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement setAction
        */
        class SubElementSetActionParser: public IElementParser<ParameterActionImpl> 
        {
        private:
            std::shared_ptr<ParameterSetActionXmlParser> _parameterSetActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementSetActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__SET_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__SET_ACTION
                        };
            }
        };

        /**
        * A parser for subelement modifyAction
        */
        class SubElementModifyActionParser: public IElementParser<ParameterActionImpl> 
        {
        private:
            std::shared_ptr<ParameterModifyActionXmlParser> _parameterModifyActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementModifyActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__MODIFY_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__MODIFY_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ParameterActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterAddValueRuleImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterAddValueRuleXmlParser: public XmlComplexTypeParser<ParameterAddValueRuleImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterAddValueRuleImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ParameterAddValueRuleImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ParameterAddValueRuleImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ParameterAddValueRuleXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterAddValueRuleImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterAssignmentImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterAssignmentXmlParser: public XmlComplexTypeParser<ParameterAssignmentImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterAssignmentImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ParameterAssignmentImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ParameterAssignmentImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ParameterAssignmentXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterAssignmentImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterConditionXmlParser: public XmlComplexTypeParser<ParameterConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ParameterConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ParameterConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ParameterConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterDeclarationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterDeclarationXmlParser: public XmlComplexTypeParser<ParameterDeclarationImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterDeclarationImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ParameterDeclarationImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ParameterDeclarationImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ParameterDeclarationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterDeclarationImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterModifyActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterModifyActionXmlParser: public XmlComplexTypeParser<ParameterModifyActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterModifyActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<ParameterModifyActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ParameterModifyActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement rule
        */
        class SubElementRuleParser: public IElementParser<ParameterModifyActionImpl> 
        {
        private:
            std::shared_ptr<ModifyRuleXmlParser> _modifyRuleXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRuleParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterModifyActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__RULE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__RULE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ParameterModifyActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterModifyActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterMultiplyByValueRuleImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterMultiplyByValueRuleXmlParser: public XmlComplexTypeParser<ParameterMultiplyByValueRuleImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterMultiplyByValueRuleImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ParameterMultiplyByValueRuleImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ParameterMultiplyByValueRuleImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ParameterMultiplyByValueRuleXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterMultiplyByValueRuleImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterSetActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterSetActionXmlParser: public XmlComplexTypeParser<ParameterSetActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ParameterSetActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ParameterSetActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ParameterSetActionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ParameterSetActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ParameterSetActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PedestrianImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PedestrianXmlParser: public XmlComplexTypeParser<PedestrianImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PedestrianImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<PedestrianImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PedestrianImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement parameterDeclarations
        */
        class SubElementParameterDeclarationsParser: public IElementParser<PedestrianImpl> 
        {
        private:
            std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
            }
        };

        /**
        * A parser for subelement boundingBox
        */
        class SubElementBoundingBoxParser: public IElementParser<PedestrianImpl> 
        {
        private:
            std::shared_ptr<BoundingBoxXmlParser> _boundingBoxXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__BOUNDING_BOX ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__BOUNDING_BOX
                        };
            }
        };

        /**
        * A parser for subelement properties
        */
        class SubElementPropertiesParser: public IElementParser<PedestrianImpl> 
        {
        private:
            std::shared_ptr<PropertiesXmlParser> _propertiesXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PROPERTIES ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PROPERTIES
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PedestrianXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PedestrianCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PedestrianCatalogLocationXmlParser: public XmlComplexTypeParser<PedestrianCatalogLocationImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PedestrianCatalogLocationImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<PedestrianCatalogLocationImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PedestrianCatalogLocationImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement directory
        */
        class SubElementDirectoryParser: public IElementParser<PedestrianCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianCatalogLocationImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DIRECTORY
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PedestrianCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PedestrianCatalogLocationImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PerformanceImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PerformanceXmlParser: public XmlComplexTypeParser<PerformanceImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PerformanceImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<PerformanceImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PerformanceImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PerformanceXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PerformanceImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PhaseImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PhaseXmlParser: public XmlComplexTypeParser<PhaseImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PhaseImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<PhaseImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PhaseImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement trafficSignalStates
        */
        class SubElementTrafficSignalStatesParser: public IElementParser<PhaseImpl> 
        {
        private:
            std::shared_ptr<TrafficSignalStateXmlParser> _trafficSignalStateXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficSignalStatesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PhaseImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PhaseXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PhaseImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PolylineImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PolylineXmlParser: public XmlComplexTypeParser<PolylineImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PolylineImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<PolylineImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PolylineImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement vertices
        */
        class SubElementVerticesParser: public IElementParser<PolylineImpl> 
        {
        private:
            std::shared_ptr<VertexXmlParser> _vertexXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementVerticesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PolylineImpl>& object) override;

            int GetMinOccur() override
            {
                return 2;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__VERTEX ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__VERTEX
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PolylineXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PolylineImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PositionXmlParser: public XmlComplexTypeParser<PositionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PositionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<PositionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PositionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement worldPosition
        */
        class SubElementWorldPositionParser: public IElementParser<PositionImpl> 
        {
        private:
            std::shared_ptr<WorldPositionXmlParser> _worldPositionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementWorldPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__WORLD_POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__WORLD_POSITION
                        };
            }
        };

        /**
        * A parser for subelement relativeWorldPosition
        */
        class SubElementRelativeWorldPositionParser: public IElementParser<PositionImpl> 
        {
        private:
            std::shared_ptr<RelativeWorldPositionXmlParser> _relativeWorldPositionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRelativeWorldPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_WORLD_POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__RELATIVE_WORLD_POSITION
                        };
            }
        };

        /**
        * A parser for subelement relativeObjectPosition
        */
        class SubElementRelativeObjectPositionParser: public IElementParser<PositionImpl> 
        {
        private:
            std::shared_ptr<RelativeObjectPositionXmlParser> _relativeObjectPositionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRelativeObjectPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_OBJECT_POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__RELATIVE_OBJECT_POSITION
                        };
            }
        };

        /**
        * A parser for subelement roadPosition
        */
        class SubElementRoadPositionParser: public IElementParser<PositionImpl> 
        {
        private:
            std::shared_ptr<RoadPositionXmlParser> _roadPositionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRoadPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ROAD_POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ROAD_POSITION
                        };
            }
        };

        /**
        * A parser for subelement relativeRoadPosition
        */
        class SubElementRelativeRoadPositionParser: public IElementParser<PositionImpl> 
        {
        private:
            std::shared_ptr<RelativeRoadPositionXmlParser> _relativeRoadPositionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRelativeRoadPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_ROAD_POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__RELATIVE_ROAD_POSITION
                        };
            }
        };

        /**
        * A parser for subelement lanePosition
        */
        class SubElementLanePositionParser: public IElementParser<PositionImpl> 
        {
        private:
            std::shared_ptr<LanePositionXmlParser> _lanePositionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementLanePositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__LANE_POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__LANE_POSITION
                        };
            }
        };

        /**
        * A parser for subelement relativeLanePosition
        */
        class SubElementRelativeLanePositionParser: public IElementParser<PositionImpl> 
        {
        private:
            std::shared_ptr<RelativeLanePositionXmlParser> _relativeLanePositionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRelativeLanePositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_LANE_POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__RELATIVE_LANE_POSITION
                        };
            }
        };

        /**
        * A parser for subelement routePosition
        */
        class SubElementRoutePositionParser: public IElementParser<PositionImpl> 
        {
        private:
            std::shared_ptr<RoutePositionXmlParser> _routePositionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRoutePositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ROUTE_POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ROUTE_POSITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PositionInLaneCoordinatesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PositionInLaneCoordinatesXmlParser: public XmlComplexTypeParser<PositionInLaneCoordinatesImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PositionInLaneCoordinatesImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<PositionInLaneCoordinatesImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PositionInLaneCoordinatesImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PositionInLaneCoordinatesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionInLaneCoordinatesImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PositionInRoadCoordinatesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PositionInRoadCoordinatesXmlParser: public XmlComplexTypeParser<PositionInRoadCoordinatesImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PositionInRoadCoordinatesImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<PositionInRoadCoordinatesImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PositionInRoadCoordinatesImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PositionInRoadCoordinatesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionInRoadCoordinatesImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PositionOfCurrentEntityImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PositionOfCurrentEntityXmlParser: public XmlComplexTypeParser<PositionOfCurrentEntityImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PositionOfCurrentEntityImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<PositionOfCurrentEntityImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PositionOfCurrentEntityImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PositionOfCurrentEntityXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PositionOfCurrentEntityImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PrecipitationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PrecipitationXmlParser: public XmlComplexTypeParser<PrecipitationImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PrecipitationImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<PrecipitationImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PrecipitationImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PrecipitationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrecipitationImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PrivateImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PrivateXmlParser: public XmlComplexTypeParser<PrivateImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PrivateImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<PrivateImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PrivateImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement privateActions
        */
        class SubElementPrivateActionsParser: public IElementParser<PrivateImpl> 
        {
        private:
            std::shared_ptr<PrivateActionXmlParser> _privateActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPrivateActionsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PrivateXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PrivateActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PrivateActionXmlParser: public XmlComplexTypeParser<PrivateActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PrivateActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<PrivateActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PrivateActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement longitudinalAction
        */
        class SubElementLongitudinalActionParser: public IElementParser<PrivateActionImpl> 
        {
        private:
            std::shared_ptr<LongitudinalActionXmlParser> _longitudinalActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementLongitudinalActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__LONGITUDINAL_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__LONGITUDINAL_ACTION
                        };
            }
        };

        /**
        * A parser for subelement lateralAction
        */
        class SubElementLateralActionParser: public IElementParser<PrivateActionImpl> 
        {
        private:
            std::shared_ptr<LateralActionXmlParser> _lateralActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementLateralActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__LATERAL_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__LATERAL_ACTION
                        };
            }
        };

        /**
        * A parser for subelement visibilityAction
        */
        class SubElementVisibilityActionParser: public IElementParser<PrivateActionImpl> 
        {
        private:
            std::shared_ptr<VisibilityActionXmlParser> _visibilityActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementVisibilityActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__VISIBILITY_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__VISIBILITY_ACTION
                        };
            }
        };

        /**
        * A parser for subelement synchronizeAction
        */
        class SubElementSynchronizeActionParser: public IElementParser<PrivateActionImpl> 
        {
        private:
            std::shared_ptr<SynchronizeActionXmlParser> _synchronizeActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementSynchronizeActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__SYNCHRONIZE_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__SYNCHRONIZE_ACTION
                        };
            }
        };

        /**
        * A parser for subelement activateControllerAction
        */
        class SubElementActivateControllerActionParser: public IElementParser<PrivateActionImpl> 
        {
        private:
            std::shared_ptr<ActivateControllerActionXmlParser> _activateControllerActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementActivateControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ACTIVATE_CONTROLLER_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ACTIVATE_CONTROLLER_ACTION
                        };
            }
        };

        /**
        * A parser for subelement controllerAction
        */
        class SubElementControllerActionParser: public IElementParser<PrivateActionImpl> 
        {
        private:
            std::shared_ptr<ControllerActionXmlParser> _controllerActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CONTROLLER_ACTION
                        };
            }
        };

        /**
        * A parser for subelement teleportAction
        */
        class SubElementTeleportActionParser: public IElementParser<PrivateActionImpl> 
        {
        private:
            std::shared_ptr<TeleportActionXmlParser> _teleportActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTeleportActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TELEPORT_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TELEPORT_ACTION
                        };
            }
        };

        /**
        * A parser for subelement routingAction
        */
        class SubElementRoutingActionParser: public IElementParser<PrivateActionImpl> 
        {
        private:
            std::shared_ptr<RoutingActionXmlParser> _routingActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRoutingActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ROUTING_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ROUTING_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PrivateActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PrivateActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PropertiesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PropertiesXmlParser: public XmlComplexTypeParser<PropertiesImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PropertiesImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<PropertiesImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PropertiesImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement properties
        */
        class SubElementPropertiesParser: public IElementParser<PropertiesImpl> 
        {
        private:
            std::shared_ptr<PropertyXmlParser> _propertyXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PropertiesImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PROPERTY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PROPERTY
                        };
            }
        };

        /**
        * A parser for subelement files
        */
        class SubElementFilesParser: public IElementParser<PropertiesImpl> 
        {
        private:
            std::shared_ptr<FileXmlParser> _fileXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementFilesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PropertiesImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__FILE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__FILE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PropertiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PropertiesImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PropertyImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PropertyXmlParser: public XmlComplexTypeParser<PropertyImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<PropertyImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<PropertyImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<PropertyImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        PropertyXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<PropertyImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ReachPositionConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ReachPositionConditionXmlParser: public XmlComplexTypeParser<ReachPositionConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ReachPositionConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<ReachPositionConditionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ReachPositionConditionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement position
        */
        class SubElementPositionParser: public IElementParser<ReachPositionConditionImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ReachPositionConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POSITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ReachPositionConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ReachPositionConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeDistanceConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeDistanceConditionXmlParser: public XmlComplexTypeParser<RelativeDistanceConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeDistanceConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<RelativeDistanceConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RelativeDistanceConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RelativeDistanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeDistanceConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeLanePositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeLanePositionXmlParser: public XmlComplexTypeParser<RelativeLanePositionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeLanePositionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<RelativeLanePositionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RelativeLanePositionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement orientation
        */
        class SubElementOrientationParser: public IElementParser<RelativeLanePositionImpl> 
        {
        private:
            std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeLanePositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ORIENTATION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RelativeLanePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeLanePositionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeObjectPositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeObjectPositionXmlParser: public XmlComplexTypeParser<RelativeObjectPositionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeObjectPositionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<RelativeObjectPositionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RelativeObjectPositionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement orientation
        */
        class SubElementOrientationParser: public IElementParser<RelativeObjectPositionImpl> 
        {
        private:
            std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeObjectPositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ORIENTATION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RelativeObjectPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeObjectPositionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeRoadPositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeRoadPositionXmlParser: public XmlComplexTypeParser<RelativeRoadPositionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeRoadPositionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<RelativeRoadPositionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RelativeRoadPositionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement orientation
        */
        class SubElementOrientationParser: public IElementParser<RelativeRoadPositionImpl> 
        {
        private:
            std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeRoadPositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ORIENTATION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RelativeRoadPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeRoadPositionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeSpeedConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeSpeedConditionXmlParser: public XmlComplexTypeParser<RelativeSpeedConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeSpeedConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<RelativeSpeedConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RelativeSpeedConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RelativeSpeedConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeSpeedConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeSpeedToMasterImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeSpeedToMasterXmlParser: public XmlComplexTypeParser<RelativeSpeedToMasterImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeSpeedToMasterImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<RelativeSpeedToMasterImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RelativeSpeedToMasterImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RelativeSpeedToMasterXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeSpeedToMasterImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeTargetLaneImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeTargetLaneXmlParser: public XmlComplexTypeParser<RelativeTargetLaneImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetLaneImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<RelativeTargetLaneImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RelativeTargetLaneImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RelativeTargetLaneXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeTargetLaneImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeTargetLaneOffsetImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeTargetLaneOffsetXmlParser: public XmlComplexTypeParser<RelativeTargetLaneOffsetImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetLaneOffsetImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<RelativeTargetLaneOffsetImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RelativeTargetLaneOffsetImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RelativeTargetLaneOffsetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeTargetLaneOffsetImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeTargetSpeedImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeTargetSpeedXmlParser: public XmlComplexTypeParser<RelativeTargetSpeedImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeTargetSpeedImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<RelativeTargetSpeedImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RelativeTargetSpeedImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RelativeTargetSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeTargetSpeedImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeWorldPositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeWorldPositionXmlParser: public XmlComplexTypeParser<RelativeWorldPositionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RelativeWorldPositionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<RelativeWorldPositionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RelativeWorldPositionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement orientation
        */
        class SubElementOrientationParser: public IElementParser<RelativeWorldPositionImpl> 
        {
        private:
            std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeWorldPositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ORIENTATION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RelativeWorldPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RelativeWorldPositionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoadConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RoadConditionXmlParser: public XmlComplexTypeParser<RoadConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RoadConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<RoadConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RoadConditionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement properties
        */
        class SubElementPropertiesParser: public IElementParser<RoadConditionImpl> 
        {
        private:
            std::shared_ptr<PropertiesXmlParser> _propertiesXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PROPERTIES ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PROPERTIES
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RoadConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoadNetworkImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RoadNetworkXmlParser: public XmlComplexTypeParser<RoadNetworkImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RoadNetworkImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<RoadNetworkImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RoadNetworkImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement logicFile
        */
        class SubElementLogicFileParser: public IElementParser<RoadNetworkImpl> 
        {
        private:
            std::shared_ptr<FileXmlParser> _fileXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementLogicFileParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__LOGIC_FILE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__LOGIC_FILE
                        };
            }
        };

        /**
        * A parser for subelement sceneGraphFile
        */
        class SubElementSceneGraphFileParser: public IElementParser<RoadNetworkImpl> 
        {
        private:
            std::shared_ptr<FileXmlParser> _fileXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementSceneGraphFileParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__SCENE_GRAPH_FILE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__SCENE_GRAPH_FILE
                        };
            }
        };

        /**
        * A parser for subelement trafficSignals
        */
        class SubElementTrafficSignalsParser: public IElementParser<RoadNetworkImpl> 
        {
        private:
            std::shared_ptr<TrafficSignalControllerXmlParser> _trafficSignalControllerXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficSignalsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER};
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RoadNetworkXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadNetworkImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoadPositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RoadPositionXmlParser: public XmlComplexTypeParser<RoadPositionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RoadPositionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<RoadPositionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RoadPositionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement orientation
        */
        class SubElementOrientationParser: public IElementParser<RoadPositionImpl> 
        {
        private:
            std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadPositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ORIENTATION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RoadPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoadPositionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RouteImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RouteXmlParser: public XmlComplexTypeParser<RouteImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RouteImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<RouteImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RouteImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement parameterDeclarations
        */
        class SubElementParameterDeclarationsParser: public IElementParser<RouteImpl> 
        {
        private:
            std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
            }
        };

        /**
        * A parser for subelement waypoints
        */
        class SubElementWaypointsParser: public IElementParser<RouteImpl> 
        {
        private:
            std::shared_ptr<WaypointXmlParser> _waypointXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementWaypointsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteImpl>& object) override;

            int GetMinOccur() override
            {
                return 2;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__WAYPOINT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__WAYPOINT
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RouteXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RouteCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RouteCatalogLocationXmlParser: public XmlComplexTypeParser<RouteCatalogLocationImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RouteCatalogLocationImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<RouteCatalogLocationImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RouteCatalogLocationImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement directory
        */
        class SubElementDirectoryParser: public IElementParser<RouteCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteCatalogLocationImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DIRECTORY
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RouteCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteCatalogLocationImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoutePositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RoutePositionXmlParser: public XmlComplexTypeParser<RoutePositionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RoutePositionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<RoutePositionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RoutePositionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement routeRef
        */
        class SubElementRouteRefParser: public IElementParser<RoutePositionImpl> 
        {
        private:
            std::shared_ptr<RouteRefXmlParser> _routeRefXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRouteRefParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutePositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ROUTE_REF ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ROUTE_REF
                        };
            }
        };

        /**
        * A parser for subelement orientation
        */
        class SubElementOrientationParser: public IElementParser<RoutePositionImpl> 
        {
        private:
            std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutePositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ORIENTATION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ORIENTATION
                        };
            }
        };

        /**
        * A parser for subelement inRoutePosition
        */
        class SubElementInRoutePositionParser: public IElementParser<RoutePositionImpl> 
        {
        private:
            std::shared_ptr<InRoutePositionXmlParser> _inRoutePositionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementInRoutePositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutePositionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__IN_ROUTE_POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__IN_ROUTE_POSITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RoutePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutePositionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RouteRefImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RouteRefXmlParser: public XmlComplexTypeParser<RouteRefImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RouteRefImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<RouteRefImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RouteRefImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement route
        */
        class SubElementRouteParser: public IElementParser<RouteRefImpl> 
        {
        private:
            std::shared_ptr<RouteXmlParser> _routeXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRouteParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteRefImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ROUTE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ROUTE
                        };
            }
        };

        /**
        * A parser for subelement catalogReference
        */
        class SubElementCatalogReferenceParser: public IElementParser<RouteRefImpl> 
        {
        private:
            std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteRefImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RouteRefXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RouteRefImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoutingActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RoutingActionXmlParser: public XmlComplexTypeParser<RoutingActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<RoutingActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<RoutingActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<RoutingActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement assignRouteAction
        */
        class SubElementAssignRouteActionParser: public IElementParser<RoutingActionImpl> 
        {
        private:
            std::shared_ptr<AssignRouteActionXmlParser> _assignRouteActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementAssignRouteActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutingActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ASSIGN_ROUTE_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ASSIGN_ROUTE_ACTION
                        };
            }
        };

        /**
        * A parser for subelement followTrajectoryAction
        */
        class SubElementFollowTrajectoryActionParser: public IElementParser<RoutingActionImpl> 
        {
        private:
            std::shared_ptr<FollowTrajectoryActionXmlParser> _followTrajectoryActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementFollowTrajectoryActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutingActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__FOLLOW_TRAJECTORY_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__FOLLOW_TRAJECTORY_ACTION
                        };
            }
        };

        /**
        * A parser for subelement acquirePositionAction
        */
        class SubElementAcquirePositionActionParser: public IElementParser<RoutingActionImpl> 
        {
        private:
            std::shared_ptr<AcquirePositionActionXmlParser> _acquirePositionActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementAcquirePositionActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutingActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ACQUIRE_POSITION_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ACQUIRE_POSITION_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        RoutingActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<RoutingActionImpl>& object) override;
    
    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ScenarioDefinitionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ScenarioDefinitionXmlParser: public XmlGroupParser<ScenarioDefinitionImpl> 
    {


    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ScenarioDefinitionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ScenarioDefinitionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement parameterDeclarations
        */
        class SubElementParameterDeclarationsParser: public IElementParser<ScenarioDefinitionImpl> 
        {
        private:
            std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
            }
        };

        /**
        * A parser for subelement catalogLocations
        */
        class SubElementCatalogLocationsParser: public IElementParser<ScenarioDefinitionImpl> 
        {
        private:
            std::shared_ptr<CatalogLocationsXmlParser> _catalogLocationsXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCatalogLocationsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS
                        };
            }
        };

        /**
        * A parser for subelement roadNetwork
        */
        class SubElementRoadNetworkParser: public IElementParser<ScenarioDefinitionImpl> 
        {
        private:
            std::shared_ptr<RoadNetworkXmlParser> _roadNetworkXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRoadNetworkParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ROAD_NETWORK ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ROAD_NETWORK
                        };
            }
        };

        /**
        * A parser for subelement entities
        */
        class SubElementEntitiesParser: public IElementParser<ScenarioDefinitionImpl> 
        {
        private:
            std::shared_ptr<EntitiesXmlParser> _entitiesXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEntitiesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENTITIES ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENTITIES
                        };
            }
        };

        /**
        * A parser for subelement storyboard
        */
        class SubElementStoryboardParser: public IElementParser<ScenarioDefinitionImpl> 
        {
        private:
            std::shared_ptr<StoryboardXmlParser> _storyboardXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementStoryboardParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__STORYBOARD ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__STORYBOARD
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ScenarioDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlGroupParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioDefinitionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ScenarioObjectImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ScenarioObjectXmlParser: public XmlComplexTypeParser<ScenarioObjectImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ScenarioObjectImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<ScenarioObjectImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ScenarioObjectImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement entityObject
        */
        class SubElementEntityObjectParser: public IElementParser<ScenarioObjectImpl> 
        {
        private:
            std::shared_ptr<EntityObjectXmlParser> _entityObjectXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEntityObjectParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioObjectImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE || 
                    elementName == OSC_CONSTANTS::ELEMENT__VEHICLE || 
                    elementName == OSC_CONSTANTS::ELEMENT__PEDESTRIAN || 
                    elementName == OSC_CONSTANTS::ELEMENT__MISC_OBJECT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE,
                    OSC_CONSTANTS::ELEMENT__VEHICLE,
                    OSC_CONSTANTS::ELEMENT__PEDESTRIAN,
                    OSC_CONSTANTS::ELEMENT__MISC_OBJECT
                        };
            }
        };

        /**
        * A parser for subelement objectController
        */
        class SubElementObjectControllerParser: public IElementParser<ScenarioObjectImpl> 
        {
        private:
            std::shared_ptr<ObjectControllerXmlParser> _objectControllerXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementObjectControllerParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioObjectImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__OBJECT_CONTROLLER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__OBJECT_CONTROLLER
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ScenarioObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ScenarioObjectImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SelectedEntitiesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SelectedEntitiesXmlParser: public XmlComplexTypeParser<SelectedEntitiesImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<SelectedEntitiesImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<SelectedEntitiesImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<SelectedEntitiesImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement entityRef
        */
        class SubElementEntityRefParser: public IElementParser<SelectedEntitiesImpl> 
        {
        private:
            std::shared_ptr<EntityRefXmlParser> _entityRefXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SelectedEntitiesImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENTITY_REF
                        };
            }
        };

        /**
        * A parser for subelement byType
        */
        class SubElementByTypeParser: public IElementParser<SelectedEntitiesImpl> 
        {
        private:
            std::shared_ptr<ByTypeXmlParser> _byTypeXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementByTypeParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SelectedEntitiesImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__BY_TYPE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__BY_TYPE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        SelectedEntitiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SelectedEntitiesImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ShapeImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ShapeXmlParser: public XmlComplexTypeParser<ShapeImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<ShapeImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<ShapeImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<ShapeImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement polyline
        */
        class SubElementPolylineParser: public IElementParser<ShapeImpl> 
        {
        private:
            std::shared_ptr<PolylineXmlParser> _polylineXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPolylineParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ShapeImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POLYLINE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POLYLINE
                        };
            }
        };

        /**
        * A parser for subelement clothoid
        */
        class SubElementClothoidParser: public IElementParser<ShapeImpl> 
        {
        private:
            std::shared_ptr<ClothoidXmlParser> _clothoidXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementClothoidParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ShapeImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CLOTHOID ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CLOTHOID
                        };
            }
        };

        /**
        * A parser for subelement nurbs
        */
        class SubElementNurbsParser: public IElementParser<ShapeImpl> 
        {
        private:
            std::shared_ptr<NurbsXmlParser> _nurbsXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementNurbsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ShapeImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__NURBS ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__NURBS
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        ShapeXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<ShapeImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SimulationTimeConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SimulationTimeConditionXmlParser: public XmlComplexTypeParser<SimulationTimeConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<SimulationTimeConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<SimulationTimeConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<SimulationTimeConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        SimulationTimeConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SimulationTimeConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SpeedActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SpeedActionXmlParser: public XmlComplexTypeParser<SpeedActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<SpeedActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<SpeedActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<SpeedActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement speedActionDynamics
        */
        class SubElementSpeedActionDynamicsParser: public IElementParser<SpeedActionImpl> 
        {
        private:
            std::shared_ptr<TransitionDynamicsXmlParser> _transitionDynamicsXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementSpeedActionDynamicsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__SPEED_ACTION_DYNAMICS ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__SPEED_ACTION_DYNAMICS
                        };
            }
        };

        /**
        * A parser for subelement speedActionTarget
        */
        class SubElementSpeedActionTargetParser: public IElementParser<SpeedActionImpl> 
        {
        private:
            std::shared_ptr<SpeedActionTargetXmlParser> _speedActionTargetXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementSpeedActionTargetParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__SPEED_ACTION_TARGET ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__SPEED_ACTION_TARGET
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        SpeedActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SpeedActionTargetImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SpeedActionTargetXmlParser: public XmlComplexTypeParser<SpeedActionTargetImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<SpeedActionTargetImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<SpeedActionTargetImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<SpeedActionTargetImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement relativeTargetSpeed
        */
        class SubElementRelativeTargetSpeedParser: public IElementParser<SpeedActionTargetImpl> 
        {
        private:
            std::shared_ptr<RelativeTargetSpeedXmlParser> _relativeTargetSpeedXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementRelativeTargetSpeedParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionTargetImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_SPEED ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_SPEED
                        };
            }
        };

        /**
        * A parser for subelement absoluteTargetSpeed
        */
        class SubElementAbsoluteTargetSpeedParser: public IElementParser<SpeedActionTargetImpl> 
        {
        private:
            std::shared_ptr<AbsoluteTargetSpeedXmlParser> _absoluteTargetSpeedXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementAbsoluteTargetSpeedParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionTargetImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_SPEED ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_SPEED
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        SpeedActionTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedActionTargetImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SpeedConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SpeedConditionXmlParser: public XmlComplexTypeParser<SpeedConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<SpeedConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<SpeedConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<SpeedConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        SpeedConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SpeedConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a StandStillConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class StandStillConditionXmlParser: public XmlComplexTypeParser<StandStillConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<StandStillConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<StandStillConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<StandStillConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        StandStillConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StandStillConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a StoryImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class StoryXmlParser: public XmlComplexTypeParser<StoryImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<StoryImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<StoryImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<StoryImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement parameterDeclarations
        */
        class SubElementParameterDeclarationsParser: public IElementParser<StoryImpl> 
        {
        private:
            std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
            }
        };

        /**
        * A parser for subelement acts
        */
        class SubElementActsParser: public IElementParser<StoryImpl> 
        {
        private:
            std::shared_ptr<ActXmlParser> _actXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementActsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ACT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ACT
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        StoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a StoryboardImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class StoryboardXmlParser: public XmlComplexTypeParser<StoryboardImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<StoryboardImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<StoryboardImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<StoryboardImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement init
        */
        class SubElementInitParser: public IElementParser<StoryboardImpl> 
        {
        private:
            std::shared_ptr<InitXmlParser> _initXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementInitParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__INIT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__INIT
                        };
            }
        };

        /**
        * A parser for subelement stories
        */
        class SubElementStoriesParser: public IElementParser<StoryboardImpl> 
        {
        private:
            std::shared_ptr<StoryXmlParser> _storyXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementStoriesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__STORY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__STORY
                        };
            }
        };

        /**
        * A parser for subelement stopTrigger
        */
        class SubElementStopTriggerParser: public IElementParser<StoryboardImpl> 
        {
        private:
            std::shared_ptr<TriggerXmlParser> _triggerXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementStopTriggerParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__STOP_TRIGGER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__STOP_TRIGGER
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        StoryboardXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a StoryboardElementStateConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class StoryboardElementStateConditionXmlParser: public XmlComplexTypeParser<StoryboardElementStateConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<StoryboardElementStateConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<StoryboardElementStateConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<StoryboardElementStateConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        StoryboardElementStateConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<StoryboardElementStateConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SunImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SunXmlParser: public XmlComplexTypeParser<SunImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<SunImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<SunImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<SunImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        SunXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SunImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SynchronizeActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SynchronizeActionXmlParser: public XmlComplexTypeParser<SynchronizeActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<SynchronizeActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<SynchronizeActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<SynchronizeActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement targetPositionMaster
        */
        class SubElementTargetPositionMasterParser: public IElementParser<SynchronizeActionImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTargetPositionMasterParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SynchronizeActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TARGET_POSITION_MASTER ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TARGET_POSITION_MASTER
                        };
            }
        };

        /**
        * A parser for subelement targetPosition
        */
        class SubElementTargetPositionParser: public IElementParser<SynchronizeActionImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTargetPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SynchronizeActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TARGET_POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TARGET_POSITION
                        };
            }
        };

        /**
        * A parser for subelement finalSpeed
        */
        class SubElementFinalSpeedParser: public IElementParser<SynchronizeActionImpl> 
        {
        private:
            std::shared_ptr<FinalSpeedXmlParser> _finalSpeedXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementFinalSpeedParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SynchronizeActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__FINAL_SPEED ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__FINAL_SPEED
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        SynchronizeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<SynchronizeActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TeleportActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TeleportActionXmlParser: public XmlComplexTypeParser<TeleportActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TeleportActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TeleportActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TeleportActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement position
        */
        class SubElementPositionParser: public IElementParser<TeleportActionImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TeleportActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POSITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TeleportActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TeleportActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeHeadwayConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimeHeadwayConditionXmlParser: public XmlComplexTypeParser<TimeHeadwayConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TimeHeadwayConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TimeHeadwayConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TimeHeadwayConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TimeHeadwayConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeHeadwayConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeOfDayImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimeOfDayXmlParser: public XmlComplexTypeParser<TimeOfDayImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TimeOfDayImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TimeOfDayImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TimeOfDayImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TimeOfDayXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeOfDayImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeOfDayConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimeOfDayConditionXmlParser: public XmlComplexTypeParser<TimeOfDayConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TimeOfDayConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TimeOfDayConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TimeOfDayConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TimeOfDayConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeOfDayConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeReferenceImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimeReferenceXmlParser: public XmlComplexTypeParser<TimeReferenceImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TimeReferenceImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<TimeReferenceImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TimeReferenceImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement none
        */
        class SubElementNoneParser: public IElementParser<TimeReferenceImpl> 
        {
        private:
            std::shared_ptr<NoneXmlParser> _noneXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementNoneParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeReferenceImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__NONE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__NONE
                        };
            }
        };

        /**
        * A parser for subelement timing
        */
        class SubElementTimingParser: public IElementParser<TimeReferenceImpl> 
        {
        private:
            std::shared_ptr<TimingXmlParser> _timingXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTimingParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeReferenceImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TIMING ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TIMING
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TimeReferenceXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeReferenceImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeToCollisionConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimeToCollisionConditionXmlParser: public XmlComplexTypeParser<TimeToCollisionConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TimeToCollisionConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<TimeToCollisionConditionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TimeToCollisionConditionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement timeToCollisionConditionTarget
        */
        class SubElementTimeToCollisionConditionTargetParser: public IElementParser<TimeToCollisionConditionImpl> 
        {
        private:
            std::shared_ptr<TimeToCollisionConditionTargetXmlParser> _timeToCollisionConditionTargetXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTimeToCollisionConditionTargetParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION_TARGET ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION_TARGET
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TimeToCollisionConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeToCollisionConditionTargetImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimeToCollisionConditionTargetXmlParser: public XmlComplexTypeParser<TimeToCollisionConditionTargetImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TimeToCollisionConditionTargetImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<TimeToCollisionConditionTargetImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TimeToCollisionConditionTargetImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement position
        */
        class SubElementPositionParser: public IElementParser<TimeToCollisionConditionTargetImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionTargetImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POSITION
                        };
            }
        };

        /**
        * A parser for subelement entityRef
        */
        class SubElementEntityRefParser: public IElementParser<TimeToCollisionConditionTargetImpl> 
        {
        private:
            std::shared_ptr<EntityRefXmlParser> _entityRefXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionTargetImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENTITY_REF
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TimeToCollisionConditionTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimeToCollisionConditionTargetImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimingImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimingXmlParser: public XmlComplexTypeParser<TimingImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TimingImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TimingImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TimingImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TimingXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TimingImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficActionXmlParser: public XmlComplexTypeParser<TrafficActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<TrafficActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrafficActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement trafficSourceAction
        */
        class SubElementTrafficSourceActionParser: public IElementParser<TrafficActionImpl> 
        {
        private:
            std::shared_ptr<TrafficSourceActionXmlParser> _trafficSourceActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficSourceActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SOURCE_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_SOURCE_ACTION
                        };
            }
        };

        /**
        * A parser for subelement trafficSinkAction
        */
        class SubElementTrafficSinkActionParser: public IElementParser<TrafficActionImpl> 
        {
        private:
            std::shared_ptr<TrafficSinkActionXmlParser> _trafficSinkActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficSinkActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SINK_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_SINK_ACTION
                        };
            }
        };

        /**
        * A parser for subelement trafficSwarmAction
        */
        class SubElementTrafficSwarmActionParser: public IElementParser<TrafficActionImpl> 
        {
        private:
            std::shared_ptr<TrafficSwarmActionXmlParser> _trafficSwarmActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficSwarmActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SWARM_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_SWARM_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrafficActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficDefinitionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficDefinitionXmlParser: public XmlComplexTypeParser<TrafficDefinitionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficDefinitionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<TrafficDefinitionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrafficDefinitionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement vehicleCategoryDistribution
        */
        class SubElementVehicleCategoryDistributionParser: public IElementParser<TrafficDefinitionImpl> 
        {
        private:
            std::shared_ptr<VehicleCategoryDistributionXmlParser> _vehicleCategoryDistributionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementVehicleCategoryDistributionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficDefinitionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION
                        };
            }
        };

        /**
        * A parser for subelement controllerDistribution
        */
        class SubElementControllerDistributionParser: public IElementParser<TrafficDefinitionImpl> 
        {
        private:
            std::shared_ptr<ControllerDistributionXmlParser> _controllerDistributionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementControllerDistributionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficDefinitionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrafficDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficDefinitionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalActionXmlParser: public XmlComplexTypeParser<TrafficSignalActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlChoiceParser<TrafficSignalActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
             SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrafficSignalActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement trafficSignalControllerAction
        */
        class SubElementTrafficSignalControllerActionParser: public IElementParser<TrafficSignalActionImpl> 
        {
        private:
            std::shared_ptr<TrafficSignalControllerActionXmlParser> _trafficSignalControllerActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficSignalControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_ACTION
                        };
            }
        };

        /**
        * A parser for subelement trafficSignalStateAction
        */
        class SubElementTrafficSignalStateActionParser: public IElementParser<TrafficSignalActionImpl> 
        {
        private:
            std::shared_ptr<TrafficSignalStateActionXmlParser> _trafficSignalStateActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficSignalStateActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrafficSignalActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalConditionXmlParser: public XmlComplexTypeParser<TrafficSignalConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TrafficSignalConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrafficSignalConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrafficSignalConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalControllerImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalControllerXmlParser: public XmlComplexTypeParser<TrafficSignalControllerImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TrafficSignalControllerImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement phases
        */
        class SubElementPhasesParser: public IElementParser<TrafficSignalControllerImpl> 
        {
        private:
            std::shared_ptr<PhaseXmlParser> _phaseXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPhasesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalControllerImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PHASE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PHASE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrafficSignalControllerXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalControllerImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalControllerActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalControllerActionXmlParser: public XmlComplexTypeParser<TrafficSignalControllerActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TrafficSignalControllerActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerActionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrafficSignalControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalControllerActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalControllerConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalControllerConditionXmlParser: public XmlComplexTypeParser<TrafficSignalControllerConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalControllerConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TrafficSignalControllerConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrafficSignalControllerConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrafficSignalControllerConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalControllerConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalStateImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalStateXmlParser: public XmlComplexTypeParser<TrafficSignalStateImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalStateImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TrafficSignalStateImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrafficSignalStateImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrafficSignalStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalStateImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalStateActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalStateActionXmlParser: public XmlComplexTypeParser<TrafficSignalStateActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSignalStateActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TrafficSignalStateActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrafficSignalStateActionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrafficSignalStateActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSignalStateActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSinkActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSinkActionXmlParser: public XmlComplexTypeParser<TrafficSinkActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSinkActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<TrafficSinkActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrafficSinkActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement position
        */
        class SubElementPositionParser: public IElementParser<TrafficSinkActionImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSinkActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POSITION
                        };
            }
        };

        /**
        * A parser for subelement trafficDefinition
        */
        class SubElementTrafficDefinitionParser: public IElementParser<TrafficSinkActionImpl> 
        {
        private:
            std::shared_ptr<TrafficDefinitionXmlParser> _trafficDefinitionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSinkActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrafficSinkActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSinkActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSourceActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSourceActionXmlParser: public XmlComplexTypeParser<TrafficSourceActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSourceActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<TrafficSourceActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrafficSourceActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement position
        */
        class SubElementPositionParser: public IElementParser<TrafficSourceActionImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSourceActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POSITION
                        };
            }
        };

        /**
        * A parser for subelement trafficDefinition
        */
        class SubElementTrafficDefinitionParser: public IElementParser<TrafficSourceActionImpl> 
        {
        private:
            std::shared_ptr<TrafficDefinitionXmlParser> _trafficDefinitionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSourceActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrafficSourceActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSourceActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSwarmActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSwarmActionXmlParser: public XmlComplexTypeParser<TrafficSwarmActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrafficSwarmActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<TrafficSwarmActionImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrafficSwarmActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement centralObject
        */
        class SubElementCentralObjectParser: public IElementParser<TrafficSwarmActionImpl> 
        {
        private:
            std::shared_ptr<CentralSwarmObjectXmlParser> _centralSwarmObjectXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCentralObjectParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSwarmActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CENTRAL_OBJECT ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CENTRAL_OBJECT
                        };
            }
        };

        /**
        * A parser for subelement trafficDefinition
        */
        class SubElementTrafficDefinitionParser: public IElementParser<TrafficSwarmActionImpl> 
        {
        private:
            std::shared_ptr<TrafficDefinitionXmlParser> _trafficDefinitionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementTrafficDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSwarmActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrafficSwarmActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrafficSwarmActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrajectoryImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrajectoryXmlParser: public XmlComplexTypeParser<TrajectoryImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TrajectoryImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrajectoryImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement parameterDeclarations
        */
        class SubElementParameterDeclarationsParser: public IElementParser<TrajectoryImpl> 
        {
        private:
            std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
            }
        };

        /**
        * A parser for subelement shape
        */
        class SubElementShapeParser: public IElementParser<TrajectoryImpl> 
        {
        private:
            std::shared_ptr<ShapeXmlParser> _shapeXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementShapeParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__SHAPE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__SHAPE
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrajectoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrajectoryCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrajectoryCatalogLocationXmlParser: public XmlComplexTypeParser<TrajectoryCatalogLocationImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryCatalogLocationImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<TrajectoryCatalogLocationImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrajectoryCatalogLocationImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement directory
        */
        class SubElementDirectoryParser: public IElementParser<TrajectoryCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryCatalogLocationImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DIRECTORY
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrajectoryCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryCatalogLocationImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrajectoryFollowingModeImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrajectoryFollowingModeXmlParser: public XmlComplexTypeParser<TrajectoryFollowingModeImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TrajectoryFollowingModeImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TrajectoryFollowingModeImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TrajectoryFollowingModeImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TrajectoryFollowingModeXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TrajectoryFollowingModeImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TransitionDynamicsImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TransitionDynamicsXmlParser: public XmlComplexTypeParser<TransitionDynamicsImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TransitionDynamicsImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TransitionDynamicsImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TransitionDynamicsImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TransitionDynamicsXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TransitionDynamicsImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TraveledDistanceConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TraveledDistanceConditionXmlParser: public XmlComplexTypeParser<TraveledDistanceConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TraveledDistanceConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TraveledDistanceConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TraveledDistanceConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TraveledDistanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TraveledDistanceConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TriggerImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TriggerXmlParser: public XmlComplexTypeParser<TriggerImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TriggerImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TriggerImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TriggerImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement conditionGroups
        */
        class SubElementConditionGroupsParser: public IElementParser<TriggerImpl> 
        {
        private:
            std::shared_ptr<ConditionGroupXmlParser> _conditionGroupXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementConditionGroupsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TriggerImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CONDITION_GROUP ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CONDITION_GROUP
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TriggerXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TriggerImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TriggeringEntitiesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TriggeringEntitiesXmlParser: public XmlComplexTypeParser<TriggeringEntitiesImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<TriggeringEntitiesImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<TriggeringEntitiesImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<TriggeringEntitiesImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement entityRefs
        */
        class SubElementEntityRefsParser: public IElementParser<TriggeringEntitiesImpl> 
        {
        private:
            std::shared_ptr<EntityRefXmlParser> _entityRefXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementEntityRefsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TriggeringEntitiesImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__ENTITY_REF ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__ENTITY_REF
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        TriggeringEntitiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<TriggeringEntitiesImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a UserDefinedActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class UserDefinedActionXmlParser: public XmlComplexTypeParser<UserDefinedActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<UserDefinedActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<UserDefinedActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<UserDefinedActionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement customCommandAction
        */
        class SubElementCustomCommandActionParser: public IElementParser<UserDefinedActionImpl> 
        {
        private:
            std::shared_ptr<CustomCommandActionXmlParser> _customCommandActionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementCustomCommandActionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<UserDefinedActionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__CUSTOM_COMMAND_ACTION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__CUSTOM_COMMAND_ACTION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        UserDefinedActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<UserDefinedActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a UserDefinedValueConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class UserDefinedValueConditionXmlParser: public XmlComplexTypeParser<UserDefinedValueConditionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<UserDefinedValueConditionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<UserDefinedValueConditionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<UserDefinedValueConditionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        UserDefinedValueConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<UserDefinedValueConditionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class VehicleXmlParser: public XmlComplexTypeParser<VehicleImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<VehicleImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<VehicleImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement parameterDeclarations
        */
        class SubElementParameterDeclarationsParser: public IElementParser<VehicleImpl> 
        {
        private:
            std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object) override;

            int GetMinOccur() override
            {
                return 0;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return elementName == OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {OSC_CONSTANTS::ELEMENT__PARAMETER_DECLARATION};
            }
        };

        /**
        * A parser for subelement boundingBox
        */
        class SubElementBoundingBoxParser: public IElementParser<VehicleImpl> 
        {
        private:
            std::shared_ptr<BoundingBoxXmlParser> _boundingBoxXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__BOUNDING_BOX ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__BOUNDING_BOX
                        };
            }
        };

        /**
        * A parser for subelement performance
        */
        class SubElementPerformanceParser: public IElementParser<VehicleImpl> 
        {
        private:
            std::shared_ptr<PerformanceXmlParser> _performanceXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPerformanceParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PERFORMANCE ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PERFORMANCE
                        };
            }
        };

        /**
        * A parser for subelement axles
        */
        class SubElementAxlesParser: public IElementParser<VehicleImpl> 
        {
        private:
            std::shared_ptr<AxlesXmlParser> _axlesXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementAxlesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__AXLES ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__AXLES
                        };
            }
        };

        /**
        * A parser for subelement properties
        */
        class SubElementPropertiesParser: public IElementParser<VehicleImpl> 
        {
        private:
            std::shared_ptr<PropertiesXmlParser> _propertiesXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PROPERTIES ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PROPERTIES
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        VehicleXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleCatalogLocationImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class VehicleCatalogLocationXmlParser: public XmlComplexTypeParser<VehicleCatalogLocationImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCatalogLocationImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<VehicleCatalogLocationImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<VehicleCatalogLocationImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement directory
        */
        class SubElementDirectoryParser: public IElementParser<VehicleCatalogLocationImpl> 
        {
        private:
            std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCatalogLocationImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__DIRECTORY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__DIRECTORY
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        VehicleCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCatalogLocationImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleCategoryDistributionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class VehicleCategoryDistributionXmlParser: public XmlComplexTypeParser<VehicleCategoryDistributionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCategoryDistributionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<VehicleCategoryDistributionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<VehicleCategoryDistributionImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement vehicleCategoryDistributionEntries
        */
        class SubElementVehicleCategoryDistributionEntriesParser: public IElementParser<VehicleCategoryDistributionImpl> 
        {
        private:
            std::shared_ptr<VehicleCategoryDistributionEntryXmlParser> _vehicleCategoryDistributionEntryXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementVehicleCategoryDistributionEntriesParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCategoryDistributionImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return -1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION_ENTRY ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION_ENTRY
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        VehicleCategoryDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCategoryDistributionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleCategoryDistributionEntryImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class VehicleCategoryDistributionEntryXmlParser: public XmlComplexTypeParser<VehicleCategoryDistributionEntryImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<VehicleCategoryDistributionEntryImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<VehicleCategoryDistributionEntryImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<VehicleCategoryDistributionEntryImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        VehicleCategoryDistributionEntryXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VehicleCategoryDistributionEntryImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VertexImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class VertexXmlParser: public XmlComplexTypeParser<VertexImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<VertexImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<VertexImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<VertexImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement position
        */
        class SubElementPositionParser: public IElementParser<VertexImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VertexImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POSITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        VertexXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VertexImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VisibilityActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class VisibilityActionXmlParser: public XmlComplexTypeParser<VisibilityActionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<VisibilityActionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<VisibilityActionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<VisibilityActionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        VisibilityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<VisibilityActionImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a WaypointImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class WaypointXmlParser: public XmlComplexTypeParser<WaypointImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<WaypointImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<WaypointImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<WaypointImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement position
        */
        class SubElementPositionParser: public IElementParser<WaypointImpl> 
        {
        private:
            std::shared_ptr<PositionXmlParser> _positionXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WaypointImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__POSITION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__POSITION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        WaypointXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WaypointImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a WeatherImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class WeatherXmlParser: public XmlComplexTypeParser<WeatherImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<WeatherImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlAllParser<WeatherImpl>
        {
        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<WeatherImpl>>> CreateParserList() override;
        };

        /**
        * A parser for subelement sun
        */
        class SubElementSunParser: public IElementParser<WeatherImpl> 
        {
        private:
            std::shared_ptr<SunXmlParser> _sunXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementSunParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WeatherImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__SUN ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__SUN
                        };
            }
        };

        /**
        * A parser for subelement fog
        */
        class SubElementFogParser: public IElementParser<WeatherImpl> 
        {
        private:
            std::shared_ptr<FogXmlParser> _fogXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementFogParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WeatherImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__FOG ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__FOG
                        };
            }
        };

        /**
        * A parser for subelement precipitation
        */
        class SubElementPrecipitationParser: public IElementParser<WeatherImpl> 
        {
        private:
            std::shared_ptr<PrecipitationXmlParser> _precipitationXmlParser;

        public:
            /**
            * Constructor
            */
            SubElementPrecipitationParser(IParserMessageLogger& messageLogger, std::string& filename);

            void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WeatherImpl>& object) override;

            int GetMinOccur() override
            {
                return 1;
            }

            int GetMaxOccur() override
            {
                return 1;
            }

            bool DoesMatch(std::string& elementName) override
            {
                return
                    elementName == OSC_CONSTANTS::ELEMENT__PRECIPITATION ;
            }

            std::vector<std::string> GetExpectedTagNames() override
            {                return {
                    OSC_CONSTANTS::ELEMENT__PRECIPITATION
                        };
            }
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        WeatherXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WeatherImpl>& object) override;
    
    };


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a WorldPositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class WorldPositionXmlParser: public XmlComplexTypeParser<WorldPositionImpl>
    {

    protected:
        std::map<std::string, std::shared_ptr<IAttributeParser<WorldPositionImpl>>> GetAttributeNameToAttributeParserMap() override;

    private:
        /**
        * Parser for all subelements
        */
        class SubElementParser: public XmlSequenceParser<WorldPositionImpl>
        {
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            */
        public:
            SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        /*
         * Creates a list of parser
         */
        protected:
            std::vector<std::shared_ptr<IElementParser<WorldPositionImpl>>> CreateParserList() override;
        };


    public:
    /**
     * Constructor
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
        WorldPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
            XmlComplexTypeParser(messageLogger, filename)
            {
                _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
            }

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<WorldPositionImpl>& object) override;
    
    };


}
