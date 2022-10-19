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
 
#pragma once

#include "IParserMessageLogger.h"
#include "OscConstantsV1_2.h"
#include "IndexedElement.h"
#include "ParserContext.h"
#include "BaseImpl.h"
#include <vector>
#include "ApiClassImplV1_2.h"
#include "XmlAllParser.h"
#include "XmlChoiceParser.h"
#include "XmlSequenceParser.h"
#include <map>
#include "XmlComplexTypeParser.h"
#include "XmlGroupParser.h"
#include "XmlSimpleContentParser.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
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
        class AnimationActionXmlParser;
        class AnimationFileXmlParser;
        class AnimationStateXmlParser;
        class AnimationTypeXmlParser;
        class AppearanceActionXmlParser;
        class AssignControllerActionXmlParser;
        class AssignRouteActionXmlParser;
        class AutomaticGearXmlParser;
        class AxleXmlParser;
        class AxlesXmlParser;
        class BoundingBoxXmlParser;
        class BrakeXmlParser;
        class BrakeInputXmlParser;
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
        class ColorXmlParser;
        class ColorCmykXmlParser;
        class ColorRgbXmlParser;
        class ComponentAnimationXmlParser;
        class ConditionXmlParser;
        class ConditionGroupXmlParser;
        class ControlPointXmlParser;
        class ControllerXmlParser;
        class ControllerActionXmlParser;
        class ControllerCatalogLocationXmlParser;
        class ControllerDistributionXmlParser;
        class ControllerDistributionEntryXmlParser;
        class CustomCommandActionXmlParser;
        class CustomContentXmlParser;
        class DeleteEntityActionXmlParser;
        class DeterministicXmlParser;
        class DeterministicMultiParameterDistributionXmlParser;
        class DeterministicMultiParameterDistributionTypeXmlParser;
        class DeterministicParameterDistributionXmlParser;
        class DeterministicSingleParameterDistributionXmlParser;
        class DeterministicSingleParameterDistributionTypeXmlParser;
        class DimensionsXmlParser;
        class DirectionOfTravelDistributionXmlParser;
        class DirectoryXmlParser;
        class DistanceConditionXmlParser;
        class DistributionDefinitionXmlParser;
        class DistributionRangeXmlParser;
        class DistributionSetXmlParser;
        class DistributionSetElementXmlParser;
        class DomeImageXmlParser;
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
        class ExternalObjectReferenceXmlParser;
        class FileXmlParser;
        class FileHeaderXmlParser;
        class FinalSpeedXmlParser;
        class FogXmlParser;
        class FollowTrajectoryActionXmlParser;
        class GearXmlParser;
        class GeoPositionXmlParser;
        class GlobalActionXmlParser;
        class HistogramXmlParser;
        class HistogramBinXmlParser;
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
        class LicenseXmlParser;
        class LightStateXmlParser;
        class LightStateActionXmlParser;
        class LightTypeXmlParser;
        class LongitudinalActionXmlParser;
        class LongitudinalDistanceActionXmlParser;
        class ManeuverXmlParser;
        class ManeuverCatalogLocationXmlParser;
        class ManeuverGroupXmlParser;
        class ManualGearXmlParser;
        class MiscObjectXmlParser;
        class MiscObjectCatalogLocationXmlParser;
        class ModifyRuleXmlParser;
        class NoneXmlParser;
        class NormalDistributionXmlParser;
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
        class ParameterValueDistributionXmlParser;
        class ParameterValueDistributionDefinitionXmlParser;
        class ParameterValueSetXmlParser;
        class PedestrianXmlParser;
        class PedestrianAnimationXmlParser;
        class PedestrianCatalogLocationXmlParser;
        class PedestrianGestureXmlParser;
        class PerformanceXmlParser;
        class PhaseXmlParser;
        class PoissonDistributionXmlParser;
        class PolylineXmlParser;
        class PositionXmlParser;
        class PositionInLaneCoordinatesXmlParser;
        class PositionInRoadCoordinatesXmlParser;
        class PositionOfCurrentEntityXmlParser;
        class PrecipitationXmlParser;
        class PrivateXmlParser;
        class PrivateActionXmlParser;
        class ProbabilityDistributionSetXmlParser;
        class ProbabilityDistributionSetElementXmlParser;
        class PropertiesXmlParser;
        class PropertyXmlParser;
        class RangeXmlParser;
        class ReachPositionConditionXmlParser;
        class RelativeClearanceConditionXmlParser;
        class RelativeDistanceConditionXmlParser;
        class RelativeLanePositionXmlParser;
        class RelativeLaneRangeXmlParser;
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
        class SensorReferenceXmlParser;
        class SensorReferenceSetXmlParser;
        class ShapeXmlParser;
        class SimulationTimeConditionXmlParser;
        class SpeedActionXmlParser;
        class SpeedActionTargetXmlParser;
        class SpeedConditionXmlParser;
        class SpeedProfileActionXmlParser;
        class SpeedProfileEntryXmlParser;
        class StandStillConditionXmlParser;
        class SteadyStateXmlParser;
        class StochasticXmlParser;
        class StochasticDistributionXmlParser;
        class StochasticDistributionTypeXmlParser;
        class StoryXmlParser;
        class StoryboardXmlParser;
        class StoryboardElementStateConditionXmlParser;
        class SunXmlParser;
        class SynchronizeActionXmlParser;
        class TargetDistanceSteadyStateXmlParser;
        class TargetTimeSteadyStateXmlParser;
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
        class TrafficSignalGroupStateXmlParser;
        class TrafficSignalStateXmlParser;
        class TrafficSignalStateActionXmlParser;
        class TrafficSinkActionXmlParser;
        class TrafficSourceActionXmlParser;
        class TrafficStopActionXmlParser;
        class TrafficSwarmActionXmlParser;
        class TrajectoryXmlParser;
        class TrajectoryCatalogLocationXmlParser;
        class TrajectoryFollowingModeXmlParser;
        class TrajectoryPositionXmlParser;
        class TrajectoryRefXmlParser;
        class TransitionDynamicsXmlParser;
        class TraveledDistanceConditionXmlParser;
        class TriggerXmlParser;
        class TriggeringEntitiesXmlParser;
        class UniformDistributionXmlParser;
        class UsedAreaXmlParser;
        class UserDefinedActionXmlParser;
        class UserDefinedAnimationXmlParser;
        class UserDefinedComponentXmlParser;
        class UserDefinedDistributionXmlParser;
        class UserDefinedLightXmlParser;
        class UserDefinedValueConditionXmlParser;
        class ValueConstraintXmlParser;
        class ValueConstraintGroupXmlParser;
        class ValueSetDistributionXmlParser;
        class VariableActionXmlParser;
        class VariableAddValueRuleXmlParser;
        class VariableConditionXmlParser;
        class VariableDeclarationXmlParser;
        class VariableModifyActionXmlParser;
        class VariableModifyRuleXmlParser;
        class VariableMultiplyByValueRuleXmlParser;
        class VariableSetActionXmlParser;
        class VehicleXmlParser;
        class VehicleCatalogLocationXmlParser;
        class VehicleCategoryDistributionXmlParser;
        class VehicleCategoryDistributionEntryXmlParser;
        class VehicleComponentXmlParser;
        class VehicleLightXmlParser;
        class VehicleRoleDistributionXmlParser;
        class VehicleRoleDistributionEntryXmlParser;
        class VertexXmlParser;
        class VisibilityActionXmlParser;
        class WaypointXmlParser;
        class WeatherXmlParser;
        class WindXmlParser;
        class WorldPositionXmlParser;


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AbsoluteSpeedImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteSpeedXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement steadyState
            */
            class SubElementSteadyStateParser: public IElementParser
            {
            private:
                std::shared_ptr<SteadyStateXmlParser> _steadyStateXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSteadyStateParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AbsoluteSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AbsoluteTargetLaneImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteTargetLaneXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AbsoluteTargetLaneXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AbsoluteTargetLaneOffsetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteTargetLaneOffsetXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AbsoluteTargetLaneOffsetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AbsoluteTargetSpeedImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteTargetSpeedXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AbsoluteTargetSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AccelerationConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AccelerationConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AccelerationConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AcquirePositionActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AcquirePositionActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement position
            */
            class SubElementPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AcquirePositionActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ActImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement maneuverGroups
            */
            class SubElementManeuverGroupsParser: public IElementParser
            {
            private:
                std::shared_ptr<ManeuverGroupXmlParser> _maneuverGroupXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementManeuverGroupsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement startTrigger
            */
            class SubElementStartTriggerParser: public IElementParser
            {
            private:
                std::shared_ptr<TriggerXmlParser> _triggerXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementStartTriggerParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement stopTrigger
            */
            class SubElementStopTriggerParser: public IElementParser
            {
            private:
                std::shared_ptr<TriggerXmlParser> _triggerXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementStopTriggerParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ActXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement globalAction
            */
            class SubElementGlobalActionParser: public IElementParser
            {
            private:
                std::shared_ptr<GlobalActionXmlParser> _globalActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementGlobalActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement userDefinedAction
            */
            class SubElementUserDefinedActionParser: public IElementParser
            {
            private:
                std::shared_ptr<UserDefinedActionXmlParser> _userDefinedActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementUserDefinedActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement privateAction
            */
            class SubElementPrivateActionParser: public IElementParser
            {
            private:
                std::shared_ptr<PrivateActionXmlParser> _privateActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPrivateActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ActivateControllerActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActivateControllerActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ActivateControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ActorsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActorsXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement entityRefs
            */
            class SubElementEntityRefsParser: public IElementParser
            {
            private:
                std::shared_ptr<EntityRefXmlParser> _entityRefXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEntityRefsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ActorsXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AddEntityActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AddEntityActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement position
            */
            class SubElementPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AddEntityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AnimationActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AnimationActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement animationType
            */
            class SubElementAnimationTypeParser: public IElementParser
            {
            private:
                std::shared_ptr<AnimationTypeXmlParser> _animationTypeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAnimationTypeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement animationState
            */
            class SubElementAnimationStateParser: public IElementParser
            {
            private:
                std::shared_ptr<AnimationStateXmlParser> _animationStateXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAnimationStateParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AnimationActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AnimationFileImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AnimationFileXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement file
            */
            class SubElementFileParser: public IElementParser
            {
            private:
                std::shared_ptr<FileXmlParser> _fileXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementFileParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AnimationFileXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AnimationStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AnimationStateXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AnimationStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AnimationTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AnimationTypeXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement componentAnimation
            */
            class SubElementComponentAnimationParser: public IElementParser
            {
            private:
                std::shared_ptr<ComponentAnimationXmlParser> _componentAnimationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementComponentAnimationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement pedestrianAnimation
            */
            class SubElementPedestrianAnimationParser: public IElementParser
            {
            private:
                std::shared_ptr<PedestrianAnimationXmlParser> _pedestrianAnimationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPedestrianAnimationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement animationFile
            */
            class SubElementAnimationFileParser: public IElementParser
            {
            private:
                std::shared_ptr<AnimationFileXmlParser> _animationFileXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAnimationFileParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement userDefinedAnimation
            */
            class SubElementUserDefinedAnimationParser: public IElementParser
            {
            private:
                std::shared_ptr<UserDefinedAnimationXmlParser> _userDefinedAnimationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementUserDefinedAnimationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AnimationTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AppearanceActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AppearanceActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement lightStateAction
            */
            class SubElementLightStateActionParser: public IElementParser
            {
            private:
                std::shared_ptr<LightStateActionXmlParser> _lightStateActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLightStateActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement animationAction
            */
            class SubElementAnimationActionParser: public IElementParser
            {
            private:
                std::shared_ptr<AnimationActionXmlParser> _animationActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAnimationActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AppearanceActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AssignControllerActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AssignControllerActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement controller
            */
            class SubElementControllerParser: public IElementParser
            {
            private:
                std::shared_ptr<ControllerXmlParser> _controllerXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementControllerParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement catalogReference
            */
            class SubElementCatalogReferenceParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AssignControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AssignRouteActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AssignRouteActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement route
            */
            class SubElementRouteParser: public IElementParser
            {
            private:
                std::shared_ptr<RouteXmlParser> _routeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRouteParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement catalogReference
            */
            class SubElementCatalogReferenceParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AssignRouteActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AutomaticGearImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AutomaticGearXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AutomaticGearXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AxleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AxleXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AxleXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a AxlesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AxlesXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement frontAxle
            */
            class SubElementFrontAxleParser: public IElementParser
            {
            private:
                std::shared_ptr<AxleXmlParser> _axleXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementFrontAxleParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement rearAxle
            */
            class SubElementRearAxleParser: public IElementParser
            {
            private:
                std::shared_ptr<AxleXmlParser> _axleXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRearAxleParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement additionalAxles
            */
            class SubElementAdditionalAxlesParser: public IElementParser
            {
            private:
                std::shared_ptr<AxleXmlParser> _axleXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAdditionalAxlesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            AxlesXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a BoundingBoxImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class BoundingBoxXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement center
            */
            class SubElementCenterParser: public IElementParser
            {
            private:
                std::shared_ptr<CenterXmlParser> _centerXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCenterParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement dimensions
            */
            class SubElementDimensionsParser: public IElementParser
            {
            private:
                std::shared_ptr<DimensionsXmlParser> _dimensionsXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDimensionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            BoundingBoxXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a BrakeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class BrakeXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            BrakeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a BrakeInputImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class BrakeInputXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement brakePercent
            */
            class SubElementBrakePercentParser: public IElementParser
            {
            private:
                std::shared_ptr<BrakeXmlParser> _brakeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementBrakePercentParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement brakeForce
            */
            class SubElementBrakeForceParser: public IElementParser
            {
            private:
                std::shared_ptr<BrakeXmlParser> _brakeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementBrakeForceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            BrakeInputXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ByEntityConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByEntityConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement triggeringEntities
            */
            class SubElementTriggeringEntitiesParser: public IElementParser
            {
            private:
                std::shared_ptr<TriggeringEntitiesXmlParser> _triggeringEntitiesXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTriggeringEntitiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement entityCondition
            */
            class SubElementEntityConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<EntityConditionXmlParser> _entityConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEntityConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ByEntityConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ByObjectTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByObjectTypeXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ByObjectTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ByTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByTypeXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ByTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ByValueConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByValueConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterCondition
            */
            class SubElementParameterConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterConditionXmlParser> _parameterConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement timeOfDayCondition
            */
            class SubElementTimeOfDayConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<TimeOfDayConditionXmlParser> _timeOfDayConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTimeOfDayConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement simulationTimeCondition
            */
            class SubElementSimulationTimeConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<SimulationTimeConditionXmlParser> _simulationTimeConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSimulationTimeConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement storyboardElementStateCondition
            */
            class SubElementStoryboardElementStateConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<StoryboardElementStateConditionXmlParser> _storyboardElementStateConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementStoryboardElementStateConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement userDefinedValueCondition
            */
            class SubElementUserDefinedValueConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<UserDefinedValueConditionXmlParser> _userDefinedValueConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementUserDefinedValueConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trafficSignalCondition
            */
            class SubElementTrafficSignalConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficSignalConditionXmlParser> _trafficSignalConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficSignalConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trafficSignalControllerCondition
            */
            class SubElementTrafficSignalControllerConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficSignalControllerConditionXmlParser> _trafficSignalControllerConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficSignalControllerConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement variableCondition
            */
            class SubElementVariableConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<VariableConditionXmlParser> _variableConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVariableConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ByValueConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a CatalogImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement vehicles
            */
            class SubElementVehiclesParser: public IElementParser
            {
            private:
                std::shared_ptr<VehicleXmlParser> _vehicleXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVehiclesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement controllers
            */
            class SubElementControllersParser: public IElementParser
            {
            private:
                std::shared_ptr<ControllerXmlParser> _controllerXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementControllersParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement pedestrians
            */
            class SubElementPedestriansParser: public IElementParser
            {
            private:
                std::shared_ptr<PedestrianXmlParser> _pedestrianXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPedestriansParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement miscObjects
            */
            class SubElementMiscObjectsParser: public IElementParser
            {
            private:
                std::shared_ptr<MiscObjectXmlParser> _miscObjectXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementMiscObjectsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement environments
            */
            class SubElementEnvironmentsParser: public IElementParser
            {
            private:
                std::shared_ptr<EnvironmentXmlParser> _environmentXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEnvironmentsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement maneuvers
            */
            class SubElementManeuversParser: public IElementParser
            {
            private:
                std::shared_ptr<ManeuverXmlParser> _maneuverXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementManeuversParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trajectories
            */
            class SubElementTrajectoriesParser: public IElementParser
            {
            private:
                std::shared_ptr<TrajectoryXmlParser> _trajectoryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrajectoriesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement routes
            */
            class SubElementRoutesParser: public IElementParser
            {
            private:
                std::shared_ptr<RouteXmlParser> _routeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRoutesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            CatalogXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a CatalogDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogDefinitionXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement catalog
            */
            class SubElementCatalogParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogXmlParser> _catalogXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            CatalogDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a CatalogLocationsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogLocationsXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement vehicleCatalog
            */
            class SubElementVehicleCatalogParser: public IElementParser
            {
            private:
                std::shared_ptr<VehicleCatalogLocationXmlParser> _vehicleCatalogLocationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVehicleCatalogParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement controllerCatalog
            */
            class SubElementControllerCatalogParser: public IElementParser
            {
            private:
                std::shared_ptr<ControllerCatalogLocationXmlParser> _controllerCatalogLocationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementControllerCatalogParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement pedestrianCatalog
            */
            class SubElementPedestrianCatalogParser: public IElementParser
            {
            private:
                std::shared_ptr<PedestrianCatalogLocationXmlParser> _pedestrianCatalogLocationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPedestrianCatalogParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement miscObjectCatalog
            */
            class SubElementMiscObjectCatalogParser: public IElementParser
            {
            private:
                std::shared_ptr<MiscObjectCatalogLocationXmlParser> _miscObjectCatalogLocationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementMiscObjectCatalogParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement environmentCatalog
            */
            class SubElementEnvironmentCatalogParser: public IElementParser
            {
            private:
                std::shared_ptr<EnvironmentCatalogLocationXmlParser> _environmentCatalogLocationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEnvironmentCatalogParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement maneuverCatalog
            */
            class SubElementManeuverCatalogParser: public IElementParser
            {
            private:
                std::shared_ptr<ManeuverCatalogLocationXmlParser> _maneuverCatalogLocationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementManeuverCatalogParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trajectoryCatalog
            */
            class SubElementTrajectoryCatalogParser: public IElementParser
            {
            private:
                std::shared_ptr<TrajectoryCatalogLocationXmlParser> _trajectoryCatalogLocationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrajectoryCatalogParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement routeCatalog
            */
            class SubElementRouteCatalogParser: public IElementParser
            {
            private:
                std::shared_ptr<RouteCatalogLocationXmlParser> _routeCatalogLocationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRouteCatalogParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            CatalogLocationsXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a CatalogReferenceImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogReferenceXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterAssignments
            */
            class SubElementParameterAssignmentsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterAssignmentXmlParser> _parameterAssignmentXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterAssignmentsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            CatalogReferenceXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a CenterImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CenterXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            CenterXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a CentralSwarmObjectImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CentralSwarmObjectXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            CentralSwarmObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ClothoidImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ClothoidXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement position
            */
            class SubElementPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ClothoidXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a CollisionConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CollisionConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement entityRef
            */
            class SubElementEntityRefParser: public IElementParser
            {
            private:
                std::shared_ptr<EntityRefXmlParser> _entityRefXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement byType
            */
            class SubElementByTypeParser: public IElementParser
            {
            private:
                std::shared_ptr<ByObjectTypeXmlParser> _byObjectTypeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementByTypeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            CollisionConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ColorImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ColorXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement colorRgb
            */
            class SubElementColorRgbParser: public IElementParser
            {
            private:
                std::shared_ptr<ColorRgbXmlParser> _colorRgbXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementColorRgbParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement colorCmyk
            */
            class SubElementColorCmykParser: public IElementParser
            {
            private:
                std::shared_ptr<ColorCmykXmlParser> _colorCmykXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementColorCmykParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ColorXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ColorCmykImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ColorCmykXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ColorCmykXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ColorRgbImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ColorRgbXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ColorRgbXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ComponentAnimationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ComponentAnimationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement vehicleComponent
            */
            class SubElementVehicleComponentParser: public IElementParser
            {
            private:
                std::shared_ptr<VehicleComponentXmlParser> _vehicleComponentXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVehicleComponentParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement userDefinedComponent
            */
            class SubElementUserDefinedComponentParser: public IElementParser
            {
            private:
                std::shared_ptr<UserDefinedComponentXmlParser> _userDefinedComponentXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementUserDefinedComponentParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ComponentAnimationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement byEntityCondition
            */
            class SubElementByEntityConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<ByEntityConditionXmlParser> _byEntityConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementByEntityConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement byValueCondition
            */
            class SubElementByValueConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<ByValueConditionXmlParser> _byValueConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementByValueConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ConditionGroupImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionGroupXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement conditions
            */
            class SubElementConditionsParser: public IElementParser
            {
            private:
                std::shared_ptr<ConditionXmlParser> _conditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementConditionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ConditionGroupXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ControlPointImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControlPointXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement position
            */
            class SubElementPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ControlPointXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ControllerImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterDeclarations
            */
            class SubElementParameterDeclarationsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement properties
            */
            class SubElementPropertiesParser: public IElementParser
            {
            private:
                std::shared_ptr<PropertiesXmlParser> _propertiesXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ControllerXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ControllerActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement assignControllerAction
            */
            class SubElementAssignControllerActionParser: public IElementParser
            {
            private:
                std::shared_ptr<AssignControllerActionXmlParser> _assignControllerActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAssignControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement overrideControllerValueAction
            */
            class SubElementOverrideControllerValueActionParser: public IElementParser
            {
            private:
                std::shared_ptr<OverrideControllerValueActionXmlParser> _overrideControllerValueActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementOverrideControllerValueActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement activateControllerAction
            */
            class SubElementActivateControllerActionParser: public IElementParser
            {
            private:
                std::shared_ptr<ActivateControllerActionXmlParser> _activateControllerActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementActivateControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ControllerCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerCatalogLocationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement directory
            */
            class SubElementDirectoryParser: public IElementParser
            {
            private:
                std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ControllerCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ControllerDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerDistributionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement controllerDistributionEntries
            */
            class SubElementControllerDistributionEntriesParser: public IElementParser
            {
            private:
                std::shared_ptr<ControllerDistributionEntryXmlParser> _controllerDistributionEntryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementControllerDistributionEntriesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ControllerDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ControllerDistributionEntryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerDistributionEntryXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement controller
            */
            class SubElementControllerParser: public IElementParser
            {
            private:
                std::shared_ptr<ControllerXmlParser> _controllerXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementControllerParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement catalogReference
            */
            class SubElementCatalogReferenceParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ControllerDistributionEntryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a CustomCommandActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CustomCommandActionXmlParser: public XmlSimpleContentParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        protected:
            void SetContentProperty(const std::string content, std::shared_ptr<BaseImpl> object) override;
            bool IsContentRequired() override;


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            CustomCommandActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a CustomContentImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CustomContentXmlParser: public XmlSimpleContentParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        protected:
            void SetContentProperty(const std::string content, std::shared_ptr<BaseImpl> object) override;
            bool IsContentRequired() override;


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            CustomContentXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DeleteEntityActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeleteEntityActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DeleteEntityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DeterministicImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeterministicXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement deterministicParameterDistributions
            */
            class SubElementDeterministicParameterDistributionsParser: public IElementParser
            {
            private:
                std::shared_ptr<DeterministicParameterDistributionXmlParser> _deterministicParameterDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDeterministicParameterDistributionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DeterministicXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DeterministicMultiParameterDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeterministicMultiParameterDistributionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement deterministicMultiParameterDistributionType
            */
            class SubElementDeterministicMultiParameterDistributionTypeParser: public IElementParser
            {
            private:
                std::shared_ptr<DeterministicMultiParameterDistributionTypeXmlParser> _deterministicMultiParameterDistributionTypeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDeterministicMultiParameterDistributionTypeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DeterministicMultiParameterDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DeterministicMultiParameterDistributionTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeterministicMultiParameterDistributionTypeXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement valueSetDistribution
            */
            class SubElementValueSetDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<ValueSetDistributionXmlParser> _valueSetDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementValueSetDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DeterministicMultiParameterDistributionTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DeterministicParameterDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeterministicParameterDistributionXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement deterministicMultiParameterDistribution
            */
            class SubElementDeterministicMultiParameterDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<DeterministicMultiParameterDistributionXmlParser> _deterministicMultiParameterDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDeterministicMultiParameterDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement deterministicSingleParameterDistribution
            */
            class SubElementDeterministicSingleParameterDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<DeterministicSingleParameterDistributionXmlParser> _deterministicSingleParameterDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDeterministicSingleParameterDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DeterministicParameterDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DeterministicSingleParameterDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeterministicSingleParameterDistributionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement deterministicSingleParameterDistributionType
            */
            class SubElementDeterministicSingleParameterDistributionTypeParser: public IElementParser
            {
            private:
                std::shared_ptr<DeterministicSingleParameterDistributionTypeXmlParser> _deterministicSingleParameterDistributionTypeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDeterministicSingleParameterDistributionTypeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DeterministicSingleParameterDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DeterministicSingleParameterDistributionTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DeterministicSingleParameterDistributionTypeXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement distributionSet
            */
            class SubElementDistributionSetParser: public IElementParser
            {
            private:
                std::shared_ptr<DistributionSetXmlParser> _distributionSetXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDistributionSetParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement distributionRange
            */
            class SubElementDistributionRangeParser: public IElementParser
            {
            private:
                std::shared_ptr<DistributionRangeXmlParser> _distributionRangeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDistributionRangeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement userDefinedDistribution
            */
            class SubElementUserDefinedDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<UserDefinedDistributionXmlParser> _userDefinedDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementUserDefinedDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DeterministicSingleParameterDistributionTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DimensionsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DimensionsXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DimensionsXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DirectionOfTravelDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DirectionOfTravelDistributionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DirectionOfTravelDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DirectoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DirectoryXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DirectoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DistanceConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistanceConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement position
            */
            class SubElementPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DistanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DistributionDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistributionDefinitionXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement deterministic
            */
            class SubElementDeterministicParser: public IElementParser
            {
            private:
                std::shared_ptr<DeterministicXmlParser> _deterministicXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDeterministicParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement stochastic
            */
            class SubElementStochasticParser: public IElementParser
            {
            private:
                std::shared_ptr<StochasticXmlParser> _stochasticXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementStochasticParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DistributionDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DistributionRangeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistributionRangeXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement range
            */
            class SubElementRangeParser: public IElementParser
            {
            private:
                std::shared_ptr<RangeXmlParser> _rangeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRangeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DistributionRangeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DistributionSetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistributionSetXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement elements
            */
            class SubElementElementsParser: public IElementParser
            {
            private:
                std::shared_ptr<DistributionSetElementXmlParser> _distributionSetElementXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementElementsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DistributionSetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DistributionSetElementImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistributionSetElementXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DistributionSetElementXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DomeImageImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DomeImageXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement domeFile
            */
            class SubElementDomeFileParser: public IElementParser
            {
            private:
                std::shared_ptr<FileXmlParser> _fileXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDomeFileParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DomeImageXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a DynamicConstraintsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DynamicConstraintsXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            DynamicConstraintsXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a EndOfRoadConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EndOfRoadConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            EndOfRoadConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a EntitiesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntitiesXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement scenarioObjects
            */
            class SubElementScenarioObjectsParser: public IElementParser
            {
            private:
                std::shared_ptr<ScenarioObjectXmlParser> _scenarioObjectXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementScenarioObjectsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement entitySelections
            */
            class SubElementEntitySelectionsParser: public IElementParser
            {
            private:
                std::shared_ptr<EntitySelectionXmlParser> _entitySelectionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEntitySelectionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            EntitiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a EntityActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement addEntityAction
            */
            class SubElementAddEntityActionParser: public IElementParser
            {
            private:
                std::shared_ptr<AddEntityActionXmlParser> _addEntityActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAddEntityActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement deleteEntityAction
            */
            class SubElementDeleteEntityActionParser: public IElementParser
            {
            private:
                std::shared_ptr<DeleteEntityActionXmlParser> _deleteEntityActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDeleteEntityActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            EntityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a EntityConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement endOfRoadCondition
            */
            class SubElementEndOfRoadConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<EndOfRoadConditionXmlParser> _endOfRoadConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEndOfRoadConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement collisionCondition
            */
            class SubElementCollisionConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<CollisionConditionXmlParser> _collisionConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCollisionConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement offroadCondition
            */
            class SubElementOffroadConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<OffroadConditionXmlParser> _offroadConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementOffroadConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement timeHeadwayCondition
            */
            class SubElementTimeHeadwayConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<TimeHeadwayConditionXmlParser> _timeHeadwayConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTimeHeadwayConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement timeToCollisionCondition
            */
            class SubElementTimeToCollisionConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<TimeToCollisionConditionXmlParser> _timeToCollisionConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTimeToCollisionConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement accelerationCondition
            */
            class SubElementAccelerationConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<AccelerationConditionXmlParser> _accelerationConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAccelerationConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement standStillCondition
            */
            class SubElementStandStillConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<StandStillConditionXmlParser> _standStillConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementStandStillConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement speedCondition
            */
            class SubElementSpeedConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<SpeedConditionXmlParser> _speedConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSpeedConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement relativeSpeedCondition
            */
            class SubElementRelativeSpeedConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<RelativeSpeedConditionXmlParser> _relativeSpeedConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRelativeSpeedConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement traveledDistanceCondition
            */
            class SubElementTraveledDistanceConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<TraveledDistanceConditionXmlParser> _traveledDistanceConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTraveledDistanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement reachPositionCondition
            */
            class SubElementReachPositionConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<ReachPositionConditionXmlParser> _reachPositionConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementReachPositionConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement distanceCondition
            */
            class SubElementDistanceConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<DistanceConditionXmlParser> _distanceConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDistanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement relativeDistanceCondition
            */
            class SubElementRelativeDistanceConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<RelativeDistanceConditionXmlParser> _relativeDistanceConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRelativeDistanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement relativeClearanceCondition
            */
            class SubElementRelativeClearanceConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<RelativeClearanceConditionXmlParser> _relativeClearanceConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRelativeClearanceConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            EntityConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a EntityObjectImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityObjectXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement catalogReference
            */
            class SubElementCatalogReferenceParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement vehicle
            */
            class SubElementVehicleParser: public IElementParser
            {
            private:
                std::shared_ptr<VehicleXmlParser> _vehicleXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVehicleParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement pedestrian
            */
            class SubElementPedestrianParser: public IElementParser
            {
            private:
                std::shared_ptr<PedestrianXmlParser> _pedestrianXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPedestrianParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement miscObject
            */
            class SubElementMiscObjectParser: public IElementParser
            {
            private:
                std::shared_ptr<MiscObjectXmlParser> _miscObjectXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementMiscObjectParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement externalObjectReference
            */
            class SubElementExternalObjectReferenceParser: public IElementParser
            {
            private:
                std::shared_ptr<ExternalObjectReferenceXmlParser> _externalObjectReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementExternalObjectReferenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            EntityObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a EntityRefImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityRefXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            EntityRefXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a EntitySelectionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntitySelectionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement members
            */
            class SubElementMembersParser: public IElementParser
            {
            private:
                std::shared_ptr<SelectedEntitiesXmlParser> _selectedEntitiesXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementMembersParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            EntitySelectionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a EnvironmentImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EnvironmentXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterDeclarations
            */
            class SubElementParameterDeclarationsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement timeOfDay
            */
            class SubElementTimeOfDayParser: public IElementParser
            {
            private:
                std::shared_ptr<TimeOfDayXmlParser> _timeOfDayXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTimeOfDayParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement weather
            */
            class SubElementWeatherParser: public IElementParser
            {
            private:
                std::shared_ptr<WeatherXmlParser> _weatherXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementWeatherParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement roadCondition
            */
            class SubElementRoadConditionParser: public IElementParser
            {
            private:
                std::shared_ptr<RoadConditionXmlParser> _roadConditionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRoadConditionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            EnvironmentXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a EnvironmentActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EnvironmentActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement environment
            */
            class SubElementEnvironmentParser: public IElementParser
            {
            private:
                std::shared_ptr<EnvironmentXmlParser> _environmentXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEnvironmentParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement catalogReference
            */
            class SubElementCatalogReferenceParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            EnvironmentActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a EnvironmentCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EnvironmentCatalogLocationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement directory
            */
            class SubElementDirectoryParser: public IElementParser
            {
            private:
                std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            EnvironmentCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a EventImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EventXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement actions
            */
            class SubElementActionsParser: public IElementParser
            {
            private:
                std::shared_ptr<ActionXmlParser> _actionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementActionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement startTrigger
            */
            class SubElementStartTriggerParser: public IElementParser
            {
            private:
                std::shared_ptr<TriggerXmlParser> _triggerXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementStartTriggerParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            EventXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ExternalObjectReferenceImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ExternalObjectReferenceXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ExternalObjectReferenceXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a FileImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FileXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            FileXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a FileHeaderImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FileHeaderXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement license
            */
            class SubElementLicenseParser: public IElementParser
            {
            private:
                std::shared_ptr<LicenseXmlParser> _licenseXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLicenseParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement properties
            */
            class SubElementPropertiesParser: public IElementParser
            {
            private:
                std::shared_ptr<PropertiesXmlParser> _propertiesXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            FileHeaderXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a FinalSpeedImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FinalSpeedXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement absoluteSpeed
            */
            class SubElementAbsoluteSpeedParser: public IElementParser
            {
            private:
                std::shared_ptr<AbsoluteSpeedXmlParser> _absoluteSpeedXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAbsoluteSpeedParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement relativeSpeedToMaster
            */
            class SubElementRelativeSpeedToMasterParser: public IElementParser
            {
            private:
                std::shared_ptr<RelativeSpeedToMasterXmlParser> _relativeSpeedToMasterXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRelativeSpeedToMasterParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            FinalSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a FogImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FogXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement boundingBox
            */
            class SubElementBoundingBoxParser: public IElementParser
            {
            private:
                std::shared_ptr<BoundingBoxXmlParser> _boundingBoxXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            FogXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a FollowTrajectoryActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FollowTrajectoryActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement trajectory
            */
            class SubElementTrajectoryParser: public IElementParser
            {
            private:
                std::shared_ptr<TrajectoryXmlParser> _trajectoryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrajectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement catalogReference
            */
            class SubElementCatalogReferenceParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement timeReference
            */
            class SubElementTimeReferenceParser: public IElementParser
            {
            private:
                std::shared_ptr<TimeReferenceXmlParser> _timeReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTimeReferenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trajectoryFollowingMode
            */
            class SubElementTrajectoryFollowingModeParser: public IElementParser
            {
            private:
                std::shared_ptr<TrajectoryFollowingModeXmlParser> _trajectoryFollowingModeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrajectoryFollowingModeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trajectoryRef
            */
            class SubElementTrajectoryRefParser: public IElementParser
            {
            private:
                std::shared_ptr<TrajectoryRefXmlParser> _trajectoryRefXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrajectoryRefParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            FollowTrajectoryActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a GearImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class GearXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement manualGear
            */
            class SubElementManualGearParser: public IElementParser
            {
            private:
                std::shared_ptr<ManualGearXmlParser> _manualGearXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementManualGearParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement automaticGear
            */
            class SubElementAutomaticGearParser: public IElementParser
            {
            private:
                std::shared_ptr<AutomaticGearXmlParser> _automaticGearXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAutomaticGearParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            GearXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a GeoPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class GeoPositionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement orientation
            */
            class SubElementOrientationParser: public IElementParser
            {
            private:
                std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            GeoPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a GlobalActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class GlobalActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement environmentAction
            */
            class SubElementEnvironmentActionParser: public IElementParser
            {
            private:
                std::shared_ptr<EnvironmentActionXmlParser> _environmentActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEnvironmentActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement entityAction
            */
            class SubElementEntityActionParser: public IElementParser
            {
            private:
                std::shared_ptr<EntityActionXmlParser> _entityActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEntityActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement parameterAction
            */
            class SubElementParameterActionParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterActionXmlParser> _parameterActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement infrastructureAction
            */
            class SubElementInfrastructureActionParser: public IElementParser
            {
            private:
                std::shared_ptr<InfrastructureActionXmlParser> _infrastructureActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementInfrastructureActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trafficAction
            */
            class SubElementTrafficActionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficActionXmlParser> _trafficActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement variableAction
            */
            class SubElementVariableActionParser: public IElementParser
            {
            private:
                std::shared_ptr<VariableActionXmlParser> _variableActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVariableActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            GlobalActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a HistogramImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class HistogramXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement bins
            */
            class SubElementBinsParser: public IElementParser
            {
            private:
                std::shared_ptr<HistogramBinXmlParser> _histogramBinXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementBinsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            HistogramXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a HistogramBinImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class HistogramBinXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement range
            */
            class SubElementRangeParser: public IElementParser
            {
            private:
                std::shared_ptr<RangeXmlParser> _rangeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRangeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            HistogramBinXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a InRoutePositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InRoutePositionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement fromCurrentEntity
            */
            class SubElementFromCurrentEntityParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionOfCurrentEntityXmlParser> _positionOfCurrentEntityXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementFromCurrentEntityParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement fromRoadCoordinates
            */
            class SubElementFromRoadCoordinatesParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionInRoadCoordinatesXmlParser> _positionInRoadCoordinatesXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementFromRoadCoordinatesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement fromLaneCoordinates
            */
            class SubElementFromLaneCoordinatesParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionInLaneCoordinatesXmlParser> _positionInLaneCoordinatesXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementFromLaneCoordinatesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            InRoutePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a InfrastructureActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InfrastructureActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement trafficSignalAction
            */
            class SubElementTrafficSignalActionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficSignalActionXmlParser> _trafficSignalActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficSignalActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            InfrastructureActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a InitImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InitXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement actions
            */
            class SubElementActionsParser: public IElementParser
            {
            private:
                std::shared_ptr<InitActionsXmlParser> _initActionsXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementActionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            InitXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a InitActionsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InitActionsXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement globalActions
            */
            class SubElementGlobalActionsParser: public IElementParser
            {
            private:
                std::shared_ptr<GlobalActionXmlParser> _globalActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementGlobalActionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement userDefinedActions
            */
            class SubElementUserDefinedActionsParser: public IElementParser
            {
            private:
                std::shared_ptr<UserDefinedActionXmlParser> _userDefinedActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementUserDefinedActionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement privates
            */
            class SubElementPrivatesParser: public IElementParser
            {
            private:
                std::shared_ptr<PrivateXmlParser> _privateXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPrivatesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            InitActionsXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a KnotImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class KnotXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            KnotXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LaneChangeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneChangeActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement laneChangeActionDynamics
            */
            class SubElementLaneChangeActionDynamicsParser: public IElementParser
            {
            private:
                std::shared_ptr<TransitionDynamicsXmlParser> _transitionDynamicsXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLaneChangeActionDynamicsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement laneChangeTarget
            */
            class SubElementLaneChangeTargetParser: public IElementParser
            {
            private:
                std::shared_ptr<LaneChangeTargetXmlParser> _laneChangeTargetXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLaneChangeTargetParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LaneChangeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LaneChangeTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneChangeTargetXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement relativeTargetLane
            */
            class SubElementRelativeTargetLaneParser: public IElementParser
            {
            private:
                std::shared_ptr<RelativeTargetLaneXmlParser> _relativeTargetLaneXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRelativeTargetLaneParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement absoluteTargetLane
            */
            class SubElementAbsoluteTargetLaneParser: public IElementParser
            {
            private:
                std::shared_ptr<AbsoluteTargetLaneXmlParser> _absoluteTargetLaneXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAbsoluteTargetLaneParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LaneChangeTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LaneOffsetActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement laneOffsetActionDynamics
            */
            class SubElementLaneOffsetActionDynamicsParser: public IElementParser
            {
            private:
                std::shared_ptr<LaneOffsetActionDynamicsXmlParser> _laneOffsetActionDynamicsXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLaneOffsetActionDynamicsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement laneOffsetTarget
            */
            class SubElementLaneOffsetTargetParser: public IElementParser
            {
            private:
                std::shared_ptr<LaneOffsetTargetXmlParser> _laneOffsetTargetXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLaneOffsetTargetParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LaneOffsetActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LaneOffsetActionDynamicsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetActionDynamicsXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LaneOffsetActionDynamicsXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LaneOffsetTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetTargetXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement relativeTargetLaneOffset
            */
            class SubElementRelativeTargetLaneOffsetParser: public IElementParser
            {
            private:
                std::shared_ptr<RelativeTargetLaneOffsetXmlParser> _relativeTargetLaneOffsetXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRelativeTargetLaneOffsetParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement absoluteTargetLaneOffset
            */
            class SubElementAbsoluteTargetLaneOffsetParser: public IElementParser
            {
            private:
                std::shared_ptr<AbsoluteTargetLaneOffsetXmlParser> _absoluteTargetLaneOffsetXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAbsoluteTargetLaneOffsetParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LaneOffsetTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LanePositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LanePositionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement orientation
            */
            class SubElementOrientationParser: public IElementParser
            {
            private:
                std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LanePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LateralActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LateralActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement laneChangeAction
            */
            class SubElementLaneChangeActionParser: public IElementParser
            {
            private:
                std::shared_ptr<LaneChangeActionXmlParser> _laneChangeActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLaneChangeActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement laneOffsetAction
            */
            class SubElementLaneOffsetActionParser: public IElementParser
            {
            private:
                std::shared_ptr<LaneOffsetActionXmlParser> _laneOffsetActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLaneOffsetActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement lateralDistanceAction
            */
            class SubElementLateralDistanceActionParser: public IElementParser
            {
            private:
                std::shared_ptr<LateralDistanceActionXmlParser> _lateralDistanceActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLateralDistanceActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LateralActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LateralDistanceActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LateralDistanceActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement dynamicConstraints
            */
            class SubElementDynamicConstraintsParser: public IElementParser
            {
            private:
                std::shared_ptr<DynamicConstraintsXmlParser> _dynamicConstraintsXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDynamicConstraintsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LateralDistanceActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LicenseImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LicenseXmlParser: public XmlSimpleContentParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        protected:
            void SetContentProperty(const std::string content, std::shared_ptr<BaseImpl> object) override;
            bool IsContentRequired() override;


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LicenseXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LightStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LightStateXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement color
            */
            class SubElementColorParser: public IElementParser
            {
            private:
                std::shared_ptr<ColorXmlParser> _colorXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementColorParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LightStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LightStateActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LightStateActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement lightType
            */
            class SubElementLightTypeParser: public IElementParser
            {
            private:
                std::shared_ptr<LightTypeXmlParser> _lightTypeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLightTypeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement lightState
            */
            class SubElementLightStateParser: public IElementParser
            {
            private:
                std::shared_ptr<LightStateXmlParser> _lightStateXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLightStateParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LightStateActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LightTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LightTypeXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement vehicleLight
            */
            class SubElementVehicleLightParser: public IElementParser
            {
            private:
                std::shared_ptr<VehicleLightXmlParser> _vehicleLightXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVehicleLightParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement userDefinedLight
            */
            class SubElementUserDefinedLightParser: public IElementParser
            {
            private:
                std::shared_ptr<UserDefinedLightXmlParser> _userDefinedLightXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementUserDefinedLightParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LightTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LongitudinalActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LongitudinalActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement speedAction
            */
            class SubElementSpeedActionParser: public IElementParser
            {
            private:
                std::shared_ptr<SpeedActionXmlParser> _speedActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSpeedActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement longitudinalDistanceAction
            */
            class SubElementLongitudinalDistanceActionParser: public IElementParser
            {
            private:
                std::shared_ptr<LongitudinalDistanceActionXmlParser> _longitudinalDistanceActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLongitudinalDistanceActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement speedProfileAction
            */
            class SubElementSpeedProfileActionParser: public IElementParser
            {
            private:
                std::shared_ptr<SpeedProfileActionXmlParser> _speedProfileActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSpeedProfileActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LongitudinalActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a LongitudinalDistanceActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LongitudinalDistanceActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement dynamicConstraints
            */
            class SubElementDynamicConstraintsParser: public IElementParser
            {
            private:
                std::shared_ptr<DynamicConstraintsXmlParser> _dynamicConstraintsXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDynamicConstraintsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            LongitudinalDistanceActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ManeuverImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterDeclarations
            */
            class SubElementParameterDeclarationsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement events
            */
            class SubElementEventsParser: public IElementParser
            {
            private:
                std::shared_ptr<EventXmlParser> _eventXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEventsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ManeuverXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ManeuverCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverCatalogLocationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement directory
            */
            class SubElementDirectoryParser: public IElementParser
            {
            private:
                std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ManeuverCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ManeuverGroupImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverGroupXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement actors
            */
            class SubElementActorsParser: public IElementParser
            {
            private:
                std::shared_ptr<ActorsXmlParser> _actorsXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementActorsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement catalogReferences
            */
            class SubElementCatalogReferencesParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogReferencesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement maneuvers
            */
            class SubElementManeuversParser: public IElementParser
            {
            private:
                std::shared_ptr<ManeuverXmlParser> _maneuverXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementManeuversParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ManeuverGroupXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ManualGearImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManualGearXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ManualGearXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a MiscObjectImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class MiscObjectXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterDeclarations
            */
            class SubElementParameterDeclarationsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement boundingBox
            */
            class SubElementBoundingBoxParser: public IElementParser
            {
            private:
                std::shared_ptr<BoundingBoxXmlParser> _boundingBoxXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement properties
            */
            class SubElementPropertiesParser: public IElementParser
            {
            private:
                std::shared_ptr<PropertiesXmlParser> _propertiesXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            MiscObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a MiscObjectCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class MiscObjectCatalogLocationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement directory
            */
            class SubElementDirectoryParser: public IElementParser
            {
            private:
                std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            MiscObjectCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ModifyRuleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ModifyRuleXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement addValue
            */
            class SubElementAddValueParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterAddValueRuleXmlParser> _parameterAddValueRuleXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAddValueParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement multiplyByValue
            */
            class SubElementMultiplyByValueParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterMultiplyByValueRuleXmlParser> _parameterMultiplyByValueRuleXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementMultiplyByValueParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ModifyRuleXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a NoneImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class NoneXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            NoneXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a NormalDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class NormalDistributionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement range
            */
            class SubElementRangeParser: public IElementParser
            {
            private:
                std::shared_ptr<RangeXmlParser> _rangeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRangeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            NormalDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a NurbsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class NurbsXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement controlPoints
            */
            class SubElementControlPointsParser: public IElementParser
            {
            private:
                std::shared_ptr<ControlPointXmlParser> _controlPointXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementControlPointsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement knots
            */
            class SubElementKnotsParser: public IElementParser
            {
            private:
                std::shared_ptr<KnotXmlParser> _knotXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementKnotsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            NurbsXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ObjectControllerImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ObjectControllerXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement catalogReference
            */
            class SubElementCatalogReferenceParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement controller
            */
            class SubElementControllerParser: public IElementParser
            {
            private:
                std::shared_ptr<ControllerXmlParser> _controllerXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementControllerParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ObjectControllerXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a OffroadConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OffroadConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            OffroadConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a OpenScenarioImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OpenScenarioXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement fileHeader
            */
            class SubElementFileHeaderParser: public IElementParser
            {
            private:
                std::shared_ptr<FileHeaderXmlParser> _fileHeaderXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementFileHeaderParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement openScenarioCategory
            */
            class SubElementOpenScenarioCategoryParser: public IElementParser
            {
            private:
                std::shared_ptr<OpenScenarioCategoryXmlParser> _openScenarioCategoryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementOpenScenarioCategoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            OpenScenarioXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a OpenScenarioCategoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OpenScenarioCategoryXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement scenarioDefinition
            */
            class SubElementScenarioDefinitionParser: public IElementParser
            {
            private:
                std::shared_ptr<ScenarioDefinitionXmlParser> _scenarioDefinitionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementScenarioDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement catalogDefinition
            */
            class SubElementCatalogDefinitionParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogDefinitionXmlParser> _catalogDefinitionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement parameterValueDistributionDefinition
            */
            class SubElementParameterValueDistributionDefinitionParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterValueDistributionDefinitionXmlParser> _parameterValueDistributionDefinitionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterValueDistributionDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            OpenScenarioCategoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a OrientationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OrientationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            OrientationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a OverrideBrakeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideBrakeActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement brakeInput
            */
            class SubElementBrakeInputParser: public IElementParser
            {
            private:
                std::shared_ptr<BrakeInputXmlParser> _brakeInputXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementBrakeInputParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            OverrideBrakeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a OverrideClutchActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideClutchActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            OverrideClutchActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a OverrideControllerValueActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideControllerValueActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement throttle
            */
            class SubElementThrottleParser: public IElementParser
            {
            private:
                std::shared_ptr<OverrideThrottleActionXmlParser> _overrideThrottleActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementThrottleParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement brake
            */
            class SubElementBrakeParser: public IElementParser
            {
            private:
                std::shared_ptr<OverrideBrakeActionXmlParser> _overrideBrakeActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementBrakeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement clutch
            */
            class SubElementClutchParser: public IElementParser
            {
            private:
                std::shared_ptr<OverrideClutchActionXmlParser> _overrideClutchActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementClutchParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement parkingBrake
            */
            class SubElementParkingBrakeParser: public IElementParser
            {
            private:
                std::shared_ptr<OverrideParkingBrakeActionXmlParser> _overrideParkingBrakeActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParkingBrakeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement steeringWheel
            */
            class SubElementSteeringWheelParser: public IElementParser
            {
            private:
                std::shared_ptr<OverrideSteeringWheelActionXmlParser> _overrideSteeringWheelActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSteeringWheelParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement gear
            */
            class SubElementGearParser: public IElementParser
            {
            private:
                std::shared_ptr<OverrideGearActionXmlParser> _overrideGearActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementGearParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            OverrideControllerValueActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a OverrideGearActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideGearActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement gear
            */
            class SubElementGearParser: public IElementParser
            {
            private:
                std::shared_ptr<GearXmlParser> _gearXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementGearParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            OverrideGearActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a OverrideParkingBrakeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideParkingBrakeActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement brakeInput
            */
            class SubElementBrakeInputParser: public IElementParser
            {
            private:
                std::shared_ptr<BrakeInputXmlParser> _brakeInputXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementBrakeInputParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            OverrideParkingBrakeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a OverrideSteeringWheelActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideSteeringWheelActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            OverrideSteeringWheelActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a OverrideThrottleActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideThrottleActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            OverrideThrottleActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement setAction
            */
            class SubElementSetActionParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterSetActionXmlParser> _parameterSetActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSetActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement modifyAction
            */
            class SubElementModifyActionParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterModifyActionXmlParser> _parameterModifyActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementModifyActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ParameterActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterAddValueRuleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterAddValueRuleXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ParameterAddValueRuleXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterAssignmentImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterAssignmentXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ParameterAssignmentXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ParameterConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterDeclarationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterDeclarationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement constraintGroups
            */
            class SubElementConstraintGroupsParser: public IElementParser
            {
            private:
                std::shared_ptr<ValueConstraintGroupXmlParser> _valueConstraintGroupXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementConstraintGroupsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ParameterDeclarationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterModifyActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterModifyActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement rule
            */
            class SubElementRuleParser: public IElementParser
            {
            private:
                std::shared_ptr<ModifyRuleXmlParser> _modifyRuleXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRuleParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ParameterModifyActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterMultiplyByValueRuleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterMultiplyByValueRuleXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ParameterMultiplyByValueRuleXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterSetActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterSetActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ParameterSetActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterValueDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterValueDistributionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement scenarioFile
            */
            class SubElementScenarioFileParser: public IElementParser
            {
            private:
                std::shared_ptr<FileXmlParser> _fileXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementScenarioFileParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement distributionDefinition
            */
            class SubElementDistributionDefinitionParser: public IElementParser
            {
            private:
                std::shared_ptr<DistributionDefinitionXmlParser> _distributionDefinitionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDistributionDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ParameterValueDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterValueDistributionDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterValueDistributionDefinitionXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterValueDistribution
            */
            class SubElementParameterValueDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterValueDistributionXmlParser> _parameterValueDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterValueDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ParameterValueDistributionDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ParameterValueSetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterValueSetXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterAssignments
            */
            class SubElementParameterAssignmentsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterAssignmentXmlParser> _parameterAssignmentXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterAssignmentsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ParameterValueSetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PedestrianImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterDeclarations
            */
            class SubElementParameterDeclarationsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement boundingBox
            */
            class SubElementBoundingBoxParser: public IElementParser
            {
            private:
                std::shared_ptr<BoundingBoxXmlParser> _boundingBoxXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement properties
            */
            class SubElementPropertiesParser: public IElementParser
            {
            private:
                std::shared_ptr<PropertiesXmlParser> _propertiesXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PedestrianXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PedestrianAnimationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianAnimationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement gestures
            */
            class SubElementGesturesParser: public IElementParser
            {
            private:
                std::shared_ptr<PedestrianGestureXmlParser> _pedestrianGestureXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementGesturesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PedestrianAnimationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PedestrianCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianCatalogLocationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement directory
            */
            class SubElementDirectoryParser: public IElementParser
            {
            private:
                std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PedestrianCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PedestrianGestureImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianGestureXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PedestrianGestureXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PerformanceImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PerformanceXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PerformanceXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PhaseImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PhaseXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement trafficSignalStates
            */
            class SubElementTrafficSignalStatesParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficSignalStateXmlParser> _trafficSignalStateXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficSignalStatesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trafficeSignalGroupState
            */
            class SubElementTrafficeSignalGroupStateParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficSignalGroupStateXmlParser> _trafficSignalGroupStateXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficeSignalGroupStateParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PhaseXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PoissonDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PoissonDistributionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement range
            */
            class SubElementRangeParser: public IElementParser
            {
            private:
                std::shared_ptr<RangeXmlParser> _rangeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRangeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PoissonDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PolylineImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PolylineXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement vertices
            */
            class SubElementVerticesParser: public IElementParser
            {
            private:
                std::shared_ptr<VertexXmlParser> _vertexXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVerticesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PolylineXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement worldPosition
            */
            class SubElementWorldPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<WorldPositionXmlParser> _worldPositionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementWorldPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement relativeWorldPosition
            */
            class SubElementRelativeWorldPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<RelativeWorldPositionXmlParser> _relativeWorldPositionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRelativeWorldPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement relativeObjectPosition
            */
            class SubElementRelativeObjectPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<RelativeObjectPositionXmlParser> _relativeObjectPositionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRelativeObjectPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement roadPosition
            */
            class SubElementRoadPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<RoadPositionXmlParser> _roadPositionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRoadPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement relativeRoadPosition
            */
            class SubElementRelativeRoadPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<RelativeRoadPositionXmlParser> _relativeRoadPositionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRelativeRoadPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement lanePosition
            */
            class SubElementLanePositionParser: public IElementParser
            {
            private:
                std::shared_ptr<LanePositionXmlParser> _lanePositionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLanePositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement relativeLanePosition
            */
            class SubElementRelativeLanePositionParser: public IElementParser
            {
            private:
                std::shared_ptr<RelativeLanePositionXmlParser> _relativeLanePositionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRelativeLanePositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement routePosition
            */
            class SubElementRoutePositionParser: public IElementParser
            {
            private:
                std::shared_ptr<RoutePositionXmlParser> _routePositionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRoutePositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement geoPosition
            */
            class SubElementGeoPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<GeoPositionXmlParser> _geoPositionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementGeoPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trajectoryPosition
            */
            class SubElementTrajectoryPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrajectoryPositionXmlParser> _trajectoryPositionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrajectoryPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PositionInLaneCoordinatesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionInLaneCoordinatesXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PositionInLaneCoordinatesXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PositionInRoadCoordinatesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionInRoadCoordinatesXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PositionInRoadCoordinatesXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PositionOfCurrentEntityImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionOfCurrentEntityXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PositionOfCurrentEntityXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PrecipitationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrecipitationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PrecipitationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PrivateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrivateXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement privateActions
            */
            class SubElementPrivateActionsParser: public IElementParser
            {
            private:
                std::shared_ptr<PrivateActionXmlParser> _privateActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPrivateActionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PrivateXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PrivateActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrivateActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement longitudinalAction
            */
            class SubElementLongitudinalActionParser: public IElementParser
            {
            private:
                std::shared_ptr<LongitudinalActionXmlParser> _longitudinalActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLongitudinalActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement lateralAction
            */
            class SubElementLateralActionParser: public IElementParser
            {
            private:
                std::shared_ptr<LateralActionXmlParser> _lateralActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLateralActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement visibilityAction
            */
            class SubElementVisibilityActionParser: public IElementParser
            {
            private:
                std::shared_ptr<VisibilityActionXmlParser> _visibilityActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVisibilityActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement synchronizeAction
            */
            class SubElementSynchronizeActionParser: public IElementParser
            {
            private:
                std::shared_ptr<SynchronizeActionXmlParser> _synchronizeActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSynchronizeActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement activateControllerAction
            */
            class SubElementActivateControllerActionParser: public IElementParser
            {
            private:
                std::shared_ptr<ActivateControllerActionXmlParser> _activateControllerActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementActivateControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement controllerAction
            */
            class SubElementControllerActionParser: public IElementParser
            {
            private:
                std::shared_ptr<ControllerActionXmlParser> _controllerActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement teleportAction
            */
            class SubElementTeleportActionParser: public IElementParser
            {
            private:
                std::shared_ptr<TeleportActionXmlParser> _teleportActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTeleportActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement routingAction
            */
            class SubElementRoutingActionParser: public IElementParser
            {
            private:
                std::shared_ptr<RoutingActionXmlParser> _routingActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRoutingActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement appearanceAction
            */
            class SubElementAppearanceActionParser: public IElementParser
            {
            private:
                std::shared_ptr<AppearanceActionXmlParser> _appearanceActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAppearanceActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PrivateActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ProbabilityDistributionSetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ProbabilityDistributionSetXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement elements
            */
            class SubElementElementsParser: public IElementParser
            {
            private:
                std::shared_ptr<ProbabilityDistributionSetElementXmlParser> _probabilityDistributionSetElementXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementElementsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ProbabilityDistributionSetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ProbabilityDistributionSetElementImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ProbabilityDistributionSetElementXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ProbabilityDistributionSetElementXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PropertiesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PropertiesXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement properties
            */
            class SubElementPropertiesParser: public IElementParser
            {
            private:
                std::shared_ptr<PropertyXmlParser> _propertyXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement files
            */
            class SubElementFilesParser: public IElementParser
            {
            private:
                std::shared_ptr<FileXmlParser> _fileXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementFilesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement customContent
            */
            class SubElementCustomContentParser: public IElementParser
            {
            private:
                std::shared_ptr<CustomContentXmlParser> _customContentXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCustomContentParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PropertiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a PropertyImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PropertyXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            PropertyXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RangeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RangeXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RangeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ReachPositionConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ReachPositionConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement position
            */
            class SubElementPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ReachPositionConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeClearanceConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeClearanceConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement relativeLaneRange
            */
            class SubElementRelativeLaneRangeParser: public IElementParser
            {
            private:
                std::shared_ptr<RelativeLaneRangeXmlParser> _relativeLaneRangeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRelativeLaneRangeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement entityRef
            */
            class SubElementEntityRefParser: public IElementParser
            {
            private:
                std::shared_ptr<EntityRefXmlParser> _entityRefXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RelativeClearanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeDistanceConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeDistanceConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RelativeDistanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeLanePositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeLanePositionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement orientation
            */
            class SubElementOrientationParser: public IElementParser
            {
            private:
                std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RelativeLanePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeLaneRangeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeLaneRangeXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RelativeLaneRangeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeObjectPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeObjectPositionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement orientation
            */
            class SubElementOrientationParser: public IElementParser
            {
            private:
                std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RelativeObjectPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeRoadPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeRoadPositionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement orientation
            */
            class SubElementOrientationParser: public IElementParser
            {
            private:
                std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RelativeRoadPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeSpeedConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeSpeedConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RelativeSpeedConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeSpeedToMasterImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeSpeedToMasterXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement steadyState
            */
            class SubElementSteadyStateParser: public IElementParser
            {
            private:
                std::shared_ptr<SteadyStateXmlParser> _steadyStateXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSteadyStateParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RelativeSpeedToMasterXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeTargetLaneImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeTargetLaneXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RelativeTargetLaneXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeTargetLaneOffsetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeTargetLaneOffsetXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RelativeTargetLaneOffsetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeTargetSpeedImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeTargetSpeedXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RelativeTargetSpeedXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RelativeWorldPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeWorldPositionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement orientation
            */
            class SubElementOrientationParser: public IElementParser
            {
            private:
                std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RelativeWorldPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RoadConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement properties
            */
            class SubElementPropertiesParser: public IElementParser
            {
            private:
                std::shared_ptr<PropertiesXmlParser> _propertiesXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RoadConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RoadNetworkImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadNetworkXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement logicFile
            */
            class SubElementLogicFileParser: public IElementParser
            {
            private:
                std::shared_ptr<FileXmlParser> _fileXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementLogicFileParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement sceneGraphFile
            */
            class SubElementSceneGraphFileParser: public IElementParser
            {
            private:
                std::shared_ptr<FileXmlParser> _fileXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSceneGraphFileParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trafficSignals
            */
            class SubElementTrafficSignalsParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficSignalControllerXmlParser> _trafficSignalControllerXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficSignalsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement usedArea
            */
            class SubElementUsedAreaParser: public IElementParser
            {
            private:
                std::shared_ptr<UsedAreaXmlParser> _usedAreaXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementUsedAreaParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RoadNetworkXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RoadPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadPositionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement orientation
            */
            class SubElementOrientationParser: public IElementParser
            {
            private:
                std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RoadPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RouteImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterDeclarations
            */
            class SubElementParameterDeclarationsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement waypoints
            */
            class SubElementWaypointsParser: public IElementParser
            {
            private:
                std::shared_ptr<WaypointXmlParser> _waypointXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementWaypointsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RouteXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RouteCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteCatalogLocationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement directory
            */
            class SubElementDirectoryParser: public IElementParser
            {
            private:
                std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RouteCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RoutePositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoutePositionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement routeRef
            */
            class SubElementRouteRefParser: public IElementParser
            {
            private:
                std::shared_ptr<RouteRefXmlParser> _routeRefXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRouteRefParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement orientation
            */
            class SubElementOrientationParser: public IElementParser
            {
            private:
                std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement inRoutePosition
            */
            class SubElementInRoutePositionParser: public IElementParser
            {
            private:
                std::shared_ptr<InRoutePositionXmlParser> _inRoutePositionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementInRoutePositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RoutePositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RouteRefImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteRefXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement route
            */
            class SubElementRouteParser: public IElementParser
            {
            private:
                std::shared_ptr<RouteXmlParser> _routeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRouteParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement catalogReference
            */
            class SubElementCatalogReferenceParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RouteRefXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a RoutingActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoutingActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement assignRouteAction
            */
            class SubElementAssignRouteActionParser: public IElementParser
            {
            private:
                std::shared_ptr<AssignRouteActionXmlParser> _assignRouteActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAssignRouteActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement followTrajectoryAction
            */
            class SubElementFollowTrajectoryActionParser: public IElementParser
            {
            private:
                std::shared_ptr<FollowTrajectoryActionXmlParser> _followTrajectoryActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementFollowTrajectoryActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement acquirePositionAction
            */
            class SubElementAcquirePositionActionParser: public IElementParser
            {
            private:
                std::shared_ptr<AcquirePositionActionXmlParser> _acquirePositionActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAcquirePositionActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            RoutingActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ScenarioDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ScenarioDefinitionXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterDeclarations
            */
            class SubElementParameterDeclarationsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement variableDeclarations
            */
            class SubElementVariableDeclarationsParser: public IElementParser
            {
            private:
                std::shared_ptr<VariableDeclarationXmlParser> _variableDeclarationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVariableDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement catalogLocations
            */
            class SubElementCatalogLocationsParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogLocationsXmlParser> _catalogLocationsXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogLocationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement roadNetwork
            */
            class SubElementRoadNetworkParser: public IElementParser
            {
            private:
                std::shared_ptr<RoadNetworkXmlParser> _roadNetworkXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRoadNetworkParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement entities
            */
            class SubElementEntitiesParser: public IElementParser
            {
            private:
                std::shared_ptr<EntitiesXmlParser> _entitiesXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEntitiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement storyboard
            */
            class SubElementStoryboardParser: public IElementParser
            {
            private:
                std::shared_ptr<StoryboardXmlParser> _storyboardXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementStoryboardParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ScenarioDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ScenarioObjectImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ScenarioObjectXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement entityObject
            */
            class SubElementEntityObjectParser: public IElementParser
            {
            private:
                std::shared_ptr<EntityObjectXmlParser> _entityObjectXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEntityObjectParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement objectController
            */
            class SubElementObjectControllerParser: public IElementParser
            {
            private:
                std::shared_ptr<ObjectControllerXmlParser> _objectControllerXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementObjectControllerParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ScenarioObjectXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SelectedEntitiesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SelectedEntitiesXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement entityRef
            */
            class SubElementEntityRefParser: public IElementParser
            {
            private:
                std::shared_ptr<EntityRefXmlParser> _entityRefXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement byType
            */
            class SubElementByTypeParser: public IElementParser
            {
            private:
                std::shared_ptr<ByTypeXmlParser> _byTypeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementByTypeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            SelectedEntitiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SensorReferenceImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SensorReferenceXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            SensorReferenceXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SensorReferenceSetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SensorReferenceSetXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement sensorReferences
            */
            class SubElementSensorReferencesParser: public IElementParser
            {
            private:
                std::shared_ptr<SensorReferenceXmlParser> _sensorReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSensorReferencesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            SensorReferenceSetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ShapeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ShapeXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement polyline
            */
            class SubElementPolylineParser: public IElementParser
            {
            private:
                std::shared_ptr<PolylineXmlParser> _polylineXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPolylineParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement clothoid
            */
            class SubElementClothoidParser: public IElementParser
            {
            private:
                std::shared_ptr<ClothoidXmlParser> _clothoidXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementClothoidParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement nurbs
            */
            class SubElementNurbsParser: public IElementParser
            {
            private:
                std::shared_ptr<NurbsXmlParser> _nurbsXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementNurbsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ShapeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SimulationTimeConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SimulationTimeConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            SimulationTimeConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SpeedActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement speedActionDynamics
            */
            class SubElementSpeedActionDynamicsParser: public IElementParser
            {
            private:
                std::shared_ptr<TransitionDynamicsXmlParser> _transitionDynamicsXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSpeedActionDynamicsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement speedActionTarget
            */
            class SubElementSpeedActionTargetParser: public IElementParser
            {
            private:
                std::shared_ptr<SpeedActionTargetXmlParser> _speedActionTargetXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSpeedActionTargetParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            SpeedActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SpeedActionTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedActionTargetXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement relativeTargetSpeed
            */
            class SubElementRelativeTargetSpeedParser: public IElementParser
            {
            private:
                std::shared_ptr<RelativeTargetSpeedXmlParser> _relativeTargetSpeedXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRelativeTargetSpeedParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement absoluteTargetSpeed
            */
            class SubElementAbsoluteTargetSpeedParser: public IElementParser
            {
            private:
                std::shared_ptr<AbsoluteTargetSpeedXmlParser> _absoluteTargetSpeedXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAbsoluteTargetSpeedParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            SpeedActionTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SpeedConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            SpeedConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SpeedProfileActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedProfileActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement dynamicConstraints
            */
            class SubElementDynamicConstraintsParser: public IElementParser
            {
            private:
                std::shared_ptr<DynamicConstraintsXmlParser> _dynamicConstraintsXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDynamicConstraintsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement speedProfileEntry
            */
            class SubElementSpeedProfileEntryParser: public IElementParser
            {
            private:
                std::shared_ptr<SpeedProfileEntryXmlParser> _speedProfileEntryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSpeedProfileEntryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            SpeedProfileActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SpeedProfileEntryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedProfileEntryXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            SpeedProfileEntryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StandStillConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StandStillConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            StandStillConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SteadyStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SteadyStateXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement targetDistanceSteadyState
            */
            class SubElementTargetDistanceSteadyStateParser: public IElementParser
            {
            private:
                std::shared_ptr<TargetDistanceSteadyStateXmlParser> _targetDistanceSteadyStateXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTargetDistanceSteadyStateParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement targetTimeSteadyState
            */
            class SubElementTargetTimeSteadyStateParser: public IElementParser
            {
            private:
                std::shared_ptr<TargetTimeSteadyStateXmlParser> _targetTimeSteadyStateXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTargetTimeSteadyStateParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            SteadyStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StochasticImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StochasticXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement stochasticDistributions
            */
            class SubElementStochasticDistributionsParser: public IElementParser
            {
            private:
                std::shared_ptr<StochasticDistributionXmlParser> _stochasticDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementStochasticDistributionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            StochasticXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StochasticDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StochasticDistributionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement stochasticDistributionType
            */
            class SubElementStochasticDistributionTypeParser: public IElementParser
            {
            private:
                std::shared_ptr<StochasticDistributionTypeXmlParser> _stochasticDistributionTypeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementStochasticDistributionTypeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            StochasticDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StochasticDistributionTypeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StochasticDistributionTypeXmlParser: public XmlGroupParser
        {

        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement probabilityDistributionSet
            */
            class SubElementProbabilityDistributionSetParser: public IElementParser
            {
            private:
                std::shared_ptr<ProbabilityDistributionSetXmlParser> _probabilityDistributionSetXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementProbabilityDistributionSetParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement normalDistribution
            */
            class SubElementNormalDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<NormalDistributionXmlParser> _normalDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementNormalDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement uniformDistribution
            */
            class SubElementUniformDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<UniformDistributionXmlParser> _uniformDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementUniformDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement poissonDistribution
            */
            class SubElementPoissonDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<PoissonDistributionXmlParser> _poissonDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPoissonDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement histogram
            */
            class SubElementHistogramParser: public IElementParser
            {
            private:
                std::shared_ptr<HistogramXmlParser> _histogramXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementHistogramParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement userDefinedDistribution
            */
            class SubElementUserDefinedDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<UserDefinedDistributionXmlParser> _userDefinedDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementUserDefinedDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            StochasticDistributionTypeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterDeclarations
            */
            class SubElementParameterDeclarationsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement acts
            */
            class SubElementActsParser: public IElementParser
            {
            private:
                std::shared_ptr<ActXmlParser> _actXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementActsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            StoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StoryboardImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryboardXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement init
            */
            class SubElementInitParser: public IElementParser
            {
            private:
                std::shared_ptr<InitXmlParser> _initXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementInitParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement stories
            */
            class SubElementStoriesParser: public IElementParser
            {
            private:
                std::shared_ptr<StoryXmlParser> _storyXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementStoriesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement stopTrigger
            */
            class SubElementStopTriggerParser: public IElementParser
            {
            private:
                std::shared_ptr<TriggerXmlParser> _triggerXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementStopTriggerParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            StoryboardXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a StoryboardElementStateConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryboardElementStateConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            StoryboardElementStateConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SunImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SunXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            SunXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a SynchronizeActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SynchronizeActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement targetPositionMaster
            */
            class SubElementTargetPositionMasterParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTargetPositionMasterParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement targetPosition
            */
            class SubElementTargetPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTargetPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement finalSpeed
            */
            class SubElementFinalSpeedParser: public IElementParser
            {
            private:
                std::shared_ptr<FinalSpeedXmlParser> _finalSpeedXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementFinalSpeedParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            SynchronizeActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TargetDistanceSteadyStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TargetDistanceSteadyStateXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TargetDistanceSteadyStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TargetTimeSteadyStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TargetTimeSteadyStateXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TargetTimeSteadyStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TeleportActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TeleportActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement position
            */
            class SubElementPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TeleportActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TimeHeadwayConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeHeadwayConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TimeHeadwayConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TimeOfDayImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeOfDayXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TimeOfDayXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TimeOfDayConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeOfDayConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TimeOfDayConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TimeReferenceImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeReferenceXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement none
            */
            class SubElementNoneParser: public IElementParser
            {
            private:
                std::shared_ptr<NoneXmlParser> _noneXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementNoneParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement timing
            */
            class SubElementTimingParser: public IElementParser
            {
            private:
                std::shared_ptr<TimingXmlParser> _timingXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTimingParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TimeReferenceXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TimeToCollisionConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeToCollisionConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement timeToCollisionConditionTarget
            */
            class SubElementTimeToCollisionConditionTargetParser: public IElementParser
            {
            private:
                std::shared_ptr<TimeToCollisionConditionTargetXmlParser> _timeToCollisionConditionTargetXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTimeToCollisionConditionTargetParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TimeToCollisionConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TimeToCollisionConditionTargetImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeToCollisionConditionTargetXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement position
            */
            class SubElementPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement entityRef
            */
            class SubElementEntityRefParser: public IElementParser
            {
            private:
                std::shared_ptr<EntityRefXmlParser> _entityRefXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEntityRefParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TimeToCollisionConditionTargetXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TimingImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimingXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TimingXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement trafficSourceAction
            */
            class SubElementTrafficSourceActionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficSourceActionXmlParser> _trafficSourceActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficSourceActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trafficSinkAction
            */
            class SubElementTrafficSinkActionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficSinkActionXmlParser> _trafficSinkActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficSinkActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trafficSwarmAction
            */
            class SubElementTrafficSwarmActionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficSwarmActionXmlParser> _trafficSwarmActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficSwarmActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trafficStopAction
            */
            class SubElementTrafficStopActionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficStopActionXmlParser> _trafficStopActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficStopActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficDefinitionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficDefinitionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement vehicleCategoryDistribution
            */
            class SubElementVehicleCategoryDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<VehicleCategoryDistributionXmlParser> _vehicleCategoryDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVehicleCategoryDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement vehicleRoleDistribution
            */
            class SubElementVehicleRoleDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<VehicleRoleDistributionXmlParser> _vehicleRoleDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVehicleRoleDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement controllerDistribution
            */
            class SubElementControllerDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<ControllerDistributionXmlParser> _controllerDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementControllerDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficDefinitionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficSignalActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement trafficSignalControllerAction
            */
            class SubElementTrafficSignalControllerActionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficSignalControllerActionXmlParser> _trafficSignalControllerActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficSignalControllerActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trafficSignalStateAction
            */
            class SubElementTrafficSignalStateActionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficSignalStateActionXmlParser> _trafficSignalStateActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficSignalStateActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficSignalActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficSignalConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficSignalConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficSignalControllerImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement phases
            */
            class SubElementPhasesParser: public IElementParser
            {
            private:
                std::shared_ptr<PhaseXmlParser> _phaseXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPhasesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficSignalControllerXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficSignalControllerActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficSignalControllerActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficSignalControllerConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficSignalControllerConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficSignalGroupStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalGroupStateXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficSignalGroupStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficSignalStateImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalStateXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficSignalStateXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficSignalStateActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalStateActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficSignalStateActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficSinkActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSinkActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement position
            */
            class SubElementPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trafficDefinition
            */
            class SubElementTrafficDefinitionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficDefinitionXmlParser> _trafficDefinitionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficSinkActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficSourceActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSourceActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement position
            */
            class SubElementPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trafficDefinition
            */
            class SubElementTrafficDefinitionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficDefinitionXmlParser> _trafficDefinitionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficSourceActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficStopActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficStopActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficStopActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrafficSwarmActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSwarmActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement centralObject
            */
            class SubElementCentralObjectParser: public IElementParser
            {
            private:
                std::shared_ptr<CentralSwarmObjectXmlParser> _centralSwarmObjectXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCentralObjectParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trafficDefinition
            */
            class SubElementTrafficDefinitionParser: public IElementParser
            {
            private:
                std::shared_ptr<TrafficDefinitionXmlParser> _trafficDefinitionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrafficDefinitionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement initialSpeedRange
            */
            class SubElementInitialSpeedRangeParser: public IElementParser
            {
            private:
                std::shared_ptr<RangeXmlParser> _rangeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementInitialSpeedRangeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement directionOfTravelDistribution
            */
            class SubElementDirectionOfTravelDistributionParser: public IElementParser
            {
            private:
                std::shared_ptr<DirectionOfTravelDistributionXmlParser> _directionOfTravelDistributionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDirectionOfTravelDistributionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrafficSwarmActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrajectoryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterDeclarations
            */
            class SubElementParameterDeclarationsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement shape
            */
            class SubElementShapeParser: public IElementParser
            {
            private:
                std::shared_ptr<ShapeXmlParser> _shapeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementShapeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrajectoryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrajectoryCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryCatalogLocationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement directory
            */
            class SubElementDirectoryParser: public IElementParser
            {
            private:
                std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrajectoryCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrajectoryFollowingModeImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryFollowingModeXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrajectoryFollowingModeXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrajectoryPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryPositionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement orientation
            */
            class SubElementOrientationParser: public IElementParser
            {
            private:
                std::shared_ptr<OrientationXmlParser> _orientationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementOrientationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement trajectoryRef
            */
            class SubElementTrajectoryRefParser: public IElementParser
            {
            private:
                std::shared_ptr<TrajectoryRefXmlParser> _trajectoryRefXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrajectoryRefParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrajectoryPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TrajectoryRefImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryRefXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement trajectory
            */
            class SubElementTrajectoryParser: public IElementParser
            {
            private:
                std::shared_ptr<TrajectoryXmlParser> _trajectoryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementTrajectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement catalogReference
            */
            class SubElementCatalogReferenceParser: public IElementParser
            {
            private:
                std::shared_ptr<CatalogReferenceXmlParser> _catalogReferenceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCatalogReferenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TrajectoryRefXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TransitionDynamicsImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TransitionDynamicsXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TransitionDynamicsXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TraveledDistanceConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TraveledDistanceConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TraveledDistanceConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TriggerImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TriggerXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement conditionGroups
            */
            class SubElementConditionGroupsParser: public IElementParser
            {
            private:
                std::shared_ptr<ConditionGroupXmlParser> _conditionGroupXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementConditionGroupsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TriggerXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a TriggeringEntitiesImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TriggeringEntitiesXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement entityRefs
            */
            class SubElementEntityRefsParser: public IElementParser
            {
            private:
                std::shared_ptr<EntityRefXmlParser> _entityRefXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementEntityRefsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            TriggeringEntitiesXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a UniformDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UniformDistributionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement range
            */
            class SubElementRangeParser: public IElementParser
            {
            private:
                std::shared_ptr<RangeXmlParser> _rangeXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRangeParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            UniformDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a UsedAreaImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UsedAreaXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement positions
            */
            class SubElementPositionsParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            UsedAreaXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a UserDefinedActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement customCommandAction
            */
            class SubElementCustomCommandActionParser: public IElementParser
            {
            private:
                std::shared_ptr<CustomCommandActionXmlParser> _customCommandActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementCustomCommandActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            UserDefinedActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a UserDefinedAnimationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedAnimationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            UserDefinedAnimationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a UserDefinedComponentImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedComponentXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            UserDefinedComponentXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a UserDefinedDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedDistributionXmlParser: public XmlSimpleContentParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        protected:
            void SetContentProperty(const std::string content, std::shared_ptr<BaseImpl> object) override;
            bool IsContentRequired() override;


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            UserDefinedDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a UserDefinedLightImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedLightXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            UserDefinedLightXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a UserDefinedValueConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedValueConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            UserDefinedValueConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ValueConstraintImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ValueConstraintXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ValueConstraintXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ValueConstraintGroupImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ValueConstraintGroupXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement constraints
            */
            class SubElementConstraintsParser: public IElementParser
            {
            private:
                std::shared_ptr<ValueConstraintXmlParser> _valueConstraintXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementConstraintsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ValueConstraintGroupXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a ValueSetDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ValueSetDistributionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterValueSets
            */
            class SubElementParameterValueSetsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterValueSetXmlParser> _parameterValueSetXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterValueSetsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            ValueSetDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VariableActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VariableActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement setAction
            */
            class SubElementSetActionParser: public IElementParser
            {
            private:
                std::shared_ptr<VariableSetActionXmlParser> _variableSetActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSetActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement modifyAction
            */
            class SubElementModifyActionParser: public IElementParser
            {
            private:
                std::shared_ptr<VariableModifyActionXmlParser> _variableModifyActionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementModifyActionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VariableActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VariableAddValueRuleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VariableAddValueRuleXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VariableAddValueRuleXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VariableConditionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VariableConditionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VariableConditionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VariableDeclarationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VariableDeclarationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VariableDeclarationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VariableModifyActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VariableModifyActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement rule
            */
            class SubElementRuleParser: public IElementParser
            {
            private:
                std::shared_ptr<VariableModifyRuleXmlParser> _variableModifyRuleXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementRuleParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VariableModifyActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VariableModifyRuleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VariableModifyRuleXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlChoiceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                 SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement addValue
            */
            class SubElementAddValueParser: public IElementParser
            {
            private:
                std::shared_ptr<VariableAddValueRuleXmlParser> _variableAddValueRuleXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAddValueParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement multiplyByValue
            */
            class SubElementMultiplyByValueParser: public IElementParser
            {
            private:
                std::shared_ptr<VariableMultiplyByValueRuleXmlParser> _variableMultiplyByValueRuleXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementMultiplyByValueParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VariableModifyRuleXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VariableMultiplyByValueRuleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VariableMultiplyByValueRuleXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VariableMultiplyByValueRuleXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VariableSetActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VariableSetActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VariableSetActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VehicleImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement parameterDeclarations
            */
            class SubElementParameterDeclarationsParser: public IElementParser
            {
            private:
                std::shared_ptr<ParameterDeclarationXmlParser> _parameterDeclarationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementParameterDeclarationsParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement boundingBox
            */
            class SubElementBoundingBoxParser: public IElementParser
            {
            private:
                std::shared_ptr<BoundingBoxXmlParser> _boundingBoxXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementBoundingBoxParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement performance
            */
            class SubElementPerformanceParser: public IElementParser
            {
            private:
                std::shared_ptr<PerformanceXmlParser> _performanceXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPerformanceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement axles
            */
            class SubElementAxlesParser: public IElementParser
            {
            private:
                std::shared_ptr<AxlesXmlParser> _axlesXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementAxlesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement properties
            */
            class SubElementPropertiesParser: public IElementParser
            {
            private:
                std::shared_ptr<PropertiesXmlParser> _propertiesXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPropertiesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VehicleXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VehicleCatalogLocationImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCatalogLocationXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement directory
            */
            class SubElementDirectoryParser: public IElementParser
            {
            private:
                std::shared_ptr<DirectoryXmlParser> _directoryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDirectoryParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VehicleCatalogLocationXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VehicleCategoryDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCategoryDistributionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement vehicleCategoryDistributionEntries
            */
            class SubElementVehicleCategoryDistributionEntriesParser: public IElementParser
            {
            private:
                std::shared_ptr<VehicleCategoryDistributionEntryXmlParser> _vehicleCategoryDistributionEntryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVehicleCategoryDistributionEntriesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VehicleCategoryDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VehicleCategoryDistributionEntryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCategoryDistributionEntryXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VehicleCategoryDistributionEntryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VehicleComponentImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleComponentXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VehicleComponentXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VehicleLightImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleLightXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VehicleLightXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VehicleRoleDistributionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleRoleDistributionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement vehicleRoleDistributionEntries
            */
            class SubElementVehicleRoleDistributionEntriesParser: public IElementParser
            {
            private:
                std::shared_ptr<VehicleRoleDistributionEntryXmlParser> _vehicleRoleDistributionEntryXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementVehicleRoleDistributionEntriesParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VehicleRoleDistributionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VehicleRoleDistributionEntryImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleRoleDistributionEntryXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VehicleRoleDistributionEntryXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VertexImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VertexXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement position
            */
            class SubElementPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VertexXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a VisibilityActionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VisibilityActionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement sensorReferenceSet
            */
            class SubElementSensorReferenceSetParser: public IElementParser
            {
            private:
                std::shared_ptr<SensorReferenceSetXmlParser> _sensorReferenceSetXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSensorReferenceSetParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            VisibilityActionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a WaypointImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WaypointXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement position
            */
            class SubElementPositionParser: public IElementParser
            {
            private:
                std::shared_ptr<PositionXmlParser> _positionXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPositionParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            WaypointXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a WeatherImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WeatherXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlAllParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };

            /**
            * A parser for subelement sun
            */
            class SubElementSunParser: public IElementParser
            {
            private:
                std::shared_ptr<SunXmlParser> _sunXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementSunParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement fog
            */
            class SubElementFogParser: public IElementParser
            {
            private:
                std::shared_ptr<FogXmlParser> _fogXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementFogParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement precipitation
            */
            class SubElementPrecipitationParser: public IElementParser
            {
            private:
                std::shared_ptr<PrecipitationXmlParser> _precipitationXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementPrecipitationParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement wind
            */
            class SubElementWindParser: public IElementParser
            {
            private:
                std::shared_ptr<WindXmlParser> _windXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementWindParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };

            /**
            * A parser for subelement domeImage
            */
            class SubElementDomeImageParser: public IElementParser
            {
            private:
                std::shared_ptr<DomeImageXmlParser> _domeImageXmlParser;

            public:
                /**
                * Constructor
                */
                SubElementDomeImageParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);

                void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

                int GetMinOccur() override;

                int GetMaxOccur() override;

                bool DoesMatch(std::string& elementName) override;

                std::vector<std::string> GetExpectedTagNames() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            WeatherXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a WindImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WindXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            WindXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Filling a WorldPositionImpl instance from an xml tree.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WorldPositionXmlParser: public XmlComplexTypeParser
        {

        protected:
            std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap() override;
        private:
            /**
            * Parser for all subelements
            */
            class SubElementParser: public XmlSequenceParser
            {
            public:
                /**
                * Constructor
                * @param messageLogger to log messages during parsing
                * @param filename to locate the messages in a file
                * @param parserOptions options for the parser
                */
                SubElementParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
            protected:
                /*
                * Creates a list of parser
                */
                std::vector<std::shared_ptr<IElementParser>> CreateParserList() override;
            };


        public:
            /**
            * Constructor
            * @param messageLogger to log messages during parsing
            * @param filename to locate the messages in a file
            * @param parserOptions options for the parser            */
            WorldPositionXmlParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
        };

    }
}
